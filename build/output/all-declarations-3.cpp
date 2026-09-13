#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_intermediate_instruction print'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_print (cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                GGS_string & io_ioListFileContents,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    inObject->method_print (io_ioListFileContents, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//  Map type @generatedCodeMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap::GGS_generatedCodeMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap::~ GGS_generatedCodeMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap::GGS_generatedCodeMap (const GGS_generatedCodeMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap & GGS_generatedCodeMap::operator = (const GGS_generatedCodeMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap GGS_generatedCodeMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_generatedCodeMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_generatedCodeMap::getter_hasKey (const GGS_string & inKey
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_generatedCodeMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                     const GGS_uint & inLevel
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_generatedCodeMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_generatedCodeMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_generatedCodeMap::getter_locationForKey (const GGS_string & inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_generatedCodeMap::getter_keyList (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_generatedCodeMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_generatedCodeMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap::performInsert (const GGS_generatedCodeMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_generatedCodeMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element>
GGS_generatedCodeMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_generatedCodeMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element>>
GGS_generatedCodeMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_generatedCodeMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element_3F_ GGS_generatedCodeMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_generatedCodeMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_generatedCodeMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_generatedCodeMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mCode = info->mProperty_mCode ;
      element.mProperty_mInstruction = info->mProperty_mInstruction ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap GGS_generatedCodeMap::class_func_mapWithMapToOverride (const GGS_generatedCodeMap & inMapToOverride
                                                                            COMMA_LOCATION_ARGS) {
  GGS_generatedCodeMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_generatedCodeMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap GGS_generatedCodeMap::getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_generatedCodeMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap::setter_insertKey (GGS_lstring inLKey,
                                             GGS_codeList inArgument0,
                                             GGS_ipic_31__38_SequentialInstruction inArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  const GGS_generatedCodeMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' entry is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap::method_searchKey (GGS_lstring inLKey,
                                             GGS_codeList & outArgument0,
                                             GGS_ipic_31__38_SequentialInstruction & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element> info ;
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
    outArgument0 = info->mProperty_mCode ;
    outArgument1 = info->mProperty_mInstruction ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_codeList GGS_generatedCodeMap::getter_mCodeForKey (const GGS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_codeList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mCode ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction GGS_generatedCodeMap::getter_mInstructionForKey (const GGS_string & inKey,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_SequentialInstruction result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mInstruction ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap::setter_setMCodeForKey (GGS_codeList inValue,
                                                  GGS_string inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_generatedCodeMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mCode = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap::setter_setMInstructionForKey (GGS_ipic_31__38_SequentialInstruction inValue,
                                                         GGS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_generatedCodeMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mInstruction = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_generatedCodeMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element>> & inArray,
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
    ioString.appendString ("mCode:") ;
    inArray (i COMMA_HERE)->mProperty_mCode.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mInstruction:") ;
    inArray (i COMMA_HERE)->mProperty_mInstruction.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element>> array = sortedInfoArray () ;
    GGS_generatedCodeMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_generatedCodeMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_generatedCodeMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @generatedCodeMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_generatedCodeMap::DownEnumerator_generatedCodeMap (const GGS_generatedCodeMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element DownEnumerator_generatedCodeMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_generatedCodeMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList DownEnumerator_generatedCodeMap::current_mCode (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mCode ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction DownEnumerator_generatedCodeMap::current_mInstruction (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInstruction ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @generatedCodeMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_generatedCodeMap::UpEnumerator_generatedCodeMap (const GGS_generatedCodeMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element UpEnumerator_generatedCodeMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_generatedCodeMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList UpEnumerator_generatedCodeMap::current_mCode (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mCode ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction UpEnumerator_generatedCodeMap::current_mInstruction (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInstruction ;
}


//--------------------------------------------------------------------------------------------------
//     @generatedCodeMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_generatedCodeMap ("generatedCodeMap",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_generatedCodeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generatedCodeMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_generatedCodeMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_generatedCodeMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap GGS_generatedCodeMap::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_generatedCodeMap result ;
  const GGS_generatedCodeMap * p = (const GGS_generatedCodeMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_generatedCodeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generatedCodeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@uint x4string'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_x_34_string (const GGS_uint & inObject,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_uint temp_0 = inObject ;
  result_outResult = temp_0.divide_operation (GGS_uint (uint32_t (4096U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 13)).operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 13)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas3", 13)) ;
  const GGS_uint temp_1 = inObject ;
  result_outResult.plusAssignOperation(temp_1.divide_operation (GGS_uint (uint32_t (256U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 14)).operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 14)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas3", 14)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 14)) ;
  const GGS_uint temp_2 = inObject ;
  result_outResult.plusAssignOperation(temp_2.divide_operation (GGS_uint (uint32_t (16U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 15)).operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 15)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas3", 15)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 15)) ;
  const GGS_uint temp_3 = inObject ;
  result_outResult.plusAssignOperation(temp_3.operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 16)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas3", 16)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 16)) ;
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@uint x6string'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_x_36_string (const GGS_uint & inObject,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_uint temp_0 = inObject ;
  result_outResult = temp_0.divide_operation (GGS_uint (uint32_t (65536U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 22)).operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 22)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas3", 22)) ;
  const GGS_uint temp_1 = inObject ;
  result_outResult.plusAssignOperation(temp_1.divide_operation (GGS_uint (uint32_t (4096U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 23)).operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 23)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas3", 23)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 23)) ;
  const GGS_uint temp_2 = inObject ;
  result_outResult.plusAssignOperation(temp_2.divide_operation (GGS_uint (uint32_t (256U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 24)).operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 24)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas3", 24)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 24)) ;
  const GGS_uint temp_3 = inObject ;
  result_outResult.plusAssignOperation(temp_3.divide_operation (GGS_uint (uint32_t (16U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 25)).operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 25)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas3", 25)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 25)) ;
  const GGS_uint temp_4 = inObject ;
  result_outResult.plusAssignOperation(temp_4.operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 26)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas3", 26)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas3", 26)) ;
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Map type @baselineRoutineMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap::GGS_baselineRoutineMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap::~ GGS_baselineRoutineMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap::GGS_baselineRoutineMap (const GGS_baselineRoutineMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap & GGS_baselineRoutineMap::operator = (const GGS_baselineRoutineMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap GGS_baselineRoutineMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_baselineRoutineMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baselineRoutineMap::getter_hasKey (const GGS_string & inKey
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baselineRoutineMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                       const GGS_uint & inLevel
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baselineRoutineMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baselineRoutineMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_baselineRoutineMap::getter_locationForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_baselineRoutineMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_baselineRoutineMap::getter_keyList (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baselineRoutineMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineRoutineMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineRoutineMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_baselineRoutineMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineRoutineMap::performInsert (const GGS_baselineRoutineMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_baselineRoutineMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_baselineRoutineMap_2E_element>
GGS_baselineRoutineMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_baselineRoutineMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_baselineRoutineMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_baselineRoutineMap_2E_element>>
GGS_baselineRoutineMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_baselineRoutineMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_baselineRoutineMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineRoutineMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element_3F_ GGS_baselineRoutineMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_baselineRoutineMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_baselineRoutineMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_baselineRoutineMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_baselineRoutineMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mIsNoReturn = info->mProperty_mIsNoReturn ;
      element.mProperty_mPage = info->mProperty_mPage ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap GGS_baselineRoutineMap::class_func_mapWithMapToOverride (const GGS_baselineRoutineMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GGS_baselineRoutineMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_baselineRoutineMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap GGS_baselineRoutineMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_baselineRoutineMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineRoutineMap::setter_insertKey (GGS_lstring inLKey,
                                               GGS_bool inArgument0,
                                               GGS_luint inArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  const GGS_baselineRoutineMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' routine is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineRoutineMap::method_searchKey (GGS_lstring inLKey,
                                               GGS_bool & outArgument0,
                                               GGS_luint & outArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_baselineRoutineMap_2E_element> info ;
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
  }else{
    outArgument0 = info->mProperty_mIsNoReturn ;
    outArgument1 = info->mProperty_mPage ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baselineRoutineMap::getter_mIsNoReturnForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_baselineRoutineMap_2E_element> info = infoForKey (key) ;
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

GGS_luint GGS_baselineRoutineMap::getter_mPageForKey (const GGS_string & inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_luint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_baselineRoutineMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mPage ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_baselineRoutineMap::setter_setMIsNoReturnForKey (GGS_bool inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_baselineRoutineMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_baselineRoutineMap::setter_setMPageForKey (GGS_luint inValue,
                                                    GGS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_baselineRoutineMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mPage = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_baselineRoutineMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_baselineRoutineMap_2E_element>> & inArray,
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
    ioString.appendString ("mPage:") ;
    inArray (i COMMA_HERE)->mProperty_mPage.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineRoutineMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_baselineRoutineMap_2E_element>> array = sortedInfoArray () ;
    GGS_baselineRoutineMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_baselineRoutineMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_baselineRoutineMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @baselineRoutineMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_baselineRoutineMap::DownEnumerator_baselineRoutineMap (const GGS_baselineRoutineMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element DownEnumerator_baselineRoutineMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_baselineRoutineMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_baselineRoutineMap::current_mIsNoReturn (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_baselineRoutineMap::current_mPage (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPage ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @baselineRoutineMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_baselineRoutineMap::UpEnumerator_baselineRoutineMap (const GGS_baselineRoutineMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element UpEnumerator_baselineRoutineMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_baselineRoutineMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_baselineRoutineMap::current_mIsNoReturn (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_baselineRoutineMap::current_mPage (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPage ;
}


//--------------------------------------------------------------------------------------------------
//     @baselineRoutineMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baselineRoutineMap ("baselineRoutineMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baselineRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baselineRoutineMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baselineRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baselineRoutineMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap GGS_baselineRoutineMap::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_baselineRoutineMap result ;
  const GGS_baselineRoutineMap * p = (const GGS_baselineRoutineMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baselineRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baselineRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_instruction build_baseline_intermediate_instructionList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (cPtr_baseline_5F_instruction * inObject,
                                                                               const GGS_uint constin_inCurrentPage,
                                                                               const GGS_baselineRoutineMap constin_inRoutineMap,
                                                                               const GGS_registerTable constin_inRegisterTable,
                                                                               const GGS_constantMap constin_inConstantMap,
                                                                               GGS_uint & io_ioLocalLabelIndex,
                                                                               GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                               GGS_string & io_ioListFileContents,
                                                                               GGS_bool & io_ioContinuesInSequence,
                                                                               const GGS_routineKind constin_inRoutineKind,
                                                                               const GGS_bool constin_inLastInstructionShouldReturn,
                                                                               GGS_stringset & io_ioUsedRegisters,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction) ;
    inObject->method_build_5F_baseline_5F_intermediate_5F_instructionList (constin_inCurrentPage, constin_inRoutineMap, constin_inRegisterTable, constin_inConstantMap, io_ioLocalLabelIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioContinuesInSequence, constin_inRoutineKind, constin_inLastInstructionShouldReturn, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_conditionExpression build_intermediate_condition_instructions'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions (cPtr_baseline_5F_conditionExpression * inObject,
                                                                             const GGS_uint constin_inCurrentPage,
                                                                             const GGS_registerTable constin_inRegisterTable,
                                                                             const GGS_constantMap constin_inConstantMap,
                                                                             GGS_uint & io_ioLocalLabelIndex,
                                                                             const GGS_bool constin_inComplementaryBranch,
                                                                             const GGS_location constin_inInstructionLocation,
                                                                             const GGS_string constin_inTargetLabel,
                                                                             GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                             GGS_stringset & io_ioUsedRegisters,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_conditionExpression) ;
    inObject->method_build_5F_intermediate_5F_condition_5F_instructions (constin_inCurrentPage, constin_inRegisterTable, constin_inConstantMap, io_ioLocalLabelIndex, constin_inComplementaryBranch, constin_inInstructionLocation, constin_inTargetLabel, io_ioGeneratedInstructionList, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//  Map type @midrange_5F_declaredRoutineMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap::GGS_midrange_5F_declaredRoutineMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap::~ GGS_midrange_5F_declaredRoutineMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap::GGS_midrange_5F_declaredRoutineMap (const GGS_midrange_5F_declaredRoutineMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap & GGS_midrange_5F_declaredRoutineMap::operator = (const GGS_midrange_5F_declaredRoutineMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap GGS_midrange_5F_declaredRoutineMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_declaredRoutineMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_declaredRoutineMap::getter_hasKey (const GGS_string & inKey
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_declaredRoutineMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                   const GGS_uint & inLevel
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_midrange_5F_declaredRoutineMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_midrange_5F_declaredRoutineMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_midrange_5F_declaredRoutineMap::getter_locationForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_midrange_5F_declaredRoutineMap::getter_keyList (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_declaredRoutineMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_declaredRoutineMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_declaredRoutineMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_midrange_5F_declaredRoutineMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_declaredRoutineMap::performInsert (const GGS_midrange_5F_declaredRoutineMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_midrange_5F_declaredRoutineMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element>
GGS_midrange_5F_declaredRoutineMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_midrange_5F_declaredRoutineMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element>>
GGS_midrange_5F_declaredRoutineMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_midrange_5F_declaredRoutineMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_declaredRoutineMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ GGS_midrange_5F_declaredRoutineMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_midrange_5F_declaredRoutineMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_midrange_5F_declaredRoutineMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap GGS_midrange_5F_declaredRoutineMap::class_func_mapWithMapToOverride (const GGS_midrange_5F_declaredRoutineMap & inMapToOverride
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_declaredRoutineMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_midrange_5F_declaredRoutineMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap GGS_midrange_5F_declaredRoutineMap::getter_overriddenMap (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_declaredRoutineMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_declaredRoutineMap::setter_insertKey (GGS_lstring inLKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_declaredRoutineMap_2E_element element (inLKey) ;
  const char * kInsertErrorMessage = "the '%K' routine is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_declaredRoutineMap::method_searchKey (GGS_lstring inLKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element> info ;
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
  }else{
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_midrange_5F_declaredRoutineMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element>> & inArray,
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

void GGS_midrange_5F_declaredRoutineMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element>> array = sortedInfoArray () ;
    GGS_midrange_5F_declaredRoutineMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_midrange_5F_declaredRoutineMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_midrange_5F_declaredRoutineMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @midrange_5F_declaredRoutineMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_midrange_5F_declaredRoutineMap::DownEnumerator_midrange_5F_declaredRoutineMap (const GGS_midrange_5F_declaredRoutineMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element DownEnumerator_midrange_5F_declaredRoutineMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_midrange_5F_declaredRoutineMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @midrange_5F_declaredRoutineMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_midrange_5F_declaredRoutineMap::UpEnumerator_midrange_5F_declaredRoutineMap (const GGS_midrange_5F_declaredRoutineMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element UpEnumerator_midrange_5F_declaredRoutineMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_midrange_5F_declaredRoutineMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @midrange_declaredRoutineMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap ("midrange_declaredRoutineMap",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_declaredRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_declaredRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_declaredRoutineMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap GGS_midrange_5F_declaredRoutineMap::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_declaredRoutineMap result ;
  const GGS_midrange_5F_declaredRoutineMap * p = (const GGS_midrange_5F_declaredRoutineMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_declaredRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_declaredRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum pic18RegisterComparison
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparison::GGS_pic_31__38_RegisterComparison (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparison GGS_pic_31__38_RegisterComparison::class_func_notEqual (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_RegisterComparison result ;
  result.mEnum = Enumeration::enum_notEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparison GGS_pic_31__38_RegisterComparison::class_func_equal (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_RegisterComparison result ;
  result.mEnum = Enumeration::enum_equal ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparison GGS_pic_31__38_RegisterComparison::class_func_greaterOrEqual (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_RegisterComparison result ;
  result.mEnum = Enumeration::enum_greaterOrEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparison GGS_pic_31__38_RegisterComparison::class_func_greater (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_RegisterComparison result ;
  result.mEnum = Enumeration::enum_greater ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparison GGS_pic_31__38_RegisterComparison::class_func_lowerOrEqual (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_RegisterComparison result ;
  result.mEnum = Enumeration::enum_lowerOrEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparison GGS_pic_31__38_RegisterComparison::class_func_lower (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_RegisterComparison result ;
  result.mEnum = Enumeration::enum_lower ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_pic_31__38_RegisterComparison [7] = {
  "(not built)",
  "notEqual",
  "equal",
  "greaterOrEqual",
  "greater",
  "lowerOrEqual",
  "lower"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_RegisterComparison::getter_isNotEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_notEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_RegisterComparison::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_equal == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_RegisterComparison::getter_isGreaterOrEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_greaterOrEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_RegisterComparison::getter_isGreater (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_greater == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_RegisterComparison::getter_isLowerOrEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lowerOrEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_RegisterComparison::getter_isLower (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lower == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RegisterComparison::description (String & ioString,
                                                     const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @pic18RegisterComparison: ") ;
  ioString.appendCString (gEnumNameArrayFor_pic_31__38_RegisterComparison [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @pic18RegisterComparison generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparison ("pic18RegisterComparison",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_RegisterComparison::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparison ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_RegisterComparison::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_RegisterComparison (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparison GGS_pic_31__38_RegisterComparison::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_RegisterComparison result ;
  const GGS_pic_31__38_RegisterComparison * p = (const GGS_pic_31__38_RegisterComparison *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_RegisterComparison *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RegisterComparison", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@conditional_branch condition'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_condition (const GGS_conditional_5F_branch & inObject,
                                      Compiler *
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_conditional_5F_branch temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_conditional_5F_branch::Enumeration::invalid:
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bz:
    {
      result_outResult = GGS_string ("Z") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnz:
    {
      result_outResult = GGS_string ("NZ") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bn:
    {
      result_outResult = GGS_string ("N") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnn:
    {
      result_outResult = GGS_string ("NN") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bc:
    {
      result_outResult = GGS_string ("C") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnc:
    {
      result_outResult = GGS_string ("NC") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bov:
    {
      result_outResult = GGS_string ("OV") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnov:
    {
      result_outResult = GGS_string ("NOV") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@pic18InstructionWithNoOperandKind assemblyCode'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_assemblyCode (const GGS_pic_31__38_InstructionWithNoOperandKind & inObject,
                                         Compiler *
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_pic_31__38_InstructionWithNoOperandKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::invalid:
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_CLRWDT:
    {
      result_outResult = GGS_string ("CLRWDT") ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_DAW:
    {
      result_outResult = GGS_string ("DAW") ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_NOP:
    {
      result_outResult = GGS_string ("NOP") ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_POP:
    {
      result_outResult = GGS_string ("POP") ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_PUSH:
    {
      result_outResult = GGS_string ("PUSH") ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_RESET:
    {
      result_outResult = GGS_string ("RESET") ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_SLEEP:
    {
      result_outResult = GGS_string ("SLEEP") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Enum FA_instruction_base_code
//--------------------------------------------------------------------------------------------------

GGS_FA_5F_instruction_5F_base_5F_code::GGS_FA_5F_instruction_5F_base_5F_code (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_FA_5F_instruction_5F_base_5F_code GGS_FA_5F_instruction_5F_base_5F_code::class_func_CLRF (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_CLRF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_instruction_5F_base_5F_code GGS_FA_5F_instruction_5F_base_5F_code::class_func_CPFSEQ (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_CPFSEQ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_instruction_5F_base_5F_code GGS_FA_5F_instruction_5F_base_5F_code::class_func_CPFSGT (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_CPFSGT ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_instruction_5F_base_5F_code GGS_FA_5F_instruction_5F_base_5F_code::class_func_CPFSLT (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_CPFSLT ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_instruction_5F_base_5F_code GGS_FA_5F_instruction_5F_base_5F_code::class_func_MOVWF (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_MOVWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_instruction_5F_base_5F_code GGS_FA_5F_instruction_5F_base_5F_code::class_func_MULWF (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_MULWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_instruction_5F_base_5F_code GGS_FA_5F_instruction_5F_base_5F_code::class_func_NEGF (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_NEGF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_instruction_5F_base_5F_code GGS_FA_5F_instruction_5F_base_5F_code::class_func_SETF (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_SETF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_instruction_5F_base_5F_code GGS_FA_5F_instruction_5F_base_5F_code::class_func_TSTFSZ (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_TSTFSZ ;
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

static const char * gEnumNameArrayFor_FA_5F_instruction_5F_base_5F_code [10] = {
  "(not built)",
  "CLRF",
  "CPFSEQ",
  "CPFSGT",
  "CPFSLT",
  "MOVWF",
  "MULWF",
  "NEGF",
  "SETF",
  "TSTFSZ"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_instruction_5F_base_5F_code::getter_isCLRF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CLRF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_instruction_5F_base_5F_code::getter_isCPFSEQ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CPFSEQ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_instruction_5F_base_5F_code::getter_isCPFSGT (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CPFSGT == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_instruction_5F_base_5F_code::getter_isCPFSLT (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CPFSLT == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_instruction_5F_base_5F_code::getter_isMOVWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_MOVWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_instruction_5F_base_5F_code::getter_isMULWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_MULWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_instruction_5F_base_5F_code::getter_isNEGF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_NEGF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_instruction_5F_base_5F_code::getter_isSETF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_SETF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_instruction_5F_base_5F_code::getter_isTSTFSZ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_TSTFSZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_FA_5F_instruction_5F_base_5F_code::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @FA_instruction_base_code: ") ;
  ioString.appendCString (gEnumNameArrayFor_FA_5F_instruction_5F_base_5F_code [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @FA_instruction_base_code generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_FA_5F_instruction_5F_base_5F_code ("FA_instruction_base_code",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_FA_5F_instruction_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_FA_5F_instruction_5F_base_5F_code ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_FA_5F_instruction_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_FA_5F_instruction_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_instruction_5F_base_5F_code GGS_FA_5F_instruction_5F_base_5F_code::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_FA_5F_instruction_5F_base_5F_code result ;
  const GGS_FA_5F_instruction_5F_base_5F_code * p = (const GGS_FA_5F_instruction_5F_base_5F_code *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_FA_5F_instruction_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("FA_instruction_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@bit_oriented_op mnemonic'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_bit_5F_oriented_5F_op & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_bit_5F_oriented_5F_op temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_bit_5F_oriented_5F_op::Enumeration::invalid:
    break ;
  case GGS_bit_5F_oriented_5F_op::Enumeration::enum_BCF:
    {
      result_outResult = GGS_string ("BCF") ;
    }
    break ;
  case GGS_bit_5F_oriented_5F_op::Enumeration::enum_BSF:
    {
      result_outResult = GGS_string ("BSF") ;
    }
    break ;
  case GGS_bit_5F_oriented_5F_op::Enumeration::enum_BTG:
    {
      result_outResult = GGS_string ("BTG") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@conditional_branch mnemonic'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_conditional_5F_branch & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_conditional_5F_branch temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_conditional_5F_branch::Enumeration::invalid:
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bz:
    {
      result_outResult = GGS_string ("BZ") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnz:
    {
      result_outResult = GGS_string ("BNZ") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bn:
    {
      result_outResult = GGS_string ("BN") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnn:
    {
      result_outResult = GGS_string ("BNN") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bc:
    {
      result_outResult = GGS_string ("BC") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnc:
    {
      result_outResult = GGS_string ("BNC") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bov:
    {
      result_outResult = GGS_string ("BOV") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnov:
    {
      result_outResult = GGS_string ("BNOV") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@literal_instruction_opcode mnemonic'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_literal_5F_instruction_5F_opcode & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_literal_5F_instruction_5F_opcode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::invalid:
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_ADDLW:
    {
      result_outResult = GGS_string ("ADDLW") ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_ANDLW:
    {
      result_outResult = GGS_string ("ANDLW") ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_IORLW:
    {
      result_outResult = GGS_string ("IORLW") ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_MOVLW:
    {
      result_outResult = GGS_string ("MOVLW") ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_MULLW:
    {
      result_outResult = GGS_string ("MULLW") ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_SUBLW:
    {
      result_outResult = GGS_string ("SUBLW") ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_XORLW:
    {
      result_outResult = GGS_string ("XORLW") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@tableAccessOption mnemonic'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_tableAccessOption & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_tableAccessOption temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_tableAccessOption::Enumeration::invalid:
    break ;
  case GGS_tableAccessOption::Enumeration::enum_simpleAccess:
    {
      result_outResult = GGS_string ("*") ;
    }
    break ;
  case GGS_tableAccessOption::Enumeration::enum_postIncrement:
    {
      result_outResult = GGS_string ("*+") ;
    }
    break ;
  case GGS_tableAccessOption::Enumeration::enum_postDecrement:
    {
      result_outResult = GGS_string ("*-") ;
    }
    break ;
  case GGS_tableAccessOption::Enumeration::enum_preIncrement:
    {
      result_outResult = GGS_string ("+*") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_registerExpression::GGS_midrange_5F_intermediate_5F_registerExpression (void) :
mProperty_mAssemblyString (),
mProperty_mRegisterAddress () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_registerExpression::GGS_midrange_5F_intermediate_5F_registerExpression (const GGS_midrange_5F_intermediate_5F_registerExpression & inSource) :
mProperty_mAssemblyString (inSource.mProperty_mAssemblyString),
mProperty_mRegisterAddress (inSource.mProperty_mRegisterAddress) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_registerExpression & GGS_midrange_5F_intermediate_5F_registerExpression::operator = (const GGS_midrange_5F_intermediate_5F_registerExpression & inSource) {
  mProperty_mAssemblyString = inSource.mProperty_mAssemblyString ;
  mProperty_mRegisterAddress = inSource.mProperty_mRegisterAddress ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_registerExpression GGS_midrange_5F_intermediate_5F_registerExpression::init_21__21_ (const GGS_string & in_mAssemblyString,
                                                                                                                     const GGS_uint & in_mRegisterAddress,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_registerExpression result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAssemblyString = in_mAssemblyString ;
  result.mProperty_mRegisterAddress = in_mRegisterAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_intermediate_5F_registerExpression::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_registerExpression::GGS_midrange_5F_intermediate_5F_registerExpression (const GGS_string & inOperand0,
                                                                                                        const GGS_uint & inOperand1) :
mProperty_mAssemblyString (inOperand0),
mProperty_mRegisterAddress (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_intermediate_5F_registerExpression::isValid (void) const {
  return mProperty_mAssemblyString.isValid () && mProperty_mRegisterAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_intermediate_5F_registerExpression::drop (void) {
  mProperty_mAssemblyString.drop () ;
  mProperty_mRegisterAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_intermediate_5F_registerExpression::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @midrange_intermediate_registerExpression:") ;
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
//     @midrange_intermediate_registerExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_registerExpression ("midrange_intermediate_registerExpression",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_registerExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_registerExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_registerExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_registerExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_registerExpression GGS_midrange_5F_intermediate_5F_registerExpression::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_registerExpression result ;
  const GGS_midrange_5F_intermediate_5F_registerExpression * p = (const GGS_midrange_5F_intermediate_5F_registerExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_registerExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_registerExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

class CollectionElementPtr_midrange_5F_intermediate_5F_instructionList : public CollectionElementPtr {
  public: GGS_midrange_5F_intermediate_5F_instructionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_midrange_5F_intermediate_5F_instructionList (const GGS_midrange_5F_intermediate_5F_instruction & in_mInstruction
                                                                            COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_midrange_5F_intermediate_5F_instructionList (const GGS_midrange_5F_intermediate_5F_instructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_midrange_5F_intermediate_5F_instructionList::CollectionElementPtr_midrange_5F_intermediate_5F_instructionList (const GGS_midrange_5F_intermediate_5F_instruction & in_mInstruction
                                                                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_midrange_5F_intermediate_5F_instructionList::CollectionElementPtr_midrange_5F_intermediate_5F_instructionList (const GGS_midrange_5F_intermediate_5F_instructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_midrange_5F_intermediate_5F_instructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_midrange_5F_intermediate_5F_instructionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_midrange_5F_intermediate_5F_instructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @midrange_5F_intermediate_5F_instructionList
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instructionList::GGS_midrange_5F_intermediate_5F_instructionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instructionList::GGS_midrange_5F_intermediate_5F_instructionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_midrange_5F_intermediate_5F_instructionList * p = (CollectionElementPtr_midrange_5F_intermediate_5F_instructionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_midrange_5F_intermediate_5F_instructionList) ;
    const GGS_midrange_5F_intermediate_5F_instructionList_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_intermediate_5F_instructionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                                 const GGS_midrange_5F_intermediate_5F_instruction & in_mInstruction
                                                                                 COMMA_LOCATION_ARGS) {
  CollectionElementPtr_midrange_5F_intermediate_5F_instructionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_midrange_5F_intermediate_5F_instructionList (in_mInstruction COMMA_THERE)) ;
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

AbstractPtrClass * cPtr_midrange_5F_intermediate_5F_NULL::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

GGS_midrange_5F_intermediate_5F_NULL_2E_weak::GGS_midrange_5F_intermediate_5F_NULL_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_NULL_2E_weak & GGS_midrange_5F_intermediate_5F_NULL_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_NULL & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

AbstractPtrClass * cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak::GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak & GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak & GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
// @midrange_5F_intermediate_5F_actualInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_actualInstruction::objectCompare (const GGS_midrange_5F_intermediate_5F_actualInstruction & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_actualInstruction::GGS_midrange_5F_intermediate_5F_actualInstruction (void) :
GGS_midrange_5F_intermediate_5F_instruction () {
}


void cPtr_midrange_5F_intermediate_5F_actualInstruction::
midrange_5F_intermediate_5F_actualInstruction_init_21_ (const GGS_location & in_mInstructionLocation,
                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_actualInstruction::GGS_midrange_5F_intermediate_5F_actualInstruction (const cPtr_midrange_5F_intermediate_5F_actualInstruction * inSourcePtr) :
GGS_midrange_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_actualInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_midrange_5F_intermediate_5F_actualInstruction::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_actualInstruction * p = (cPtr_midrange_5F_intermediate_5F_actualInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_actualInstruction) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_actualInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_actualInstruction::cPtr_midrange_5F_intermediate_5F_actualInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_actualInstruction::cPtr_midrange_5F_intermediate_5F_actualInstruction (const GGS_location & in_mInstructionLocation,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_actualInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction ("midrange_intermediate_actualInstruction",
                                                                                                  & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_actualInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_actualInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_actualInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_actualInstruction GGS_midrange_5F_intermediate_5F_actualInstruction::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_actualInstruction result ;
  const GGS_midrange_5F_intermediate_5F_actualInstruction * p = (const GGS_midrange_5F_intermediate_5F_actualInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_actualInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_actualInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak::GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak & GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_actualInstruction & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
// @midrange_5F_intermediate_5F_instruction_5F_FD reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_FD::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_FD & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_FD::GGS_midrange_5F_intermediate_5F_instruction_5F_FD (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_FD GGS_midrange_5F_intermediate_5F_instruction_5F_FD::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                      const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GGS_bool & in_m_5F_W_5F_isDestination,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD (inCompiler COMMA_THERE)) ;
  object->midrange_5F_intermediate_5F_instruction_5F_FD_init_21__21__21__21_ (in_mInstructionLocation, in_mInstruction_5F_FD_5F_base_5F_code, in_mRegisterDescription, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FD result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::
midrange_5F_intermediate_5F_instruction_5F_FD_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                                    const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                    const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction_5F_FD_5F_base_5F_code = in_mInstruction_5F_FD_5F_base_5F_code ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_FD::GGS_midrange_5F_intermediate_5F_instruction_5F_FD (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * inSourcePtr) :
GGS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code GGS_midrange_5F_intermediate_5F_instruction_5F_FD::readProperty_mInstruction_5F_FD_5F_base_5F_code (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
    return p->mProperty_mInstruction_5F_FD_5F_base_5F_code ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_registerExpression GGS_midrange_5F_intermediate_5F_instruction_5F_FD::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_intermediate_5F_instruction_5F_FD::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction_FD class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::cPtr_midrange_5F_intermediate_5F_instruction_5F_FD (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction_5F_FD_5F_base_5F_code (),
mProperty_mRegisterDescription (),
mProperty_m_5F_W_5F_isDestination () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::cPtr_midrange_5F_intermediate_5F_instruction_5F_FD (const GGS_location & in_mInstructionLocation,
                                                                                                        const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                                                                        const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                        const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstruction_5F_FD_5F_base_5F_code (),
mProperty_mRegisterDescription (),
mProperty_m_5F_W_5F_isDestination () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction_5F_FD_5F_base_5F_code = in_mInstruction_5F_FD_5F_base_5F_code ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_instruction_FD:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction_5F_FD_5F_base_5F_code.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD (mProperty_mInstructionLocation, mProperty_mInstruction_5F_FD_5F_base_5F_code, mProperty_mRegisterDescription, mProperty_m_5F_W_5F_isDestination, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction_5F_FD_5F_base_5F_code.printNonNullClassInstanceProperties ("mInstruction_FD_base_code") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction_FD generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD ("midrange_intermediate_instruction_FD",
                                                                                                  & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction_5F_FD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction_5F_FD::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction_5F_FD (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_FD GGS_midrange_5F_intermediate_5F_instruction_5F_FD::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_FD result ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FD * p = (const GGS_midrange_5F_intermediate_5F_instruction_5F_FD *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction_5F_FD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_FD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction_5F_FD & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
// @midrange_5F_intermediate_5F_instruction_5F_F reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_F::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_F & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_F::GGS_midrange_5F_intermediate_5F_instruction_5F_F (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_F GGS_midrange_5F_intermediate_5F_instruction_5F_F::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFinstruction,
                  const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_intermediate_5F_instruction_5F_F * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_F (inCompiler COMMA_THERE)) ;
  object->midrange_5F_intermediate_5F_instruction_5F_F_init_21__21__21_ (in_mInstructionLocation, in_mFinstruction, in_mRegisterDescription, inCompiler) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_F result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_F::
midrange_5F_intermediate_5F_instruction_5F_F_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                               const GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFinstruction,
                                                               const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFinstruction = in_mFinstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_F::GGS_midrange_5F_intermediate_5F_instruction_5F_F (const cPtr_midrange_5F_intermediate_5F_instruction_5F_F * inSourcePtr) :
GGS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_F) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_F_5F_instruction_5F_base_5F_code GGS_midrange_5F_intermediate_5F_instruction_5F_F::readProperty_mFinstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_F_5F_instruction_5F_base_5F_code () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_F * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_F) ;
    return p->mProperty_mFinstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_registerExpression GGS_midrange_5F_intermediate_5F_instruction_5F_F::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_F * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_F) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction_F class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_F::cPtr_midrange_5F_intermediate_5F_instruction_5F_F (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mFinstruction (),
mProperty_mRegisterDescription () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_F::cPtr_midrange_5F_intermediate_5F_instruction_5F_F (const GGS_location & in_mInstructionLocation,
                                                                                                      const GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFinstruction,
                                                                                                      const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mFinstruction (),
mProperty_mRegisterDescription () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFinstruction = in_mFinstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_F::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_F::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_instruction_F:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFinstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_intermediate_5F_instruction_5F_F::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_F (mProperty_mInstructionLocation, mProperty_mFinstruction, mProperty_mRegisterDescription, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction_5F_F::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mFinstruction.printNonNullClassInstanceProperties ("mFinstruction") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction_F generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F ("midrange_intermediate_instruction_F",
                                                                                                 & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction_5F_F::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction_5F_F::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction_5F_F (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_F GGS_midrange_5F_intermediate_5F_instruction_5F_F::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_F result ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_F * p = (const GGS_midrange_5F_intermediate_5F_instruction_5F_F *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction_5F_F *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_F", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction_5F_F & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
// @midrange_5F_intermediate_5F_instruction_5F_FB reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_FB::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_FB & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_FB::GGS_midrange_5F_intermediate_5F_instruction_5F_FB (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_FB GGS_midrange_5F_intermediate_5F_instruction_5F_FB::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                      const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GGS_uint & in_mBitNumber,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB (inCompiler COMMA_THERE)) ;
  object->midrange_5F_intermediate_5F_instruction_5F_FB_init_21__21__21__21_ (in_mInstructionLocation, in_mBitOrientedOp, in_mRegisterDescription, in_mBitNumber, inCompiler) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::
midrange_5F_intermediate_5F_instruction_5F_FB_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                    const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                    const GGS_uint & in_mBitNumber,
                                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBitOrientedOp = in_mBitOrientedOp ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_FB::GGS_midrange_5F_intermediate_5F_instruction_5F_FB (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * inSourcePtr) :
GGS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_bit_5F_oriented_5F_op GGS_midrange_5F_intermediate_5F_instruction_5F_FB::readProperty_mBitOrientedOp (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_bit_5F_oriented_5F_op () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
    return p->mProperty_mBitOrientedOp ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_registerExpression GGS_midrange_5F_intermediate_5F_instruction_5F_FB::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_midrange_5F_intermediate_5F_instruction_5F_FB::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction_FB class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::cPtr_midrange_5F_intermediate_5F_instruction_5F_FB (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mBitOrientedOp (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::cPtr_midrange_5F_intermediate_5F_instruction_5F_FB (const GGS_location & in_mInstructionLocation,
                                                                                                        const GGS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                                                        const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                        const GGS_uint & in_mBitNumber,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mBitOrientedOp (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBitOrientedOp = in_mBitOrientedOp ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_instruction_FB:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitOrientedOp.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB (mProperty_mInstructionLocation, mProperty_mBitOrientedOp, mProperty_mRegisterDescription, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mBitOrientedOp.printNonNullClassInstanceProperties ("mBitOrientedOp") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction_FB generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB ("midrange_intermediate_instruction_FB",
                                                                                                  & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction_5F_FB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction_5F_FB::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction_5F_FB (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_FB GGS_midrange_5F_intermediate_5F_instruction_5F_FB::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_FB result ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB * p = (const GGS_midrange_5F_intermediate_5F_instruction_5F_FB *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction_5F_FB *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_FB", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction_5F_FB & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
// @midrange_5F_intermediate_5F_instruction_5F_BitTestSkip reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_bool & in_mSkipIfSet,
                      const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GGS_uint & in_mBitNumber,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (inCompiler COMMA_THERE)) ;
  object->midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_init_21__21__21__21_ (in_mInstructionLocation, in_mSkipIfSet, in_mRegisterDescription, in_mBitNumber, inCompiler) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::
midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                             const GGS_bool & in_mSkipIfSet,
                                                                             const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                             const GGS_uint & in_mBitNumber,
                                                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * inSourcePtr) :
GGS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::readProperty_mSkipIfSet (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mSkipIfSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_registerExpression GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction_BitTestSkip class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (const GGS_location & in_mInstructionLocation,
                                                                                                                          const GGS_bool & in_mSkipIfSet,
                                                                                                                          const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                          const GGS_uint & in_mBitNumber,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_instruction_BitTestSkip:") ;
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

AbstractPtrClass * cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (mProperty_mInstructionLocation, mProperty_mSkipIfSet, mProperty_mRegisterDescription, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mSkipIfSet.printNonNullClassInstanceProperties ("mSkipIfSet") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction_BitTestSkip generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip ("midrange_intermediate_instruction_BitTestSkip",
                                                                                                           & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_BitTestSkip", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_midrange_5F_intermediate_5F_JUMP_2E_weak::GGS_midrange_5F_intermediate_5F_JUMP_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_JUMP_2E_weak & GGS_midrange_5F_intermediate_5F_JUMP_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_JUMP & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_midrange_5F_intermediate_5F_GOTO_2E_weak::GGS_midrange_5F_intermediate_5F_GOTO_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_GOTO_2E_weak & GGS_midrange_5F_intermediate_5F_GOTO_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_GOTO & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_midrange_5F_intermediate_5F_CALL_2E_weak::GGS_midrange_5F_intermediate_5F_CALL_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_CALL_2E_weak & GGS_midrange_5F_intermediate_5F_CALL_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_CALL & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_midrange_5F_intermediate_5F_JSR_2E_weak::GGS_midrange_5F_intermediate_5F_JSR_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_JSR_2E_weak & GGS_midrange_5F_intermediate_5F_JSR_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_JSR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
// @midrange_5F_intermediate_5F_instruction_5F_CLRWDT reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::
init_21_ (const GGS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (inCompiler COMMA_THERE)) ;
  object->midrange_5F_intermediate_5F_instruction_5F_CLRWDT_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::
midrange_5F_intermediate_5F_instruction_5F_CLRWDT_init_21_ (const GGS_location & in_mInstructionLocation,
                                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT * inSourcePtr) :
GGS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction_CLRWDT class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (const GGS_location & in_mInstructionLocation,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_instruction_CLRWDT:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (mProperty_mInstructionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction_CLRWDT generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT ("midrange_intermediate_instruction_CLRWDT",
                                                                                                      & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT result ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT * p = (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_CLRWDT", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
// @midrange_5F_intermediate_5F_instruction_5F_CLRW reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW::GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW::
init_21_ (const GGS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW (inCompiler COMMA_THERE)) ;
  object->midrange_5F_intermediate_5F_instruction_5F_CLRW_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::
midrange_5F_intermediate_5F_instruction_5F_CLRW_init_21_ (const GGS_location & in_mInstructionLocation,
                                                          Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW::GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW (const cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW * inSourcePtr) :
GGS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction_CLRW class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW (const GGS_location & in_mInstructionLocation,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_instruction_CLRW:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW (mProperty_mInstructionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction_CLRW generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW ("midrange_intermediate_instruction_CLRW",
                                                                                                    & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW result ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW * p = (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_CLRW", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
// @midrange_5F_intermediate_5F_instruction_5F_NOP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_NOP::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_NOP & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_NOP::GGS_midrange_5F_intermediate_5F_instruction_5F_NOP (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_NOP GGS_midrange_5F_intermediate_5F_instruction_5F_NOP::
init_21_ (const GGS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP (inCompiler COMMA_THERE)) ;
  object->midrange_5F_intermediate_5F_instruction_5F_NOP_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_NOP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::
midrange_5F_intermediate_5F_instruction_5F_NOP_init_21_ (const GGS_location & in_mInstructionLocation,
                                                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_NOP::GGS_midrange_5F_intermediate_5F_instruction_5F_NOP (const cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP * inSourcePtr) :
GGS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction_NOP class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP (const GGS_location & in_mInstructionLocation,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_instruction_NOP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP (mProperty_mInstructionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction_NOP generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP ("midrange_intermediate_instruction_NOP",
                                                                                                   & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction_5F_NOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction_5F_NOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction_5F_NOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_NOP GGS_midrange_5F_intermediate_5F_instruction_5F_NOP::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_NOP result ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_NOP * p = (const GGS_midrange_5F_intermediate_5F_instruction_5F_NOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction_5F_NOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_NOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction_5F_NOP & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
// @midrange_5F_intermediate_5F_instruction_5F_RETURN reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN::GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN::
init_21_ (const GGS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN (inCompiler COMMA_THERE)) ;
  object->midrange_5F_intermediate_5F_instruction_5F_RETURN_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::
midrange_5F_intermediate_5F_instruction_5F_RETURN_init_21_ (const GGS_location & in_mInstructionLocation,
                                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN::GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN (const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN * inSourcePtr) :
GGS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction_RETURN class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN (const GGS_location & in_mInstructionLocation,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_instruction_RETURN:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN (mProperty_mInstructionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction_RETURN generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN ("midrange_intermediate_instruction_RETURN",
                                                                                                      & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN result ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN * p = (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_RETURN", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
// @midrange_5F_intermediate_5F_instruction_5F_RETFIE reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::
init_21_ (const GGS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE (inCompiler COMMA_THERE)) ;
  object->midrange_5F_intermediate_5F_instruction_5F_RETFIE_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::
midrange_5F_intermediate_5F_instruction_5F_RETFIE_init_21_ (const GGS_location & in_mInstructionLocation,
                                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE (const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE * inSourcePtr) :
GGS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction_RETFIE class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE (const GGS_location & in_mInstructionLocation,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_instruction_RETFIE:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE (mProperty_mInstructionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction_RETFIE generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE ("midrange_intermediate_instruction_RETFIE",
                                                                                                      & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE result ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE * p = (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_RETFIE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
// @midrange_5F_intermediate_5F_instruction_5F_SLEEP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::
init_21_ (const GGS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP (inCompiler COMMA_THERE)) ;
  object->midrange_5F_intermediate_5F_instruction_5F_SLEEP_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::
midrange_5F_intermediate_5F_instruction_5F_SLEEP_init_21_ (const GGS_location & in_mInstructionLocation,
                                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP (const cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP * inSourcePtr) :
GGS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction_SLEEP class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP (const GGS_location & in_mInstructionLocation,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_instruction_SLEEP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP (mProperty_mInstructionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction_SLEEP generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP ("midrange_intermediate_instruction_SLEEP",
                                                                                                     & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP result ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP * p = (const GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_SLEEP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
// @midrange_5F_intermediate_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                  const GGS_uint & in_mLiteralValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation (inCompiler COMMA_THERE)) ;
  object->midrange_5F_intermediate_5F_instruction_5F_literalOperation_init_21__21__21_ (in_mInstructionLocation, in_mLiteralInstruction, in_mLiteralValue, inCompiler) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::
midrange_5F_intermediate_5F_instruction_5F_literalOperation_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                              const GGS_uint & in_mLiteralValue,
                                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralInstruction = in_mLiteralInstruction ;
  mProperty_mLiteralValue = in_mLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) :
GGS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_literal_5F_instruction_5F_opcode GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::readProperty_mLiteralInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_literal_5F_instruction_5F_opcode () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mLiteralInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::readProperty_mLiteralValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mLiteralValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mLiteralInstruction (),
mProperty_mLiteralValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation (const GGS_location & in_mInstructionLocation,
                                                                                                                                    const GGS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                                                                    const GGS_uint & in_mLiteralValue,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mLiteralInstruction (),
mProperty_mLiteralValue () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralInstruction = in_mLiteralInstruction ;
  mProperty_mLiteralValue = in_mLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::description (String & ioString,
                                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_instruction_literalOperation:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation (mProperty_mInstructionLocation, mProperty_mLiteralInstruction, mProperty_mLiteralValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralInstruction.printNonNullClassInstanceProperties ("mLiteralInstruction") ;
    mProperty_mLiteralValue.printNonNullClassInstanceProperties ("mLiteralValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction_literalOperation generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation ("midrange_intermediate_instruction_literalOperation",
                                                                                                                & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::extractObject (const GGS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation result ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation * p = (const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak & GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
// @midrange_5F_intermediate_5F_incDecRegisterInCondition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition::objectCompare (const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition::GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition::
init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                              const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                              const GGS_string & in_mTargetLabel,
                              const GGS_bool & in_mIncrement,
                              const GGS_bool & in_m_5F_W_5F_isDestination,
                              const GGS_bool & in_mBranchIfZero,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition (inCompiler COMMA_THERE)) ;
  object->midrange_5F_intermediate_5F_incDecRegisterInCondition_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mRegisterDescription, in_mTargetLabel, in_mIncrement, in_m_5F_W_5F_isDestination, in_mBranchIfZero, inCompiler) ;
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::
midrange_5F_intermediate_5F_incDecRegisterInCondition_init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                                    const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
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

GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition::GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * inSourcePtr) :
GGS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_registerExpression GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition::readProperty_mIncrement (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
    return p->mProperty_mIncrement ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition::readProperty_mBranchIfZero (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
    return p->mProperty_mBranchIfZero ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_incDecRegisterInCondition class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mRegisterDescription (),
mProperty_mTargetLabel (),
mProperty_mIncrement (),
mProperty_m_5F_W_5F_isDestination (),
mProperty_mBranchIfZero () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition (const GGS_location & in_mInstructionLocation,
                                                                                                                        const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                        const GGS_string & in_mTargetLabel,
                                                                                                                        const GGS_bool & in_mIncrement,
                                                                                                                        const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                                                        const GGS_bool & in_mBranchIfZero,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition ;
}

void cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_incDecRegisterInCondition:") ;
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

AbstractPtrClass * cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition (mProperty_mInstructionLocation, mProperty_mRegisterDescription, mProperty_mTargetLabel, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination, mProperty_mBranchIfZero, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
    mProperty_mIncrement.printNonNullClassInstanceProperties ("mIncrement") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
    mProperty_mBranchIfZero.printNonNullClassInstanceProperties ("mBranchIfZero") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_incDecRegisterInCondition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition ("midrange_intermediate_incDecRegisterInCondition",
                                                                                                          & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition result ;
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition * p = (const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_incDecRegisterInCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::objectCompare (const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak & GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::operator = (const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//
//Abstract extension method '@midrange_intermediate_instruction print'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_print (cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                GGS_string & io_ioListFileContents,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    inObject->method_print (io_ioListFileContents, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@baseline_intermediate_instruction length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint callExtensionGetter_length (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  GGS_uint result ;
  if (nullptr != inObject) {
    result = inObject->getter_length (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_PiccoloSimpleInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_PiccoloSimpleInstruction::objectCompare (const GGS_pic_31__38_PiccoloSimpleInstruction & inOperand) const {
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

GGS_pic_31__38_PiccoloSimpleInstruction::GGS_pic_31__38_PiccoloSimpleInstruction (void) :
GGS_pic_31__38_PiccoloInstruction () {
}


void cPtr_pic_31__38_PiccoloSimpleInstruction::
pic_31__38_PiccoloSimpleInstruction_init_21_ (const GGS_location & in_mInstructionLocation,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_PiccoloSimpleInstruction::GGS_pic_31__38_PiccoloSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_PiccoloSimpleInstruction) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18PiccoloSimpleInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_PiccoloSimpleInstruction::cPtr_pic_31__38_PiccoloSimpleInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_PiccoloSimpleInstruction::cPtr_pic_31__38_PiccoloSimpleInstruction (const GGS_location & in_mInstructionLocation,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_PiccoloSimpleInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18PiccoloSimpleInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction ("pic18PiccoloSimpleInstruction",
                                                                                        & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_PiccoloSimpleInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_PiccoloSimpleInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_PiccoloSimpleInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_PiccoloSimpleInstruction GGS_pic_31__38_PiccoloSimpleInstruction::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_PiccoloSimpleInstruction result ;
  const GGS_pic_31__38_PiccoloSimpleInstruction * p = (const GGS_pic_31__38_PiccoloSimpleInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_PiccoloSimpleInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18PiccoloSimpleInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18PiccoloInstruction analyze'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyze (cPtr_pic_31__38_PiccoloInstruction * inObject,
                                  const GGS_uint constin_inAccessBankSplitOffset,
                                  GGS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                  const GGS_routineMap constin_inRoutineMap,
                                  const GGS_registerTable constin_inRegisterTable,
                                  const GGS_pic_31__38__5F_dataMap constin_inDataMap,
                                  const GGS_constantMap constin_inConstantMap,
                                  const GGS_pic_31__38_MacroMap constin_inMacroMap,
                                  GGS_uint & io_ioLocalLabelIndex,
                                  GGS_ipic_31__38_SequentialInstructionList & io_ioGeneratedInstructionList,
                                  GGS_lstring & io_ioBlockLabel,
                                  GGS_string & io_ioListFileContents,
                                  GGS_uint & io_ioCurrentBank,
                                  const GGS_bool constin_inShouldPreserveBSR,
                                  const GGS_routineKind constin_inRoutineKind,
                                  GGS_stringset & io_ioUsedRegisters,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_PiccoloInstruction) ;
    inObject->method_analyze (constin_inAccessBankSplitOffset, io_ioGeneratedBlockList, constin_inRoutineMap, constin_inRegisterTable, constin_inDataMap, constin_inConstantMap, constin_inMacroMap, io_ioLocalLabelIndex, io_ioGeneratedInstructionList, io_ioBlockLabel, io_ioListFileContents, io_ioCurrentBank, constin_inShouldPreserveBSR, constin_inRoutineKind, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//  Map type @blockInstructionBlockMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap::GGS_blockInstructionBlockMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap::~ GGS_blockInstructionBlockMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap::GGS_blockInstructionBlockMap (const GGS_blockInstructionBlockMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap & GGS_blockInstructionBlockMap::operator = (const GGS_blockInstructionBlockMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap GGS_blockInstructionBlockMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_blockInstructionBlockMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_blockInstructionBlockMap::getter_hasKey (const GGS_string & inKey
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_blockInstructionBlockMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                             const GGS_uint & inLevel
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_blockInstructionBlockMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_blockInstructionBlockMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_blockInstructionBlockMap::getter_locationForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_blockInstructionBlockMap::getter_keyList (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockInstructionBlockMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_blockInstructionBlockMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::performInsert (const GGS_blockInstructionBlockMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_blockInstructionBlockMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element>
GGS_blockInstructionBlockMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_blockInstructionBlockMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element>>
GGS_blockInstructionBlockMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_blockInstructionBlockMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element_3F_ GGS_blockInstructionBlockMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_blockInstructionBlockMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_blockInstructionBlockMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_blockInstructionBlockMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mInstructionList = info->mProperty_mInstructionList ;
      element.mProperty_mBlockTerminaisonForBlockInstruction = info->mProperty_mBlockTerminaisonForBlockInstruction ;
      element.mProperty_mEndOfBlock = info->mProperty_mEndOfBlock ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap GGS_blockInstructionBlockMap::class_func_mapWithMapToOverride (const GGS_blockInstructionBlockMap & inMapToOverride
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_blockInstructionBlockMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_blockInstructionBlockMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap GGS_blockInstructionBlockMap::getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_blockInstructionBlockMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::setter_insertKey (GGS_lstring inLKey,
                                                     GGS_pic_31__38_InstructionList inArgument0,
                                                     GGS_abstractBlockTerminationForBlockInstruction inArgument1,
                                                     GGS_location inArgument2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const GGS_blockInstructionBlockMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "the '%K' block is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::method_searchKey (GGS_lstring inLKey,
                                                     GGS_pic_31__38_InstructionList & outArgument0,
                                                     GGS_abstractBlockTerminationForBlockInstruction & outArgument1,
                                                     GGS_location & outArgument2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element> info ;
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
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    outArgument0 = info->mProperty_mInstructionList ;
    outArgument1 = info->mProperty_mBlockTerminaisonForBlockInstruction ;
    outArgument2 = info->mProperty_mEndOfBlock ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList GGS_blockInstructionBlockMap::getter_mInstructionListForKey (const GGS_string & inKey,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_InstructionList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element> info = infoForKey (key) ;
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

GGS_abstractBlockTerminationForBlockInstruction GGS_blockInstructionBlockMap::getter_mBlockTerminaisonForBlockInstructionForKey (const GGS_string & inKey,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_abstractBlockTerminationForBlockInstruction result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mBlockTerminaisonForBlockInstruction ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_blockInstructionBlockMap::getter_mEndOfBlockForKey (const GGS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mEndOfBlock ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::setter_setMInstructionListForKey (GGS_pic_31__38_InstructionList inValue,
                                                                     GGS_string inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_blockInstructionBlockMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_blockInstructionBlockMap::setter_setMBlockTerminaisonForBlockInstructionForKey (GGS_abstractBlockTerminationForBlockInstruction inValue,
                                                                                         GGS_string inKey,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_blockInstructionBlockMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mBlockTerminaisonForBlockInstruction = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::setter_setMEndOfBlockForKey (GGS_location inValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_blockInstructionBlockMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mEndOfBlock = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_blockInstructionBlockMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element>> & inArray,
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
    ioString.appendString ("mInstructionList:") ;
    inArray (i COMMA_HERE)->mProperty_mInstructionList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mBlockTerminaisonForBlockInstruction:") ;
    inArray (i COMMA_HERE)->mProperty_mBlockTerminaisonForBlockInstruction.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mEndOfBlock:") ;
    inArray (i COMMA_HERE)->mProperty_mEndOfBlock.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element>> array = sortedInfoArray () ;
    GGS_blockInstructionBlockMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_blockInstructionBlockMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_blockInstructionBlockMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @blockInstructionBlockMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_blockInstructionBlockMap::DownEnumerator_blockInstructionBlockMap (const GGS_blockInstructionBlockMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element DownEnumerator_blockInstructionBlockMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_blockInstructionBlockMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList DownEnumerator_blockInstructionBlockMap::current_mInstructionList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBlockTerminationForBlockInstruction DownEnumerator_blockInstructionBlockMap::current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBlockTerminaisonForBlockInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_blockInstructionBlockMap::current_mEndOfBlock (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mEndOfBlock ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @blockInstructionBlockMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_blockInstructionBlockMap::UpEnumerator_blockInstructionBlockMap (const GGS_blockInstructionBlockMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element UpEnumerator_blockInstructionBlockMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_blockInstructionBlockMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList UpEnumerator_blockInstructionBlockMap::current_mInstructionList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBlockTerminationForBlockInstruction UpEnumerator_blockInstructionBlockMap::current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBlockTerminaisonForBlockInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_blockInstructionBlockMap::current_mEndOfBlock (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mEndOfBlock ;
}


//--------------------------------------------------------------------------------------------------
//     @blockInstructionBlockMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInstructionBlockMap ("blockInstructionBlockMap",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockInstructionBlockMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInstructionBlockMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_blockInstructionBlockMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_blockInstructionBlockMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap GGS_blockInstructionBlockMap::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_blockInstructionBlockMap result ;
  const GGS_blockInstructionBlockMap * p = (const GGS_blockInstructionBlockMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_blockInstructionBlockMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockInstructionBlockMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractBlockTerminationForBlockInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractBlockTerminationForBlockInstruction::objectCompare (const GGS_abstractBlockTerminationForBlockInstruction & inOperand) const {
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

GGS_abstractBlockTerminationForBlockInstruction::GGS_abstractBlockTerminationForBlockInstruction (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractBlockTerminationForBlockInstruction::
abstractBlockTerminationForBlockInstruction_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBlockTerminationForBlockInstruction::GGS_abstractBlockTerminationForBlockInstruction (const cPtr_abstractBlockTerminationForBlockInstruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractBlockTerminationForBlockInstruction) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractBlockTerminationForBlockInstruction class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractBlockTerminationForBlockInstruction::cPtr_abstractBlockTerminationForBlockInstruction (Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractBlockTerminationForBlockInstruction::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractBlockTerminationForBlockInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction ("abstractBlockTerminationForBlockInstruction",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractBlockTerminationForBlockInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractBlockTerminationForBlockInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractBlockTerminationForBlockInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBlockTerminationForBlockInstruction GGS_abstractBlockTerminationForBlockInstruction::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_abstractBlockTerminationForBlockInstruction result ;
  const GGS_abstractBlockTerminationForBlockInstruction * p = (const GGS_abstractBlockTerminationForBlockInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractBlockTerminationForBlockInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractBlockTerminationForBlockInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @blockInitialBankSelectionMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap::GGS_blockInitialBankSelectionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap::~ GGS_blockInitialBankSelectionMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap::GGS_blockInitialBankSelectionMap (const GGS_blockInitialBankSelectionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap & GGS_blockInitialBankSelectionMap::operator = (const GGS_blockInitialBankSelectionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap GGS_blockInitialBankSelectionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_blockInitialBankSelectionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_blockInitialBankSelectionMap::getter_hasKey (const GGS_string & inKey
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_blockInitialBankSelectionMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                 const GGS_uint & inLevel
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_blockInitialBankSelectionMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_blockInitialBankSelectionMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_blockInitialBankSelectionMap::getter_locationForKey (const GGS_string & inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_blockInitialBankSelectionMap::getter_keyList (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockInitialBankSelectionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_blockInitialBankSelectionMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap::performInsert (const GGS_blockInitialBankSelectionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_blockInitialBankSelectionMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element>
GGS_blockInitialBankSelectionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_blockInitialBankSelectionMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element>>
GGS_blockInitialBankSelectionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_blockInitialBankSelectionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element_3F_ GGS_blockInitialBankSelectionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_blockInitialBankSelectionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_blockInitialBankSelectionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_blockInitialBankSelectionMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mInitialBankSelection = info->mProperty_mInitialBankSelection ;
      element.mProperty_mSourceBlock = info->mProperty_mSourceBlock ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap GGS_blockInitialBankSelectionMap::class_func_mapWithMapToOverride (const GGS_blockInitialBankSelectionMap & inMapToOverride
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_blockInitialBankSelectionMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_blockInitialBankSelectionMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap GGS_blockInitialBankSelectionMap::getter_overriddenMap (Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_blockInitialBankSelectionMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap::setter_insertKey (GGS_lstring inLKey,
                                                         GGS_uint inArgument0,
                                                         GGS_string inArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  const GGS_blockInitialBankSelectionMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' block is already declared (internal error)" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap::method_searchKey (GGS_lstring inLKey,
                                                         GGS_uint & outArgument0,
                                                         GGS_string & outArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' block is not declared (internal error)" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mInitialBankSelection ;
    outArgument1 = info->mProperty_mSourceBlock ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_blockInitialBankSelectionMap::getter_mInitialBankSelectionForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mInitialBankSelection ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_blockInitialBankSelectionMap::getter_mSourceBlockForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSourceBlock ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap::setter_setMInitialBankSelectionForKey (GGS_uint inValue,
                                                                              GGS_string inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_blockInitialBankSelectionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mInitialBankSelection = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap::setter_setMSourceBlockForKey (GGS_string inValue,
                                                                     GGS_string inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_blockInitialBankSelectionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSourceBlock = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_blockInitialBankSelectionMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element>> & inArray,
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
    ioString.appendString ("mInitialBankSelection:") ;
    inArray (i COMMA_HERE)->mProperty_mInitialBankSelection.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mSourceBlock:") ;
    inArray (i COMMA_HERE)->mProperty_mSourceBlock.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element>> array = sortedInfoArray () ;
    GGS_blockInitialBankSelectionMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_blockInitialBankSelectionMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_blockInitialBankSelectionMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @blockInitialBankSelectionMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_blockInitialBankSelectionMap::DownEnumerator_blockInitialBankSelectionMap (const GGS_blockInitialBankSelectionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element DownEnumerator_blockInitialBankSelectionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_blockInitialBankSelectionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_blockInitialBankSelectionMap::current_mInitialBankSelection (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInitialBankSelection ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_blockInitialBankSelectionMap::current_mSourceBlock (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSourceBlock ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @blockInitialBankSelectionMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_blockInitialBankSelectionMap::UpEnumerator_blockInitialBankSelectionMap (const GGS_blockInitialBankSelectionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element UpEnumerator_blockInitialBankSelectionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_blockInitialBankSelectionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_blockInitialBankSelectionMap::current_mInitialBankSelection (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInitialBankSelection ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_blockInitialBankSelectionMap::current_mSourceBlock (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSourceBlock ;
}


//--------------------------------------------------------------------------------------------------
//     @blockInitialBankSelectionMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInitialBankSelectionMap ("blockInitialBankSelectionMap",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockInitialBankSelectionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInitialBankSelectionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_blockInitialBankSelectionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_blockInitialBankSelectionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap GGS_blockInitialBankSelectionMap::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_blockInitialBankSelectionMap result ;
  const GGS_blockInitialBankSelectionMap * p = (const GGS_blockInitialBankSelectionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_blockInitialBankSelectionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockInitialBankSelectionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractBlockTerminationForBlockInstruction addVisitedBlocks'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addVisitedBlocks (cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                           GGS_stringset & io_ioVisitedBlockSet,
                                           const GGS_blockInstructionBlockMap constin_inBlockMap,
                                           const GGS_string constin_inCurrentBlockName,
                                           const GGS_uint constin_inInitialBlockSetting,
                                           GGS_blockInitialBankSelectionMap & io_ioBlockInitialBankSelectionMap,
                                           GGS_bool & io_ioContinuesInSequence,
                                           GGS_bool & io_ioContinueAccessibilityExploration,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractBlockTerminationForBlockInstruction) ;
    inObject->method_addVisitedBlocks (io_ioVisitedBlockSet, constin_inBlockMap, constin_inCurrentBlockName, constin_inInitialBlockSetting, io_ioBlockInitialBankSelectionMap, io_ioContinuesInSequence, io_ioContinueAccessibilityExploration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractBlockTerminationForBlockInstruction generateBlock'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateBlock (cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                        const GGS_uint constin_inAccessBankSplitOffset,
                                        const GGS_uint constin_inCurrentBank,
                                        const GGS_registerTable constin_inRegisterTable,
                                        const GGS_constantMap constin_inConstantMap,
                                        GGS_uint & io_ioLocalLabelIndex,
                                        GGS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                        GGS_stringset & io_ioUsedRegisters,
                                        const GGS_string constin_inLabelForBlock,
                                        GGS_ipic_31__38_AbstractBlockTerminator & out_outTerminator,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outTerminator.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractBlockTerminationForBlockInstruction) ;
    inObject->method_generateBlock (constin_inAccessBankSplitOffset, constin_inCurrentBank, constin_inRegisterTable, constin_inConstantMap, io_ioLocalLabelIndex, io_ioGeneratedBlockList, io_ioUsedRegisters, constin_inLabelForBlock, out_outTerminator, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @pic_31__38_ConditionExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_ConditionExpression::objectCompare (const GGS_pic_31__38_ConditionExpression & inOperand) const {
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

GGS_pic_31__38_ConditionExpression::GGS_pic_31__38_ConditionExpression (void) :
AC_GALGAS_reference_class () {
}


void cPtr_pic_31__38_ConditionExpression::
pic_31__38_ConditionExpression_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_ConditionExpression::GGS_pic_31__38_ConditionExpression (const cPtr_pic_31__38_ConditionExpression * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_ConditionExpression) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18ConditionExpression class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_ConditionExpression::cPtr_pic_31__38_ConditionExpression (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_ConditionExpression::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18ConditionExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression ("pic18ConditionExpression",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_ConditionExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_ConditionExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_ConditionExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_ConditionExpression GGS_pic_31__38_ConditionExpression::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_ConditionExpression result ;
  const GGS_pic_31__38_ConditionExpression * p = (const GGS_pic_31__38_ConditionExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_ConditionExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18ConditionExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildAssemblyCode (cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                            GGS_string & io_ioString,
                                            GGS_uint & io_ioLocalLabelIndex,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    inObject->method_buildAssemblyCode (io_ioString, io_ioLocalLabelIndex, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstructionList enterInstructionReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInstructionReferencedLabels (const GGS_ipic_31__38_SequentialInstructionList inObject,
                                                       const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                       const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                       GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_SequentialInstructionList temp_0 = inObject ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_35933 (temp_0) ;
  while (enumerator_35933.hasCurrentObject ()) {
    callExtensionMethod_enterInstructionReferencedLabels ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_35933.current_mInstruction (HERE).ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 941)) ;
    enumerator_35933.gotoNextObject () ;
  }
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
//  Map type @baseline_5F_symbolTable
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable::GGS_baseline_5F_symbolTable (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable::~ GGS_baseline_5F_symbolTable (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable::GGS_baseline_5F_symbolTable (const GGS_baseline_5F_symbolTable & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable & GGS_baseline_5F_symbolTable::operator = (const GGS_baseline_5F_symbolTable & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable GGS_baseline_5F_symbolTable::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_symbolTable result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_symbolTable::getter_hasKey (const GGS_string & inKey
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_symbolTable::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                            const GGS_uint & inLevel
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_symbolTable::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_symbolTable::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_baseline_5F_symbolTable::getter_locationForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_baseline_5F_symbolTable_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_baseline_5F_symbolTable::getter_keyList (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baseline_5F_symbolTable::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_symbolTable::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_symbolTable::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_baseline_5F_symbolTable_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_symbolTable::performInsert (const GGS_baseline_5F_symbolTable_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_baseline_5F_symbolTable_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_baseline_5F_symbolTable_2E_element>
GGS_baseline_5F_symbolTable::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_baseline_5F_symbolTable_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_baseline_5F_symbolTable::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_baseline_5F_symbolTable_2E_element>>
GGS_baseline_5F_symbolTable::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_baseline_5F_symbolTable_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_baseline_5F_symbolTable::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_symbolTable::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element_3F_ GGS_baseline_5F_symbolTable
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_baseline_5F_symbolTable_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_baseline_5F_symbolTable_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_baseline_5F_symbolTable_2E_element_3F_::init_nil () ;
    }else{
      GGS_baseline_5F_symbolTable_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mRoutineAddress = info->mProperty_mRoutineAddress ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable GGS_baseline_5F_symbolTable::class_func_mapWithMapToOverride (const GGS_baseline_5F_symbolTable & inMapToOverride
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_symbolTable result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_baseline_5F_symbolTable_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable GGS_baseline_5F_symbolTable::getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_symbolTable result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_symbolTable::setter_insertKey (GGS_lstring inLKey,
                                                    GGS_uint inArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_symbolTable_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_symbolTable::method_searchKey (GGS_lstring inLKey,
                                                    GGS_uint & outArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_baseline_5F_symbolTable_2E_element> info ;
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

GGS_uint GGS_baseline_5F_symbolTable::getter_mRoutineAddressForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_baseline_5F_symbolTable_2E_element> info = infoForKey (key) ;
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

void GGS_baseline_5F_symbolTable::setter_setMRoutineAddressForKey (GGS_uint inValue,
                                                                   GGS_string inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_baseline_5F_symbolTable_2E_element>> node = mSharedRoot->searchNode (key) ;
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

static void GGS_baseline_5F_symbolTable_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_baseline_5F_symbolTable_2E_element>> & inArray,
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

void GGS_baseline_5F_symbolTable::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_baseline_5F_symbolTable_2E_element>> array = sortedInfoArray () ;
    GGS_baseline_5F_symbolTable_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_baseline_5F_symbolTable_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_baseline_5F_symbolTable_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @baseline_5F_symbolTable
//--------------------------------------------------------------------------------------------------

DownEnumerator_baseline_5F_symbolTable::DownEnumerator_baseline_5F_symbolTable (const GGS_baseline_5F_symbolTable & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element DownEnumerator_baseline_5F_symbolTable::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_baseline_5F_symbolTable::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_baseline_5F_symbolTable::current_mRoutineAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRoutineAddress ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @baseline_5F_symbolTable
//--------------------------------------------------------------------------------------------------

UpEnumerator_baseline_5F_symbolTable::UpEnumerator_baseline_5F_symbolTable (const GGS_baseline_5F_symbolTable & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element UpEnumerator_baseline_5F_symbolTable::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_baseline_5F_symbolTable::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_baseline_5F_symbolTable::current_mRoutineAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRoutineAddress ;
}


//--------------------------------------------------------------------------------------------------
//     @baseline_symbolTable generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_symbolTable ("baseline_symbolTable",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_symbolTable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_symbolTable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_symbolTable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_symbolTable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable GGS_baseline_5F_symbolTable::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_symbolTable result ;
  const GGS_baseline_5F_symbolTable * p = (const GGS_baseline_5F_symbolTable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_symbolTable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_symbolTable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@baseline_assembly_instruction enterLabelAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction::method_enterLabelAtAddress (GGS_baseline_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                           GGS_uint & /* ioArgument_ioWordAddress */,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterLabelAtAddress (cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                              GGS_baseline_5F_symbolTable & io_ioRoutineSymbolTable,
                                              GGS_uint & io_ioWordAddress,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_assembly_5F_instruction) ;
    inObject->method_enterLabelAtAddress (io_ioRoutineSymbolTable, io_ioWordAddress, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_assembly_instruction generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateBinaryCodeAtAddress (cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                      const GGS_baseline_5F_symbolTable constin_inRoutineSymbolTable,
                                                      GGS_string & io_ioListFileContents,
                                                      GGS_uint & io_ioWordAddress,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_assembly_5F_instruction) ;
    inObject->method_generateBinaryCodeAtAddress (constin_inRoutineSymbolTable, io_ioListFileContents, io_ioWordAddress, inCompiler COMMA_THERE) ;
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
  GGS_stringlist result = GGS_stringlist::init (nullptr COMMA_THERE) ;
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

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_2E_weak::objectCompare (const GGS_midrange_5F_instruction_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_2E_weak::GGS_midrange_5F_instruction_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_2E_weak & GGS_midrange_5F_instruction_2E_weak::operator = (const GGS_midrange_5F_instruction & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

class CollectionElementPtr_midrange_5F_instructionList : public CollectionElementPtr {
  public: GGS_midrange_5F_instructionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_midrange_5F_instructionList (const GGS_midrange_5F_instruction & in_mInstruction
                                                            COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_midrange_5F_instructionList (const GGS_midrange_5F_instructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_midrange_5F_instructionList::CollectionElementPtr_midrange_5F_instructionList (const GGS_midrange_5F_instruction & in_mInstruction
                                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_midrange_5F_instructionList::CollectionElementPtr_midrange_5F_instructionList (const GGS_midrange_5F_instructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_midrange_5F_instructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_midrange_5F_instructionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_midrange_5F_instructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @midrange_5F_instructionList
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList::GGS_midrange_5F_instructionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList::GGS_midrange_5F_instructionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_midrange_5F_instructionList * p = (CollectionElementPtr_midrange_5F_instructionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_midrange_5F_instructionList) ;
    const GGS_midrange_5F_instructionList_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_instructionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                 const GGS_midrange_5F_instruction & in_mInstruction
                                                                 COMMA_LOCATION_ARGS) {
  CollectionElementPtr_midrange_5F_instructionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_midrange_5F_instructionList (in_mInstruction COMMA_THERE)) ;
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

ComparisonResult GGS_midrange_5F_instruction_5F_nobanksel_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_nobanksel_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_nobanksel_2E_weak::GGS_midrange_5F_instruction_5F_nobanksel_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_nobanksel_2E_weak & GGS_midrange_5F_instruction_5F_nobanksel_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_nobanksel & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_midrange_5F_instruction_5F_banksel_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_banksel_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_banksel_2E_weak::GGS_midrange_5F_instruction_5F_banksel_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel_2E_weak & GGS_midrange_5F_instruction_5F_banksel_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_banksel & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_midrangeInstruction_5F_checkbank_2E_weak::objectCompare (const GGS_midrangeInstruction_5F_checkbank_2E_weak & inOperand) const {
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

GGS_midrangeInstruction_5F_checkbank_2E_weak::GGS_midrangeInstruction_5F_checkbank_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrangeInstruction_5F_checkbank_2E_weak & GGS_midrangeInstruction_5F_checkbank_2E_weak::operator = (const GGS_midrangeInstruction_5F_checkbank & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_midrangeInstruction_5F_checknobank_2E_weak::objectCompare (const GGS_midrangeInstruction_5F_checknobank_2E_weak & inOperand) const {
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

GGS_midrangeInstruction_5F_checknobank_2E_weak::GGS_midrangeInstruction_5F_checknobank_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrangeInstruction_5F_checknobank_2E_weak & GGS_midrangeInstruction_5F_checknobank_2E_weak::operator = (const GGS_midrangeInstruction_5F_checknobank & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak::GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak & GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_banksel_5F_register & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_midrange_5F_instruction_5F_savebank_2E_weak::GGS_midrange_5F_instruction_5F_savebank_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_savebank_2E_weak & GGS_midrange_5F_instruction_5F_savebank_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_savebank & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak & GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_midrange_5F_instruction_5F_FD_2E_weak::GGS_midrange_5F_instruction_5F_FD_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD_2E_weak & GGS_midrange_5F_instruction_5F_FD_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_FD & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_midrange_5F_instruction_5F_F_2E_weak::GGS_midrange_5F_instruction_5F_F_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_F_2E_weak & GGS_midrange_5F_instruction_5F_F_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_F & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_midrange_5F_instruction_5F_FB_2E_weak::GGS_midrange_5F_instruction_5F_FB_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FB_2E_weak & GGS_midrange_5F_instruction_5F_FB_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_FB & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_midrange_5F_instruction_5F_CALL_2E_weak::GGS_midrange_5F_instruction_5F_CALL_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CALL_2E_weak & GGS_midrange_5F_instruction_5F_CALL_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_CALL & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_midrange_5F_instruction_5F_JSR_2E_weak::GGS_midrange_5F_instruction_5F_JSR_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JSR_2E_weak & GGS_midrange_5F_instruction_5F_JSR_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_JSR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_midrange_5F_instruction_5F_JUMP_2E_weak::GGS_midrange_5F_instruction_5F_JUMP_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JUMP_2E_weak & GGS_midrange_5F_instruction_5F_JUMP_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_JUMP & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_midrange_5F_instruction_5F_GOTO_2E_weak::GGS_midrange_5F_instruction_5F_GOTO_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_GOTO_2E_weak & GGS_midrange_5F_instruction_5F_GOTO_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_GOTO & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak::GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak & GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_CLRWDT & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

