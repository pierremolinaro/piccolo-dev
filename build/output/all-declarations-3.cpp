#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//--------------------------------------------------------------------------------------------------
//  Map type @pic_31__38__5F_dataAddressMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap::GGS_pic_31__38__5F_dataAddressMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap::~ GGS_pic_31__38__5F_dataAddressMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap::GGS_pic_31__38__5F_dataAddressMap (const GGS_pic_31__38__5F_dataAddressMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap & GGS_pic_31__38__5F_dataAddressMap::operator = (const GGS_pic_31__38__5F_dataAddressMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap GGS_pic_31__38__5F_dataAddressMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataAddressMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap GGS_pic_31__38__5F_dataAddressMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataAddressMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38__5F_dataAddressMap::getter_hasKey (const GGS_string & inKey
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38__5F_dataAddressMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                  const GGS_uint & inLevel
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38__5F_dataAddressMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38__5F_dataAddressMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_pic_31__38__5F_dataAddressMap::getter_locationForKey (const GGS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_pic_31__38__5F_dataAddressMap::getter_keyList (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38__5F_dataAddressMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_pic_31__38__5F_dataAddressMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::performInsert (const GGS_pic_31__38__5F_dataAddressMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_pic_31__38__5F_dataAddressMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element>
GGS_pic_31__38__5F_dataAddressMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_pic_31__38__5F_dataAddressMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element>>
GGS_pic_31__38__5F_dataAddressMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_pic_31__38__5F_dataAddressMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ GGS_pic_31__38__5F_dataAddressMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_pic_31__38__5F_dataAddressMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mDataAddress = info->mProperty_mDataAddress ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap GGS_pic_31__38__5F_dataAddressMap::class_func_mapWithMapToOverride (const GGS_pic_31__38__5F_dataAddressMap & inMapToOverride
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataAddressMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_pic_31__38__5F_dataAddressMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap GGS_pic_31__38__5F_dataAddressMap::getter_overriddenMap (Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38__5F_dataAddressMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::setter_insertKey (GGS_lstring inLKey,
                                                          GGS_uint inArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38__5F_dataAddressMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' data is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::method_searchKey (GGS_lstring inLKey,
                                                          GGS_uint & outArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element> info ;
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
  }else{
    outArgument0 = info->mProperty_mDataAddress ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38__5F_dataAddressMap::getter_mDataAddressForKey (const GGS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mDataAddress ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::setter_setMDataAddressForKey (GGS_uint inValue,
                                                                      GGS_string inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_pic_31__38__5F_dataAddressMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mDataAddress = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_pic_31__38__5F_dataAddressMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element>> & inArray,
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
    ioString.appendString ("mDataAddress:") ;
    inArray (i COMMA_HERE)->mProperty_mDataAddress.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element>> array = sortedInfoArray () ;
    GGS_pic_31__38__5F_dataAddressMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_pic_31__38__5F_dataAddressMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_pic_31__38__5F_dataAddressMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @pic_31__38__5F_dataAddressMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_pic_31__38__5F_dataAddressMap::DownEnumerator_pic_31__38__5F_dataAddressMap (const GGS_pic_31__38__5F_dataAddressMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element DownEnumerator_pic_31__38__5F_dataAddressMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_pic_31__38__5F_dataAddressMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_pic_31__38__5F_dataAddressMap::current_mDataAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDataAddress ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @pic_31__38__5F_dataAddressMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_pic_31__38__5F_dataAddressMap::UpEnumerator_pic_31__38__5F_dataAddressMap (const GGS_pic_31__38__5F_dataAddressMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element UpEnumerator_pic_31__38__5F_dataAddressMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_pic_31__38__5F_dataAddressMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_pic_31__38__5F_dataAddressMap::current_mDataAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDataAddress ;
}


//--------------------------------------------------------------------------------------------------
//     @pic18_dataAddressMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap ("pic18_dataAddressMap",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38__5F_dataAddressMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38__5F_dataAddressMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38__5F_dataAddressMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap GGS_pic_31__38__5F_dataAddressMap::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataAddressMap result ;
  const GGS_pic_31__38__5F_dataAddressMap * p = (const GGS_pic_31__38__5F_dataAddressMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38__5F_dataAddressMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18_dataAddressMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18SequentialInstruction generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (cPtr_ipic_31__38_SequentialInstruction * inObject,
                                       const GGS_uint constin_inAddress,
                                       const GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                       const GGS_pic_31__38__5F_dataAddressMap constin_inDataMap,
                                       GGS_codeList & out_outCode,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCode.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    inObject->method_generateCode (constin_inAddress, constin_inSymbolTable, constin_inDataMap, out_outCode, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateTerminatorCode (cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                 const GGS_uint constin_inAddress,
                                                 const GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                 const GGS_string constin_inNextBlockLabel,
                                                 GGS_codeList & out_outCode,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCode.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    inObject->method_generateTerminatorCode (constin_inAddress, constin_inSymbolTable, constin_inNextBlockLabel, out_outCode, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                  const GGS_ipic_31__38_AbstractBlockTerminator in_inTerminator,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isEqualToTerminator (in_inTerminator, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @declaredRoutineMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap::GGS_declaredRoutineMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap::~ GGS_declaredRoutineMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap::GGS_declaredRoutineMap (const GGS_declaredRoutineMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap & GGS_declaredRoutineMap::operator = (const GGS_declaredRoutineMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap GGS_declaredRoutineMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_declaredRoutineMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap GGS_declaredRoutineMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_declaredRoutineMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_declaredRoutineMap::getter_hasKey (const GGS_string & inKey
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_declaredRoutineMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                       const GGS_uint & inLevel
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_declaredRoutineMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_declaredRoutineMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_declaredRoutineMap::getter_locationForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_declaredRoutineMap::getter_keyList (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_declaredRoutineMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_declaredRoutineMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::performInsert (const GGS_declaredRoutineMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_declaredRoutineMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element>
GGS_declaredRoutineMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_declaredRoutineMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element>>
GGS_declaredRoutineMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_declaredRoutineMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element_3F_ GGS_declaredRoutineMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_declaredRoutineMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_declaredRoutineMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_declaredRoutineMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mRequiredBank = info->mProperty_mRequiredBank ;
      element.mProperty_mReturnedBank = info->mProperty_mReturnedBank ;
      element.mProperty_mPreservesBank = info->mProperty_mPreservesBank ;
      element.mProperty_mIsNoReturn = info->mProperty_mIsNoReturn ;
      element.mProperty_mInstructionList = info->mProperty_mInstructionList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap GGS_declaredRoutineMap::class_func_mapWithMapToOverride (const GGS_declaredRoutineMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GGS_declaredRoutineMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_declaredRoutineMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap GGS_declaredRoutineMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_declaredRoutineMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::setter_insertKey (GGS_lstring inLKey,
                                               GGS_luint inArgument0,
                                               GGS_luint inArgument1,
                                               GGS_bool inArgument2,
                                               GGS_bool inArgument3,
                                               GGS_pic_31__38_InstructionList inArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  const GGS_declaredRoutineMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4) ;
  const char * kInsertErrorMessage = "the '%K' routine is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::method_searchKey (GGS_lstring inLKey,
                                               GGS_luint & outArgument0,
                                               GGS_luint & outArgument1,
                                               GGS_bool & outArgument2,
                                               GGS_bool & outArgument3,
                                               GGS_pic_31__38_InstructionList & outArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element> info ;
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
    outArgument4.drop () ;
  }else{
    outArgument0 = info->mProperty_mRequiredBank ;
    outArgument1 = info->mProperty_mReturnedBank ;
    outArgument2 = info->mProperty_mPreservesBank ;
    outArgument3 = info->mProperty_mIsNoReturn ;
    outArgument4 = info->mProperty_mInstructionList ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_luint GGS_declaredRoutineMap::getter_mRequiredBankForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_luint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element> info = infoForKey (key) ;
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

GGS_luint GGS_declaredRoutineMap::getter_mReturnedBankForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_luint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element> info = infoForKey (key) ;
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

GGS_bool GGS_declaredRoutineMap::getter_mPreservesBankForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element> info = infoForKey (key) ;
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

GGS_bool GGS_declaredRoutineMap::getter_mIsNoReturnForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element> info = infoForKey (key) ;
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

GGS_pic_31__38_InstructionList GGS_declaredRoutineMap::getter_mInstructionListForKey (const GGS_string & inKey,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_InstructionList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element> info = infoForKey (key) ;
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

void GGS_declaredRoutineMap::setter_setMRequiredBankForKey (GGS_luint inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_declaredRoutineMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_declaredRoutineMap::setter_setMReturnedBankForKey (GGS_luint inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_declaredRoutineMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_declaredRoutineMap::setter_setMPreservesBankForKey (GGS_bool inValue,
                                                             GGS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_declaredRoutineMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_declaredRoutineMap::setter_setMIsNoReturnForKey (GGS_bool inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_declaredRoutineMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_declaredRoutineMap::setter_setMInstructionListForKey (GGS_pic_31__38_InstructionList inValue,
                                                               GGS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_declaredRoutineMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

static void GGS_declaredRoutineMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element>> & inArray,
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
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIsNoReturn:") ;
    inArray (i COMMA_HERE)->mProperty_mIsNoReturn.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mInstructionList:") ;
    inArray (i COMMA_HERE)->mProperty_mInstructionList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element>> array = sortedInfoArray () ;
    GGS_declaredRoutineMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_declaredRoutineMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_declaredRoutineMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @declaredRoutineMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_declaredRoutineMap::DownEnumerator_declaredRoutineMap (const GGS_declaredRoutineMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element DownEnumerator_declaredRoutineMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_declaredRoutineMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_declaredRoutineMap::current_mRequiredBank (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRequiredBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_declaredRoutineMap::current_mReturnedBank (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReturnedBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_declaredRoutineMap::current_mPreservesBank (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPreservesBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_declaredRoutineMap::current_mIsNoReturn (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList DownEnumerator_declaredRoutineMap::current_mInstructionList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @declaredRoutineMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_declaredRoutineMap::UpEnumerator_declaredRoutineMap (const GGS_declaredRoutineMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element UpEnumerator_declaredRoutineMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_declaredRoutineMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_declaredRoutineMap::current_mRequiredBank (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRequiredBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_declaredRoutineMap::current_mReturnedBank (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReturnedBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_declaredRoutineMap::current_mPreservesBank (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPreservesBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_declaredRoutineMap::current_mIsNoReturn (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList UpEnumerator_declaredRoutineMap::current_mInstructionList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInstructionList ;
}


//--------------------------------------------------------------------------------------------------
//     @declaredRoutineMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declaredRoutineMap ("declaredRoutineMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_declaredRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredRoutineMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declaredRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declaredRoutineMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap GGS_declaredRoutineMap::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_declaredRoutineMap result ;
  const GGS_declaredRoutineMap * p = (const GGS_declaredRoutineMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declaredRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declaredRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@pic_31__38_InstructionList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_pic_31__38_InstructionList : public cCollectionElement {
  public: GGS_pic_31__38_InstructionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_pic_31__38_InstructionList (const GGS_pic_31__38_PiccoloInstruction & in_mInstruction
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_pic_31__38_InstructionList (const GGS_pic_31__38_InstructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_InstructionList::cCollectionElement_pic_31__38_InstructionList (const GGS_pic_31__38_PiccoloInstruction & in_mInstruction
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_InstructionList::cCollectionElement_pic_31__38_InstructionList (const GGS_pic_31__38_InstructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_pic_31__38_InstructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_pic_31__38_InstructionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_pic_31__38_InstructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @pic_31__38_InstructionList
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList::GGS_pic_31__38_InstructionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList::GGS_pic_31__38_InstructionList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_pic_31__38_InstructionList * p = (cCollectionElement_pic_31__38_InstructionList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InstructionList) ;
    const GGS_pic_31__38_InstructionList_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InstructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GGS_pic_31__38_PiccoloInstruction & in_mInstruction
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_InstructionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_pic_31__38_InstructionList (in_mInstruction COMMA_THERE)) ;
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

GGS_pic_31__38_InstructionList GGS_pic_31__38_InstructionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_PiccoloInstruction::cPtr_pic_31__38_PiccoloInstruction (const GGS_location & in_mInstructionLocation,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
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

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_2E_weak & GGS_baseline_5F_intermediate_5F_instruction_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_instruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_2E_weak (const GGS_baseline_5F_intermediate_5F_instruction & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_2E_weak GGS_baseline_5F_intermediate_5F_instruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction GGS_baseline_5F_intermediate_5F_instruction_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_instruction result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_instruction * p = (cPtr_baseline_5F_intermediate_5F_instruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_instruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction GGS_baseline_5F_intermediate_5F_instruction_2E_weak::bang_baseline_5F_intermediate_5F_instruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction) ;
      result = GGS_baseline_5F_intermediate_5F_instruction ((cPtr_baseline_5F_intermediate_5F_instruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_2E_weak ("baseline_intermediate_instruction.weak",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_2E_weak GGS_baseline_5F_intermediate_5F_instruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_instruction_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_instruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@baseline_5F_intermediate_5F_instructionList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_baseline_5F_intermediate_5F_instructionList : public cCollectionElement {
  public: GGS_baseline_5F_intermediate_5F_instructionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_baseline_5F_intermediate_5F_instructionList (const GGS_baseline_5F_intermediate_5F_instruction & in_mInstruction
                                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_baseline_5F_intermediate_5F_instructionList (const GGS_baseline_5F_intermediate_5F_instructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_baseline_5F_intermediate_5F_instructionList::cCollectionElement_baseline_5F_intermediate_5F_instructionList (const GGS_baseline_5F_intermediate_5F_instruction & in_mInstruction
                                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_baseline_5F_intermediate_5F_instructionList::cCollectionElement_baseline_5F_intermediate_5F_instructionList (const GGS_baseline_5F_intermediate_5F_instructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_baseline_5F_intermediate_5F_instructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_baseline_5F_intermediate_5F_instructionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_baseline_5F_intermediate_5F_instructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @baseline_5F_intermediate_5F_instructionList
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList::GGS_baseline_5F_intermediate_5F_instructionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList::GGS_baseline_5F_intermediate_5F_instructionList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
    const GGS_baseline_5F_intermediate_5F_instructionList_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                 const GGS_baseline_5F_intermediate_5F_instruction & in_mInstruction
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_instructionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_baseline_5F_intermediate_5F_instructionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::description (String & ioString,
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

GGS_baseline_5F_intermediate_5F_instructionList GGS_baseline_5F_intermediate_5F_instructionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instructionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList GGS_baseline_5F_intermediate_5F_instructionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instructionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::plusPlusAssignOperation (const GGS_baseline_5F_intermediate_5F_instructionList_2E_element & inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList GGS_baseline_5F_intermediate_5F_instructionList::class_func_listWithValue (const GGS_baseline_5F_intermediate_5F_instruction & inOperand0
                                                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instructionList_2E_element element (inOperand0) ;
  GGS_baseline_5F_intermediate_5F_instructionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::addAssignOperation (const GGS_baseline_5F_intermediate_5F_instruction & inOperand0
                                                                          COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instructionList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::setter_append (const GGS_baseline_5F_intermediate_5F_instruction inOperand0,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instructionList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::setter_insertAtIndex (const GGS_baseline_5F_intermediate_5F_instruction inOperand0,
                                                                            const GGS_uint inInsertionIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instructionList_2E_element newElement (inOperand0) ;
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

void GGS_baseline_5F_intermediate_5F_instructionList::setter_removeAtIndex (GGS_baseline_5F_intermediate_5F_instruction & outOperand0,
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

void GGS_baseline_5F_intermediate_5F_instructionList::setter_popFirst (GGS_baseline_5F_intermediate_5F_instruction & outOperand0,
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

void GGS_baseline_5F_intermediate_5F_instructionList::setter_popLast (GGS_baseline_5F_intermediate_5F_instruction & outOperand0,
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

void GGS_baseline_5F_intermediate_5F_instructionList::method_first (GGS_baseline_5F_intermediate_5F_instruction & outOperand0,
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

void GGS_baseline_5F_intermediate_5F_instructionList::method_last (GGS_baseline_5F_intermediate_5F_instruction & outOperand0,
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

GGS_baseline_5F_intermediate_5F_instructionList GGS_baseline_5F_intermediate_5F_instructionList::add_operation (const GGS_baseline_5F_intermediate_5F_instructionList & inOperand,
                                                                                                                Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instructionList result ;
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

GGS_baseline_5F_intermediate_5F_instructionList GGS_baseline_5F_intermediate_5F_instructionList::subList (const int32_t inStart,
                                                                                                          const int32_t inLength,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instructionList result ;
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

GGS_baseline_5F_intermediate_5F_instructionList GGS_baseline_5F_intermediate_5F_instructionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instructionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList GGS_baseline_5F_intermediate_5F_instructionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList GGS_baseline_5F_intermediate_5F_instructionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::plusAssignOperation (const GGS_baseline_5F_intermediate_5F_instructionList inList,
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

void GGS_baseline_5F_intermediate_5F_instructionList::setter_setMInstructionAtIndex (GGS_baseline_5F_intermediate_5F_instruction inOperand,
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
  
GGS_baseline_5F_intermediate_5F_instruction GGS_baseline_5F_intermediate_5F_instructionList::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instruction result ;
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
// Down Enumerator for @baseline_5F_intermediate_5F_instructionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_baseline_5F_intermediate_5F_instructionList::DownEnumerator_baseline_5F_intermediate_5F_instructionList (const GGS_baseline_5F_intermediate_5F_instructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList_2E_element DownEnumerator_baseline_5F_intermediate_5F_instructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction DownEnumerator_baseline_5F_intermediate_5F_instructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @baseline_5F_intermediate_5F_instructionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_baseline_5F_intermediate_5F_instructionList::UpEnumerator_baseline_5F_intermediate_5F_instructionList (const GGS_baseline_5F_intermediate_5F_instructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList_2E_element UpEnumerator_baseline_5F_intermediate_5F_instructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction UpEnumerator_baseline_5F_intermediate_5F_instructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instructionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList ("baseline_intermediate_instructionList",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList GGS_baseline_5F_intermediate_5F_instructionList::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instructionList result ;
  const GGS_baseline_5F_intermediate_5F_instructionList * p = (const GGS_baseline_5F_intermediate_5F_instructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_NULL reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_NULL::objectCompare (const GGS_baseline_5F_intermediate_5F_NULL & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_NULL::GGS_baseline_5F_intermediate_5F_NULL (void) :
GGS_baseline_5F_intermediate_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL GGS_baseline_5F_intermediate_5F_NULL::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_NULL * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_NULL (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_NULL_init (inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_NULL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_NULL::
baseline_5F_intermediate_5F_NULL_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL::GGS_baseline_5F_intermediate_5F_NULL (const cPtr_baseline_5F_intermediate_5F_NULL * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_NULL) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL GGS_baseline_5F_intermediate_5F_NULL::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_NULL result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_NULL (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_NULL class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_NULL::cPtr_baseline_5F_intermediate_5F_NULL (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_NULL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL ;
}

void cPtr_baseline_5F_intermediate_5F_NULL::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@baseline_intermediate_NULL]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_NULL::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_NULL (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_NULL::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_NULL generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL ("baseline_intermediate_NULL",
                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_NULL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_NULL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_NULL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL GGS_baseline_5F_intermediate_5F_NULL::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_NULL result ;
  const GGS_baseline_5F_intermediate_5F_NULL * p = (const GGS_baseline_5F_intermediate_5F_NULL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_NULL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_NULL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_NULL_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_NULL_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_NULL_2E_weak::GGS_baseline_5F_intermediate_5F_NULL_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL_2E_weak & GGS_baseline_5F_intermediate_5F_NULL_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_NULL & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL_2E_weak::GGS_baseline_5F_intermediate_5F_NULL_2E_weak (const GGS_baseline_5F_intermediate_5F_NULL & inSource) :
GGS_baseline_5F_intermediate_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL_2E_weak GGS_baseline_5F_intermediate_5F_NULL_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_NULL_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL GGS_baseline_5F_intermediate_5F_NULL_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_NULL result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_NULL * p = (cPtr_baseline_5F_intermediate_5F_NULL *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_NULL (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL GGS_baseline_5F_intermediate_5F_NULL_2E_weak::bang_baseline_5F_intermediate_5F_NULL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_NULL result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_NULL) ;
      result = GGS_baseline_5F_intermediate_5F_NULL ((cPtr_baseline_5F_intermediate_5F_NULL *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_NULL.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL_2E_weak ("baseline_intermediate_NULL.weak",
                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_NULL_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_NULL_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_NULL_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL_2E_weak GGS_baseline_5F_intermediate_5F_NULL_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_NULL_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_NULL_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_NULL_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_NULL_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_NULL.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_pseudo reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo::GGS_baseline_5F_intermediate_5F_pseudo (void) :
GGS_baseline_5F_intermediate_5F_instruction () {
}


void cPtr_baseline_5F_intermediate_5F_pseudo::
baseline_5F_intermediate_5F_pseudo_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo::GGS_baseline_5F_intermediate_5F_pseudo (const cPtr_baseline_5F_intermediate_5F_pseudo * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_pseudo class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo::cPtr_baseline_5F_intermediate_5F_pseudo (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_pseudo::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_pseudo generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo ("baseline_intermediate_pseudo",
                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_pseudo::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo GGS_baseline_5F_intermediate_5F_pseudo::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo result ;
  const GGS_baseline_5F_intermediate_5F_pseudo * p = (const GGS_baseline_5F_intermediate_5F_pseudo *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_2E_weak & GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_pseudo & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_2E_weak (const GGS_baseline_5F_intermediate_5F_pseudo & inSource) :
GGS_baseline_5F_intermediate_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_pseudo result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_pseudo * p = (cPtr_baseline_5F_intermediate_5F_pseudo *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_pseudo (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::bang_baseline_5F_intermediate_5F_pseudo_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_pseudo result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_pseudo) ;
      result = GGS_baseline_5F_intermediate_5F_pseudo ((cPtr_baseline_5F_intermediate_5F_pseudo *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_pseudo.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2E_weak ("baseline_intermediate_pseudo.weak",
                                                                                               & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_pseudo_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_pseudo_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_pseudo_5F_PAGE reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (void) :
GGS_baseline_5F_intermediate_5F_pseudo () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::
init_21_ (const GGS_uint & in_mPage,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_pseudo_5F_PAGE_init_21_ (in_mPage, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::
baseline_5F_intermediate_5F_pseudo_5F_PAGE_init_21_ (const GGS_uint & in_mPage,
                                                     Compiler * /* inCompiler */) {
  mProperty_mPage = in_mPage ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_pseudo (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::class_func_new (const GGS_uint & in_mPage,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (in_mPage,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::readProperty_mPage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
    return p->mProperty_mPage ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_pseudo_PAGE class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (inCompiler COMMA_THERE),
mProperty_mPage () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (const GGS_uint & in_mPage,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (inCompiler COMMA_THERE),
mProperty_mPage () {
  mProperty_mPage = in_mPage ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ;
}

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_pseudo_PAGE:") ;
  mProperty_mPage.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (mProperty_mPage, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_pseudo::printNonNullClassInstanceProperties () ;
    mProperty_mPage.printNonNullClassInstanceProperties ("mPage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_pseudo_PAGE generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ("baseline_intermediate_pseudo_PAGE",
                                                                                               & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE result ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE * p = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_PAGE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_pseudo_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak & GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak (const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE & inSource) :
GGS_baseline_5F_intermediate_5F_pseudo_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::bang_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
      result = GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_pseudo_PAGE.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak ("baseline_intermediate_pseudo_PAGE.weak",
                                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_PAGE.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_pseudo_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak & GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inSource) :
GGS_baseline_5F_intermediate_5F_pseudo_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::bang_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
      result = GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_pseudo_LABEL.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak ("baseline_intermediate_pseudo_LABEL.weak",
                                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_LABEL.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_pseudo_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak & GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak (const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inSource) :
GGS_baseline_5F_intermediate_5F_pseudo_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::bang_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
      result = GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_pseudo_BEGIN_ROUTINE.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak ("baseline_intermediate_pseudo_BEGIN_ROUTINE.weak",
                                                                                                                   & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_BEGIN_ROUTINE.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_pseudo_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak & GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak (const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inSource) :
GGS_baseline_5F_intermediate_5F_pseudo_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::bang_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
      result = GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_pseudo_END_ROUTINE.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak ("baseline_intermediate_pseudo_END_ROUTINE.weak",
                                                                                                                 & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_END_ROUTINE.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_actualInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_actualInstruction::objectCompare (const GGS_baseline_5F_intermediate_5F_actualInstruction & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_actualInstruction::GGS_baseline_5F_intermediate_5F_actualInstruction (void) :
GGS_baseline_5F_intermediate_5F_instruction () {
}


void cPtr_baseline_5F_intermediate_5F_actualInstruction::
baseline_5F_intermediate_5F_actualInstruction_init_21_ (const GGS_location & in_mInstructionLocation,
                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_actualInstruction::GGS_baseline_5F_intermediate_5F_actualInstruction (const cPtr_baseline_5F_intermediate_5F_actualInstruction * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_actualInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_baseline_5F_intermediate_5F_actualInstruction::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_actualInstruction * p = (cPtr_baseline_5F_intermediate_5F_actualInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_actualInstruction) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_actualInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_actualInstruction::cPtr_baseline_5F_intermediate_5F_actualInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_actualInstruction::cPtr_baseline_5F_intermediate_5F_actualInstruction (const GGS_location & in_mInstructionLocation,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_actualInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction ("baseline_intermediate_actualInstruction",
                                                                                                  & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_actualInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_actualInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_actualInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_actualInstruction GGS_baseline_5F_intermediate_5F_actualInstruction::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_actualInstruction result ;
  const GGS_baseline_5F_intermediate_5F_actualInstruction * p = (const GGS_baseline_5F_intermediate_5F_actualInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_actualInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_actualInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak & GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_actualInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (const GGS_baseline_5F_intermediate_5F_actualInstruction & inSource) :
GGS_baseline_5F_intermediate_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_actualInstruction GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_actualInstruction result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_actualInstruction * p = (cPtr_baseline_5F_intermediate_5F_actualInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_actualInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_actualInstruction GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::bang_baseline_5F_intermediate_5F_actualInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_actualInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_actualInstruction) ;
      result = GGS_baseline_5F_intermediate_5F_actualInstruction ((cPtr_baseline_5F_intermediate_5F_actualInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_actualInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak ("baseline_intermediate_actualInstruction.weak",
                                                                                                          & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_actualInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction_5F_FD reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_FD::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_FD & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_FD::GGS_baseline_5F_intermediate_5F_instruction_5F_FD (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD GGS_baseline_5F_intermediate_5F_instruction_5F_FD::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                      const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GGS_bool & in_m_5F_W_5F_isDestination,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_instruction_5F_FD_init_21__21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::
baseline_5F_intermediate_5F_instruction_5F_FD_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                                    const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                    const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD::GGS_baseline_5F_intermediate_5F_instruction_5F_FD (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD GGS_baseline_5F_intermediate_5F_instruction_5F_FD::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                     const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                                                                                     const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                     const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FD result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, in_m_5F_W_5F_isDestination,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_intermediate_5F_instruction_5F_FD::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_intermediate_5F_instruction_5F_FD::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_intermediate_5F_instruction_5F_FD::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction_FD class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription (),
mProperty_m_5F_W_5F_isDestination () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (const GGS_location & in_mInstructionLocation,
                                                                                                        const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                                                                        const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                        const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription (),
mProperty_m_5F_W_5F_isDestination () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_instruction_FD:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mRegisterDescription, mProperty_m_5F_W_5F_isDestination, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction_FD generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD ("baseline_intermediate_instruction_FD",
                                                                                                  & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_FD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_FD::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_FD (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD GGS_baseline_5F_intermediate_5F_instruction_5F_FD::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FD result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_FD *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_FD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_FD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak & GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_instruction_5F_FD & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak (const GGS_baseline_5F_intermediate_5F_instruction_5F_FD & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FD result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_FD (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::bang_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FD result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_FD ((cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction_FD.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak ("baseline_intermediate_instruction_FD.weak",
                                                                                                          & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_FD.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction_5F_F reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_F::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_F & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_F::GGS_baseline_5F_intermediate_5F_instruction_5F_F (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F GGS_baseline_5F_intermediate_5F_instruction_5F_F::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                  const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_instruction_5F_F * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_F (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_instruction_5F_F_init_21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_F::
baseline_5F_intermediate_5F_instruction_5F_F_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                               const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                               const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F::GGS_baseline_5F_intermediate_5F_instruction_5F_F (const cPtr_baseline_5F_intermediate_5F_instruction_5F_F * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F GGS_baseline_5F_intermediate_5F_instruction_5F_F::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                   const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                                                                                   const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_F result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_F (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_F_5F_instruction_5F_base_5F_code GGS_baseline_5F_intermediate_5F_instruction_5F_F::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_F_5F_instruction_5F_base_5F_code () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_F * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_intermediate_5F_instruction_5F_F::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_F * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction_F class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_F::cPtr_baseline_5F_intermediate_5F_instruction_5F_F (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_F::cPtr_baseline_5F_intermediate_5F_instruction_5F_F (const GGS_location & in_mInstructionLocation,
                                                                                                      const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                                                                      const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_F::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_F::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_instruction_F:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_F::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_F (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mRegisterDescription, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_instruction_5F_F::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction_F generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F ("baseline_intermediate_instruction_F",
                                                                                                 & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_F::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_F::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_F (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F GGS_baseline_5F_intermediate_5F_instruction_5F_F::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_F result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_F *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_F *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_F", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak & GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_instruction_5F_F & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak (const GGS_baseline_5F_intermediate_5F_instruction_5F_F & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_F result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_F * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_F (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::bang_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_F result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_F ((cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction_F.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak ("baseline_intermediate_instruction_F.weak",
                                                                                                         & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_F.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction_5F_FB reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_FB::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_FB & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_FB::GGS_baseline_5F_intermediate_5F_instruction_5F_FB (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB GGS_baseline_5F_intermediate_5F_instruction_5F_FB::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                      const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GGS_uint & in_mBitNumber,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_instruction_5F_FB_init_21__21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, in_mBitNumber, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::
baseline_5F_intermediate_5F_instruction_5F_FB_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                                    const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                    const GGS_uint & in_mBitNumber,
                                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB::GGS_baseline_5F_intermediate_5F_instruction_5F_FB (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB GGS_baseline_5F_intermediate_5F_instruction_5F_FB::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                     const GGS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                                                                                     const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                     const GGS_uint & in_mBitNumber,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FB result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, in_mBitNumber,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bit_5F_oriented_5F_op GGS_baseline_5F_intermediate_5F_instruction_5F_FB::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_bit_5F_oriented_5F_op () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_intermediate_5F_instruction_5F_FB::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_instruction_5F_FB::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction_FB class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (const GGS_location & in_mInstructionLocation,
                                                                                                        const GGS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                                                                        const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                        const GGS_uint & in_mBitNumber,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_instruction_FB:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mRegisterDescription, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction_FB generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB ("baseline_intermediate_instruction_FB",
                                                                                                  & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_FB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_FB::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_FB (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB GGS_baseline_5F_intermediate_5F_instruction_5F_FB::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FB result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_FB *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_FB *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_FB", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak & GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_instruction_5F_FB & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak (const GGS_baseline_5F_intermediate_5F_instruction_5F_FB & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FB result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_FB (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::bang_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FB result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_FB ((cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction_FB.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak ("baseline_intermediate_instruction_FB.weak",
                                                                                                          & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_FB.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction_5F_BitTestSkip reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_bool & in_mSkipIfSet,
                      const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GGS_uint & in_mBitNumber,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_init_21__21__21__21_ (in_mInstructionLocation, in_mSkipIfSet, in_mRegisterDescription, in_mBitNumber, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::
baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
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

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                                       const GGS_bool & in_mSkipIfSet,
                                                                                                                                       const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                                       const GGS_uint & in_mBitNumber,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (in_mInstructionLocation, in_mSkipIfSet, in_mRegisterDescription, in_mBitNumber,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::readProperty_mSkipIfSet (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mSkipIfSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction_BitTestSkip class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (const GGS_location & in_mInstructionLocation,
                                                                                                                          const GGS_bool & in_mSkipIfSet,
                                                                                                                          const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                          const GGS_uint & in_mBitNumber,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_instruction_BitTestSkip:") ;
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

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (mProperty_mInstructionLocation, mProperty_mSkipIfSet, mProperty_mRegisterDescription, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mSkipIfSet.printNonNullClassInstanceProperties ("mSkipIfSet") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction_BitTestSkip generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ("baseline_intermediate_instruction_BitTestSkip",
                                                                                                           & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_BitTestSkip", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak & GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::bang_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ((cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction_BitTestSkip.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak ("baseline_intermediate_instruction_BitTestSkip.weak",
                                                                                                                   & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_BitTestSkip.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_GOTO_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::GGS_baseline_5F_intermediate_5F_GOTO_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO_2E_weak & GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_GOTO & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::GGS_baseline_5F_intermediate_5F_GOTO_2E_weak (const GGS_baseline_5F_intermediate_5F_GOTO & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO_2E_weak GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_GOTO_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_GOTO result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_GOTO * p = (cPtr_baseline_5F_intermediate_5F_GOTO *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_GOTO (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::bang_baseline_5F_intermediate_5F_GOTO_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_GOTO result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_GOTO) ;
      result = GGS_baseline_5F_intermediate_5F_GOTO ((cPtr_baseline_5F_intermediate_5F_GOTO *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_GOTO.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO_2E_weak ("baseline_intermediate_GOTO.weak",
                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_GOTO_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO_2E_weak GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_GOTO_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_GOTO_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_GOTO_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_GOTO_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_GOTO.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_JUMP_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::GGS_baseline_5F_intermediate_5F_JUMP_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP_2E_weak & GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_JUMP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::GGS_baseline_5F_intermediate_5F_JUMP_2E_weak (const GGS_baseline_5F_intermediate_5F_JUMP & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP_2E_weak GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_JUMP_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_JUMP result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_JUMP (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::bang_baseline_5F_intermediate_5F_JUMP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_JUMP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_JUMP) ;
      result = GGS_baseline_5F_intermediate_5F_JUMP ((cPtr_baseline_5F_intermediate_5F_JUMP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_JUMP.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP_2E_weak ("baseline_intermediate_JUMP.weak",
                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_JUMP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP_2E_weak GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_JUMP_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_JUMP_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_JUMP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_JUMP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_JUMP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_CALL_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_CALL_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_CALL_2E_weak::GGS_baseline_5F_intermediate_5F_CALL_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL_2E_weak & GGS_baseline_5F_intermediate_5F_CALL_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_CALL & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL_2E_weak::GGS_baseline_5F_intermediate_5F_CALL_2E_weak (const GGS_baseline_5F_intermediate_5F_CALL & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL_2E_weak GGS_baseline_5F_intermediate_5F_CALL_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_CALL_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL GGS_baseline_5F_intermediate_5F_CALL_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_CALL result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_CALL * p = (cPtr_baseline_5F_intermediate_5F_CALL *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_CALL (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL GGS_baseline_5F_intermediate_5F_CALL_2E_weak::bang_baseline_5F_intermediate_5F_CALL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_CALL result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_CALL) ;
      result = GGS_baseline_5F_intermediate_5F_CALL ((cPtr_baseline_5F_intermediate_5F_CALL *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_CALL.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL_2E_weak ("baseline_intermediate_CALL.weak",
                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_CALL_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_CALL_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_CALL_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL_2E_weak GGS_baseline_5F_intermediate_5F_CALL_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_CALL_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_CALL_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_CALL_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_CALL_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_CALL.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_JSR_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_JSR_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_JSR_2E_weak::GGS_baseline_5F_intermediate_5F_JSR_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR_2E_weak & GGS_baseline_5F_intermediate_5F_JSR_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_JSR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR_2E_weak::GGS_baseline_5F_intermediate_5F_JSR_2E_weak (const GGS_baseline_5F_intermediate_5F_JSR & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR_2E_weak GGS_baseline_5F_intermediate_5F_JSR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_JSR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR GGS_baseline_5F_intermediate_5F_JSR_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_JSR result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_JSR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR GGS_baseline_5F_intermediate_5F_JSR_2E_weak::bang_baseline_5F_intermediate_5F_JSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_JSR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_JSR) ;
      result = GGS_baseline_5F_intermediate_5F_JSR ((cPtr_baseline_5F_intermediate_5F_JSR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_JSR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR_2E_weak ("baseline_intermediate_JSR.weak",
                                                                                            & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_JSR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_JSR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_JSR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR_2E_weak GGS_baseline_5F_intermediate_5F_JSR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_JSR_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_JSR_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_JSR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_JSR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_JSR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_WO_5F_OPERAND reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::objectCompare (const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_WO_5F_OPERAND_init_21__21_ (in_mInstructionLocation, in_mInstruction, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::
baseline_5F_intermediate_5F_WO_5F_OPERAND_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                        const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND (const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                             const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (in_mInstructionLocation, in_mInstruction,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_WO_5F_OPERAND_5F_group GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_WO_5F_OPERAND_5F_group () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * p = (cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_WO_OPERAND class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (const GGS_location & in_mInstructionLocation,
                                                                                                const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND ;
}

void cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_WO_OPERAND:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (mProperty_mInstructionLocation, mProperty_mInstruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_WO_OPERAND generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND ("baseline_intermediate_WO_OPERAND",
                                                                                              & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND result ;
  const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND * p = (const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_WO_OPERAND", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak & GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak (const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * p = (cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::bang_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
      result = GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND ((cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_WO_OPERAND.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak ("baseline_intermediate_WO_OPERAND.weak",
                                                                                                      & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_WO_OPERAND.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_TRIS_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::GGS_baseline_5F_intermediate_5F_TRIS_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_TRIS_2E_weak & GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_TRIS & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::GGS_baseline_5F_intermediate_5F_TRIS_2E_weak (const GGS_baseline_5F_intermediate_5F_TRIS & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_TRIS_2E_weak GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_TRIS_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_TRIS GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_TRIS result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_TRIS * p = (cPtr_baseline_5F_intermediate_5F_TRIS *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_TRIS (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_TRIS GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::bang_baseline_5F_intermediate_5F_TRIS_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_TRIS result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_TRIS) ;
      result = GGS_baseline_5F_intermediate_5F_TRIS ((cPtr_baseline_5F_intermediate_5F_TRIS *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_TRIS.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS_2E_weak ("baseline_intermediate_TRIS.weak",
                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_TRIS_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_TRIS_2E_weak GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_TRIS_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_TRIS_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_TRIS_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_TRIS_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_TRIS.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                  const GGS_uint & in_mLiteralValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_instruction_5F_literalOperation_init_21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mLiteralValue, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::
baseline_5F_intermediate_5F_instruction_5F_literalOperation_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                              const GGS_uint & in_mLiteralValue,
                                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mLiteralValue = in_mLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                                                 const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                                                                                                 const GGS_uint & in_mLiteralValue,
                                                                                                                                                 Compiler * inCompiler
                                                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (in_mInstructionLocation, in_mInstruction, in_mLiteralValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_literal_5F_instruction_5F_opcode GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_literal_5F_instruction_5F_opcode () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::readProperty_mLiteralValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mLiteralValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mLiteralValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (const GGS_location & in_mInstructionLocation,
                                                                                                                                    const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                                                                                    const GGS_uint & in_mLiteralValue,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mLiteralValue () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mLiteralValue = in_mLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::description (String & ioString,
                                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_instruction_literalOperation:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mLiteralValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
    mProperty_mLiteralValue.printNonNullClassInstanceProperties ("mLiteralValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction_literalOperation generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ("baseline_intermediate_instruction_literalOperation",
                                                                                                                & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::extractObject (const GGS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::bang_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ((cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction_literalOperation.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak ("baseline_intermediate_instruction_literalOperation.weak",
                                                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                                Compiler * inCompiler
                                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_literalOperation.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP::GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_luint & in_mOccurrenceFactor,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_instruction_5F_MNOP_init_21__21_ (in_mInstructionLocation, in_mOccurrenceFactor, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::
baseline_5F_intermediate_5F_instruction_5F_MNOP_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                              const GGS_luint & in_mOccurrenceFactor,
                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP::GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP (const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                         const GGS_luint & in_mOccurrenceFactor,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (in_mInstructionLocation, in_mOccurrenceFactor,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP::readProperty_mOccurrenceFactor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
    return p->mProperty_mOccurrenceFactor ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction_MNOP class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (const GGS_location & in_mInstructionLocation,
                                                                                                            const GGS_luint & in_mOccurrenceFactor,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_instruction_MNOP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (mProperty_mInstructionLocation, mProperty_mOccurrenceFactor, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOccurrenceFactor.printNonNullClassInstanceProperties ("mOccurrenceFactor") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction_MNOP generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP ("baseline_intermediate_instruction_MNOP",
                                                                                                    & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_MNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak & GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::bang_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP ((cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction_MNOP.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak ("baseline_intermediate_instruction_MNOP.weak",
                                                                                                            & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_MNOP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_incDecRegisterInCondition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::objectCompare (const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::
init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                              const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                              const GGS_string & in_mTargetLabel,
                              const GGS_bool & in_mIncrement,
                              const GGS_bool & in_m_5F_W_5F_isDestination,
                              const GGS_bool & in_mBranchIfZero,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_incDecRegisterInCondition_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mRegisterDescription, in_mTargetLabel, in_mIncrement, in_m_5F_W_5F_isDestination, in_mBranchIfZero, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::
baseline_5F_intermediate_5F_incDecRegisterInCondition_init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                                    const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                    const GGS_string & in_mTargetLabel,
                                                                                    const GGS_bool & in_mIncrement,
                                                                                    const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                    const GGS_bool & in_mBranchIfZero,
                                                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
  mProperty_mBranchIfZero = in_mBranchIfZero ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                                     const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                                     const GGS_string & in_mTargetLabel,
                                                                                                                                     const GGS_bool & in_mIncrement,
                                                                                                                                     const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                                                                     const GGS_bool & in_mBranchIfZero,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (in_mInstructionLocation, in_mRegisterDescription, in_mTargetLabel, in_mIncrement, in_m_5F_W_5F_isDestination, in_mBranchIfZero,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::readProperty_mIncrement (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    return p->mProperty_mIncrement ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::readProperty_mBranchIfZero (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    return p->mProperty_mBranchIfZero ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_incDecRegisterInCondition class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mRegisterDescription (),
mProperty_mTargetLabel (),
mProperty_mIncrement (),
mProperty_m_5F_W_5F_isDestination (),
mProperty_mBranchIfZero () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (const GGS_location & in_mInstructionLocation,
                                                                                                                        const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                        const GGS_string & in_mTargetLabel,
                                                                                                                        const GGS_bool & in_mIncrement,
                                                                                                                        const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                                                        const GGS_bool & in_mBranchIfZero,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mRegisterDescription (),
mProperty_mTargetLabel (),
mProperty_mIncrement (),
mProperty_m_5F_W_5F_isDestination (),
mProperty_mBranchIfZero () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
  mProperty_mBranchIfZero = in_mBranchIfZero ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition ;
}

void cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_incDecRegisterInCondition:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBranchIfZero.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (mProperty_mInstructionLocation, mProperty_mRegisterDescription, mProperty_mTargetLabel, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination, mProperty_mBranchIfZero, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
    mProperty_mIncrement.printNonNullClassInstanceProperties ("mIncrement") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
    mProperty_mBranchIfZero.printNonNullClassInstanceProperties ("mBranchIfZero") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_incDecRegisterInCondition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition ("baseline_intermediate_incDecRegisterInCondition",
                                                                                                          & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition result ;
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_incDecRegisterInCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak & GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::bang_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
      result = GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition ((cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_incDecRegisterInCondition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak ("baseline_intermediate_incDecRegisterInCondition.weak",
                                                                                                                  & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_incDecRegisterInCondition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_intermediate_instruction generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateAssemblyCode (cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                               const GGS_baseline_5F_intermediate_5F_registerExpression constin_inSTATUSregister,
                                               const GGS_bitSliceTable constin_inStatusRegisterBitSliceTable,
                                               GGS_baseline_5F_assembly_5F_instructionList & io_ioAssemblyInstructionList,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    inObject->method_generateAssemblyCode (constin_inSTATUSregister, constin_inStatusRegisterBitSliceTable, io_ioAssemblyInstructionList, inCompiler COMMA_THERE) ;
  }
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

GGS_midrange_5F_symbolTable GGS_midrange_5F_symbolTable::class_func_emptyMap (LOCATION_ARGS) {
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
//  Extension Getter '@midrange_instruction_FD_base_code basecode'
//--------------------------------------------------------------------------------------------------

GGS_uint extensionGetter_basecode (const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                   Compiler *
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint result_outBaseCode ; // Returned variable
  const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_ADDWF:
    {
      result_outBaseCode = GGS_uint (uint32_t (1792U)) ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_ANDWF:
    {
      result_outBaseCode = GGS_uint (uint32_t (1280U)) ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_COMF:
    {
      result_outBaseCode = GGS_uint (uint32_t (2304U)) ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_DECF:
    {
      result_outBaseCode = GGS_uint (uint32_t (768U)) ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_DECFSZ:
    {
      result_outBaseCode = GGS_uint (uint32_t (2816U)) ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_INCF:
    {
      result_outBaseCode = GGS_uint (uint32_t (2560U)) ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_INCFSZ:
    {
      result_outBaseCode = GGS_uint (uint32_t (3840U)) ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_IORWF:
    {
      result_outBaseCode = GGS_uint (uint32_t (1024U)) ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_MOVF:
    {
      result_outBaseCode = GGS_uint (uint32_t (2048U)) ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_RLF:
    {
      result_outBaseCode = GGS_uint (uint32_t (3328U)) ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_RRF:
    {
      result_outBaseCode = GGS_uint (uint32_t (3072U)) ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_SUBWF:
    {
      result_outBaseCode = GGS_uint (uint32_t (512U)) ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_SWAPF:
    {
      result_outBaseCode = GGS_uint (uint32_t (3584U)) ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_XORWF:
    {
      result_outBaseCode = GGS_uint (uint32_t (1536U)) ;
    }
    break ;
  }
//---
  return result_outBaseCode ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@midrange_F_instruction_base_code baseCode'
//--------------------------------------------------------------------------------------------------

GGS_uint extensionGetter_baseCode (const GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                   Compiler *
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint result_outBaseCode ; // Returned variable
  const GGS_midrange_5F_F_5F_instruction_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::Enumeration::enum_CLRF:
    {
      result_outBaseCode = GGS_uint (uint32_t (384U)) ;
    }
    break ;
  case GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::Enumeration::enum_MOVWF:
    {
      result_outBaseCode = GGS_uint (uint32_t (128U)) ;
    }
    break ;
  }
//---
  return result_outBaseCode ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@midrange_bit_oriented_op baseCode'
//--------------------------------------------------------------------------------------------------

GGS_uint extensionGetter_baseCode (const GGS_midrange_5F_bit_5F_oriented_5F_op & inObject,
                                   Compiler *
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint result_outBaseCode ; // Returned variable
  const GGS_midrange_5F_bit_5F_oriented_5F_op temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_midrange_5F_bit_5F_oriented_5F_op::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_bit_5F_oriented_5F_op::Enumeration::enum_BCF:
    {
      result_outBaseCode = GGS_uint (uint32_t (4096U)) ;
    }
    break ;
  case GGS_midrange_5F_bit_5F_oriented_5F_op::Enumeration::enum_BSF:
    {
      result_outBaseCode = GGS_uint (uint32_t (5120U)) ;
    }
    break ;
  }
//---
  return result_outBaseCode ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@midrange_literal_instruction_opcode baseCode'
//--------------------------------------------------------------------------------------------------

GGS_uint extensionGetter_baseCode (const GGS_midrange_5F_literal_5F_instruction_5F_opcode & inObject,
                                   Compiler *
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint result_outBaseCode ; // Returned variable
  const GGS_midrange_5F_literal_5F_instruction_5F_opcode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_midrange_5F_literal_5F_instruction_5F_opcode::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_ADDLW:
    {
      result_outBaseCode = GGS_uint (uint32_t (15872U)) ;
    }
    break ;
  case GGS_midrange_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_ANDLW:
    {
      result_outBaseCode = GGS_uint (uint32_t (14592U)) ;
    }
    break ;
  case GGS_midrange_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_IORLW:
    {
      result_outBaseCode = GGS_uint (uint32_t (14336U)) ;
    }
    break ;
  case GGS_midrange_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_MOVLW:
    {
      result_outBaseCode = GGS_uint (uint32_t (12288U)) ;
    }
    break ;
  case GGS_midrange_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_RETLW:
    {
      result_outBaseCode = GGS_uint (uint32_t (13312U)) ;
    }
    break ;
  case GGS_midrange_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_SUBLW:
    {
      result_outBaseCode = GGS_uint (uint32_t (15360U)) ;
    }
    break ;
  case GGS_midrange_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_XORLW:
    {
      result_outBaseCode = GGS_uint (uint32_t (14848U)) ;
    }
    break ;
  }
//---
  return result_outBaseCode ;
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
// @midrange_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction::objectCompare (const GGS_midrange_5F_instruction & inOperand) const {
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

GGS_midrange_5F_instruction::GGS_midrange_5F_instruction (void) :
AC_GALGAS_reference_class () {
}


void cPtr_midrange_5F_instruction::
midrange_5F_instruction_init_21_ (const GGS_location & in_mInstructionLocation,
                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction::GGS_midrange_5F_instruction (const cPtr_midrange_5F_instruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_midrange_5F_instruction::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_midrange_5F_instruction * p = (cPtr_midrange_5F_instruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction::cPtr_midrange_5F_instruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction::cPtr_midrange_5F_instruction (const GGS_location & in_mInstructionLocation,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction ("midrange_instruction",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction GGS_midrange_5F_instruction::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction result ;
  const GGS_midrange_5F_instruction * p = (const GGS_midrange_5F_instruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_2E_weak::objectCompare (const GGS_midrange_5F_instruction_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_2E_weak::GGS_midrange_5F_instruction_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_2E_weak & GGS_midrange_5F_instruction_2E_weak::operator = (const GGS_midrange_5F_instruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_2E_weak::GGS_midrange_5F_instruction_2E_weak (const GGS_midrange_5F_instruction & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_2E_weak GGS_midrange_5F_instruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction GGS_midrange_5F_instruction_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction * p = (cPtr_midrange_5F_instruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction GGS_midrange_5F_instruction_2E_weak::bang_midrange_5F_instruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction) ;
      result = GGS_midrange_5F_instruction ((cPtr_midrange_5F_instruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak ("midrange_instruction.weak",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_2E_weak GGS_midrange_5F_instruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_2E_weak result ;
  const GGS_midrange_5F_instruction_2E_weak * p = (const GGS_midrange_5F_instruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@midrange_5F_instructionList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_midrange_5F_instructionList : public cCollectionElement {
  public: GGS_midrange_5F_instructionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_midrange_5F_instructionList (const GGS_midrange_5F_instruction & in_mInstruction
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_midrange_5F_instructionList (const GGS_midrange_5F_instructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_midrange_5F_instructionList::cCollectionElement_midrange_5F_instructionList (const GGS_midrange_5F_instruction & in_mInstruction
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_midrange_5F_instructionList::cCollectionElement_midrange_5F_instructionList (const GGS_midrange_5F_instructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_midrange_5F_instructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_midrange_5F_instructionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_midrange_5F_instructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @midrange_5F_instructionList
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList::GGS_midrange_5F_instructionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList::GGS_midrange_5F_instructionList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_midrange_5F_instructionList * p = (cCollectionElement_midrange_5F_instructionList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_midrange_5F_instructionList) ;
    const GGS_midrange_5F_instructionList_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_instructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS_midrange_5F_instruction & in_mInstruction
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_instructionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_midrange_5F_instructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_midrange_5F_instructionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_midrange_5F_instructionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_instructionList::description (String & ioString,
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

GGS_midrange_5F_instructionList GGS_midrange_5F_instructionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_instructionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList GGS_midrange_5F_instructionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_instructionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_instructionList::plusPlusAssignOperation (const GGS_midrange_5F_instructionList_2E_element & inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList GGS_midrange_5F_instructionList::class_func_listWithValue (const GGS_midrange_5F_instruction & inOperand0
                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_instructionList_2E_element element (inOperand0) ;
  GGS_midrange_5F_instructionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_instructionList::addAssignOperation (const GGS_midrange_5F_instruction & inOperand0
                                                          COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_instructionList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_instructionList::setter_append (const GGS_midrange_5F_instruction inOperand0,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_instructionList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_instructionList::setter_insertAtIndex (const GGS_midrange_5F_instruction inOperand0,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_instructionList_2E_element newElement (inOperand0) ;
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

void GGS_midrange_5F_instructionList::setter_removeAtIndex (GGS_midrange_5F_instruction & outOperand0,
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

void GGS_midrange_5F_instructionList::setter_popFirst (GGS_midrange_5F_instruction & outOperand0,
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

void GGS_midrange_5F_instructionList::setter_popLast (GGS_midrange_5F_instruction & outOperand0,
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

void GGS_midrange_5F_instructionList::method_first (GGS_midrange_5F_instruction & outOperand0,
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

void GGS_midrange_5F_instructionList::method_last (GGS_midrange_5F_instruction & outOperand0,
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

GGS_midrange_5F_instructionList GGS_midrange_5F_instructionList::add_operation (const GGS_midrange_5F_instructionList & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_midrange_5F_instructionList result ;
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

GGS_midrange_5F_instructionList GGS_midrange_5F_instructionList::subList (const int32_t inStart,
                                                                          const int32_t inLength,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instructionList result ;
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

GGS_midrange_5F_instructionList GGS_midrange_5F_instructionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instructionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList GGS_midrange_5F_instructionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList GGS_midrange_5F_instructionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_instructionList::plusAssignOperation (const GGS_midrange_5F_instructionList inList,
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

void GGS_midrange_5F_instructionList::setter_setMInstructionAtIndex (GGS_midrange_5F_instruction inOperand,
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
  
GGS_midrange_5F_instruction GGS_midrange_5F_instructionList::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction result ;
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
// Down Enumerator for @midrange_5F_instructionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_midrange_5F_instructionList::DownEnumerator_midrange_5F_instructionList (const GGS_midrange_5F_instructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList_2E_element DownEnumerator_midrange_5F_instructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction DownEnumerator_midrange_5F_instructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @midrange_5F_instructionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_midrange_5F_instructionList::UpEnumerator_midrange_5F_instructionList (const GGS_midrange_5F_instructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList_2E_element UpEnumerator_midrange_5F_instructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction UpEnumerator_midrange_5F_instructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @midrange_instructionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instructionList ("midrange_instructionList",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList GGS_midrange_5F_instructionList::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instructionList result ;
  const GGS_midrange_5F_instructionList * p = (const GGS_midrange_5F_instructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_nobanksel reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_nobanksel::objectCompare (const GGS_midrange_5F_instruction_5F_nobanksel & inOperand) const {
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

GGS_midrange_5F_instruction_5F_nobanksel::GGS_midrange_5F_instruction_5F_nobanksel (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_nobanksel GGS_midrange_5F_instruction_5F_nobanksel::
init_21_ (const GGS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_nobanksel * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_nobanksel (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_nobanksel_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_nobanksel result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_nobanksel::
midrange_5F_instruction_5F_nobanksel_init_21_ (const GGS_location & in_mInstructionLocation,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_nobanksel::GGS_midrange_5F_instruction_5F_nobanksel (const cPtr_midrange_5F_instruction_5F_nobanksel * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_nobanksel) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_nobanksel GGS_midrange_5F_instruction_5F_nobanksel::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_nobanksel result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_nobanksel (in_mInstructionLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_nobanksel class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_nobanksel::cPtr_midrange_5F_instruction_5F_nobanksel (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_nobanksel::cPtr_midrange_5F_instruction_5F_nobanksel (const GGS_location & in_mInstructionLocation,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_nobanksel::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel ;
}

void cPtr_midrange_5F_instruction_5F_nobanksel::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_nobanksel:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_nobanksel::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_nobanksel (mProperty_mInstructionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_nobanksel::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_nobanksel generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel ("midrange_instruction_nobanksel",
                                                                                         & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_nobanksel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_nobanksel::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_nobanksel (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_nobanksel GGS_midrange_5F_instruction_5F_nobanksel::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_nobanksel result ;
  const GGS_midrange_5F_instruction_5F_nobanksel * p = (const GGS_midrange_5F_instruction_5F_nobanksel *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_nobanksel *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_nobanksel", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_nobanksel_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_nobanksel_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_nobanksel_2E_weak::GGS_midrange_5F_instruction_5F_nobanksel_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_nobanksel_2E_weak & GGS_midrange_5F_instruction_5F_nobanksel_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_nobanksel & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_nobanksel_2E_weak::GGS_midrange_5F_instruction_5F_nobanksel_2E_weak (const GGS_midrange_5F_instruction_5F_nobanksel & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_nobanksel_2E_weak GGS_midrange_5F_instruction_5F_nobanksel_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_nobanksel_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_nobanksel GGS_midrange_5F_instruction_5F_nobanksel_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_nobanksel result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_nobanksel * p = (cPtr_midrange_5F_instruction_5F_nobanksel *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_nobanksel (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_nobanksel GGS_midrange_5F_instruction_5F_nobanksel_2E_weak::bang_midrange_5F_instruction_5F_nobanksel_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_nobanksel result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_nobanksel) ;
      result = GGS_midrange_5F_instruction_5F_nobanksel ((cPtr_midrange_5F_instruction_5F_nobanksel *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_nobanksel.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel_2E_weak ("midrange_instruction_nobanksel.weak",
                                                                                                 & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_nobanksel_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_nobanksel_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_nobanksel_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_nobanksel_2E_weak GGS_midrange_5F_instruction_5F_nobanksel_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_nobanksel_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_nobanksel_2E_weak * p = (const GGS_midrange_5F_instruction_5F_nobanksel_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_nobanksel_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_nobanksel.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_banksel reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_banksel::objectCompare (const GGS_midrange_5F_instruction_5F_banksel & inOperand) const {
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

GGS_midrange_5F_instruction_5F_banksel::GGS_midrange_5F_instruction_5F_banksel (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel GGS_midrange_5F_instruction_5F_banksel::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_luint & in_mBankIndex,
                  const GGS_bool & in_mWarningOnUselessBanksel,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_banksel * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_banksel (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_banksel_init_21__21__21_ (in_mInstructionLocation, in_mBankIndex, in_mWarningOnUselessBanksel, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_banksel result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_banksel::
midrange_5F_instruction_5F_banksel_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                     const GGS_luint & in_mBankIndex,
                                                     const GGS_bool & in_mWarningOnUselessBanksel,
                                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBankIndex = in_mBankIndex ;
  mProperty_mWarningOnUselessBanksel = in_mWarningOnUselessBanksel ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel::GGS_midrange_5F_instruction_5F_banksel (const cPtr_midrange_5F_instruction_5F_banksel * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_banksel) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel GGS_midrange_5F_instruction_5F_banksel::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                               const GGS_luint & in_mBankIndex,
                                                                                               const GGS_bool & in_mWarningOnUselessBanksel,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_banksel result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_banksel (in_mInstructionLocation, in_mBankIndex, in_mWarningOnUselessBanksel,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_midrange_5F_instruction_5F_banksel::readProperty_mBankIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_midrange_5F_instruction_5F_banksel * p = (cPtr_midrange_5F_instruction_5F_banksel *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel) ;
    return p->mProperty_mBankIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_banksel::readProperty_mWarningOnUselessBanksel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_midrange_5F_instruction_5F_banksel * p = (cPtr_midrange_5F_instruction_5F_banksel *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel) ;
    return p->mProperty_mWarningOnUselessBanksel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_banksel class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_banksel::cPtr_midrange_5F_instruction_5F_banksel (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mBankIndex (),
mProperty_mWarningOnUselessBanksel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_banksel::cPtr_midrange_5F_instruction_5F_banksel (const GGS_location & in_mInstructionLocation,
                                                                                  const GGS_luint & in_mBankIndex,
                                                                                  const GGS_bool & in_mWarningOnUselessBanksel,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mBankIndex (),
mProperty_mWarningOnUselessBanksel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBankIndex = in_mBankIndex ;
  mProperty_mWarningOnUselessBanksel = in_mWarningOnUselessBanksel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_banksel::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel ;
}

void cPtr_midrange_5F_instruction_5F_banksel::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_banksel:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBankIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWarningOnUselessBanksel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_banksel::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_banksel (mProperty_mInstructionLocation, mProperty_mBankIndex, mProperty_mWarningOnUselessBanksel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_banksel::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mBankIndex.printNonNullClassInstanceProperties ("mBankIndex") ;
    mProperty_mWarningOnUselessBanksel.printNonNullClassInstanceProperties ("mWarningOnUselessBanksel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_banksel generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel ("midrange_instruction_banksel",
                                                                                       & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_banksel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_banksel::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_banksel (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel GGS_midrange_5F_instruction_5F_banksel::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_banksel result ;
  const GGS_midrange_5F_instruction_5F_banksel * p = (const GGS_midrange_5F_instruction_5F_banksel *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_banksel *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_banksel", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_banksel_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_banksel_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_banksel_2E_weak::GGS_midrange_5F_instruction_5F_banksel_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel_2E_weak & GGS_midrange_5F_instruction_5F_banksel_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_banksel & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel_2E_weak::GGS_midrange_5F_instruction_5F_banksel_2E_weak (const GGS_midrange_5F_instruction_5F_banksel & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel_2E_weak GGS_midrange_5F_instruction_5F_banksel_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_banksel_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel GGS_midrange_5F_instruction_5F_banksel_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_banksel result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_banksel * p = (cPtr_midrange_5F_instruction_5F_banksel *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_banksel (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel GGS_midrange_5F_instruction_5F_banksel_2E_weak::bang_midrange_5F_instruction_5F_banksel_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_banksel result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_banksel) ;
      result = GGS_midrange_5F_instruction_5F_banksel ((cPtr_midrange_5F_instruction_5F_banksel *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_banksel.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_2E_weak ("midrange_instruction_banksel.weak",
                                                                                               & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_banksel_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_banksel_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_banksel_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel_2E_weak GGS_midrange_5F_instruction_5F_banksel_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_banksel_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_banksel_2E_weak * p = (const GGS_midrange_5F_instruction_5F_banksel_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_banksel_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_banksel.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrangeInstruction_5F_checkbank reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrangeInstruction_5F_checkbank::objectCompare (const GGS_midrangeInstruction_5F_checkbank & inOperand) const {
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

GGS_midrangeInstruction_5F_checkbank::GGS_midrangeInstruction_5F_checkbank (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrangeInstruction_5F_checkbank GGS_midrangeInstruction_5F_checkbank::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_uint & in_mBankIndex,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrangeInstruction_5F_checkbank * object = nullptr ;
  macroMyNew (object, cPtr_midrangeInstruction_5F_checkbank (inCompiler COMMA_THERE)) ;
  object->midrangeInstruction_5F_checkbank_init_21__21_ (in_mInstructionLocation, in_mBankIndex, inCompiler) ;
  const GGS_midrangeInstruction_5F_checkbank result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrangeInstruction_5F_checkbank::
midrangeInstruction_5F_checkbank_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_uint & in_mBankIndex,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBankIndex = in_mBankIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrangeInstruction_5F_checkbank::GGS_midrangeInstruction_5F_checkbank (const cPtr_midrangeInstruction_5F_checkbank * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrangeInstruction_5F_checkbank) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrangeInstruction_5F_checkbank GGS_midrangeInstruction_5F_checkbank::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                           const GGS_uint & in_mBankIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_midrangeInstruction_5F_checkbank result ;
  macroMyNew (result.mObjectPtr, cPtr_midrangeInstruction_5F_checkbank (in_mInstructionLocation, in_mBankIndex,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_midrangeInstruction_5F_checkbank::readProperty_mBankIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_midrangeInstruction_5F_checkbank * p = (cPtr_midrangeInstruction_5F_checkbank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrangeInstruction_5F_checkbank) ;
    return p->mProperty_mBankIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrangeInstruction_checkbank class
//--------------------------------------------------------------------------------------------------

cPtr_midrangeInstruction_5F_checkbank::cPtr_midrangeInstruction_5F_checkbank (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mBankIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrangeInstruction_5F_checkbank::cPtr_midrangeInstruction_5F_checkbank (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_uint & in_mBankIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mBankIndex () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBankIndex = in_mBankIndex ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrangeInstruction_5F_checkbank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank ;
}

void cPtr_midrangeInstruction_5F_checkbank::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@midrangeInstruction_checkbank:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBankIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrangeInstruction_5F_checkbank::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrangeInstruction_5F_checkbank (mProperty_mInstructionLocation, mProperty_mBankIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrangeInstruction_5F_checkbank::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mBankIndex.printNonNullClassInstanceProperties ("mBankIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrangeInstruction_checkbank generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank ("midrangeInstruction_checkbank",
                                                                                     & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrangeInstruction_5F_checkbank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrangeInstruction_5F_checkbank::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrangeInstruction_5F_checkbank (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrangeInstruction_5F_checkbank GGS_midrangeInstruction_5F_checkbank::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrangeInstruction_5F_checkbank result ;
  const GGS_midrangeInstruction_5F_checkbank * p = (const GGS_midrangeInstruction_5F_checkbank *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrangeInstruction_5F_checkbank *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrangeInstruction_checkbank", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrangeInstruction_5F_checkbank_2E_weak::objectCompare (const GGS_midrangeInstruction_5F_checkbank_2E_weak & inOperand) const {
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

GGS_midrangeInstruction_5F_checkbank_2E_weak::GGS_midrangeInstruction_5F_checkbank_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrangeInstruction_5F_checkbank_2E_weak & GGS_midrangeInstruction_5F_checkbank_2E_weak::operator = (const GGS_midrangeInstruction_5F_checkbank & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrangeInstruction_5F_checkbank_2E_weak::GGS_midrangeInstruction_5F_checkbank_2E_weak (const GGS_midrangeInstruction_5F_checkbank & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrangeInstruction_5F_checkbank_2E_weak GGS_midrangeInstruction_5F_checkbank_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrangeInstruction_5F_checkbank_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrangeInstruction_5F_checkbank GGS_midrangeInstruction_5F_checkbank_2E_weak::unwrappedValue (void) const {
  GGS_midrangeInstruction_5F_checkbank result ;
  if (isValid ()) {
    const cPtr_midrangeInstruction_5F_checkbank * p = (cPtr_midrangeInstruction_5F_checkbank *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrangeInstruction_5F_checkbank (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrangeInstruction_5F_checkbank GGS_midrangeInstruction_5F_checkbank_2E_weak::bang_midrangeInstruction_5F_checkbank_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrangeInstruction_5F_checkbank result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrangeInstruction_5F_checkbank) ;
      result = GGS_midrangeInstruction_5F_checkbank ((cPtr_midrangeInstruction_5F_checkbank *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrangeInstruction_checkbank.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank_2E_weak ("midrangeInstruction_checkbank.weak",
                                                                                             & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrangeInstruction_5F_checkbank_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrangeInstruction_5F_checkbank_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrangeInstruction_5F_checkbank_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrangeInstruction_5F_checkbank_2E_weak GGS_midrangeInstruction_5F_checkbank_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrangeInstruction_5F_checkbank_2E_weak result ;
  const GGS_midrangeInstruction_5F_checkbank_2E_weak * p = (const GGS_midrangeInstruction_5F_checkbank_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrangeInstruction_5F_checkbank_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrangeInstruction_checkbank.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrangeInstruction_5F_checknobank reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrangeInstruction_5F_checknobank::objectCompare (const GGS_midrangeInstruction_5F_checknobank & inOperand) const {
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

GGS_midrangeInstruction_5F_checknobank::GGS_midrangeInstruction_5F_checknobank (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrangeInstruction_5F_checknobank GGS_midrangeInstruction_5F_checknobank::
init_21_ (const GGS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrangeInstruction_5F_checknobank * object = nullptr ;
  macroMyNew (object, cPtr_midrangeInstruction_5F_checknobank (inCompiler COMMA_THERE)) ;
  object->midrangeInstruction_5F_checknobank_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GGS_midrangeInstruction_5F_checknobank result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrangeInstruction_5F_checknobank::
midrangeInstruction_5F_checknobank_init_21_ (const GGS_location & in_mInstructionLocation,
                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrangeInstruction_5F_checknobank::GGS_midrangeInstruction_5F_checknobank (const cPtr_midrangeInstruction_5F_checknobank * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrangeInstruction_5F_checknobank) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrangeInstruction_5F_checknobank GGS_midrangeInstruction_5F_checknobank::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_midrangeInstruction_5F_checknobank result ;
  macroMyNew (result.mObjectPtr, cPtr_midrangeInstruction_5F_checknobank (in_mInstructionLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrangeInstruction_checknobank class
//--------------------------------------------------------------------------------------------------

cPtr_midrangeInstruction_5F_checknobank::cPtr_midrangeInstruction_5F_checknobank (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrangeInstruction_5F_checknobank::cPtr_midrangeInstruction_5F_checknobank (const GGS_location & in_mInstructionLocation,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrangeInstruction_5F_checknobank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank ;
}

void cPtr_midrangeInstruction_5F_checknobank::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@midrangeInstruction_checknobank:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrangeInstruction_5F_checknobank::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrangeInstruction_5F_checknobank (mProperty_mInstructionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrangeInstruction_5F_checknobank::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrangeInstruction_checknobank generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank ("midrangeInstruction_checknobank",
                                                                                       & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrangeInstruction_5F_checknobank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrangeInstruction_5F_checknobank::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrangeInstruction_5F_checknobank (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrangeInstruction_5F_checknobank GGS_midrangeInstruction_5F_checknobank::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_midrangeInstruction_5F_checknobank result ;
  const GGS_midrangeInstruction_5F_checknobank * p = (const GGS_midrangeInstruction_5F_checknobank *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrangeInstruction_5F_checknobank *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrangeInstruction_checknobank", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrangeInstruction_5F_checknobank_2E_weak::objectCompare (const GGS_midrangeInstruction_5F_checknobank_2E_weak & inOperand) const {
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

GGS_midrangeInstruction_5F_checknobank_2E_weak::GGS_midrangeInstruction_5F_checknobank_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrangeInstruction_5F_checknobank_2E_weak & GGS_midrangeInstruction_5F_checknobank_2E_weak::operator = (const GGS_midrangeInstruction_5F_checknobank & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrangeInstruction_5F_checknobank_2E_weak::GGS_midrangeInstruction_5F_checknobank_2E_weak (const GGS_midrangeInstruction_5F_checknobank & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrangeInstruction_5F_checknobank_2E_weak GGS_midrangeInstruction_5F_checknobank_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrangeInstruction_5F_checknobank_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrangeInstruction_5F_checknobank GGS_midrangeInstruction_5F_checknobank_2E_weak::unwrappedValue (void) const {
  GGS_midrangeInstruction_5F_checknobank result ;
  if (isValid ()) {
    const cPtr_midrangeInstruction_5F_checknobank * p = (cPtr_midrangeInstruction_5F_checknobank *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrangeInstruction_5F_checknobank (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrangeInstruction_5F_checknobank GGS_midrangeInstruction_5F_checknobank_2E_weak::bang_midrangeInstruction_5F_checknobank_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrangeInstruction_5F_checknobank result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrangeInstruction_5F_checknobank) ;
      result = GGS_midrangeInstruction_5F_checknobank ((cPtr_midrangeInstruction_5F_checknobank *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrangeInstruction_checknobank.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank_2E_weak ("midrangeInstruction_checknobank.weak",
                                                                                               & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrangeInstruction_5F_checknobank_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrangeInstruction_5F_checknobank_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrangeInstruction_5F_checknobank_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrangeInstruction_5F_checknobank_2E_weak GGS_midrangeInstruction_5F_checknobank_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_midrangeInstruction_5F_checknobank_2E_weak result ;
  const GGS_midrangeInstruction_5F_checknobank_2E_weak * p = (const GGS_midrangeInstruction_5F_checknobank_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrangeInstruction_5F_checknobank_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrangeInstruction_checknobank.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak::GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak & GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_banksel_5F_register & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak::GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak (const GGS_midrange_5F_instruction_5F_banksel_5F_register & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel_5F_register GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_banksel_5F_register result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_banksel_5F_register * p = (cPtr_midrange_5F_instruction_5F_banksel_5F_register *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_banksel_5F_register (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel_5F_register GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak::bang_midrange_5F_instruction_5F_banksel_5F_register_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_banksel_5F_register result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
      result = GGS_midrange_5F_instruction_5F_banksel_5F_register ((cPtr_midrange_5F_instruction_5F_banksel_5F_register *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_banksel_register.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak ("midrange_instruction_banksel_register.weak",
                                                                                                           & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak * p = (const GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_banksel_register.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_savebank_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_savebank_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_savebank_2E_weak::GGS_midrange_5F_instruction_5F_savebank_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_savebank_2E_weak & GGS_midrange_5F_instruction_5F_savebank_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_savebank & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_savebank_2E_weak::GGS_midrange_5F_instruction_5F_savebank_2E_weak (const GGS_midrange_5F_instruction_5F_savebank & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_savebank_2E_weak GGS_midrange_5F_instruction_5F_savebank_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_savebank_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_savebank GGS_midrange_5F_instruction_5F_savebank_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_savebank result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_savebank * p = (cPtr_midrange_5F_instruction_5F_savebank *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_savebank (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_savebank GGS_midrange_5F_instruction_5F_savebank_2E_weak::bang_midrange_5F_instruction_5F_savebank_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_savebank result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_savebank) ;
      result = GGS_midrange_5F_instruction_5F_savebank ((cPtr_midrange_5F_instruction_5F_savebank *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_savebank.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank_2E_weak ("midrange_instruction_savebank.weak",
                                                                                                & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_savebank_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_savebank_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_savebank_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_savebank_2E_weak GGS_midrange_5F_instruction_5F_savebank_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_savebank_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_savebank_2E_weak * p = (const GGS_midrange_5F_instruction_5F_savebank_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_savebank_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_savebank.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak & GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak (const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::bang_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
      result = GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT ((cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_STATIC_REPEAT.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak ("midrange_instruction_STATIC_REPEAT.weak",
                                                                                                        & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak * p = (const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_STATIC_REPEAT.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@midrange_instruction_FD_base_code mnemonic'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_ADDWF:
    {
      result_outResult = GGS_string ("ADDWF") ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_ANDWF:
    {
      result_outResult = GGS_string ("ANDWF") ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_COMF:
    {
      result_outResult = GGS_string ("COMF") ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_DECF:
    {
      result_outResult = GGS_string ("DECF") ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_DECFSZ:
    {
      result_outResult = GGS_string ("DECFSZ") ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_INCF:
    {
      result_outResult = GGS_string ("INCF") ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_INCFSZ:
    {
      result_outResult = GGS_string ("INCFSZ") ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_IORWF:
    {
      result_outResult = GGS_string ("IORWF") ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_MOVF:
    {
      result_outResult = GGS_string ("MOVF") ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_RLF:
    {
      result_outResult = GGS_string ("RLF") ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_RRF:
    {
      result_outResult = GGS_string ("RRF") ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_SUBWF:
    {
      result_outResult = GGS_string ("SUBWF") ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_SWAPF:
    {
      result_outResult = GGS_string ("SWAPF") ;
    }
    break ;
  case GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_XORWF:
    {
      result_outResult = GGS_string ("XORWF") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_FD_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_FD_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_FD_2E_weak::GGS_midrange_5F_instruction_5F_FD_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD_2E_weak & GGS_midrange_5F_instruction_5F_FD_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_FD & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD_2E_weak::GGS_midrange_5F_instruction_5F_FD_2E_weak (const GGS_midrange_5F_instruction_5F_FD & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD_2E_weak GGS_midrange_5F_instruction_5F_FD_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FD_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD GGS_midrange_5F_instruction_5F_FD_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_FD result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_FD * p = (cPtr_midrange_5F_instruction_5F_FD *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_FD (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD GGS_midrange_5F_instruction_5F_FD_2E_weak::bang_midrange_5F_instruction_5F_FD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_FD result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_FD) ;
      result = GGS_midrange_5F_instruction_5F_FD ((cPtr_midrange_5F_instruction_5F_FD *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_FD.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD_2E_weak ("midrange_instruction_FD.weak",
                                                                                          & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_FD_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_FD_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_FD_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD_2E_weak GGS_midrange_5F_instruction_5F_FD_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FD_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_FD_2E_weak * p = (const GGS_midrange_5F_instruction_5F_FD_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_FD_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_FD.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@midrange_F_instruction_base_code mnemonic'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_midrange_5F_F_5F_instruction_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::Enumeration::enum_CLRF:
    {
      result_outResult = GGS_string ("CLRF") ;
    }
    break ;
  case GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::Enumeration::enum_MOVWF:
    {
      result_outResult = GGS_string ("MOVWF") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_F_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_F_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_F_2E_weak::GGS_midrange_5F_instruction_5F_F_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_F_2E_weak & GGS_midrange_5F_instruction_5F_F_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_F & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_F_2E_weak::GGS_midrange_5F_instruction_5F_F_2E_weak (const GGS_midrange_5F_instruction_5F_F & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_F_2E_weak GGS_midrange_5F_instruction_5F_F_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_F_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_F GGS_midrange_5F_instruction_5F_F_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_F result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_F * p = (cPtr_midrange_5F_instruction_5F_F *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_F (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_F GGS_midrange_5F_instruction_5F_F_2E_weak::bang_midrange_5F_instruction_5F_F_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_F result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_F) ;
      result = GGS_midrange_5F_instruction_5F_F ((cPtr_midrange_5F_instruction_5F_F *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_F.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F_2E_weak ("midrange_instruction_F.weak",
                                                                                         & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_F_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_F_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_F_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_F_2E_weak GGS_midrange_5F_instruction_5F_F_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_F_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_F_2E_weak * p = (const GGS_midrange_5F_instruction_5F_F_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_F_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_F.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@midrange_bit_oriented_op mnemonic'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_midrange_5F_bit_5F_oriented_5F_op & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_midrange_5F_bit_5F_oriented_5F_op temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_midrange_5F_bit_5F_oriented_5F_op::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_bit_5F_oriented_5F_op::Enumeration::enum_BCF:
    {
      result_outResult = GGS_string ("BCF") ;
    }
    break ;
  case GGS_midrange_5F_bit_5F_oriented_5F_op::Enumeration::enum_BSF:
    {
      result_outResult = GGS_string ("BSF") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_FB_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_FB_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_FB_2E_weak::GGS_midrange_5F_instruction_5F_FB_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FB_2E_weak & GGS_midrange_5F_instruction_5F_FB_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_FB & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FB_2E_weak::GGS_midrange_5F_instruction_5F_FB_2E_weak (const GGS_midrange_5F_instruction_5F_FB & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FB_2E_weak GGS_midrange_5F_instruction_5F_FB_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FB_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FB GGS_midrange_5F_instruction_5F_FB_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_FB result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_FB * p = (cPtr_midrange_5F_instruction_5F_FB *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_FB (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FB GGS_midrange_5F_instruction_5F_FB_2E_weak::bang_midrange_5F_instruction_5F_FB_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_FB result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_FB) ;
      result = GGS_midrange_5F_instruction_5F_FB ((cPtr_midrange_5F_instruction_5F_FB *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_FB.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB_2E_weak ("midrange_instruction_FB.weak",
                                                                                          & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_FB_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_FB_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_FB_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FB_2E_weak GGS_midrange_5F_instruction_5F_FB_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FB_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_FB_2E_weak * p = (const GGS_midrange_5F_instruction_5F_FB_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_FB_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_FB.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_CALL_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_CALL_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_CALL_2E_weak::GGS_midrange_5F_instruction_5F_CALL_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CALL_2E_weak & GGS_midrange_5F_instruction_5F_CALL_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_CALL & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CALL_2E_weak::GGS_midrange_5F_instruction_5F_CALL_2E_weak (const GGS_midrange_5F_instruction_5F_CALL & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CALL_2E_weak GGS_midrange_5F_instruction_5F_CALL_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_CALL_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CALL GGS_midrange_5F_instruction_5F_CALL_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_CALL result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_CALL * p = (cPtr_midrange_5F_instruction_5F_CALL *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_CALL (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CALL GGS_midrange_5F_instruction_5F_CALL_2E_weak::bang_midrange_5F_instruction_5F_CALL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_CALL result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_CALL) ;
      result = GGS_midrange_5F_instruction_5F_CALL ((cPtr_midrange_5F_instruction_5F_CALL *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_CALL.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL_2E_weak ("midrange_instruction_CALL.weak",
                                                                                            & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_CALL_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_CALL_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_CALL_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CALL_2E_weak GGS_midrange_5F_instruction_5F_CALL_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_CALL_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_CALL_2E_weak * p = (const GGS_midrange_5F_instruction_5F_CALL_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_CALL_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_CALL.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_JSR_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_JSR_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_JSR_2E_weak::GGS_midrange_5F_instruction_5F_JSR_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JSR_2E_weak & GGS_midrange_5F_instruction_5F_JSR_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_JSR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JSR_2E_weak::GGS_midrange_5F_instruction_5F_JSR_2E_weak (const GGS_midrange_5F_instruction_5F_JSR & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JSR_2E_weak GGS_midrange_5F_instruction_5F_JSR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_JSR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JSR GGS_midrange_5F_instruction_5F_JSR_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_JSR result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_JSR * p = (cPtr_midrange_5F_instruction_5F_JSR *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_JSR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JSR GGS_midrange_5F_instruction_5F_JSR_2E_weak::bang_midrange_5F_instruction_5F_JSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_JSR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_JSR) ;
      result = GGS_midrange_5F_instruction_5F_JSR ((cPtr_midrange_5F_instruction_5F_JSR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_JSR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR_2E_weak ("midrange_instruction_JSR.weak",
                                                                                           & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_JSR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_JSR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_JSR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JSR_2E_weak GGS_midrange_5F_instruction_5F_JSR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_JSR_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_JSR_2E_weak * p = (const GGS_midrange_5F_instruction_5F_JSR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_JSR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_JSR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_JUMP_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_JUMP_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_JUMP_2E_weak::GGS_midrange_5F_instruction_5F_JUMP_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JUMP_2E_weak & GGS_midrange_5F_instruction_5F_JUMP_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_JUMP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JUMP_2E_weak::GGS_midrange_5F_instruction_5F_JUMP_2E_weak (const GGS_midrange_5F_instruction_5F_JUMP & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JUMP_2E_weak GGS_midrange_5F_instruction_5F_JUMP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_JUMP_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JUMP GGS_midrange_5F_instruction_5F_JUMP_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_JUMP result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_JUMP * p = (cPtr_midrange_5F_instruction_5F_JUMP *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_JUMP (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JUMP GGS_midrange_5F_instruction_5F_JUMP_2E_weak::bang_midrange_5F_instruction_5F_JUMP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_JUMP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_JUMP) ;
      result = GGS_midrange_5F_instruction_5F_JUMP ((cPtr_midrange_5F_instruction_5F_JUMP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_JUMP.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP_2E_weak ("midrange_instruction_JUMP.weak",
                                                                                            & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_JUMP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_JUMP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_JUMP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JUMP_2E_weak GGS_midrange_5F_instruction_5F_JUMP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_JUMP_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_JUMP_2E_weak * p = (const GGS_midrange_5F_instruction_5F_JUMP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_JUMP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_JUMP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_GOTO_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_GOTO_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_GOTO_2E_weak::GGS_midrange_5F_instruction_5F_GOTO_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_GOTO_2E_weak & GGS_midrange_5F_instruction_5F_GOTO_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_GOTO & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_GOTO_2E_weak::GGS_midrange_5F_instruction_5F_GOTO_2E_weak (const GGS_midrange_5F_instruction_5F_GOTO & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_GOTO_2E_weak GGS_midrange_5F_instruction_5F_GOTO_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_GOTO_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_GOTO GGS_midrange_5F_instruction_5F_GOTO_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_GOTO result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_GOTO * p = (cPtr_midrange_5F_instruction_5F_GOTO *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_GOTO (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_GOTO GGS_midrange_5F_instruction_5F_GOTO_2E_weak::bang_midrange_5F_instruction_5F_GOTO_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_GOTO result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_GOTO) ;
      result = GGS_midrange_5F_instruction_5F_GOTO ((cPtr_midrange_5F_instruction_5F_GOTO *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_GOTO.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO_2E_weak ("midrange_instruction_GOTO.weak",
                                                                                            & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_GOTO_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_GOTO_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_GOTO_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_GOTO_2E_weak GGS_midrange_5F_instruction_5F_GOTO_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_GOTO_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_GOTO_2E_weak * p = (const GGS_midrange_5F_instruction_5F_GOTO_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_GOTO_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_GOTO.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_CLRWDT reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_CLRWDT::objectCompare (const GGS_midrange_5F_instruction_5F_CLRWDT & inOperand) const {
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

GGS_midrange_5F_instruction_5F_CLRWDT::GGS_midrange_5F_instruction_5F_CLRWDT (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRWDT GGS_midrange_5F_instruction_5F_CLRWDT::
init_21_ (const GGS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_CLRWDT * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_CLRWDT (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_CLRWDT_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_CLRWDT result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CLRWDT::
midrange_5F_instruction_5F_CLRWDT_init_21_ (const GGS_location & in_mInstructionLocation,
                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRWDT::GGS_midrange_5F_instruction_5F_CLRWDT (const cPtr_midrange_5F_instruction_5F_CLRWDT * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_CLRWDT) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRWDT GGS_midrange_5F_instruction_5F_CLRWDT::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_CLRWDT result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_CLRWDT (in_mInstructionLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_CLRWDT class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_CLRWDT::cPtr_midrange_5F_instruction_5F_CLRWDT (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_CLRWDT::cPtr_midrange_5F_instruction_5F_CLRWDT (const GGS_location & in_mInstructionLocation,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_CLRWDT::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT ;
}

void cPtr_midrange_5F_instruction_5F_CLRWDT::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_CLRWDT:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_CLRWDT::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_CLRWDT (mProperty_mInstructionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_CLRWDT::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_CLRWDT generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT ("midrange_instruction_CLRWDT",
                                                                                      & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_CLRWDT::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_CLRWDT::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_CLRWDT (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRWDT GGS_midrange_5F_instruction_5F_CLRWDT::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_CLRWDT result ;
  const GGS_midrange_5F_instruction_5F_CLRWDT * p = (const GGS_midrange_5F_instruction_5F_CLRWDT *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_CLRWDT *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_CLRWDT", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak::GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak & GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_CLRWDT & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak::GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak (const GGS_midrange_5F_instruction_5F_CLRWDT & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRWDT GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_CLRWDT result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_CLRWDT * p = (cPtr_midrange_5F_instruction_5F_CLRWDT *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_CLRWDT (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRWDT GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak::bang_midrange_5F_instruction_5F_CLRWDT_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_CLRWDT result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_CLRWDT) ;
      result = GGS_midrange_5F_instruction_5F_CLRWDT ((cPtr_midrange_5F_instruction_5F_CLRWDT *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_CLRWDT.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT_2E_weak ("midrange_instruction_CLRWDT.weak",
                                                                                              & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak * p = (const GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_CLRWDT.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_CLRW reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_CLRW::objectCompare (const GGS_midrange_5F_instruction_5F_CLRW & inOperand) const {
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

GGS_midrange_5F_instruction_5F_CLRW::GGS_midrange_5F_instruction_5F_CLRW (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRW GGS_midrange_5F_instruction_5F_CLRW::
init_21_ (const GGS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_CLRW * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_CLRW (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_CLRW_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_CLRW result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CLRW::
midrange_5F_instruction_5F_CLRW_init_21_ (const GGS_location & in_mInstructionLocation,
                                          Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRW::GGS_midrange_5F_instruction_5F_CLRW (const cPtr_midrange_5F_instruction_5F_CLRW * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_CLRW) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRW GGS_midrange_5F_instruction_5F_CLRW::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_CLRW result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_CLRW (in_mInstructionLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_CLRW class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_CLRW::cPtr_midrange_5F_instruction_5F_CLRW (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_CLRW::cPtr_midrange_5F_instruction_5F_CLRW (const GGS_location & in_mInstructionLocation,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_CLRW::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW ;
}

void cPtr_midrange_5F_instruction_5F_CLRW::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_CLRW:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_CLRW::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_CLRW (mProperty_mInstructionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_CLRW::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_CLRW generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW ("midrange_instruction_CLRW",
                                                                                    & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_CLRW::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_CLRW::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_CLRW (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRW GGS_midrange_5F_instruction_5F_CLRW::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_CLRW result ;
  const GGS_midrange_5F_instruction_5F_CLRW * p = (const GGS_midrange_5F_instruction_5F_CLRW *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_CLRW *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_CLRW", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_CLRW_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_CLRW_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_CLRW_2E_weak::GGS_midrange_5F_instruction_5F_CLRW_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRW_2E_weak & GGS_midrange_5F_instruction_5F_CLRW_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_CLRW & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRW_2E_weak::GGS_midrange_5F_instruction_5F_CLRW_2E_weak (const GGS_midrange_5F_instruction_5F_CLRW & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRW_2E_weak GGS_midrange_5F_instruction_5F_CLRW_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_CLRW_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRW GGS_midrange_5F_instruction_5F_CLRW_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_CLRW result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_CLRW * p = (cPtr_midrange_5F_instruction_5F_CLRW *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_CLRW (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRW GGS_midrange_5F_instruction_5F_CLRW_2E_weak::bang_midrange_5F_instruction_5F_CLRW_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_CLRW result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_CLRW) ;
      result = GGS_midrange_5F_instruction_5F_CLRW ((cPtr_midrange_5F_instruction_5F_CLRW *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_CLRW.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW_2E_weak ("midrange_instruction_CLRW.weak",
                                                                                            & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_CLRW_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_CLRW_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_CLRW_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRW_2E_weak GGS_midrange_5F_instruction_5F_CLRW_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_CLRW_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_CLRW_2E_weak * p = (const GGS_midrange_5F_instruction_5F_CLRW_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_CLRW_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_CLRW.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_NOP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_NOP::objectCompare (const GGS_midrange_5F_instruction_5F_NOP & inOperand) const {
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

GGS_midrange_5F_instruction_5F_NOP::GGS_midrange_5F_instruction_5F_NOP (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_NOP GGS_midrange_5F_instruction_5F_NOP::
init_21_ (const GGS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_NOP * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_NOP (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_NOP_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_NOP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_NOP::
midrange_5F_instruction_5F_NOP_init_21_ (const GGS_location & in_mInstructionLocation,
                                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_NOP::GGS_midrange_5F_instruction_5F_NOP (const cPtr_midrange_5F_instruction_5F_NOP * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_NOP) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_NOP GGS_midrange_5F_instruction_5F_NOP::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_NOP result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_NOP (in_mInstructionLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_NOP class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_NOP::cPtr_midrange_5F_instruction_5F_NOP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_NOP::cPtr_midrange_5F_instruction_5F_NOP (const GGS_location & in_mInstructionLocation,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_NOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP ;
}

void cPtr_midrange_5F_instruction_5F_NOP::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_NOP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_NOP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_NOP (mProperty_mInstructionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_NOP::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_NOP generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP ("midrange_instruction_NOP",
                                                                                   & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_NOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_NOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_NOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_NOP GGS_midrange_5F_instruction_5F_NOP::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_NOP result ;
  const GGS_midrange_5F_instruction_5F_NOP * p = (const GGS_midrange_5F_instruction_5F_NOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_NOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_NOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_NOP_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_NOP_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_NOP_2E_weak::GGS_midrange_5F_instruction_5F_NOP_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_NOP_2E_weak & GGS_midrange_5F_instruction_5F_NOP_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_NOP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_NOP_2E_weak::GGS_midrange_5F_instruction_5F_NOP_2E_weak (const GGS_midrange_5F_instruction_5F_NOP & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_NOP_2E_weak GGS_midrange_5F_instruction_5F_NOP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_NOP_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_NOP GGS_midrange_5F_instruction_5F_NOP_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_NOP result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_NOP * p = (cPtr_midrange_5F_instruction_5F_NOP *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_NOP (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_NOP GGS_midrange_5F_instruction_5F_NOP_2E_weak::bang_midrange_5F_instruction_5F_NOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_NOP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_NOP) ;
      result = GGS_midrange_5F_instruction_5F_NOP ((cPtr_midrange_5F_instruction_5F_NOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_NOP.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP_2E_weak ("midrange_instruction_NOP.weak",
                                                                                           & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_NOP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_NOP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_NOP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_NOP_2E_weak GGS_midrange_5F_instruction_5F_NOP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_NOP_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_NOP_2E_weak * p = (const GGS_midrange_5F_instruction_5F_NOP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_NOP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_NOP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_SLEEP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_SLEEP::objectCompare (const GGS_midrange_5F_instruction_5F_SLEEP & inOperand) const {
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

GGS_midrange_5F_instruction_5F_SLEEP::GGS_midrange_5F_instruction_5F_SLEEP (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_SLEEP GGS_midrange_5F_instruction_5F_SLEEP::
init_21_ (const GGS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_SLEEP * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_SLEEP (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_SLEEP_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_SLEEP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_SLEEP::
midrange_5F_instruction_5F_SLEEP_init_21_ (const GGS_location & in_mInstructionLocation,
                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_SLEEP::GGS_midrange_5F_instruction_5F_SLEEP (const cPtr_midrange_5F_instruction_5F_SLEEP * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_SLEEP) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_SLEEP GGS_midrange_5F_instruction_5F_SLEEP::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_SLEEP result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_SLEEP (in_mInstructionLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_SLEEP class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_SLEEP::cPtr_midrange_5F_instruction_5F_SLEEP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_SLEEP::cPtr_midrange_5F_instruction_5F_SLEEP (const GGS_location & in_mInstructionLocation,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_SLEEP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP ;
}

void cPtr_midrange_5F_instruction_5F_SLEEP::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_SLEEP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_SLEEP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_SLEEP (mProperty_mInstructionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_SLEEP::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_SLEEP generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP ("midrange_instruction_SLEEP",
                                                                                     & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_SLEEP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_SLEEP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_SLEEP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_SLEEP GGS_midrange_5F_instruction_5F_SLEEP::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_SLEEP result ;
  const GGS_midrange_5F_instruction_5F_SLEEP * p = (const GGS_midrange_5F_instruction_5F_SLEEP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_SLEEP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_SLEEP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_SLEEP_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_SLEEP_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_SLEEP_2E_weak::GGS_midrange_5F_instruction_5F_SLEEP_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_SLEEP_2E_weak & GGS_midrange_5F_instruction_5F_SLEEP_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_SLEEP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_SLEEP_2E_weak::GGS_midrange_5F_instruction_5F_SLEEP_2E_weak (const GGS_midrange_5F_instruction_5F_SLEEP & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_SLEEP_2E_weak GGS_midrange_5F_instruction_5F_SLEEP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_SLEEP_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_SLEEP GGS_midrange_5F_instruction_5F_SLEEP_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_SLEEP result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_SLEEP * p = (cPtr_midrange_5F_instruction_5F_SLEEP *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_SLEEP (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_SLEEP GGS_midrange_5F_instruction_5F_SLEEP_2E_weak::bang_midrange_5F_instruction_5F_SLEEP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_SLEEP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_SLEEP) ;
      result = GGS_midrange_5F_instruction_5F_SLEEP ((cPtr_midrange_5F_instruction_5F_SLEEP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_SLEEP.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP_2E_weak ("midrange_instruction_SLEEP.weak",
                                                                                             & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_SLEEP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_SLEEP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_SLEEP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_SLEEP_2E_weak GGS_midrange_5F_instruction_5F_SLEEP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_SLEEP_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_SLEEP_2E_weak * p = (const GGS_midrange_5F_instruction_5F_SLEEP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_SLEEP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_SLEEP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@midrange_literal_instruction_opcode mnemonic'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_midrange_5F_literal_5F_instruction_5F_opcode & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_midrange_5F_literal_5F_instruction_5F_opcode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_midrange_5F_literal_5F_instruction_5F_opcode::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_ADDLW:
    {
      result_outResult = GGS_string ("ADDLW") ;
    }
    break ;
  case GGS_midrange_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_ANDLW:
    {
      result_outResult = GGS_string ("ANDLW") ;
    }
    break ;
  case GGS_midrange_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_IORLW:
    {
      result_outResult = GGS_string ("IORLW") ;
    }
    break ;
  case GGS_midrange_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_MOVLW:
    {
      result_outResult = GGS_string ("MOVLW") ;
    }
    break ;
  case GGS_midrange_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_RETLW:
    {
      result_outResult = GGS_string ("RETLW") ;
    }
    break ;
  case GGS_midrange_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_SUBLW:
    {
      result_outResult = GGS_string ("SUBLW") ;
    }
    break ;
  case GGS_midrange_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_XORLW:
    {
      result_outResult = GGS_string ("XORLW") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_literalOperation::objectCompare (const GGS_midrange_5F_instruction_5F_literalOperation & inOperand) const {
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

GGS_midrange_5F_instruction_5F_literalOperation::GGS_midrange_5F_instruction_5F_literalOperation (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_literalOperation GGS_midrange_5F_instruction_5F_literalOperation::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                  const GGS_immediatExpression & in_mImmediatExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_literalOperation * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_literalOperation (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_literalOperation_init_21__21__21_ (in_mInstructionLocation, in_mLiteralInstruction, in_mImmediatExpression, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_literalOperation result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_literalOperation::
midrange_5F_instruction_5F_literalOperation_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                              const GGS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                              const GGS_immediatExpression & in_mImmediatExpression,
                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralInstruction = in_mLiteralInstruction ;
  mProperty_mImmediatExpression = in_mImmediatExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_literalOperation::GGS_midrange_5F_instruction_5F_literalOperation (const cPtr_midrange_5F_instruction_5F_literalOperation * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_literalOperation) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_literalOperation GGS_midrange_5F_instruction_5F_literalOperation::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                 const GGS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                                                 const GGS_immediatExpression & in_mImmediatExpression,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_literalOperation result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_literalOperation (in_mInstructionLocation, in_mLiteralInstruction, in_mImmediatExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_literal_5F_instruction_5F_opcode GGS_midrange_5F_instruction_5F_literalOperation::readProperty_mLiteralInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_literal_5F_instruction_5F_opcode () ;
  }else{
    cPtr_midrange_5F_instruction_5F_literalOperation * p = (cPtr_midrange_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mLiteralInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_midrange_5F_instruction_5F_literalOperation::readProperty_mImmediatExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_literalOperation * p = (cPtr_midrange_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mImmediatExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_literalOperation::cPtr_midrange_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mLiteralInstruction (),
mProperty_mImmediatExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_literalOperation::cPtr_midrange_5F_instruction_5F_literalOperation (const GGS_location & in_mInstructionLocation,
                                                                                                    const GGS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                                    const GGS_immediatExpression & in_mImmediatExpression,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mLiteralInstruction (),
mProperty_mImmediatExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralInstruction = in_mLiteralInstruction ;
  mProperty_mImmediatExpression = in_mImmediatExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation ;
}

void cPtr_midrange_5F_instruction_5F_literalOperation::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_literalOperation:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImmediatExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_literalOperation::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_literalOperation (mProperty_mInstructionLocation, mProperty_mLiteralInstruction, mProperty_mImmediatExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_literalOperation::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralInstruction.printNonNullClassInstanceProperties ("mLiteralInstruction") ;
    mProperty_mImmediatExpression.printNonNullClassInstanceProperties ("mImmediatExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_literalOperation generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation ("midrange_instruction_literalOperation",
                                                                                                & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_literalOperation GGS_midrange_5F_instruction_5F_literalOperation::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_literalOperation result ;
  const GGS_midrange_5F_instruction_5F_literalOperation * p = (const GGS_midrange_5F_instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_literalOperation_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_literalOperation_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_literalOperation_2E_weak::GGS_midrange_5F_instruction_5F_literalOperation_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_literalOperation_2E_weak & GGS_midrange_5F_instruction_5F_literalOperation_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_literalOperation & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_literalOperation_2E_weak::GGS_midrange_5F_instruction_5F_literalOperation_2E_weak (const GGS_midrange_5F_instruction_5F_literalOperation & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_literalOperation_2E_weak GGS_midrange_5F_instruction_5F_literalOperation_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_literalOperation_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_literalOperation GGS_midrange_5F_instruction_5F_literalOperation_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_literalOperation result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_literalOperation * p = (cPtr_midrange_5F_instruction_5F_literalOperation *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_literalOperation (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_literalOperation GGS_midrange_5F_instruction_5F_literalOperation_2E_weak::bang_midrange_5F_instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_literalOperation result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_literalOperation) ;
      result = GGS_midrange_5F_instruction_5F_literalOperation ((cPtr_midrange_5F_instruction_5F_literalOperation *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_literalOperation.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation_2E_weak ("midrange_instruction_literalOperation.weak",
                                                                                                        & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_literalOperation_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_literalOperation_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_literalOperation_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_literalOperation_2E_weak GGS_midrange_5F_instruction_5F_literalOperation_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_literalOperation_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_literalOperation_2E_weak * p = (const GGS_midrange_5F_instruction_5F_literalOperation_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_literalOperation_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_literalOperation.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_MNOP::objectCompare (const GGS_midrange_5F_instruction_5F_MNOP & inOperand) const {
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

GGS_midrange_5F_instruction_5F_MNOP::GGS_midrange_5F_instruction_5F_MNOP (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_MNOP GGS_midrange_5F_instruction_5F_MNOP::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_luint & in_mOccurrenceFactor,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_MNOP * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_MNOP (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_MNOP_init_21__21_ (in_mInstructionLocation, in_mOccurrenceFactor, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_MNOP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_MNOP::
midrange_5F_instruction_5F_MNOP_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                              const GGS_luint & in_mOccurrenceFactor,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_MNOP::GGS_midrange_5F_instruction_5F_MNOP (const cPtr_midrange_5F_instruction_5F_MNOP * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_MNOP) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_MNOP GGS_midrange_5F_instruction_5F_MNOP::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                         const GGS_luint & in_mOccurrenceFactor,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_MNOP result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_MNOP (in_mInstructionLocation, in_mOccurrenceFactor,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_midrange_5F_instruction_5F_MNOP::readProperty_mOccurrenceFactor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_midrange_5F_instruction_5F_MNOP * p = (cPtr_midrange_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_MNOP) ;
    return p->mProperty_mOccurrenceFactor ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_MNOP class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_MNOP::cPtr_midrange_5F_instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_MNOP::cPtr_midrange_5F_instruction_5F_MNOP (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_luint & in_mOccurrenceFactor,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_MNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP ;
}

void cPtr_midrange_5F_instruction_5F_MNOP::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_MNOP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_MNOP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_MNOP (mProperty_mInstructionLocation, mProperty_mOccurrenceFactor, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_MNOP::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mOccurrenceFactor.printNonNullClassInstanceProperties ("mOccurrenceFactor") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_MNOP generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP ("midrange_instruction_MNOP",
                                                                                    & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_MNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_MNOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_MNOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_MNOP GGS_midrange_5F_instruction_5F_MNOP::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_MNOP result ;
  const GGS_midrange_5F_instruction_5F_MNOP * p = (const GGS_midrange_5F_instruction_5F_MNOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_MNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_MNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_MNOP_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_MNOP_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_MNOP_2E_weak::GGS_midrange_5F_instruction_5F_MNOP_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_MNOP_2E_weak & GGS_midrange_5F_instruction_5F_MNOP_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_MNOP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_MNOP_2E_weak::GGS_midrange_5F_instruction_5F_MNOP_2E_weak (const GGS_midrange_5F_instruction_5F_MNOP & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_MNOP_2E_weak GGS_midrange_5F_instruction_5F_MNOP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_MNOP_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_MNOP GGS_midrange_5F_instruction_5F_MNOP_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_MNOP result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_MNOP * p = (cPtr_midrange_5F_instruction_5F_MNOP *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_MNOP (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_MNOP GGS_midrange_5F_instruction_5F_MNOP_2E_weak::bang_midrange_5F_instruction_5F_MNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_MNOP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_MNOP) ;
      result = GGS_midrange_5F_instruction_5F_MNOP ((cPtr_midrange_5F_instruction_5F_MNOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_MNOP.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP_2E_weak ("midrange_instruction_MNOP.weak",
                                                                                            & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_MNOP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_MNOP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_MNOP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_MNOP_2E_weak GGS_midrange_5F_instruction_5F_MNOP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_MNOP_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_MNOP_2E_weak * p = (const GGS_midrange_5F_instruction_5F_MNOP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_MNOP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_MNOP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_FOREVER reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_FOREVER::objectCompare (const GGS_midrange_5F_instruction_5F_FOREVER & inOperand) const {
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

GGS_midrange_5F_instruction_5F_FOREVER::GGS_midrange_5F_instruction_5F_FOREVER (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FOREVER GGS_midrange_5F_instruction_5F_FOREVER::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_midrange_5F_instructionList & in_mInstructionList,
                  const GGS_location & in_mEndOfInstructionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_FOREVER * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_FOREVER (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_FOREVER_init_21__21__21_ (in_mInstructionLocation, in_mInstructionList, in_mEndOfInstructionList, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_FOREVER result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FOREVER::
midrange_5F_instruction_5F_FOREVER_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                     const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                     const GGS_location & in_mEndOfInstructionList,
                                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FOREVER::GGS_midrange_5F_instruction_5F_FOREVER (const cPtr_midrange_5F_instruction_5F_FOREVER * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_FOREVER) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FOREVER GGS_midrange_5F_instruction_5F_FOREVER::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                               const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                                               const GGS_location & in_mEndOfInstructionList,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FOREVER result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_FOREVER (in_mInstructionLocation, in_mInstructionList, in_mEndOfInstructionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList GGS_midrange_5F_instruction_5F_FOREVER::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_instructionList () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FOREVER * p = (cPtr_midrange_5F_instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FOREVER) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_midrange_5F_instruction_5F_FOREVER::readProperty_mEndOfInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FOREVER * p = (cPtr_midrange_5F_instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FOREVER) ;
    return p->mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_FOREVER class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_FOREVER::cPtr_midrange_5F_instruction_5F_FOREVER (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_FOREVER::cPtr_midrange_5F_instruction_5F_FOREVER (const GGS_location & in_mInstructionLocation,
                                                                                  const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                                  const GGS_location & in_mEndOfInstructionList,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_FOREVER::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER ;
}

void cPtr_midrange_5F_instruction_5F_FOREVER::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_FOREVER:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_FOREVER::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_FOREVER (mProperty_mInstructionLocation, mProperty_mInstructionList, mProperty_mEndOfInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_FOREVER::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mEndOfInstructionList.printNonNullClassInstanceProperties ("mEndOfInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_FOREVER generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER ("midrange_instruction_FOREVER",
                                                                                       & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_FOREVER::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_FOREVER::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_FOREVER (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FOREVER GGS_midrange_5F_instruction_5F_FOREVER::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FOREVER result ;
  const GGS_midrange_5F_instruction_5F_FOREVER * p = (const GGS_midrange_5F_instruction_5F_FOREVER *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_FOREVER *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_FOREVER", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_FOREVER_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_FOREVER_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_FOREVER_2E_weak::GGS_midrange_5F_instruction_5F_FOREVER_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FOREVER_2E_weak & GGS_midrange_5F_instruction_5F_FOREVER_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_FOREVER & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FOREVER_2E_weak::GGS_midrange_5F_instruction_5F_FOREVER_2E_weak (const GGS_midrange_5F_instruction_5F_FOREVER & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FOREVER_2E_weak GGS_midrange_5F_instruction_5F_FOREVER_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FOREVER_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FOREVER GGS_midrange_5F_instruction_5F_FOREVER_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_FOREVER result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_FOREVER * p = (cPtr_midrange_5F_instruction_5F_FOREVER *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_FOREVER (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FOREVER GGS_midrange_5F_instruction_5F_FOREVER_2E_weak::bang_midrange_5F_instruction_5F_FOREVER_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_FOREVER result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_FOREVER) ;
      result = GGS_midrange_5F_instruction_5F_FOREVER ((cPtr_midrange_5F_instruction_5F_FOREVER *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_FOREVER.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER_2E_weak ("midrange_instruction_FOREVER.weak",
                                                                                               & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_FOREVER_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_FOREVER_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_FOREVER_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FOREVER_2E_weak GGS_midrange_5F_instruction_5F_FOREVER_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FOREVER_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_FOREVER_2E_weak * p = (const GGS_midrange_5F_instruction_5F_FOREVER_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_FOREVER_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_FOREVER.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::objectCompare (const GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inOperand) const {
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

GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (void) :
GGS_midrange_5F_instruction () {
}


void cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::
midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                             const GGS_midrange_5F_instruction & in_mInstruction,
                                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_instruction () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * p = (cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_IF_SEMI_COLON class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const GGS_location & in_mInstructionLocation,
                                                                                                          const GGS_midrange_5F_instruction & in_mInstruction,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_IF_SEMI_COLON generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON ("midrange_instruction_IF_SEMI_COLON",
                                                                                                   & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON result ;
  const GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * p = (const GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_IF_SEMI_COLON", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak & GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (const GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * p = (cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::bang_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
      result = GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON ((cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_IF_SEMI_COLON.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak ("midrange_instruction_IF_SEMI_COLON.weak",
                                                                                                           & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak * p = (const GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_IF_SEMI_COLON.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak::GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak (void) :
GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak & GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_IF_5F_BitTest & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak::GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak (const GGS_midrange_5F_instruction_5F_IF_5F_BitTest & inSource) :
GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_BitTest GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_IF_5F_BitTest result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_IF_5F_BitTest (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_BitTest GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak::bang_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_IF_5F_BitTest result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
      result = GGS_midrange_5F_instruction_5F_IF_5F_BitTest ((cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_IF_BitTest.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak ("midrange_instruction_IF_BitTest.weak",
                                                                                                     & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak * p = (const GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_IF_BitTest.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak::GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak (void) :
GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak & GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_IF_5F_IncDec & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak::GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak (const GGS_midrange_5F_instruction_5F_IF_5F_IncDec & inSource) :
GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_IncDec GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_IF_5F_IncDec result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_IF_5F_IncDec (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_IncDec GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak::bang_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_IF_5F_IncDec result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
      result = GGS_midrange_5F_instruction_5F_IF_5F_IncDec ((cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_IF_IncDec.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak ("midrange_instruction_IF_IncDec.weak",
                                                                                                    & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak * p = (const GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_IF_IncDec.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_conditionExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_conditionExpression::objectCompare (const GGS_midrange_5F_conditionExpression & inOperand) const {
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

GGS_midrange_5F_conditionExpression::GGS_midrange_5F_conditionExpression (void) :
AC_GALGAS_reference_class () {
}


void cPtr_midrange_5F_conditionExpression::
midrange_5F_conditionExpression_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression::GGS_midrange_5F_conditionExpression (const cPtr_midrange_5F_conditionExpression * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_conditionExpression) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_conditionExpression class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_conditionExpression::cPtr_midrange_5F_conditionExpression (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_conditionExpression::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_conditionExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_conditionExpression ("midrange_conditionExpression",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_conditionExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_conditionExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_conditionExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression GGS_midrange_5F_conditionExpression::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_conditionExpression result ;
  const GGS_midrange_5F_conditionExpression * p = (const GGS_midrange_5F_conditionExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_conditionExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_conditionExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_conditionExpression_2E_weak::objectCompare (const GGS_midrange_5F_conditionExpression_2E_weak & inOperand) const {
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

GGS_midrange_5F_conditionExpression_2E_weak::GGS_midrange_5F_conditionExpression_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression_2E_weak & GGS_midrange_5F_conditionExpression_2E_weak::operator = (const GGS_midrange_5F_conditionExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression_2E_weak::GGS_midrange_5F_conditionExpression_2E_weak (const GGS_midrange_5F_conditionExpression & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression_2E_weak GGS_midrange_5F_conditionExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_conditionExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression GGS_midrange_5F_conditionExpression_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_conditionExpression result ;
  if (isValid ()) {
    const cPtr_midrange_5F_conditionExpression * p = (cPtr_midrange_5F_conditionExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_conditionExpression (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression GGS_midrange_5F_conditionExpression_2E_weak::bang_midrange_5F_conditionExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_conditionExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_conditionExpression) ;
      result = GGS_midrange_5F_conditionExpression ((cPtr_midrange_5F_conditionExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_conditionExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_conditionExpression_2E_weak ("midrange_conditionExpression.weak",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_conditionExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_conditionExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_conditionExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression_2E_weak GGS_midrange_5F_conditionExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_conditionExpression_2E_weak result ;
  const GGS_midrange_5F_conditionExpression_2E_weak * p = (const GGS_midrange_5F_conditionExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_conditionExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_conditionExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_incDecRegisterInCondition_2E_weak::objectCompare (const GGS_midrange_5F_incDecRegisterInCondition_2E_weak & inOperand) const {
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

GGS_midrange_5F_incDecRegisterInCondition_2E_weak::GGS_midrange_5F_incDecRegisterInCondition_2E_weak (void) :
GGS_midrange_5F_conditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_incDecRegisterInCondition_2E_weak & GGS_midrange_5F_incDecRegisterInCondition_2E_weak::operator = (const GGS_midrange_5F_incDecRegisterInCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_incDecRegisterInCondition_2E_weak::GGS_midrange_5F_incDecRegisterInCondition_2E_weak (const GGS_midrange_5F_incDecRegisterInCondition & inSource) :
GGS_midrange_5F_conditionExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_incDecRegisterInCondition_2E_weak GGS_midrange_5F_incDecRegisterInCondition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_incDecRegisterInCondition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_incDecRegisterInCondition GGS_midrange_5F_incDecRegisterInCondition_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_incDecRegisterInCondition result ;
  if (isValid ()) {
    const cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_incDecRegisterInCondition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_incDecRegisterInCondition GGS_midrange_5F_incDecRegisterInCondition_2E_weak::bang_midrange_5F_incDecRegisterInCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_incDecRegisterInCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_incDecRegisterInCondition) ;
      result = GGS_midrange_5F_incDecRegisterInCondition ((cPtr_midrange_5F_incDecRegisterInCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_incDecRegisterInCondition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition_2E_weak ("midrange_incDecRegisterInCondition.weak",
                                                                                                  & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_incDecRegisterInCondition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_incDecRegisterInCondition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_incDecRegisterInCondition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_incDecRegisterInCondition_2E_weak GGS_midrange_5F_incDecRegisterInCondition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_incDecRegisterInCondition_2E_weak result ;
  const GGS_midrange_5F_incDecRegisterInCondition_2E_weak * p = (const GGS_midrange_5F_incDecRegisterInCondition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_incDecRegisterInCondition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_incDecRegisterInCondition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_negateCondition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_negateCondition::objectCompare (const GGS_midrange_5F_negateCondition & inOperand) const {
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

GGS_midrange_5F_negateCondition::GGS_midrange_5F_negateCondition (void) :
GGS_midrange_5F_conditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_negateCondition GGS_midrange_5F_negateCondition::
init_21_ (const GGS_midrange_5F_conditionExpression & in_mCondition,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_negateCondition * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_negateCondition (inCompiler COMMA_THERE)) ;
  object->midrange_5F_negateCondition_init_21_ (in_mCondition, inCompiler) ;
  const GGS_midrange_5F_negateCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_negateCondition::
midrange_5F_negateCondition_init_21_ (const GGS_midrange_5F_conditionExpression & in_mCondition,
                                      Compiler * /* inCompiler */) {
  mProperty_mCondition = in_mCondition ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_negateCondition::GGS_midrange_5F_negateCondition (const cPtr_midrange_5F_negateCondition * inSourcePtr) :
GGS_midrange_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_negateCondition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_negateCondition GGS_midrange_5F_negateCondition::class_func_new (const GGS_midrange_5F_conditionExpression & in_mCondition,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_negateCondition result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_negateCondition (in_mCondition,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression GGS_midrange_5F_negateCondition::readProperty_mCondition (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_conditionExpression () ;
  }else{
    cPtr_midrange_5F_negateCondition * p = (cPtr_midrange_5F_negateCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_negateCondition) ;
    return p->mProperty_mCondition ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_negateCondition class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_negateCondition::cPtr_midrange_5F_negateCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mCondition () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_negateCondition::cPtr_midrange_5F_negateCondition (const GGS_midrange_5F_conditionExpression & in_mCondition,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mCondition () {
  mProperty_mCondition = in_mCondition ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_negateCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_negateCondition ;
}

void cPtr_midrange_5F_negateCondition::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_negateCondition:") ;
  mProperty_mCondition.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_negateCondition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_negateCondition (mProperty_mCondition, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_negateCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_conditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mCondition.printNonNullClassInstanceProperties ("mCondition") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_negateCondition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_negateCondition ("midrange_negateCondition",
                                                                                & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_negateCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_negateCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_negateCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_negateCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_negateCondition GGS_midrange_5F_negateCondition::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_negateCondition result ;
  const GGS_midrange_5F_negateCondition * p = (const GGS_midrange_5F_negateCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_negateCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_negateCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_negateCondition_2E_weak::objectCompare (const GGS_midrange_5F_negateCondition_2E_weak & inOperand) const {
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

GGS_midrange_5F_negateCondition_2E_weak::GGS_midrange_5F_negateCondition_2E_weak (void) :
GGS_midrange_5F_conditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_negateCondition_2E_weak & GGS_midrange_5F_negateCondition_2E_weak::operator = (const GGS_midrange_5F_negateCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_negateCondition_2E_weak::GGS_midrange_5F_negateCondition_2E_weak (const GGS_midrange_5F_negateCondition & inSource) :
GGS_midrange_5F_conditionExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_negateCondition_2E_weak GGS_midrange_5F_negateCondition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_negateCondition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_negateCondition GGS_midrange_5F_negateCondition_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_negateCondition result ;
  if (isValid ()) {
    const cPtr_midrange_5F_negateCondition * p = (cPtr_midrange_5F_negateCondition *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_negateCondition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_negateCondition GGS_midrange_5F_negateCondition_2E_weak::bang_midrange_5F_negateCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_negateCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_negateCondition) ;
      result = GGS_midrange_5F_negateCondition ((cPtr_midrange_5F_negateCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_negateCondition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_negateCondition_2E_weak ("midrange_negateCondition.weak",
                                                                                        & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_negateCondition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_negateCondition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_negateCondition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_negateCondition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_negateCondition_2E_weak GGS_midrange_5F_negateCondition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_negateCondition_2E_weak result ;
  const GGS_midrange_5F_negateCondition_2E_weak * p = (const GGS_midrange_5F_negateCondition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_negateCondition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_negateCondition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_andCondition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_andCondition::objectCompare (const GGS_midrange_5F_andCondition & inOperand) const {
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

GGS_midrange_5F_andCondition::GGS_midrange_5F_andCondition (void) :
GGS_midrange_5F_conditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_andCondition GGS_midrange_5F_andCondition::
init_21__21_ (const GGS_midrange_5F_conditionExpression & in_mLeftExpression,
              const GGS_midrange_5F_conditionExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_andCondition * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_andCondition (inCompiler COMMA_THERE)) ;
  object->midrange_5F_andCondition_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_midrange_5F_andCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_andCondition::
midrange_5F_andCondition_init_21__21_ (const GGS_midrange_5F_conditionExpression & in_mLeftExpression,
                                       const GGS_midrange_5F_conditionExpression & in_mRightExpression,
                                       Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_andCondition::GGS_midrange_5F_andCondition (const cPtr_midrange_5F_andCondition * inSourcePtr) :
GGS_midrange_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_andCondition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_andCondition GGS_midrange_5F_andCondition::class_func_new (const GGS_midrange_5F_conditionExpression & in_mLeftExpression,
                                                                           const GGS_midrange_5F_conditionExpression & in_mRightExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_andCondition result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_andCondition (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression GGS_midrange_5F_andCondition::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_conditionExpression () ;
  }else{
    cPtr_midrange_5F_andCondition * p = (cPtr_midrange_5F_andCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_andCondition) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression GGS_midrange_5F_andCondition::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_conditionExpression () ;
  }else{
    cPtr_midrange_5F_andCondition * p = (cPtr_midrange_5F_andCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_andCondition) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_andCondition class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_andCondition::cPtr_midrange_5F_andCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_andCondition::cPtr_midrange_5F_andCondition (const GGS_midrange_5F_conditionExpression & in_mLeftExpression,
                                                              const GGS_midrange_5F_conditionExpression & in_mRightExpression,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_andCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_andCondition ;
}

void cPtr_midrange_5F_andCondition::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_andCondition:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_andCondition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_andCondition (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_andCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_conditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_andCondition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_andCondition ("midrange_andCondition",
                                                                             & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_andCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_andCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_andCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_andCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_andCondition GGS_midrange_5F_andCondition::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_andCondition result ;
  const GGS_midrange_5F_andCondition * p = (const GGS_midrange_5F_andCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_andCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_andCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_andCondition_2E_weak::objectCompare (const GGS_midrange_5F_andCondition_2E_weak & inOperand) const {
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

GGS_midrange_5F_andCondition_2E_weak::GGS_midrange_5F_andCondition_2E_weak (void) :
GGS_midrange_5F_conditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_andCondition_2E_weak & GGS_midrange_5F_andCondition_2E_weak::operator = (const GGS_midrange_5F_andCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_andCondition_2E_weak::GGS_midrange_5F_andCondition_2E_weak (const GGS_midrange_5F_andCondition & inSource) :
GGS_midrange_5F_conditionExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_andCondition_2E_weak GGS_midrange_5F_andCondition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_andCondition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_andCondition GGS_midrange_5F_andCondition_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_andCondition result ;
  if (isValid ()) {
    const cPtr_midrange_5F_andCondition * p = (cPtr_midrange_5F_andCondition *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_andCondition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_andCondition GGS_midrange_5F_andCondition_2E_weak::bang_midrange_5F_andCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_andCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_andCondition) ;
      result = GGS_midrange_5F_andCondition ((cPtr_midrange_5F_andCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_andCondition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_andCondition_2E_weak ("midrange_andCondition.weak",
                                                                                     & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_andCondition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_andCondition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_andCondition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_andCondition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_andCondition_2E_weak GGS_midrange_5F_andCondition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_andCondition_2E_weak result ;
  const GGS_midrange_5F_andCondition_2E_weak * p = (const GGS_midrange_5F_andCondition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_andCondition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_andCondition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::objectCompare (const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak & inOperand) const {
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

GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (void) :
GGS_midrange_5F_conditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak & GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::operator = (const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inSource) :
GGS_midrange_5F_conditionExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  if (isValid ()) {
    const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::bang_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
      result = GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ((cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_bitTest_in_structured_if_condition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak ("midrange_bitTest_in_structured_if_condition.weak",
                                                                                                                       & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                              Compiler * inCompiler
                                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak result ;
  const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak * p = (const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_bitTest_in_structured_if_condition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_structured_5F_if reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_structured_5F_if::objectCompare (const GGS_midrange_5F_instruction_5F_structured_5F_if & inOperand) const {
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

GGS_midrange_5F_instruction_5F_structured_5F_if::GGS_midrange_5F_instruction_5F_structured_5F_if (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_structured_5F_if GGS_midrange_5F_instruction_5F_structured_5F_if::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_midrange_5F_conditionExpression & in_mIfCondition,
                          const GGS_midrange_5F_instructionList & in_mThenInstructionList,
                          const GGS_midrange_5F_instructionList & in_mElseInstructionList,
                          const GGS_location & in_mEndOfElsePartLocation,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_structured_5F_if * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_structured_5F_if (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_structured_5F_if_init_21__21__21__21__21_ (in_mInstructionLocation, in_mIfCondition, in_mThenInstructionList, in_mElseInstructionList, in_mEndOfElsePartLocation, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_structured_5F_if result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_structured_5F_if::
midrange_5F_instruction_5F_structured_5F_if_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_midrange_5F_conditionExpression & in_mIfCondition,
                                                                      const GGS_midrange_5F_instructionList & in_mThenInstructionList,
                                                                      const GGS_midrange_5F_instructionList & in_mElseInstructionList,
                                                                      const GGS_location & in_mEndOfElsePartLocation,
                                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mIfCondition = in_mIfCondition ;
  mProperty_mThenInstructionList = in_mThenInstructionList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
  mProperty_mEndOfElsePartLocation = in_mEndOfElsePartLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_structured_5F_if::GGS_midrange_5F_instruction_5F_structured_5F_if (const cPtr_midrange_5F_instruction_5F_structured_5F_if * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_structured_5F_if GGS_midrange_5F_instruction_5F_structured_5F_if::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                 const GGS_midrange_5F_conditionExpression & in_mIfCondition,
                                                                                                                 const GGS_midrange_5F_instructionList & in_mThenInstructionList,
                                                                                                                 const GGS_midrange_5F_instructionList & in_mElseInstructionList,
                                                                                                                 const GGS_location & in_mEndOfElsePartLocation,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_structured_5F_if result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_structured_5F_if (in_mInstructionLocation, in_mIfCondition, in_mThenInstructionList, in_mElseInstructionList, in_mEndOfElsePartLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression GGS_midrange_5F_instruction_5F_structured_5F_if::readProperty_mIfCondition (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_conditionExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
    return p->mProperty_mIfCondition ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList GGS_midrange_5F_instruction_5F_structured_5F_if::readProperty_mThenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_instructionList () ;
  }else{
    cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
    return p->mProperty_mThenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList GGS_midrange_5F_instruction_5F_structured_5F_if::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_instructionList () ;
  }else{
    cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_midrange_5F_instruction_5F_structured_5F_if::readProperty_mEndOfElsePartLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
    return p->mProperty_mEndOfElsePartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_structured_if class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_structured_5F_if::cPtr_midrange_5F_instruction_5F_structured_5F_if (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mIfCondition (),
mProperty_mThenInstructionList (),
mProperty_mElseInstructionList (),
mProperty_mEndOfElsePartLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_structured_5F_if::cPtr_midrange_5F_instruction_5F_structured_5F_if (const GGS_location & in_mInstructionLocation,
                                                                                                    const GGS_midrange_5F_conditionExpression & in_mIfCondition,
                                                                                                    const GGS_midrange_5F_instructionList & in_mThenInstructionList,
                                                                                                    const GGS_midrange_5F_instructionList & in_mElseInstructionList,
                                                                                                    const GGS_location & in_mEndOfElsePartLocation,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_structured_5F_if::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if ;
}

void cPtr_midrange_5F_instruction_5F_structured_5F_if::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_structured_if:") ;
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

acPtr_class * cPtr_midrange_5F_instruction_5F_structured_5F_if::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_structured_5F_if (mProperty_mInstructionLocation, mProperty_mIfCondition, mProperty_mThenInstructionList, mProperty_mElseInstructionList, mProperty_mEndOfElsePartLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_structured_5F_if::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mIfCondition.printNonNullClassInstanceProperties ("mIfCondition") ;
    mProperty_mThenInstructionList.printNonNullClassInstanceProperties ("mThenInstructionList") ;
    mProperty_mElseInstructionList.printNonNullClassInstanceProperties ("mElseInstructionList") ;
    mProperty_mEndOfElsePartLocation.printNonNullClassInstanceProperties ("mEndOfElsePartLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_structured_if generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if ("midrange_instruction_structured_if",
                                                                                                & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_structured_5F_if::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_structured_5F_if::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_structured_5F_if (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_structured_5F_if GGS_midrange_5F_instruction_5F_structured_5F_if::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_structured_5F_if result ;
  const GGS_midrange_5F_instruction_5F_structured_5F_if * p = (const GGS_midrange_5F_instruction_5F_structured_5F_if *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_structured_5F_if *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_structured_if", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak::GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak & GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_structured_5F_if & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak::GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak (const GGS_midrange_5F_instruction_5F_structured_5F_if & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_structured_5F_if GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_structured_5F_if result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (cPtr_midrange_5F_instruction_5F_structured_5F_if *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_structured_5F_if (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_structured_5F_if GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak::bang_midrange_5F_instruction_5F_structured_5F_if_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_structured_5F_if result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
      result = GGS_midrange_5F_instruction_5F_structured_5F_if ((cPtr_midrange_5F_instruction_5F_structured_5F_if *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_structured_if.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if_2E_weak ("midrange_instruction_structured_if.weak",
                                                                                                        & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak * p = (const GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_structured_if.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@midrange_5F_partList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_midrange_5F_partList : public cCollectionElement {
  public: GGS_midrange_5F_partList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_midrange_5F_partList (const GGS_midrange_5F_conditionExpression & in_mCondition,
                                                   const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                   const GGS_location & in_mEndOfPartLocation
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_midrange_5F_partList (const GGS_midrange_5F_partList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_midrange_5F_partList::cCollectionElement_midrange_5F_partList (const GGS_midrange_5F_conditionExpression & in_mCondition,
                                                                                  const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                                  const GGS_location & in_mEndOfPartLocation
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCondition, in_mInstructionList, in_mEndOfPartLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_midrange_5F_partList::cCollectionElement_midrange_5F_partList (const GGS_midrange_5F_partList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mCondition, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfPartLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_midrange_5F_partList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_midrange_5F_partList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_midrange_5F_partList (mObject.mProperty_mCondition, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfPartLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @midrange_5F_partList
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_partList::GGS_midrange_5F_partList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_partList::GGS_midrange_5F_partList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_midrange_5F_partList * p = (cCollectionElement_midrange_5F_partList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
    const GGS_midrange_5F_partList_2E_element element (p->mObject.mProperty_mCondition, p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mEndOfPartLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_partList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GGS_midrange_5F_conditionExpression & in_mCondition,
                                                          const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                          const GGS_location & in_mEndOfPartLocation
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_partList * p = nullptr ;
  macroMyNew (p, cCollectionElement_midrange_5F_partList (in_mCondition, in_mInstructionList, in_mEndOfPartLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_midrange_5F_partList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_midrange_5F_partList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_partList::description (String & ioString,
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

GGS_midrange_5F_partList GGS_midrange_5F_partList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_partList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_partList GGS_midrange_5F_partList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_partList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_partList::plusPlusAssignOperation (const GGS_midrange_5F_partList_2E_element & inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_partList GGS_midrange_5F_partList::class_func_listWithValue (const GGS_midrange_5F_conditionExpression & inOperand0,
                                                                             const GGS_midrange_5F_instructionList & inOperand1,
                                                                             const GGS_location & inOperand2
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_partList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_midrange_5F_partList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_partList::addAssignOperation (const GGS_midrange_5F_conditionExpression & inOperand0,
                                                   const GGS_midrange_5F_instructionList & inOperand1,
                                                   const GGS_location & inOperand2
                                                   COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_partList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_partList::setter_append (const GGS_midrange_5F_conditionExpression inOperand0,
                                              const GGS_midrange_5F_instructionList inOperand1,
                                              const GGS_location inOperand2,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_partList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_partList::setter_insertAtIndex (const GGS_midrange_5F_conditionExpression inOperand0,
                                                     const GGS_midrange_5F_instructionList inOperand1,
                                                     const GGS_location inOperand2,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_partList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_midrange_5F_partList::setter_removeAtIndex (GGS_midrange_5F_conditionExpression & outOperand0,
                                                     GGS_midrange_5F_instructionList & outOperand1,
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

void GGS_midrange_5F_partList::setter_popFirst (GGS_midrange_5F_conditionExpression & outOperand0,
                                                GGS_midrange_5F_instructionList & outOperand1,
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

void GGS_midrange_5F_partList::setter_popLast (GGS_midrange_5F_conditionExpression & outOperand0,
                                               GGS_midrange_5F_instructionList & outOperand1,
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

void GGS_midrange_5F_partList::method_first (GGS_midrange_5F_conditionExpression & outOperand0,
                                             GGS_midrange_5F_instructionList & outOperand1,
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

void GGS_midrange_5F_partList::method_last (GGS_midrange_5F_conditionExpression & outOperand0,
                                            GGS_midrange_5F_instructionList & outOperand1,
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

GGS_midrange_5F_partList GGS_midrange_5F_partList::add_operation (const GGS_midrange_5F_partList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_midrange_5F_partList result ;
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

GGS_midrange_5F_partList GGS_midrange_5F_partList::subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_partList result ;
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

GGS_midrange_5F_partList GGS_midrange_5F_partList::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_partList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_partList GGS_midrange_5F_partList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_partList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_partList GGS_midrange_5F_partList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_partList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_partList::plusAssignOperation (const GGS_midrange_5F_partList inList,
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

void GGS_midrange_5F_partList::setter_setMConditionAtIndex (GGS_midrange_5F_conditionExpression inOperand,
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
  
GGS_midrange_5F_conditionExpression GGS_midrange_5F_partList::getter_mConditionAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_conditionExpression result ;
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

void GGS_midrange_5F_partList::setter_setMInstructionListAtIndex (GGS_midrange_5F_instructionList inOperand,
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
  
GGS_midrange_5F_instructionList GGS_midrange_5F_partList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instructionList result ;
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

void GGS_midrange_5F_partList::setter_setMEndOfPartLocationAtIndex (GGS_location inOperand,
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
  
GGS_location GGS_midrange_5F_partList::getter_mEndOfPartLocationAtIndex (const GGS_uint & inIndex,
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
// Down Enumerator for @midrange_5F_partList
//--------------------------------------------------------------------------------------------------

DownEnumerator_midrange_5F_partList::DownEnumerator_midrange_5F_partList (const GGS_midrange_5F_partList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_partList_2E_element DownEnumerator_midrange_5F_partList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression DownEnumerator_midrange_5F_partList::current_mCondition (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCondition ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList DownEnumerator_midrange_5F_partList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_midrange_5F_partList::current_mEndOfPartLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfPartLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @midrange_5F_partList
//--------------------------------------------------------------------------------------------------

UpEnumerator_midrange_5F_partList::UpEnumerator_midrange_5F_partList (const GGS_midrange_5F_partList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_partList_2E_element UpEnumerator_midrange_5F_partList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression UpEnumerator_midrange_5F_partList::current_mCondition (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCondition ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList UpEnumerator_midrange_5F_partList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_midrange_5F_partList::current_mEndOfPartLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfPartLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @midrange_partList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_partList ("midrange_partList",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_partList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_partList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_partList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_partList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_partList GGS_midrange_5F_partList::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_partList result ;
  const GGS_midrange_5F_partList * p = (const GGS_midrange_5F_partList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_partList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_partList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

