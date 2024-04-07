#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------

cMapElement_fieldSettingMap::cMapElement_fieldSettingMap (const GALGAS_lstring & inKey,
                                                          const GALGAS_uint & in_mValue,
                                                          const GALGAS_uint & in_mMask
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mValue (in_mValue),
mProperty_mMask (in_mMask) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_fieldSettingMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_fieldSettingMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_fieldSettingMap (mProperty_lkey, mProperty_mValue, mProperty_mMask COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_fieldSettingMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue" ":") ;
  mProperty_mValue.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mMask" ":") ;
  mProperty_mMask.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_fieldSettingMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_fieldSettingMap * operand = (cMapElement_fieldSettingMap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mValue.objectCompare (operand->mProperty_mValue) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mMask.objectCompare (operand->mProperty_mMask) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap::GALGAS_fieldSettingMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap::GALGAS_fieldSettingMap (const GALGAS_fieldSettingMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap & GALGAS_fieldSettingMap::operator = (const GALGAS_fieldSettingMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap GALGAS_fieldSettingMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_fieldSettingMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap GALGAS_fieldSettingMap::class_func_mapWithMapToOverride (const GALGAS_fieldSettingMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_fieldSettingMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap GALGAS_fieldSettingMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_fieldSettingMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fieldSettingMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  const GALGAS_uint & inArgument0,
                                                  const GALGAS_uint & inArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_fieldSettingMap * p = nullptr ;
  macroMyNew (p, cMapElement_fieldSettingMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@fieldSettingMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap GALGAS_fieldSettingMap::add_operation (const GALGAS_fieldSettingMap & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_fieldSettingMap result = *this ;
  cEnumerator_fieldSettingMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mValue (HERE), enumerator.current_mMask (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fieldSettingMap::setter_insertKey (GALGAS_lstring inKey,
                                               GALGAS_uint inArgument0,
                                               GALGAS_uint inArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_fieldSettingMap * p = nullptr ;
  macroMyNew (p, cMapElement_fieldSettingMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' configuration register setting is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_fieldSettingMap_searchKey = "the '%K' configuration register setting is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_fieldSettingMap::method_searchKey (GALGAS_lstring inKey,
                                               GALGAS_uint & outArgument0,
                                               GALGAS_uint & outArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_fieldSettingMap * p = (const cMapElement_fieldSettingMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_fieldSettingMap_searchKey
                                                                                               COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
    outArgument0 = p->mProperty_mValue ;
    outArgument1 = p->mProperty_mMask ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_fieldSettingMap::getter_mValueForKey (const GALGAS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_fieldSettingMap * p = (const cMapElement_fieldSettingMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_fieldSettingMap::getter_mMaskForKey (const GALGAS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_fieldSettingMap * p = (const cMapElement_fieldSettingMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
    result = p->mProperty_mMask ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fieldSettingMap::setter_setMValueForKey (GALGAS_uint inAttributeValue,
                                                     GALGAS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_fieldSettingMap * p = (cMapElement_fieldSettingMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
    p->mProperty_mValue = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fieldSettingMap::setter_setMMaskForKey (GALGAS_uint inAttributeValue,
                                                    GALGAS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_fieldSettingMap * p = (cMapElement_fieldSettingMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
    p->mProperty_mMask = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_fieldSettingMap * GALGAS_fieldSettingMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_fieldSettingMap * result = (cMapElement_fieldSettingMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_fieldSettingMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_fieldSettingMap::cEnumerator_fieldSettingMap (const GALGAS_fieldSettingMap & inEnumeratedObject,
                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap_2D_element cEnumerator_fieldSettingMap::current (LOCATION_ARGS) const {
  const cMapElement_fieldSettingMap * p = (const cMapElement_fieldSettingMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
  return GALGAS_fieldSettingMap_2D_element (p->mProperty_lkey, p->mProperty_mValue, p->mProperty_mMask) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_fieldSettingMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_fieldSettingMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_fieldSettingMap * p = (const cMapElement_fieldSettingMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
  return p->mProperty_mValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_fieldSettingMap::current_mMask (LOCATION_ARGS) const {
  const cMapElement_fieldSettingMap * p = (const cMapElement_fieldSettingMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
  return p->mProperty_mMask ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_fieldSettingMap::optional_searchKey (const GALGAS_string & inKey,
                                                 GALGAS_uint & outArgument0,
                                                 GALGAS_uint & outArgument1) const {
  const cMapElement_fieldSettingMap * p = (const cMapElement_fieldSettingMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
    outArgument0 = p->mProperty_mValue ;
    outArgument1 = p->mProperty_mMask ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @fieldSettingMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fieldSettingMap ("fieldSettingMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fieldSettingMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fieldSettingMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fieldSettingMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fieldSettingMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap GALGAS_fieldSettingMap::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_fieldSettingMap result ;
  const GALGAS_fieldSettingMap * p = (const GALGAS_fieldSettingMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_fieldSettingMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fieldSettingMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_ADDWF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_ADDWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_ANDWF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_ANDWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_COMF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_COMF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_DECF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_DECF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_DECFSZ (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_DECFSZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_INCF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_INCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_INCFSZ (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_INCFSZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_IORWF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_IORWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_MOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_RLF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_RLF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_RRF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_RRF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_SUBWF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_SUBWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_SWAPF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_XORWF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_XORWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::optional_ADDWF () const {
  const bool ok = mEnum == kEnum_ADDWF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::optional_ANDWF () const {
  const bool ok = mEnum == kEnum_ANDWF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::optional_COMF () const {
  const bool ok = mEnum == kEnum_COMF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::optional_DECF () const {
  const bool ok = mEnum == kEnum_DECF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::optional_DECFSZ () const {
  const bool ok = mEnum == kEnum_DECFSZ ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::optional_INCF () const {
  const bool ok = mEnum == kEnum_INCF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::optional_INCFSZ () const {
  const bool ok = mEnum == kEnum_INCFSZ ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::optional_IORWF () const {
  const bool ok = mEnum == kEnum_IORWF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::optional_MOVF () const {
  const bool ok = mEnum == kEnum_MOVF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::optional_RLF () const {
  const bool ok = mEnum == kEnum_RLF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::optional_RRF () const {
  const bool ok = mEnum == kEnum_RRF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::optional_SUBWF () const {
  const bool ok = mEnum == kEnum_SUBWF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::optional_SWAPF () const {
  const bool ok = mEnum == kEnum_SWAPF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::optional_XORWF () const {
  const bool ok = mEnum == kEnum_XORWF ;
  return ok ;
}

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

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isADDWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ADDWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isANDWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ANDWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isCOMF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_COMF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isDECF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_DECF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isDECFSZ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_DECFSZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isINCF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_INCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isINCFSZ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_INCFSZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isIORWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_IORWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isMOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_MOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isRLF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_RLF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isRRF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_RRF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isSUBWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_SUBWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isSWAPF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_SWAPF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isXORWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_XORWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::description (String & ioString,
                                                                        const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @baseline_instruction_FD_base_code: ") ;
  ioString.appendCString (gEnumNameArrayFor_baseline_5F_instruction_5F_FD_5F_base_5F_code [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::objectCompare (const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand) const {
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
//
//     @baseline_instruction_FD_base_code generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code ("baseline_instruction_FD_base_code",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code * p = (const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_FD_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@baseline_instruction_FD_base_code mnemonic'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_mnemonic (const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                        Compiler *
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ADDWF:
    {
      result_outResult = GALGAS_string ("ADDWF") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ANDWF:
    {
      result_outResult = GALGAS_string ("ANDWF") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_COMF:
    {
      result_outResult = GALGAS_string ("COMF") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECF:
    {
      result_outResult = GALGAS_string ("DECF") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECFSZ:
    {
      result_outResult = GALGAS_string ("DECFSZ") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCF:
    {
      result_outResult = GALGAS_string ("INCF") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCFSZ:
    {
      result_outResult = GALGAS_string ("INCFSZ") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_IORWF:
    {
      result_outResult = GALGAS_string ("IORWF") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_MOVF:
    {
      result_outResult = GALGAS_string ("MOVF") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RLF:
    {
      result_outResult = GALGAS_string ("RLF") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RRF:
    {
      result_outResult = GALGAS_string ("RRF") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SUBWF:
    {
      result_outResult = GALGAS_string ("SUBWF") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SWAPF:
    {
      result_outResult = GALGAS_string ("SWAPF") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_XORWF:
    {
      result_outResult = GALGAS_string ("XORWF") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_CLRF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_MOVWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::optional_CLRF () const {
  const bool ok = mEnum == kEnum_CLRF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::optional_MOVWF () const {
  const bool ok = mEnum == kEnum_MOVWF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_baseline_5F_F_5F_instruction_5F_base_5F_code [3] = {
  "(not built)",
  "CLRF",
  "MOVWF"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::getter_isCLRF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_CLRF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::getter_isMOVWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_MOVWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::description (String & ioString,
                                                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @baseline_F_instruction_base_code: ") ;
  ioString.appendCString (gEnumNameArrayFor_baseline_5F_F_5F_instruction_5F_base_5F_code [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::objectCompare (const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & inOperand) const {
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
//
//     @baseline_F_instruction_base_code generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code ("baseline_F_instruction_base_code",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code result ;
  const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code * p = (const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_F_instruction_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@baseline_F_instruction_base_code mnemonic'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_mnemonic (const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                        Compiler *
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      result_outResult = GALGAS_string ("CLRF") ;
    }
    break ;
  case GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      result_outResult = GALGAS_string ("MOVWF") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_bit_5F_oriented_5F_op::GALGAS_baseline_5F_bit_5F_oriented_5F_op (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_bit_5F_oriented_5F_op GALGAS_baseline_5F_bit_5F_oriented_5F_op::class_func_BCF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_bit_5F_oriented_5F_op result ;
  result.mEnum = kEnum_BCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_bit_5F_oriented_5F_op GALGAS_baseline_5F_bit_5F_oriented_5F_op::class_func_BSF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_bit_5F_oriented_5F_op result ;
  result.mEnum = kEnum_BSF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_bit_5F_oriented_5F_op::optional_BCF () const {
  const bool ok = mEnum == kEnum_BCF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_bit_5F_oriented_5F_op::optional_BSF () const {
  const bool ok = mEnum == kEnum_BSF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_baseline_5F_bit_5F_oriented_5F_op [3] = {
  "(not built)",
  "BCF",
  "BSF"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_bit_5F_oriented_5F_op::getter_isBCF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_BCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_bit_5F_oriented_5F_op::getter_isBSF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_BSF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_bit_5F_oriented_5F_op::description (String & ioString,
                                                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @baseline_bit_oriented_op: ") ;
  ioString.appendCString (gEnumNameArrayFor_baseline_5F_bit_5F_oriented_5F_op [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_bit_5F_oriented_5F_op::objectCompare (const GALGAS_baseline_5F_bit_5F_oriented_5F_op & inOperand) const {
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
//
//     @baseline_bit_oriented_op generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_bit_5F_oriented_5F_op ("baseline_bit_oriented_op",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_bit_5F_oriented_5F_op::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_bit_5F_oriented_5F_op ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_bit_5F_oriented_5F_op::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_bit_5F_oriented_5F_op (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_bit_5F_oriented_5F_op GALGAS_baseline_5F_bit_5F_oriented_5F_op::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_bit_5F_oriented_5F_op result ;
  const GALGAS_baseline_5F_bit_5F_oriented_5F_op * p = (const GALGAS_baseline_5F_bit_5F_oriented_5F_op *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_bit_5F_oriented_5F_op *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_bit_oriented_op", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@baseline_bit_oriented_op mnemonic'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_mnemonic (const GALGAS_baseline_5F_bit_5F_oriented_5F_op & inObject,
                                        Compiler *
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_baseline_5F_bit_5F_oriented_5F_op temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_baseline_5F_bit_5F_oriented_5F_op::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_bit_5F_oriented_5F_op::kEnum_BCF:
    {
      result_outResult = GALGAS_string ("BCF") ;
    }
    break ;
  case GALGAS_baseline_5F_bit_5F_oriented_5F_op::kEnum_BSF:
    {
      result_outResult = GALGAS_string ("BSF") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::GALGAS_baseline_5F_literal_5F_instruction_5F_opcode (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_ANDLW (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_ANDLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_IORLW (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_IORLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_MOVLW (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_MOVLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_RETLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_XORLW (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_XORLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::optional_ANDLW () const {
  const bool ok = mEnum == kEnum_ANDLW ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::optional_IORLW () const {
  const bool ok = mEnum == kEnum_IORLW ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::optional_MOVLW () const {
  const bool ok = mEnum == kEnum_MOVLW ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::optional_RETLW () const {
  const bool ok = mEnum == kEnum_RETLW ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::optional_XORLW () const {
  const bool ok = mEnum == kEnum_XORLW ;
  return ok ;
}

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

GALGAS_bool GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::getter_isANDLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ANDLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::getter_isIORLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_IORLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::getter_isMOVLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_MOVLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::getter_isRETLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_RETLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::getter_isXORLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_XORLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::description (String & ioString,
                                                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @baseline_literal_instruction_opcode: ") ;
  ioString.appendCString (gEnumNameArrayFor_baseline_5F_literal_5F_instruction_5F_opcode [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::objectCompare (const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand) const {
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
//
//     @baseline_literal_instruction_opcode generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_literal_5F_instruction_5F_opcode ("baseline_literal_instruction_opcode",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_literal_5F_instruction_5F_opcode ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_literal_5F_instruction_5F_opcode (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode * p = (const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_literal_instruction_opcode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@baseline_literal_instruction_opcode mnemonic'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_mnemonic (const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & inObject,
                                        Compiler *
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_ANDLW:
    {
      result_outResult = GALGAS_string ("ANDLW") ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_IORLW:
    {
      result_outResult = GALGAS_string ("IORLW") ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_MOVLW:
    {
      result_outResult = GALGAS_string ("MOVLW") ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_RETLW:
    {
      result_outResult = GALGAS_string ("RETLW") ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_XORLW:
    {
      result_outResult = GALGAS_string ("XORLW") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::GALGAS_baseline_5F_WO_5F_OPERAND_5F_group (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::class_func_CLRW (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  result.mEnum = kEnum_CLRW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::class_func_NOP (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  result.mEnum = kEnum_NOP ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::class_func_CLRWDT (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  result.mEnum = kEnum_CLRWDT ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::class_func_OPTION_5F_ (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  result.mEnum = kEnum_OPTION_5F_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::class_func_SLEEP (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  result.mEnum = kEnum_SLEEP ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::optional_CLRW () const {
  const bool ok = mEnum == kEnum_CLRW ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::optional_NOP () const {
  const bool ok = mEnum == kEnum_NOP ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::optional_CLRWDT () const {
  const bool ok = mEnum == kEnum_CLRWDT ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::optional_OPTION_5F_ () const {
  const bool ok = mEnum == kEnum_OPTION_5F_ ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::optional_SLEEP () const {
  const bool ok = mEnum == kEnum_SLEEP ;
  return ok ;
}

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

GALGAS_bool GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::getter_isCLRW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_CLRW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::getter_isNOP (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_NOP == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::getter_isCLRWDT (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_CLRWDT == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::getter_isOPTION_5F_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_OPTION_5F_ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::getter_isSLEEP (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_SLEEP == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::description (String & ioString,
                                                             const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @baseline_WO_OPERAND_group: ") ;
  ioString.appendCString (gEnumNameArrayFor_baseline_5F_WO_5F_OPERAND_5F_group [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::objectCompare (const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & inOperand) const {
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
//
//     @baseline_WO_OPERAND_group generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_WO_5F_OPERAND_5F_group ("baseline_WO_OPERAND_group",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_WO_5F_OPERAND_5F_group ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_WO_5F_OPERAND_5F_group (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group * p = (const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_WO_OPERAND_group", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@baseline_WO_OPERAND_group mnemonic'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_mnemonic (const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & inObject,
                                        Compiler *
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_NOP:
    {
      result_outResult = GALGAS_string ("NOP") ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_CLRW:
    {
      result_outResult = GALGAS_string ("CLRW") ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_CLRWDT:
    {
      result_outResult = GALGAS_string ("CLRWDT") ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_OPTION_5F_:
    {
      result_outResult = GALGAS_string ("OPTION") ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_SLEEP:
    {
      result_outResult = GALGAS_string ("SLEEP") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction::cPtr_baseline_5F_instruction (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_baseline_5F_instruction::objectCompare (const GALGAS_baseline_5F_instruction & inOperand) const {
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

GALGAS_baseline_5F_instruction::GALGAS_baseline_5F_instruction (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction::GALGAS_baseline_5F_instruction (const cPtr_baseline_5F_instruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_baseline_5F_instruction::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_baseline_5F_instruction * p = (cPtr_baseline_5F_instruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction::setProperty_mInstructionLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction * p = (cPtr_baseline_5F_instruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction::cPtr_baseline_5F_instruction (const GALGAS_location & in_mInstructionLocation
                                                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction ("baseline_instruction",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction GALGAS_baseline_5F_instruction::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction result ;
  const GALGAS_baseline_5F_instruction * p = (const GALGAS_baseline_5F_instruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_instruction_2D_weak::objectCompare (const GALGAS_baseline_5F_instruction_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_instruction_2D_weak::GALGAS_baseline_5F_instruction_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_2D_weak & GALGAS_baseline_5F_instruction_2D_weak::operator = (const GALGAS_baseline_5F_instruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_2D_weak::GALGAS_baseline_5F_instruction_2D_weak (const GALGAS_baseline_5F_instruction & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_2D_weak GALGAS_baseline_5F_instruction_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction GALGAS_baseline_5F_instruction_2D_weak::bang_baseline_5F_instruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction) ;
      result = GALGAS_baseline_5F_instruction ((cPtr_baseline_5F_instruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_2D_weak ("baseline_instruction-weak",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_2D_weak GALGAS_baseline_5F_instruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_2D_weak result ;
  const GALGAS_baseline_5F_instruction_2D_weak * p = (const GALGAS_baseline_5F_instruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@baseline_5F_instructionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_baseline_5F_instructionList : public cCollectionElement {
  public: GALGAS_baseline_5F_instructionList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_baseline_5F_instructionList (const GALGAS_baseline_5F_instruction & in_mInstruction
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_baseline_5F_instructionList (const GALGAS_baseline_5F_instructionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_baseline_5F_instructionList::cCollectionElement_baseline_5F_instructionList (const GALGAS_baseline_5F_instruction & in_mInstruction
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_baseline_5F_instructionList::cCollectionElement_baseline_5F_instructionList (const GALGAS_baseline_5F_instructionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_baseline_5F_instructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_baseline_5F_instructionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_baseline_5F_instructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_baseline_5F_instructionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstruction" ":") ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_baseline_5F_instructionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_baseline_5F_instructionList * operand = (cCollectionElement_baseline_5F_instructionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_baseline_5F_instructionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList::GALGAS_baseline_5F_instructionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList::GALGAS_baseline_5F_instructionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instructionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_baseline_5F_instructionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instructionList::class_func_listWithValue (const GALGAS_baseline_5F_instruction & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instructionList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_baseline_5F_instructionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_baseline_5F_instructionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_baseline_5F_instruction & in_mInstruction
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_instructionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_baseline_5F_instructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instructionList::addAssign_operation (const GALGAS_baseline_5F_instruction & inOperand0
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_baseline_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instructionList::setter_append (const GALGAS_baseline_5F_instruction inOperand0,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_baseline_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instructionList::setter_insertAtIndex (const GALGAS_baseline_5F_instruction inOperand0,
                                                               const GALGAS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_baseline_5F_instructionList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instructionList::setter_removeAtIndex (GALGAS_baseline_5F_instruction & outOperand0,
                                                               const GALGAS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_baseline_5F_instructionList * p = (cCollectionElement_baseline_5F_instructionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
        outOperand0 = p->mObject.mProperty_mInstruction ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instructionList::setter_popFirst (GALGAS_baseline_5F_instruction & outOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_instructionList * p = (cCollectionElement_baseline_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instructionList::setter_popLast (GALGAS_baseline_5F_instruction & outOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_instructionList * p = (cCollectionElement_baseline_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instructionList::method_first (GALGAS_baseline_5F_instruction & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_instructionList * p = (cCollectionElement_baseline_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instructionList::method_last (GALGAS_baseline_5F_instruction & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_instructionList * p = (cCollectionElement_baseline_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instructionList::add_operation (const GALGAS_baseline_5F_instructionList & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instructionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instructionList result = GALGAS_baseline_5F_instructionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instructionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instructionList result = GALGAS_baseline_5F_instructionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instructionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instructionList result = GALGAS_baseline_5F_instructionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instructionList::plusAssign_operation (const GALGAS_baseline_5F_instructionList inOperand,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instructionList::setter_setMInstructionAtIndex (GALGAS_baseline_5F_instruction inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_instructionList * p = (cCollectionElement_baseline_5F_instructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction GALGAS_baseline_5F_instructionList::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_instructionList * p = (cCollectionElement_baseline_5F_instructionList *) attributes.ptr () ;
  GALGAS_baseline_5F_instruction result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_baseline_5F_instructionList::cEnumerator_baseline_5F_instructionList (const GALGAS_baseline_5F_instructionList & inEnumeratedObject,
                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList_2D_element cEnumerator_baseline_5F_instructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_instructionList * p = (const cCollectionElement_baseline_5F_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction cEnumerator_baseline_5F_instructionList::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_instructionList * p = (const cCollectionElement_baseline_5F_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
  return p->mObject.mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//
//     @baseline_instructionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instructionList ("baseline_instructionList",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instructionList::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instructionList result ;
  const GALGAS_baseline_5F_instructionList * p = (const GALGAS_baseline_5F_instructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_instruction_5F_FD_2D_weak::objectCompare (const GALGAS_baseline_5F_instruction_5F_FD_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_FD_2D_weak::GALGAS_baseline_5F_instruction_5F_FD_2D_weak (void) :
GALGAS_baseline_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD_2D_weak & GALGAS_baseline_5F_instruction_5F_FD_2D_weak::operator = (const GALGAS_baseline_5F_instruction_5F_FD & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD_2D_weak::GALGAS_baseline_5F_instruction_5F_FD_2D_weak (const GALGAS_baseline_5F_instruction_5F_FD & inSource) :
GALGAS_baseline_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD_2D_weak GALGAS_baseline_5F_instruction_5F_FD_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD GALGAS_baseline_5F_instruction_5F_FD_2D_weak::bang_baseline_5F_instruction_5F_FD_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_FD result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_FD) ;
      result = GALGAS_baseline_5F_instruction_5F_FD ((cPtr_baseline_5F_instruction_5F_FD *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_FD-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD_2D_weak ("baseline_instruction_FD-weak",
                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_FD_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_FD_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_FD_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD_2D_weak GALGAS_baseline_5F_instruction_5F_FD_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_2D_weak result ;
  const GALGAS_baseline_5F_instruction_5F_FD_2D_weak * p = (const GALGAS_baseline_5F_instruction_5F_FD_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_FD_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_FD-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_instruction_5F_F_2D_weak::objectCompare (const GALGAS_baseline_5F_instruction_5F_F_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_F_2D_weak::GALGAS_baseline_5F_instruction_5F_F_2D_weak (void) :
GALGAS_baseline_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_F_2D_weak & GALGAS_baseline_5F_instruction_5F_F_2D_weak::operator = (const GALGAS_baseline_5F_instruction_5F_F & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_F_2D_weak::GALGAS_baseline_5F_instruction_5F_F_2D_weak (const GALGAS_baseline_5F_instruction_5F_F & inSource) :
GALGAS_baseline_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_F_2D_weak GALGAS_baseline_5F_instruction_5F_F_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_F_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_F GALGAS_baseline_5F_instruction_5F_F_2D_weak::bang_baseline_5F_instruction_5F_F_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_F result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_F) ;
      result = GALGAS_baseline_5F_instruction_5F_F ((cPtr_baseline_5F_instruction_5F_F *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_F-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F_2D_weak ("baseline_instruction_F-weak",
                                                                                            & kTypeDescriptor_GALGAS_baseline_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_F_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_F_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_F_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_F_2D_weak GALGAS_baseline_5F_instruction_5F_F_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_F_2D_weak result ;
  const GALGAS_baseline_5F_instruction_5F_F_2D_weak * p = (const GALGAS_baseline_5F_instruction_5F_F_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_F_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_F-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_instruction_5F_FB_2D_weak::objectCompare (const GALGAS_baseline_5F_instruction_5F_FB_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_FB_2D_weak::GALGAS_baseline_5F_instruction_5F_FB_2D_weak (void) :
GALGAS_baseline_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FB_2D_weak & GALGAS_baseline_5F_instruction_5F_FB_2D_weak::operator = (const GALGAS_baseline_5F_instruction_5F_FB & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FB_2D_weak::GALGAS_baseline_5F_instruction_5F_FB_2D_weak (const GALGAS_baseline_5F_instruction_5F_FB & inSource) :
GALGAS_baseline_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FB_2D_weak GALGAS_baseline_5F_instruction_5F_FB_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FB_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FB GALGAS_baseline_5F_instruction_5F_FB_2D_weak::bang_baseline_5F_instruction_5F_FB_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_FB result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_FB) ;
      result = GALGAS_baseline_5F_instruction_5F_FB ((cPtr_baseline_5F_instruction_5F_FB *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_FB-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB_2D_weak ("baseline_instruction_FB-weak",
                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_FB_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_FB_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_FB_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FB_2D_weak GALGAS_baseline_5F_instruction_5F_FB_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FB_2D_weak result ;
  const GALGAS_baseline_5F_instruction_5F_FB_2D_weak * p = (const GALGAS_baseline_5F_instruction_5F_FB_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_FB_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_FB-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_instruction_5F_CALL_2D_weak::objectCompare (const GALGAS_baseline_5F_instruction_5F_CALL_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_CALL_2D_weak::GALGAS_baseline_5F_instruction_5F_CALL_2D_weak (void) :
GALGAS_baseline_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_CALL_2D_weak & GALGAS_baseline_5F_instruction_5F_CALL_2D_weak::operator = (const GALGAS_baseline_5F_instruction_5F_CALL & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_CALL_2D_weak::GALGAS_baseline_5F_instruction_5F_CALL_2D_weak (const GALGAS_baseline_5F_instruction_5F_CALL & inSource) :
GALGAS_baseline_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_CALL_2D_weak GALGAS_baseline_5F_instruction_5F_CALL_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_CALL_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_CALL GALGAS_baseline_5F_instruction_5F_CALL_2D_weak::bang_baseline_5F_instruction_5F_CALL_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_CALL result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_CALL) ;
      result = GALGAS_baseline_5F_instruction_5F_CALL ((cPtr_baseline_5F_instruction_5F_CALL *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_CALL-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL_2D_weak ("baseline_instruction_CALL-weak",
                                                                                               & kTypeDescriptor_GALGAS_baseline_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_CALL_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_CALL_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_CALL_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_CALL_2D_weak GALGAS_baseline_5F_instruction_5F_CALL_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_CALL_2D_weak result ;
  const GALGAS_baseline_5F_instruction_5F_CALL_2D_weak * p = (const GALGAS_baseline_5F_instruction_5F_CALL_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_CALL_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_CALL-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_instruction_5F_JSR_2D_weak::objectCompare (const GALGAS_baseline_5F_instruction_5F_JSR_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_JSR_2D_weak::GALGAS_baseline_5F_instruction_5F_JSR_2D_weak (void) :
GALGAS_baseline_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JSR_2D_weak & GALGAS_baseline_5F_instruction_5F_JSR_2D_weak::operator = (const GALGAS_baseline_5F_instruction_5F_JSR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JSR_2D_weak::GALGAS_baseline_5F_instruction_5F_JSR_2D_weak (const GALGAS_baseline_5F_instruction_5F_JSR & inSource) :
GALGAS_baseline_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JSR_2D_weak GALGAS_baseline_5F_instruction_5F_JSR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_JSR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JSR GALGAS_baseline_5F_instruction_5F_JSR_2D_weak::bang_baseline_5F_instruction_5F_JSR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_JSR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_JSR) ;
      result = GALGAS_baseline_5F_instruction_5F_JSR ((cPtr_baseline_5F_instruction_5F_JSR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_JSR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR_2D_weak ("baseline_instruction_JSR-weak",
                                                                                              & kTypeDescriptor_GALGAS_baseline_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_JSR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_JSR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_JSR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JSR_2D_weak GALGAS_baseline_5F_instruction_5F_JSR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_JSR_2D_weak result ;
  const GALGAS_baseline_5F_instruction_5F_JSR_2D_weak * p = (const GALGAS_baseline_5F_instruction_5F_JSR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_JSR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_JSR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak::objectCompare (const GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak::GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak (void) :
GALGAS_baseline_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak & GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak::operator = (const GALGAS_baseline_5F_instruction_5F_GOTO & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak::GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak (const GALGAS_baseline_5F_instruction_5F_GOTO & inSource) :
GALGAS_baseline_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_GOTO GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak::bang_baseline_5F_instruction_5F_GOTO_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_GOTO result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_GOTO) ;
      result = GALGAS_baseline_5F_instruction_5F_GOTO ((cPtr_baseline_5F_instruction_5F_GOTO *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_GOTO-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak ("baseline_instruction_GOTO-weak",
                                                                                               & kTypeDescriptor_GALGAS_baseline_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak result ;
  const GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak * p = (const GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_GOTO-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak::objectCompare (const GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak::GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak (void) :
GALGAS_baseline_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak & GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak::operator = (const GALGAS_baseline_5F_instruction_5F_JUMP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak::GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak (const GALGAS_baseline_5F_instruction_5F_JUMP & inSource) :
GALGAS_baseline_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JUMP GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak::bang_baseline_5F_instruction_5F_JUMP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_JUMP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_JUMP) ;
      result = GALGAS_baseline_5F_instruction_5F_JUMP ((cPtr_baseline_5F_instruction_5F_JUMP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_JUMP-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak ("baseline_instruction_JUMP-weak",
                                                                                               & kTypeDescriptor_GALGAS_baseline_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak result ;
  const GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak * p = (const GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_JUMP-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_WO_5F_OPERAND reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND * p = (const cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::objectCompare (const GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND (void) :
GALGAS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_WO_5F_OPERAND_init_21__21_ (in_mInstructionLocation, in_mInstruction, inCompiler) ;
  const GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::
baseline_5F_instruction_5F_WO_5F_OPERAND_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                       const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND (const cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                 const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction
                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND (in_mInstructionLocation, in_mInstruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_WO_5F_OPERAND_5F_group () ;
  }else{
    cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND * p = (cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::setProperty_mInstruction (const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND * p = (cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND) ;
    p->mProperty_mInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_WO_OPERAND class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND (const GALGAS_location & in_mInstructionLocation,
                                                                                              const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND ;
}

void cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_WO_OPERAND:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND (mProperty_mInstructionLocation, mProperty_mInstruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_WO_OPERAND generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND ("baseline_instruction_WO_OPERAND",
                                                                                                & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND result ;
  const GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND * p = (const GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_WO_OPERAND", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak::objectCompare (const GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak::GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak (void) :
GALGAS_baseline_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak & GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak::operator = (const GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak::GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak (const GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND & inSource) :
GALGAS_baseline_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak::bang_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND) ;
      result = GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND ((cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_WO_OPERAND-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak ("baseline_instruction_WO_OPERAND-weak",
                                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak result ;
  const GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak * p = (const GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_WO_OPERAND-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak::objectCompare (const GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak::GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak (void) :
GALGAS_baseline_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak & GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak::operator = (const GALGAS_baseline_5F_instruction_5F_TRIS & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak::GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak (const GALGAS_baseline_5F_instruction_5F_TRIS & inSource) :
GALGAS_baseline_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_TRIS GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak::bang_baseline_5F_instruction_5F_TRIS_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_TRIS result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_TRIS) ;
      result = GALGAS_baseline_5F_instruction_5F_TRIS ((cPtr_baseline_5F_instruction_5F_TRIS *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_TRIS-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak ("baseline_instruction_TRIS-weak",
                                                                                               & kTypeDescriptor_GALGAS_baseline_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak result ;
  const GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak * p = (const GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_TRIS-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_literalOperation::cPtr_baseline_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mLiteralInstruction (),
mProperty_mImmediatExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_literalOperation::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralInstruction.printNonNullClassInstanceProperties ("mLiteralInstruction") ;
    mProperty_mImmediatExpression.printNonNullClassInstanceProperties ("mImmediatExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_baseline_5F_instruction_5F_literalOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_instruction_5F_literalOperation * p = (const cPtr_baseline_5F_instruction_5F_literalOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_literalOperation) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLiteralInstruction.objectCompare (p->mProperty_mLiteralInstruction) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mImmediatExpression.objectCompare (p->mProperty_mImmediatExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_instruction_5F_literalOperation::objectCompare (const GALGAS_baseline_5F_instruction_5F_literalOperation & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_literalOperation::GALGAS_baseline_5F_instruction_5F_literalOperation (void) :
GALGAS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_literalOperation GALGAS_baseline_5F_instruction_5F_literalOperation::
init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                  const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                  const GALGAS_immediatExpression & in_mImmediatExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_literalOperation * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_literalOperation (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_literalOperation_init_21__21__21_ (in_mInstructionLocation, in_mLiteralInstruction, in_mImmediatExpression, inCompiler) ;
  const GALGAS_baseline_5F_instruction_5F_literalOperation result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_literalOperation::
baseline_5F_instruction_5F_literalOperation_init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                              const GALGAS_immediatExpression & in_mImmediatExpression,
                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralInstruction = in_mLiteralInstruction ;
  mProperty_mImmediatExpression = in_mImmediatExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_literalOperation::GALGAS_baseline_5F_instruction_5F_literalOperation (const cPtr_baseline_5F_instruction_5F_literalOperation * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_literalOperation) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_literalOperation GALGAS_baseline_5F_instruction_5F_literalOperation::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                       const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                                                       const GALGAS_immediatExpression & in_mImmediatExpression
                                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_literalOperation result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_literalOperation (in_mInstructionLocation, in_mLiteralInstruction, in_mImmediatExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode GALGAS_baseline_5F_instruction_5F_literalOperation::readProperty_mLiteralInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_literal_5F_instruction_5F_opcode () ;
  }else{
    cPtr_baseline_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mLiteralInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_literalOperation::setProperty_mLiteralInstruction (const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_literalOperation) ;
    p->mProperty_mLiteralInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_baseline_5F_instruction_5F_literalOperation::readProperty_mImmediatExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mImmediatExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_literalOperation::setProperty_mImmediatExpression (const GALGAS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_literalOperation) ;
    p->mProperty_mImmediatExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_literalOperation::cPtr_baseline_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                                                    const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                                    const GALGAS_immediatExpression & in_mImmediatExpression
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mLiteralInstruction (),
mProperty_mImmediatExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralInstruction = in_mLiteralInstruction ;
  mProperty_mImmediatExpression = in_mImmediatExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation ;
}

void cPtr_baseline_5F_instruction_5F_literalOperation::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_literalOperation:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImmediatExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_literalOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_literalOperation (mProperty_mInstructionLocation, mProperty_mLiteralInstruction, mProperty_mImmediatExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_literalOperation generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation ("baseline_instruction_literalOperation",
                                                                                                   & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_literalOperation GALGAS_baseline_5F_instruction_5F_literalOperation::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_literalOperation result ;
  const GALGAS_baseline_5F_instruction_5F_literalOperation * p = (const GALGAS_baseline_5F_instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak::objectCompare (const GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak::GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak (void) :
GALGAS_baseline_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak & GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak::operator = (const GALGAS_baseline_5F_instruction_5F_literalOperation & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak::GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak (const GALGAS_baseline_5F_instruction_5F_literalOperation & inSource) :
GALGAS_baseline_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_literalOperation GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak::bang_baseline_5F_instruction_5F_literalOperation_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_literalOperation result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_literalOperation) ;
      result = GALGAS_baseline_5F_instruction_5F_literalOperation ((cPtr_baseline_5F_instruction_5F_literalOperation *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_literalOperation-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak ("baseline_instruction_literalOperation-weak",
                                                                                                           & kTypeDescriptor_GALGAS_baseline_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak result ;
  const GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak * p = (const GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_literalOperation_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_literalOperation-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_MNOP::cPtr_baseline_5F_instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_MNOP::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mOccurrenceFactor.printNonNullClassInstanceProperties ("mOccurrenceFactor") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_baseline_5F_instruction_5F_MNOP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_instruction_5F_MNOP * p = (const cPtr_baseline_5F_instruction_5F_MNOP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_MNOP) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOccurrenceFactor.objectCompare (p->mProperty_mOccurrenceFactor) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_instruction_5F_MNOP::objectCompare (const GALGAS_baseline_5F_instruction_5F_MNOP & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_MNOP::GALGAS_baseline_5F_instruction_5F_MNOP (void) :
GALGAS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_MNOP GALGAS_baseline_5F_instruction_5F_MNOP::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_luint & in_mOccurrenceFactor,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_MNOP * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_MNOP (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_MNOP_init_21__21_ (in_mInstructionLocation, in_mOccurrenceFactor, inCompiler) ;
  const GALGAS_baseline_5F_instruction_5F_MNOP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_MNOP::
baseline_5F_instruction_5F_MNOP_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_luint & in_mOccurrenceFactor,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_MNOP::GALGAS_baseline_5F_instruction_5F_MNOP (const cPtr_baseline_5F_instruction_5F_MNOP * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_MNOP) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_MNOP GALGAS_baseline_5F_instruction_5F_MNOP::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                               const GALGAS_luint & in_mOccurrenceFactor
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_MNOP result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_MNOP (in_mInstructionLocation, in_mOccurrenceFactor COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_baseline_5F_instruction_5F_MNOP::readProperty_mOccurrenceFactor (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_baseline_5F_instruction_5F_MNOP * p = (cPtr_baseline_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_MNOP) ;
    return p->mProperty_mOccurrenceFactor ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_MNOP::setProperty_mOccurrenceFactor (const GALGAS_luint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_MNOP * p = (cPtr_baseline_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_MNOP) ;
    p->mProperty_mOccurrenceFactor = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_MNOP class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_MNOP::cPtr_baseline_5F_instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_luint & in_mOccurrenceFactor
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mOccurrenceFactor () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_MNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP ;
}

void cPtr_baseline_5F_instruction_5F_MNOP::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_MNOP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_MNOP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_MNOP (mProperty_mInstructionLocation, mProperty_mOccurrenceFactor COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_MNOP generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP ("baseline_instruction_MNOP",
                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_MNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_MNOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_MNOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_MNOP GALGAS_baseline_5F_instruction_5F_MNOP::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_MNOP result ;
  const GALGAS_baseline_5F_instruction_5F_MNOP * p = (const GALGAS_baseline_5F_instruction_5F_MNOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_MNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_MNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak::objectCompare (const GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak::GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak (void) :
GALGAS_baseline_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak & GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak::operator = (const GALGAS_baseline_5F_instruction_5F_MNOP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak::GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak (const GALGAS_baseline_5F_instruction_5F_MNOP & inSource) :
GALGAS_baseline_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_MNOP GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak::bang_baseline_5F_instruction_5F_MNOP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_MNOP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_MNOP) ;
      result = GALGAS_baseline_5F_instruction_5F_MNOP ((cPtr_baseline_5F_instruction_5F_MNOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_MNOP-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak ("baseline_instruction_MNOP-weak",
                                                                                               & kTypeDescriptor_GALGAS_baseline_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak result ;
  const GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak * p = (const GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_MNOP_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_MNOP-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_FOREVER reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_FOREVER::cPtr_baseline_5F_instruction_5F_FOREVER (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_FOREVER::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mEndOfInstructionList.printNonNullClassInstanceProperties ("mEndOfInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_baseline_5F_instruction_5F_FOREVER::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_instruction_5F_FOREVER * p = (const cPtr_baseline_5F_instruction_5F_FOREVER *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FOREVER) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOfInstructionList.objectCompare (p->mProperty_mEndOfInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_instruction_5F_FOREVER::objectCompare (const GALGAS_baseline_5F_instruction_5F_FOREVER & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_FOREVER::GALGAS_baseline_5F_instruction_5F_FOREVER (void) :
GALGAS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FOREVER GALGAS_baseline_5F_instruction_5F_FOREVER::
init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                  const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                  const GALGAS_location & in_mEndOfInstructionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_FOREVER * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_FOREVER (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_FOREVER_init_21__21__21_ (in_mInstructionLocation, in_mInstructionList, in_mEndOfInstructionList, inCompiler) ;
  const GALGAS_baseline_5F_instruction_5F_FOREVER result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_FOREVER::
baseline_5F_instruction_5F_FOREVER_init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                     const GALGAS_location & in_mEndOfInstructionList,
                                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FOREVER::GALGAS_baseline_5F_instruction_5F_FOREVER (const cPtr_baseline_5F_instruction_5F_FOREVER * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_FOREVER) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FOREVER GALGAS_baseline_5F_instruction_5F_FOREVER::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                     const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                                                                     const GALGAS_location & in_mEndOfInstructionList
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FOREVER result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_FOREVER (in_mInstructionLocation, in_mInstructionList, in_mEndOfInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instruction_5F_FOREVER::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_instructionList () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FOREVER * p = (cPtr_baseline_5F_instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FOREVER) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_FOREVER::setProperty_mInstructionList (const GALGAS_baseline_5F_instructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_FOREVER * p = (cPtr_baseline_5F_instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FOREVER) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_baseline_5F_instruction_5F_FOREVER::readProperty_mEndOfInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FOREVER * p = (cPtr_baseline_5F_instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FOREVER) ;
    return p->mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_FOREVER::setProperty_mEndOfInstructionList (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_FOREVER * p = (cPtr_baseline_5F_instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FOREVER) ;
    p->mProperty_mEndOfInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_FOREVER class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_FOREVER::cPtr_baseline_5F_instruction_5F_FOREVER (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                                                  const GALGAS_location & in_mEndOfInstructionList
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_FOREVER::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER ;
}

void cPtr_baseline_5F_instruction_5F_FOREVER::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_FOREVER:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_FOREVER::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_FOREVER (mProperty_mInstructionLocation, mProperty_mInstructionList, mProperty_mEndOfInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_FOREVER generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER ("baseline_instruction_FOREVER",
                                                                                          & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_FOREVER::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_FOREVER::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_FOREVER (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FOREVER GALGAS_baseline_5F_instruction_5F_FOREVER::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FOREVER result ;
  const GALGAS_baseline_5F_instruction_5F_FOREVER * p = (const GALGAS_baseline_5F_instruction_5F_FOREVER *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_FOREVER *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_FOREVER", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak::objectCompare (const GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak::GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak (void) :
GALGAS_baseline_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak & GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak::operator = (const GALGAS_baseline_5F_instruction_5F_FOREVER & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak::GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak (const GALGAS_baseline_5F_instruction_5F_FOREVER & inSource) :
GALGAS_baseline_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FOREVER GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak::bang_baseline_5F_instruction_5F_FOREVER_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_FOREVER result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_FOREVER) ;
      result = GALGAS_baseline_5F_instruction_5F_FOREVER ((cPtr_baseline_5F_instruction_5F_FOREVER *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_FOREVER-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak ("baseline_instruction_FOREVER-weak",
                                                                                                  & kTypeDescriptor_GALGAS_baseline_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak result ;
  const GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak * p = (const GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_FOREVER_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_FOREVER-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::objectCompare (const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak (void) :
GALGAS_baseline_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak & GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::operator = (const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak (const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inSource) :
GALGAS_baseline_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::bang_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
      result = GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT ((cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_STATIC_REPEAT-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak ("baseline_instruction_STATIC_REPEAT-weak",
                                                                                                           & kTypeDescriptor_GALGAS_baseline_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak result ;
  const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak * p = (const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_STATIC_REPEAT-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (void) :
GALGAS_baseline_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_instruction () ;
  }else{
    cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON * p = (cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::setProperty_mInstruction (const GALGAS_baseline_5F_instruction & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON * p = (cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
    p->mProperty_mInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_IF_SEMI_COLON class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const GALGAS_location & in_mInstructionLocation,
                                                                                                          const GALGAS_baseline_5F_instruction & in_mInstruction
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_IF_SEMI_COLON generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON ("baseline_instruction_IF_SEMI_COLON",
                                                                                                      & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON result ;
  const GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON * p = (const GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_IF_SEMI_COLON", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak (void) :
GALGAS_baseline_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak & GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::operator = (const GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak (const GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inSource) :
GALGAS_baseline_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::bang_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
      result = GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON ((cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_IF_SEMI_COLON-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak ("baseline_instruction_IF_SEMI_COLON-weak",
                                                                                                              & kTypeDescriptor_GALGAS_baseline_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak result ;
  const GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak * p = (const GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_IF_SEMI_COLON-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak::objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak::GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak (void) :
GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak & GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak::operator = (const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak::GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak (const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest & inSource) :
GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak::bang_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
      result = GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest ((cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_IF_BitTest-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak ("baseline_instruction_IF_BitTest-weak",
                                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak result ;
  const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak * p = (const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_IF_BitTest-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak::objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak::GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak (void) :
GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak & GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak::operator = (const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak::GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak (const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec & inSource) :
GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak::bang_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
      result = GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec ((cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_IF_IncDec-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak ("baseline_instruction_IF_IncDec-weak",
                                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak result ;
  const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak * p = (const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_IF_IncDec-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_conditionExpression reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_conditionExpression::cPtr_baseline_5F_conditionExpression (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_conditionExpression::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_baseline_5F_conditionExpression::objectCompare (const GALGAS_baseline_5F_conditionExpression & inOperand) const {
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

GALGAS_baseline_5F_conditionExpression::GALGAS_baseline_5F_conditionExpression (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_conditionExpression::GALGAS_baseline_5F_conditionExpression (const cPtr_baseline_5F_conditionExpression * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_conditionExpression) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_conditionExpression class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_conditionExpression::cPtr_baseline_5F_conditionExpression (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_conditionExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_conditionExpression ("baseline_conditionExpression",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_conditionExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_conditionExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_conditionExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_conditionExpression GALGAS_baseline_5F_conditionExpression::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_conditionExpression result ;
  const GALGAS_baseline_5F_conditionExpression * p = (const GALGAS_baseline_5F_conditionExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_conditionExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_conditionExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_conditionExpression_2D_weak::objectCompare (const GALGAS_baseline_5F_conditionExpression_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_conditionExpression_2D_weak::GALGAS_baseline_5F_conditionExpression_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_conditionExpression_2D_weak & GALGAS_baseline_5F_conditionExpression_2D_weak::operator = (const GALGAS_baseline_5F_conditionExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_conditionExpression_2D_weak::GALGAS_baseline_5F_conditionExpression_2D_weak (const GALGAS_baseline_5F_conditionExpression & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_conditionExpression_2D_weak GALGAS_baseline_5F_conditionExpression_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_conditionExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_conditionExpression GALGAS_baseline_5F_conditionExpression_2D_weak::bang_baseline_5F_conditionExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_conditionExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_conditionExpression) ;
      result = GALGAS_baseline_5F_conditionExpression ((cPtr_baseline_5F_conditionExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_conditionExpression-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_conditionExpression_2D_weak ("baseline_conditionExpression-weak",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_conditionExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_conditionExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_conditionExpression_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_conditionExpression_2D_weak GALGAS_baseline_5F_conditionExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_conditionExpression_2D_weak result ;
  const GALGAS_baseline_5F_conditionExpression_2D_weak * p = (const GALGAS_baseline_5F_conditionExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_conditionExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_conditionExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak::objectCompare (const GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak::GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak (void) :
GALGAS_baseline_5F_conditionExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak & GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak::operator = (const GALGAS_baseline_5F_incDecRegisterInCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak::GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak (const GALGAS_baseline_5F_incDecRegisterInCondition & inSource) :
GALGAS_baseline_5F_conditionExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_incDecRegisterInCondition GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak::bang_baseline_5F_incDecRegisterInCondition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_incDecRegisterInCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_incDecRegisterInCondition) ;
      result = GALGAS_baseline_5F_incDecRegisterInCondition ((cPtr_baseline_5F_incDecRegisterInCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_incDecRegisterInCondition-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak ("baseline_incDecRegisterInCondition-weak",
                                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak result ;
  const GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak * p = (const GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_incDecRegisterInCondition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_incDecRegisterInCondition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_negateCondition reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_negateCondition::cPtr_baseline_5F_negateCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mCondition () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_negateCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_conditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mCondition.printNonNullClassInstanceProperties ("mCondition") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_baseline_5F_negateCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_negateCondition * p = (const cPtr_baseline_5F_negateCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_negateCondition) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mCondition.objectCompare (p->mProperty_mCondition) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_negateCondition::objectCompare (const GALGAS_baseline_5F_negateCondition & inOperand) const {
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

GALGAS_baseline_5F_negateCondition::GALGAS_baseline_5F_negateCondition (void) :
GALGAS_baseline_5F_conditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_negateCondition GALGAS_baseline_5F_negateCondition::
init_21_ (const GALGAS_baseline_5F_conditionExpression & in_mCondition,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_negateCondition * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_negateCondition (inCompiler COMMA_THERE)) ;
  object->baseline_5F_negateCondition_init_21_ (in_mCondition, inCompiler) ;
  const GALGAS_baseline_5F_negateCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_negateCondition::
baseline_5F_negateCondition_init_21_ (const GALGAS_baseline_5F_conditionExpression & in_mCondition,
                                      Compiler * /* inCompiler */) {
  mProperty_mCondition = in_mCondition ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_negateCondition::GALGAS_baseline_5F_negateCondition (const cPtr_baseline_5F_negateCondition * inSourcePtr) :
GALGAS_baseline_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_negateCondition) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_negateCondition GALGAS_baseline_5F_negateCondition::class_func_new (const GALGAS_baseline_5F_conditionExpression & in_mCondition
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_negateCondition result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_negateCondition (in_mCondition COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_conditionExpression GALGAS_baseline_5F_negateCondition::readProperty_mCondition (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_conditionExpression () ;
  }else{
    cPtr_baseline_5F_negateCondition * p = (cPtr_baseline_5F_negateCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_negateCondition) ;
    return p->mProperty_mCondition ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_negateCondition::setProperty_mCondition (const GALGAS_baseline_5F_conditionExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_negateCondition * p = (cPtr_baseline_5F_negateCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_negateCondition) ;
    p->mProperty_mCondition = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_negateCondition class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_negateCondition::cPtr_baseline_5F_negateCondition (const GALGAS_baseline_5F_conditionExpression & in_mCondition
                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (THERE),
mProperty_mCondition () {
  mProperty_mCondition = in_mCondition ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_negateCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_negateCondition ;
}

void cPtr_baseline_5F_negateCondition::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_negateCondition:") ;
  mProperty_mCondition.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_negateCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_negateCondition (mProperty_mCondition COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_negateCondition generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_negateCondition ("baseline_negateCondition",
                                                                                   & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_negateCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_negateCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_negateCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_negateCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_negateCondition GALGAS_baseline_5F_negateCondition::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_negateCondition result ;
  const GALGAS_baseline_5F_negateCondition * p = (const GALGAS_baseline_5F_negateCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_negateCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_negateCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_negateCondition_2D_weak::objectCompare (const GALGAS_baseline_5F_negateCondition_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_negateCondition_2D_weak::GALGAS_baseline_5F_negateCondition_2D_weak (void) :
GALGAS_baseline_5F_conditionExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_negateCondition_2D_weak & GALGAS_baseline_5F_negateCondition_2D_weak::operator = (const GALGAS_baseline_5F_negateCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_negateCondition_2D_weak::GALGAS_baseline_5F_negateCondition_2D_weak (const GALGAS_baseline_5F_negateCondition & inSource) :
GALGAS_baseline_5F_conditionExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_negateCondition_2D_weak GALGAS_baseline_5F_negateCondition_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_negateCondition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_negateCondition GALGAS_baseline_5F_negateCondition_2D_weak::bang_baseline_5F_negateCondition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_negateCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_negateCondition) ;
      result = GALGAS_baseline_5F_negateCondition ((cPtr_baseline_5F_negateCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_negateCondition-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_negateCondition_2D_weak ("baseline_negateCondition-weak",
                                                                                           & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_negateCondition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_negateCondition_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_negateCondition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_negateCondition_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_negateCondition_2D_weak GALGAS_baseline_5F_negateCondition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_negateCondition_2D_weak result ;
  const GALGAS_baseline_5F_negateCondition_2D_weak * p = (const GALGAS_baseline_5F_negateCondition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_negateCondition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_negateCondition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_andCondition reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_andCondition::cPtr_baseline_5F_andCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_andCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_conditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_baseline_5F_andCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_andCondition * p = (const cPtr_baseline_5F_andCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_andCondition) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_andCondition::objectCompare (const GALGAS_baseline_5F_andCondition & inOperand) const {
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

GALGAS_baseline_5F_andCondition::GALGAS_baseline_5F_andCondition (void) :
GALGAS_baseline_5F_conditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_andCondition GALGAS_baseline_5F_andCondition::
init_21__21_ (const GALGAS_baseline_5F_conditionExpression & in_mLeftExpression,
              const GALGAS_baseline_5F_conditionExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_andCondition * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_andCondition (inCompiler COMMA_THERE)) ;
  object->baseline_5F_andCondition_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GALGAS_baseline_5F_andCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_andCondition::
baseline_5F_andCondition_init_21__21_ (const GALGAS_baseline_5F_conditionExpression & in_mLeftExpression,
                                       const GALGAS_baseline_5F_conditionExpression & in_mRightExpression,
                                       Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_andCondition::GALGAS_baseline_5F_andCondition (const cPtr_baseline_5F_andCondition * inSourcePtr) :
GALGAS_baseline_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_andCondition) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_andCondition GALGAS_baseline_5F_andCondition::class_func_new (const GALGAS_baseline_5F_conditionExpression & in_mLeftExpression,
                                                                                 const GALGAS_baseline_5F_conditionExpression & in_mRightExpression
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_andCondition result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_andCondition (in_mLeftExpression, in_mRightExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_conditionExpression GALGAS_baseline_5F_andCondition::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_conditionExpression () ;
  }else{
    cPtr_baseline_5F_andCondition * p = (cPtr_baseline_5F_andCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_andCondition) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_andCondition::setProperty_mLeftExpression (const GALGAS_baseline_5F_conditionExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_andCondition * p = (cPtr_baseline_5F_andCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_andCondition) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_conditionExpression GALGAS_baseline_5F_andCondition::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_conditionExpression () ;
  }else{
    cPtr_baseline_5F_andCondition * p = (cPtr_baseline_5F_andCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_andCondition) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_andCondition::setProperty_mRightExpression (const GALGAS_baseline_5F_conditionExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_andCondition * p = (cPtr_baseline_5F_andCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_andCondition) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_andCondition class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_andCondition::cPtr_baseline_5F_andCondition (const GALGAS_baseline_5F_conditionExpression & in_mLeftExpression,
                                                              const GALGAS_baseline_5F_conditionExpression & in_mRightExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_andCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_andCondition ;
}

void cPtr_baseline_5F_andCondition::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_andCondition:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_andCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_andCondition (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_andCondition generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_andCondition ("baseline_andCondition",
                                                                                & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_andCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_andCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_andCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_andCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_andCondition GALGAS_baseline_5F_andCondition::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_andCondition result ;
  const GALGAS_baseline_5F_andCondition * p = (const GALGAS_baseline_5F_andCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_andCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_andCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_andCondition_2D_weak::objectCompare (const GALGAS_baseline_5F_andCondition_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_andCondition_2D_weak::GALGAS_baseline_5F_andCondition_2D_weak (void) :
GALGAS_baseline_5F_conditionExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_andCondition_2D_weak & GALGAS_baseline_5F_andCondition_2D_weak::operator = (const GALGAS_baseline_5F_andCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_andCondition_2D_weak::GALGAS_baseline_5F_andCondition_2D_weak (const GALGAS_baseline_5F_andCondition & inSource) :
GALGAS_baseline_5F_conditionExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_andCondition_2D_weak GALGAS_baseline_5F_andCondition_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_andCondition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_andCondition GALGAS_baseline_5F_andCondition_2D_weak::bang_baseline_5F_andCondition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_andCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_andCondition) ;
      result = GALGAS_baseline_5F_andCondition ((cPtr_baseline_5F_andCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_andCondition-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_andCondition_2D_weak ("baseline_andCondition-weak",
                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_andCondition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_andCondition_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_andCondition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_andCondition_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_andCondition_2D_weak GALGAS_baseline_5F_andCondition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_andCondition_2D_weak result ;
  const GALGAS_baseline_5F_andCondition_2D_weak * p = (const GALGAS_baseline_5F_andCondition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_andCondition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_andCondition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak::objectCompare (const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak::GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak (void) :
GALGAS_baseline_5F_conditionExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak & GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak::operator = (const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak::GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak (const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inSource) :
GALGAS_baseline_5F_conditionExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak::bang_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
      result = GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ((cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_bitTest_in_structured_if_condition-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak ("baseline_bitTest_in_structured_if_condition-weak",
                                                                                                                          & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak result ;
  const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak * p = (const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_bitTest_in_structured_if_condition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_structured_5F_if reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_structured_5F_if::cPtr_baseline_5F_instruction_5F_structured_5F_if (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mIfCondition (),
mProperty_mThenInstructionList (),
mProperty_mElseInstructionList (),
mProperty_mEndOfElsePartLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_structured_5F_if::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mIfCondition.printNonNullClassInstanceProperties ("mIfCondition") ;
    mProperty_mThenInstructionList.printNonNullClassInstanceProperties ("mThenInstructionList") ;
    mProperty_mElseInstructionList.printNonNullClassInstanceProperties ("mElseInstructionList") ;
    mProperty_mEndOfElsePartLocation.printNonNullClassInstanceProperties ("mEndOfElsePartLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_baseline_5F_instruction_5F_structured_5F_if::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (const cPtr_baseline_5F_instruction_5F_structured_5F_if *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIfCondition.objectCompare (p->mProperty_mIfCondition) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mThenInstructionList.objectCompare (p->mProperty_mThenInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mElseInstructionList.objectCompare (p->mProperty_mElseInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOfElsePartLocation.objectCompare (p->mProperty_mEndOfElsePartLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_instruction_5F_structured_5F_if::objectCompare (const GALGAS_baseline_5F_instruction_5F_structured_5F_if & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_structured_5F_if::GALGAS_baseline_5F_instruction_5F_structured_5F_if (void) :
GALGAS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_structured_5F_if GALGAS_baseline_5F_instruction_5F_structured_5F_if::
init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                          const GALGAS_baseline_5F_conditionExpression & in_mIfCondition,
                          const GALGAS_baseline_5F_instructionList & in_mThenInstructionList,
                          const GALGAS_baseline_5F_instructionList & in_mElseInstructionList,
                          const GALGAS_location & in_mEndOfElsePartLocation,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_structured_5F_if * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_structured_5F_if (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_structured_5F_if_init_21__21__21__21__21_ (in_mInstructionLocation, in_mIfCondition, in_mThenInstructionList, in_mElseInstructionList, in_mEndOfElsePartLocation, inCompiler) ;
  const GALGAS_baseline_5F_instruction_5F_structured_5F_if result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_structured_5F_if::
baseline_5F_instruction_5F_structured_5F_if_init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_baseline_5F_conditionExpression & in_mIfCondition,
                                                                      const GALGAS_baseline_5F_instructionList & in_mThenInstructionList,
                                                                      const GALGAS_baseline_5F_instructionList & in_mElseInstructionList,
                                                                      const GALGAS_location & in_mEndOfElsePartLocation,
                                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mIfCondition = in_mIfCondition ;
  mProperty_mThenInstructionList = in_mThenInstructionList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
  mProperty_mEndOfElsePartLocation = in_mEndOfElsePartLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_structured_5F_if::GALGAS_baseline_5F_instruction_5F_structured_5F_if (const cPtr_baseline_5F_instruction_5F_structured_5F_if * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_structured_5F_if GALGAS_baseline_5F_instruction_5F_structured_5F_if::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                       const GALGAS_baseline_5F_conditionExpression & in_mIfCondition,
                                                                                                                       const GALGAS_baseline_5F_instructionList & in_mThenInstructionList,
                                                                                                                       const GALGAS_baseline_5F_instructionList & in_mElseInstructionList,
                                                                                                                       const GALGAS_location & in_mEndOfElsePartLocation
                                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_structured_5F_if result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_structured_5F_if (in_mInstructionLocation, in_mIfCondition, in_mThenInstructionList, in_mElseInstructionList, in_mEndOfElsePartLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_conditionExpression GALGAS_baseline_5F_instruction_5F_structured_5F_if::readProperty_mIfCondition (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_conditionExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    return p->mProperty_mIfCondition ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_structured_5F_if::setProperty_mIfCondition (const GALGAS_baseline_5F_conditionExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    p->mProperty_mIfCondition = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instruction_5F_structured_5F_if::readProperty_mThenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_instructionList () ;
  }else{
    cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    return p->mProperty_mThenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_structured_5F_if::setProperty_mThenInstructionList (const GALGAS_baseline_5F_instructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    p->mProperty_mThenInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instruction_5F_structured_5F_if::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_instructionList () ;
  }else{
    cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_structured_5F_if::setProperty_mElseInstructionList (const GALGAS_baseline_5F_instructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    p->mProperty_mElseInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_baseline_5F_instruction_5F_structured_5F_if::readProperty_mEndOfElsePartLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    return p->mProperty_mEndOfElsePartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_structured_5F_if::setProperty_mEndOfElsePartLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    p->mProperty_mEndOfElsePartLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_structured_if class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_structured_5F_if::cPtr_baseline_5F_instruction_5F_structured_5F_if (const GALGAS_location & in_mInstructionLocation,
                                                                                                    const GALGAS_baseline_5F_conditionExpression & in_mIfCondition,
                                                                                                    const GALGAS_baseline_5F_instructionList & in_mThenInstructionList,
                                                                                                    const GALGAS_baseline_5F_instructionList & in_mElseInstructionList,
                                                                                                    const GALGAS_location & in_mEndOfElsePartLocation
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_structured_5F_if::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if ;
}

void cPtr_baseline_5F_instruction_5F_structured_5F_if::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_structured_if:") ;
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

acPtr_class * cPtr_baseline_5F_instruction_5F_structured_5F_if::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_structured_5F_if (mProperty_mInstructionLocation, mProperty_mIfCondition, mProperty_mThenInstructionList, mProperty_mElseInstructionList, mProperty_mEndOfElsePartLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_structured_if generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if ("baseline_instruction_structured_if",
                                                                                                   & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_structured_5F_if::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_structured_5F_if::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_structured_5F_if (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_structured_5F_if GALGAS_baseline_5F_instruction_5F_structured_5F_if::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_structured_5F_if result ;
  const GALGAS_baseline_5F_instruction_5F_structured_5F_if * p = (const GALGAS_baseline_5F_instruction_5F_structured_5F_if *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_structured_5F_if *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_structured_if", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak::objectCompare (const GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak::GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak (void) :
GALGAS_baseline_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak & GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak::operator = (const GALGAS_baseline_5F_instruction_5F_structured_5F_if & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak::GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak (const GALGAS_baseline_5F_instruction_5F_structured_5F_if & inSource) :
GALGAS_baseline_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_structured_5F_if GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak::bang_baseline_5F_instruction_5F_structured_5F_if_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_structured_5F_if result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
      result = GALGAS_baseline_5F_instruction_5F_structured_5F_if ((cPtr_baseline_5F_instruction_5F_structured_5F_if *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_structured_if-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak ("baseline_instruction_structured_if-weak",
                                                                                                           & kTypeDescriptor_GALGAS_baseline_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak result ;
  const GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak * p = (const GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_structured_5F_if_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_structured_if-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@baseline_5F_partList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_baseline_5F_partList : public cCollectionElement {
  public: GALGAS_baseline_5F_partList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_baseline_5F_partList (const GALGAS_baseline_5F_conditionExpression & in_mCondition,
                                                   const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                   const GALGAS_location & in_mEndOfPartLocation
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_baseline_5F_partList (const GALGAS_baseline_5F_partList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_baseline_5F_partList::cCollectionElement_baseline_5F_partList (const GALGAS_baseline_5F_conditionExpression & in_mCondition,
                                                                                  const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                                                  const GALGAS_location & in_mEndOfPartLocation
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCondition, in_mInstructionList, in_mEndOfPartLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_baseline_5F_partList::cCollectionElement_baseline_5F_partList (const GALGAS_baseline_5F_partList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mCondition, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfPartLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_baseline_5F_partList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_baseline_5F_partList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_baseline_5F_partList (mObject.mProperty_mCondition, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfPartLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_baseline_5F_partList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCondition" ":") ;
  mObject.mProperty_mCondition.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfPartLocation" ":") ;
  mObject.mProperty_mEndOfPartLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_baseline_5F_partList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_baseline_5F_partList * operand = (cCollectionElement_baseline_5F_partList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_baseline_5F_partList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_partList::GALGAS_baseline_5F_partList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_partList::GALGAS_baseline_5F_partList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_partList GALGAS_baseline_5F_partList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_baseline_5F_partList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_partList GALGAS_baseline_5F_partList::class_func_listWithValue (const GALGAS_baseline_5F_conditionExpression & inOperand0,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_partList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_baseline_5F_conditionExpression & in_mCondition,
                                                             const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                             const GALGAS_location & in_mEndOfPartLocation
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_partList * p = nullptr ;
  macroMyNew (p, cCollectionElement_baseline_5F_partList (in_mCondition,
                                                          in_mInstructionList,
                                                          in_mEndOfPartLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_partList::addAssign_operation (const GALGAS_baseline_5F_conditionExpression & inOperand0,
                                                       const GALGAS_baseline_5F_instructionList & inOperand1,
                                                       const GALGAS_location & inOperand2
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_baseline_5F_partList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_partList::setter_append (const GALGAS_baseline_5F_conditionExpression inOperand0,
                                                 const GALGAS_baseline_5F_instructionList inOperand1,
                                                 const GALGAS_location inOperand2,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_baseline_5F_partList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_partList::setter_insertAtIndex (const GALGAS_baseline_5F_conditionExpression inOperand0,
                                                        const GALGAS_baseline_5F_instructionList inOperand1,
                                                        const GALGAS_location inOperand2,
                                                        const GALGAS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_baseline_5F_partList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_partList::setter_removeAtIndex (GALGAS_baseline_5F_conditionExpression & outOperand0,
                                                        GALGAS_baseline_5F_instructionList & outOperand1,
                                                        GALGAS_location & outOperand2,
                                                        const GALGAS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_partList::setter_popFirst (GALGAS_baseline_5F_conditionExpression & outOperand0,
                                                   GALGAS_baseline_5F_instructionList & outOperand1,
                                                   GALGAS_location & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_partList::setter_popLast (GALGAS_baseline_5F_conditionExpression & outOperand0,
                                                  GALGAS_baseline_5F_instructionList & outOperand1,
                                                  GALGAS_location & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_partList::method_first (GALGAS_baseline_5F_conditionExpression & outOperand0,
                                                GALGAS_baseline_5F_instructionList & outOperand1,
                                                GALGAS_location & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_partList::method_last (GALGAS_baseline_5F_conditionExpression & outOperand0,
                                               GALGAS_baseline_5F_instructionList & outOperand1,
                                               GALGAS_location & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_partList GALGAS_baseline_5F_partList::add_operation (const GALGAS_baseline_5F_partList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_partList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_partList GALGAS_baseline_5F_partList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_partList result = GALGAS_baseline_5F_partList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_partList GALGAS_baseline_5F_partList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_partList result = GALGAS_baseline_5F_partList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_partList GALGAS_baseline_5F_partList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_partList result = GALGAS_baseline_5F_partList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_partList::plusAssign_operation (const GALGAS_baseline_5F_partList inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_partList::setter_setMConditionAtIndex (GALGAS_baseline_5F_conditionExpression inOperand,
                                                               GALGAS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCondition = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_conditionExpression GALGAS_baseline_5F_partList::getter_mConditionAtIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  GALGAS_baseline_5F_conditionExpression result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    result = p->mObject.mProperty_mCondition ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_partList::setter_setMInstructionListAtIndex (GALGAS_baseline_5F_instructionList inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_partList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  GALGAS_baseline_5F_instructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_partList::setter_setMEndOfPartLocationAtIndex (GALGAS_location inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfPartLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_baseline_5F_partList::getter_mEndOfPartLocationAtIndex (const GALGAS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    result = p->mObject.mProperty_mEndOfPartLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_baseline_5F_partList::cEnumerator_baseline_5F_partList (const GALGAS_baseline_5F_partList & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_partList_2D_element cEnumerator_baseline_5F_partList::current (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_partList * p = (const cCollectionElement_baseline_5F_partList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_conditionExpression cEnumerator_baseline_5F_partList::current_mCondition (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_partList * p = (const cCollectionElement_baseline_5F_partList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
  return p->mObject.mProperty_mCondition ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList cEnumerator_baseline_5F_partList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_partList * p = (const cCollectionElement_baseline_5F_partList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_baseline_5F_partList::current_mEndOfPartLocation (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_partList * p = (const cCollectionElement_baseline_5F_partList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
  return p->mObject.mProperty_mEndOfPartLocation ;
}




//--------------------------------------------------------------------------------------------------
//
//     @baseline_partList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_partList ("baseline_partList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_partList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_partList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_partList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_partList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_partList GALGAS_baseline_5F_partList::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_partList result ;
  const GALGAS_baseline_5F_partList * p = (const GALGAS_baseline_5F_partList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_partList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_partList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_do_5F_while reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_do_5F_while::cPtr_baseline_5F_instruction_5F_do_5F_while (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mEndOfRepeatedInstructionList (),
mProperty_mWhilePartList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_do_5F_while::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mRepeatedInstructionList.printNonNullClassInstanceProperties ("mRepeatedInstructionList") ;
    mProperty_mEndOfRepeatedInstructionList.printNonNullClassInstanceProperties ("mEndOfRepeatedInstructionList") ;
    mProperty_mWhilePartList.printNonNullClassInstanceProperties ("mWhilePartList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_baseline_5F_instruction_5F_do_5F_while::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_instruction_5F_do_5F_while * p = (const cPtr_baseline_5F_instruction_5F_do_5F_while *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRepeatedInstructionList.objectCompare (p->mProperty_mRepeatedInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOfRepeatedInstructionList.objectCompare (p->mProperty_mEndOfRepeatedInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mWhilePartList.objectCompare (p->mProperty_mWhilePartList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_instruction_5F_do_5F_while::objectCompare (const GALGAS_baseline_5F_instruction_5F_do_5F_while & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_do_5F_while::GALGAS_baseline_5F_instruction_5F_do_5F_while (void) :
GALGAS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_do_5F_while GALGAS_baseline_5F_instruction_5F_do_5F_while::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_baseline_5F_instructionList & in_mRepeatedInstructionList,
                      const GALGAS_location & in_mEndOfRepeatedInstructionList,
                      const GALGAS_baseline_5F_partList & in_mWhilePartList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_do_5F_while * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_do_5F_while (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_do_5F_while_init_21__21__21__21_ (in_mInstructionLocation, in_mRepeatedInstructionList, in_mEndOfRepeatedInstructionList, in_mWhilePartList, inCompiler) ;
  const GALGAS_baseline_5F_instruction_5F_do_5F_while result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_do_5F_while::
baseline_5F_instruction_5F_do_5F_while_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                             const GALGAS_baseline_5F_instructionList & in_mRepeatedInstructionList,
                                                             const GALGAS_location & in_mEndOfRepeatedInstructionList,
                                                             const GALGAS_baseline_5F_partList & in_mWhilePartList,
                                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mEndOfRepeatedInstructionList = in_mEndOfRepeatedInstructionList ;
  mProperty_mWhilePartList = in_mWhilePartList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_do_5F_while::GALGAS_baseline_5F_instruction_5F_do_5F_while (const cPtr_baseline_5F_instruction_5F_do_5F_while * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_do_5F_while GALGAS_baseline_5F_instruction_5F_do_5F_while::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                             const GALGAS_baseline_5F_instructionList & in_mRepeatedInstructionList,
                                                                                                             const GALGAS_location & in_mEndOfRepeatedInstructionList,
                                                                                                             const GALGAS_baseline_5F_partList & in_mWhilePartList
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_do_5F_while result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_do_5F_while (in_mInstructionLocation, in_mRepeatedInstructionList, in_mEndOfRepeatedInstructionList, in_mWhilePartList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instruction_5F_do_5F_while::readProperty_mRepeatedInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_instructionList () ;
  }else{
    cPtr_baseline_5F_instruction_5F_do_5F_while * p = (cPtr_baseline_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
    return p->mProperty_mRepeatedInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_do_5F_while::setProperty_mRepeatedInstructionList (const GALGAS_baseline_5F_instructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_do_5F_while * p = (cPtr_baseline_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
    p->mProperty_mRepeatedInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_baseline_5F_instruction_5F_do_5F_while::readProperty_mEndOfRepeatedInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_baseline_5F_instruction_5F_do_5F_while * p = (cPtr_baseline_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
    return p->mProperty_mEndOfRepeatedInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_do_5F_while::setProperty_mEndOfRepeatedInstructionList (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_do_5F_while * p = (cPtr_baseline_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
    p->mProperty_mEndOfRepeatedInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_partList GALGAS_baseline_5F_instruction_5F_do_5F_while::readProperty_mWhilePartList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_partList () ;
  }else{
    cPtr_baseline_5F_instruction_5F_do_5F_while * p = (cPtr_baseline_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
    return p->mProperty_mWhilePartList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_do_5F_while::setProperty_mWhilePartList (const GALGAS_baseline_5F_partList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_do_5F_while * p = (cPtr_baseline_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
    p->mProperty_mWhilePartList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_do_while class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_do_5F_while::cPtr_baseline_5F_instruction_5F_do_5F_while (const GALGAS_location & in_mInstructionLocation,
                                                                                          const GALGAS_baseline_5F_instructionList & in_mRepeatedInstructionList,
                                                                                          const GALGAS_location & in_mEndOfRepeatedInstructionList,
                                                                                          const GALGAS_baseline_5F_partList & in_mWhilePartList
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mEndOfRepeatedInstructionList (),
mProperty_mWhilePartList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mEndOfRepeatedInstructionList = in_mEndOfRepeatedInstructionList ;
  mProperty_mWhilePartList = in_mWhilePartList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_do_5F_while::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while ;
}

void cPtr_baseline_5F_instruction_5F_do_5F_while::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_do_while:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhilePartList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_do_5F_while::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_do_5F_while (mProperty_mInstructionLocation, mProperty_mRepeatedInstructionList, mProperty_mEndOfRepeatedInstructionList, mProperty_mWhilePartList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_do_while generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while ("baseline_instruction_do_while",
                                                                                              & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_do_5F_while::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_do_5F_while::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_do_5F_while (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_do_5F_while GALGAS_baseline_5F_instruction_5F_do_5F_while::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_do_5F_while result ;
  const GALGAS_baseline_5F_instruction_5F_do_5F_while * p = (const GALGAS_baseline_5F_instruction_5F_do_5F_while *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_do_5F_while *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_do_while", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak::objectCompare (const GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak::GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak (void) :
GALGAS_baseline_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak & GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak::operator = (const GALGAS_baseline_5F_instruction_5F_do_5F_while & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak::GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak (const GALGAS_baseline_5F_instruction_5F_do_5F_while & inSource) :
GALGAS_baseline_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_do_5F_while GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak::bang_baseline_5F_instruction_5F_do_5F_while_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_do_5F_while result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
      result = GALGAS_baseline_5F_instruction_5F_do_5F_while ((cPtr_baseline_5F_instruction_5F_do_5F_while *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_do_while-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak ("baseline_instruction_do_while-weak",
                                                                                                      & kTypeDescriptor_GALGAS_baseline_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak result ;
  const GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak * p = (const GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_do_5F_while_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_do_while-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@baseline_5F_routineDefinitionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_baseline_5F_routineDefinitionList : public cCollectionElement {
  public: GALGAS_baseline_5F_routineDefinitionList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_baseline_5F_routineDefinitionList (const GALGAS_lstring & in_mRoutineName,
                                                                const GALGAS_luint & in_mPage,
                                                                const GALGAS_bool & in_mIsNoReturn,
                                                                const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                                const GALGAS_location & in_mEndOfRoutineLocation
                                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_baseline_5F_routineDefinitionList (const GALGAS_baseline_5F_routineDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_baseline_5F_routineDefinitionList::cCollectionElement_baseline_5F_routineDefinitionList (const GALGAS_lstring & in_mRoutineName,
                                                                                                            const GALGAS_luint & in_mPage,
                                                                                                            const GALGAS_bool & in_mIsNoReturn,
                                                                                                            const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                                                                            const GALGAS_location & in_mEndOfRoutineLocation
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRoutineName, in_mPage, in_mIsNoReturn, in_mInstructionList, in_mEndOfRoutineLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_baseline_5F_routineDefinitionList::cCollectionElement_baseline_5F_routineDefinitionList (const GALGAS_baseline_5F_routineDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRoutineName, inElement.mProperty_mPage, inElement.mProperty_mIsNoReturn, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfRoutineLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_baseline_5F_routineDefinitionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_baseline_5F_routineDefinitionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_baseline_5F_routineDefinitionList (mObject.mProperty_mRoutineName, mObject.mProperty_mPage, mObject.mProperty_mIsNoReturn, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfRoutineLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_baseline_5F_routineDefinitionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRoutineName" ":") ;
  mObject.mProperty_mRoutineName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPage" ":") ;
  mObject.mProperty_mPage.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsNoReturn" ":") ;
  mObject.mProperty_mIsNoReturn.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfRoutineLocation" ":") ;
  mObject.mProperty_mEndOfRoutineLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_baseline_5F_routineDefinitionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_baseline_5F_routineDefinitionList * operand = (cCollectionElement_baseline_5F_routineDefinitionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_routineDefinitionList::GALGAS_baseline_5F_routineDefinitionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_routineDefinitionList::GALGAS_baseline_5F_routineDefinitionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_routineDefinitionList GALGAS_baseline_5F_routineDefinitionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_baseline_5F_routineDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_routineDefinitionList GALGAS_baseline_5F_routineDefinitionList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_routineDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_lstring & in_mRoutineName,
                                                                          const GALGAS_luint & in_mPage,
                                                                          const GALGAS_bool & in_mIsNoReturn,
                                                                          const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                                          const GALGAS_location & in_mEndOfRoutineLocation
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_routineDefinitionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_baseline_5F_routineDefinitionList (in_mRoutineName,
                                                                       in_mPage,
                                                                       in_mIsNoReturn,
                                                                       in_mInstructionList,
                                                                       in_mEndOfRoutineLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_routineDefinitionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_luint & inOperand1,
                                                                    const GALGAS_bool & inOperand2,
                                                                    const GALGAS_baseline_5F_instructionList & inOperand3,
                                                                    const GALGAS_location & inOperand4
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_baseline_5F_routineDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_routineDefinitionList::setter_append (const GALGAS_lstring inOperand0,
                                                              const GALGAS_luint inOperand1,
                                                              const GALGAS_bool inOperand2,
                                                              const GALGAS_baseline_5F_instructionList inOperand3,
                                                              const GALGAS_location inOperand4,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_baseline_5F_routineDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_routineDefinitionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                     const GALGAS_luint inOperand1,
                                                                     const GALGAS_bool inOperand2,
                                                                     const GALGAS_baseline_5F_instructionList inOperand3,
                                                                     const GALGAS_location inOperand4,
                                                                     const GALGAS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_baseline_5F_routineDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_routineDefinitionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                     GALGAS_luint & outOperand1,
                                                                     GALGAS_bool & outOperand2,
                                                                     GALGAS_baseline_5F_instructionList & outOperand3,
                                                                     GALGAS_location & outOperand4,
                                                                     const GALGAS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
        outOperand0 = p->mObject.mProperty_mRoutineName ;
        outOperand1 = p->mObject.mProperty_mPage ;
        outOperand2 = p->mObject.mProperty_mIsNoReturn ;
        outOperand3 = p->mObject.mProperty_mInstructionList ;
        outOperand4 = p->mObject.mProperty_mEndOfRoutineLocation ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_routineDefinitionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                GALGAS_luint & outOperand1,
                                                                GALGAS_bool & outOperand2,
                                                                GALGAS_baseline_5F_instructionList & outOperand3,
                                                                GALGAS_location & outOperand4,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_routineDefinitionList::setter_popLast (GALGAS_lstring & outOperand0,
                                                               GALGAS_luint & outOperand1,
                                                               GALGAS_bool & outOperand2,
                                                               GALGAS_baseline_5F_instructionList & outOperand3,
                                                               GALGAS_location & outOperand4,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_routineDefinitionList::method_first (GALGAS_lstring & outOperand0,
                                                             GALGAS_luint & outOperand1,
                                                             GALGAS_bool & outOperand2,
                                                             GALGAS_baseline_5F_instructionList & outOperand3,
                                                             GALGAS_location & outOperand4,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_routineDefinitionList::method_last (GALGAS_lstring & outOperand0,
                                                            GALGAS_luint & outOperand1,
                                                            GALGAS_bool & outOperand2,
                                                            GALGAS_baseline_5F_instructionList & outOperand3,
                                                            GALGAS_location & outOperand4,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_routineDefinitionList GALGAS_baseline_5F_routineDefinitionList::add_operation (const GALGAS_baseline_5F_routineDefinitionList & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_routineDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_routineDefinitionList GALGAS_baseline_5F_routineDefinitionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_routineDefinitionList result = GALGAS_baseline_5F_routineDefinitionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_routineDefinitionList GALGAS_baseline_5F_routineDefinitionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_routineDefinitionList result = GALGAS_baseline_5F_routineDefinitionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_routineDefinitionList GALGAS_baseline_5F_routineDefinitionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_routineDefinitionList result = GALGAS_baseline_5F_routineDefinitionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_routineDefinitionList::plusAssign_operation (const GALGAS_baseline_5F_routineDefinitionList inOperand,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_routineDefinitionList::setter_setMRoutineNameAtIndex (GALGAS_lstring inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRoutineName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_routineDefinitionList::getter_mRoutineNameAtIndex (const GALGAS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    result = p->mObject.mProperty_mRoutineName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_routineDefinitionList::setter_setMPageAtIndex (GALGAS_luint inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_baseline_5F_routineDefinitionList::getter_mPageAtIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  GALGAS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    result = p->mObject.mProperty_mPage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_routineDefinitionList::setter_setMIsNoReturnAtIndex (GALGAS_bool inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsNoReturn = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_routineDefinitionList::getter_mIsNoReturnAtIndex (const GALGAS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    result = p->mObject.mProperty_mIsNoReturn ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_routineDefinitionList::setter_setMInstructionListAtIndex (GALGAS_baseline_5F_instructionList inOperand,
                                                                                  GALGAS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_routineDefinitionList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  GALGAS_baseline_5F_instructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_routineDefinitionList::setter_setMEndOfRoutineLocationAtIndex (GALGAS_location inOperand,
                                                                                       GALGAS_uint inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfRoutineLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_baseline_5F_routineDefinitionList::getter_mEndOfRoutineLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    result = p->mObject.mProperty_mEndOfRoutineLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_baseline_5F_routineDefinitionList::cEnumerator_baseline_5F_routineDefinitionList (const GALGAS_baseline_5F_routineDefinitionList & inEnumeratedObject,
                                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_routineDefinitionList_2D_element cEnumerator_baseline_5F_routineDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_routineDefinitionList * p = (const cCollectionElement_baseline_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_baseline_5F_routineDefinitionList::current_mRoutineName (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_routineDefinitionList * p = (const cCollectionElement_baseline_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return p->mObject.mProperty_mRoutineName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_baseline_5F_routineDefinitionList::current_mPage (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_routineDefinitionList * p = (const cCollectionElement_baseline_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return p->mObject.mProperty_mPage ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_baseline_5F_routineDefinitionList::current_mIsNoReturn (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_routineDefinitionList * p = (const cCollectionElement_baseline_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return p->mObject.mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList cEnumerator_baseline_5F_routineDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_routineDefinitionList * p = (const cCollectionElement_baseline_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_baseline_5F_routineDefinitionList::current_mEndOfRoutineLocation (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_routineDefinitionList * p = (const cCollectionElement_baseline_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return p->mObject.mProperty_mEndOfRoutineLocation ;
}




//--------------------------------------------------------------------------------------------------
//
//     @baseline_routineDefinitionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList ("baseline_routineDefinitionList",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_routineDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_routineDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_routineDefinitionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_routineDefinitionList GALGAS_baseline_5F_routineDefinitionList::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_routineDefinitionList result ;
  const GALGAS_baseline_5F_routineDefinitionList * p = (const GALGAS_baseline_5F_routineDefinitionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_routineDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_routineDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_instruction addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addUsedRoutines (cPtr_baseline_5F_instruction * inObject,
                                          GALGAS_stringset & io_ioUsedRoutines,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction) ;
    inObject->method_addUsedRoutines (io_ioUsedRoutines, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

cMapElement_baseline_5F_declaredRoutineMap::cMapElement_baseline_5F_declaredRoutineMap (const GALGAS_lstring & inKey
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_baseline_5F_declaredRoutineMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_baseline_5F_declaredRoutineMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_baseline_5F_declaredRoutineMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_baseline_5F_declaredRoutineMap::description (String & /* ioString */, const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_baseline_5F_declaredRoutineMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_baseline_5F_declaredRoutineMap * operand = (cMapElement_baseline_5F_declaredRoutineMap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_declaredRoutineMap::GALGAS_baseline_5F_declaredRoutineMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_declaredRoutineMap::GALGAS_baseline_5F_declaredRoutineMap (const GALGAS_baseline_5F_declaredRoutineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_declaredRoutineMap & GALGAS_baseline_5F_declaredRoutineMap::operator = (const GALGAS_baseline_5F_declaredRoutineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_declaredRoutineMap GALGAS_baseline_5F_declaredRoutineMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_baseline_5F_declaredRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_declaredRoutineMap GALGAS_baseline_5F_declaredRoutineMap::class_func_mapWithMapToOverride (const GALGAS_baseline_5F_declaredRoutineMap & inMapToOverride
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_declaredRoutineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_declaredRoutineMap GALGAS_baseline_5F_declaredRoutineMap::getter_overriddenMap (Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_declaredRoutineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_declaredRoutineMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_baseline_5F_declaredRoutineMap * p = nullptr ;
  macroMyNew (p, cMapElement_baseline_5F_declaredRoutineMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@baseline_5F_declaredRoutineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_declaredRoutineMap GALGAS_baseline_5F_declaredRoutineMap::add_operation (const GALGAS_baseline_5F_declaredRoutineMap & inOperand,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_declaredRoutineMap result = *this ;
  cEnumerator_baseline_5F_declaredRoutineMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_declaredRoutineMap::setter_insertKey (GALGAS_lstring inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_baseline_5F_declaredRoutineMap * p = nullptr ;
  macroMyNew (p, cMapElement_baseline_5F_declaredRoutineMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' routine is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_baseline_5F_declaredRoutineMap_searchKey = "the '%K' routine is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_declaredRoutineMap::method_searchKey (GALGAS_lstring inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_baseline_5F_declaredRoutineMap * p = (const cMapElement_baseline_5F_declaredRoutineMap *) performSearch (inKey,
                                                                                                                             inCompiler,
                                                                                                                             kSearchErrorMessage_baseline_5F_declaredRoutineMap_searchKey
                                                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
  }else{
    macroValidSharedObject (p, cMapElement_baseline_5F_declaredRoutineMap) ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_baseline_5F_declaredRoutineMap * GALGAS_baseline_5F_declaredRoutineMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                       const GALGAS_string & inKey
                                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_baseline_5F_declaredRoutineMap * result = (cMapElement_baseline_5F_declaredRoutineMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_baseline_5F_declaredRoutineMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_baseline_5F_declaredRoutineMap::cEnumerator_baseline_5F_declaredRoutineMap (const GALGAS_baseline_5F_declaredRoutineMap & inEnumeratedObject,
                                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_declaredRoutineMap_2D_element cEnumerator_baseline_5F_declaredRoutineMap::current (LOCATION_ARGS) const {
  const cMapElement_baseline_5F_declaredRoutineMap * p = (const cMapElement_baseline_5F_declaredRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_baseline_5F_declaredRoutineMap) ;
  return GALGAS_baseline_5F_declaredRoutineMap_2D_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_baseline_5F_declaredRoutineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_declaredRoutineMap::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_baseline_5F_declaredRoutineMap * p = (const cMapElement_baseline_5F_declaredRoutineMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_baseline_5F_declaredRoutineMap) ;
  }else{
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_declaredRoutineMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap ("baseline_declaredRoutineMap",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_declaredRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_declaredRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_declaredRoutineMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_declaredRoutineMap GALGAS_baseline_5F_declaredRoutineMap::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_declaredRoutineMap result ;
  const GALGAS_baseline_5F_declaredRoutineMap * p = (const GALGAS_baseline_5F_declaredRoutineMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_declaredRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_declaredRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_instruction shouldTerminateWithMOVLW'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction::method_shouldTerminateWithMOVLW (const GALGAS_string constinArgument_inErrorMessage,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_instruction temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), constinArgument_inErrorMessage, fixItArray1  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 18)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_shouldTerminateWithMOVLW (cPtr_baseline_5F_instruction * inObject,
                                                   const GALGAS_string constin_inErrorMessage,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction) ;
    inObject->method_shouldTerminateWithMOVLW  (constin_inErrorMessage, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_instruction shouldNotContinueInSequence'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction::method_shouldNotContinueInSequence (const GALGAS_string constinArgument_inErrorMessage,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_instruction temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), constinArgument_inErrorMessage, fixItArray1  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 64)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_shouldNotContinueInSequence (cPtr_baseline_5F_instruction * inObject,
                                                      const GALGAS_string constin_inErrorMessage,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction) ;
    inObject->method_shouldNotContinueInSequence  (constin_inErrorMessage, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_registerExpression::GALGAS_baseline_5F_intermediate_5F_registerExpression (void) :
mProperty_mAssemblyString (),
mProperty_mRegisterAddress () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_registerExpression::~ GALGAS_baseline_5F_intermediate_5F_registerExpression (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_intermediate_5F_registerExpression::init_21__21_ (const GALGAS_string & in_mAssemblyString,
                                                                                                                           const GALGAS_uint & in_mRegisterAddress,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAssemblyString = in_mAssemblyString ;
  result.mProperty_mRegisterAddress = in_mRegisterAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_registerExpression::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_registerExpression::GALGAS_baseline_5F_intermediate_5F_registerExpression (const GALGAS_string & inOperand0,
                                                                                                              const GALGAS_uint & inOperand1) :
mProperty_mAssemblyString (inOperand0),
mProperty_mRegisterAddress (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_intermediate_5F_registerExpression::class_func_new (const GALGAS_string & in_mAssemblyString,
                                                                                                                             const GALGAS_uint & in_mRegisterAddress,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAssemblyString = in_mAssemblyString ;
  result.mProperty_mRegisterAddress = in_mRegisterAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_intermediate_5F_registerExpression::objectCompare (const GALGAS_baseline_5F_intermediate_5F_registerExpression & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAssemblyString.objectCompare (inOperand.mProperty_mAssemblyString) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRegisterAddress.objectCompare (inOperand.mProperty_mRegisterAddress) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_intermediate_5F_registerExpression::isValid (void) const {
  return mProperty_mAssemblyString.isValid () && mProperty_mRegisterAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_registerExpression::drop (void) {
  mProperty_mAssemblyString.drop () ;
  mProperty_mRegisterAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_registerExpression::description (String & ioString,
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
//
//     @baseline_intermediate_registerExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_registerExpression ("baseline_intermediate_registerExpression",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_registerExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_registerExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_registerExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_registerExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_intermediate_5F_registerExpression::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  const GALGAS_baseline_5F_intermediate_5F_registerExpression * p = (const GALGAS_baseline_5F_intermediate_5F_registerExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_registerExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_registerExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction::cPtr_baseline_5F_intermediate_5F_instruction (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_instruction::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction::GALGAS_baseline_5F_intermediate_5F_instruction (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction::GALGAS_baseline_5F_intermediate_5F_instruction (const cPtr_baseline_5F_intermediate_5F_instruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction::cPtr_baseline_5F_intermediate_5F_instruction (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction ("baseline_intermediate_instruction",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction GALGAS_baseline_5F_intermediate_5F_instruction::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction * p = (const GALGAS_baseline_5F_intermediate_5F_instruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak::GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak & GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_instruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak::GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak (const GALGAS_baseline_5F_intermediate_5F_instruction & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak::bang_baseline_5F_intermediate_5F_instruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_instruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction) ;
      result = GALGAS_baseline_5F_intermediate_5F_instruction ((cPtr_baseline_5F_intermediate_5F_instruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak ("baseline_intermediate_instruction-weak",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@baseline_5F_intermediate_5F_instructionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_baseline_5F_intermediate_5F_instructionList : public cCollectionElement {
  public: GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_baseline_5F_intermediate_5F_instructionList (const GALGAS_baseline_5F_intermediate_5F_instruction & in_mInstruction
                                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_baseline_5F_intermediate_5F_instructionList (const GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_baseline_5F_intermediate_5F_instructionList::cCollectionElement_baseline_5F_intermediate_5F_instructionList (const GALGAS_baseline_5F_intermediate_5F_instruction & in_mInstruction
                                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_baseline_5F_intermediate_5F_instructionList::cCollectionElement_baseline_5F_intermediate_5F_instructionList (const GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element & inElement COMMA_LOCATION_ARGS) :
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

void cCollectionElement_baseline_5F_intermediate_5F_instructionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstruction" ":") ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_baseline_5F_intermediate_5F_instructionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * operand = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instructionList::GALGAS_baseline_5F_intermediate_5F_instructionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instructionList::GALGAS_baseline_5F_intermediate_5F_instructionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instructionList GALGAS_baseline_5F_intermediate_5F_instructionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_instructionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instructionList GALGAS_baseline_5F_intermediate_5F_instructionList::class_func_listWithValue (const GALGAS_baseline_5F_intermediate_5F_instruction & inOperand0
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

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                    const GALGAS_baseline_5F_intermediate_5F_instruction & in_mInstruction
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instructionList::addAssign_operation (const GALGAS_baseline_5F_intermediate_5F_instruction & inOperand0
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instructionList::setter_append (const GALGAS_baseline_5F_intermediate_5F_instruction inOperand0,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instructionList::setter_insertAtIndex (const GALGAS_baseline_5F_intermediate_5F_instruction inOperand0,
                                                                               const GALGAS_uint inInsertionIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instructionList::setter_removeAtIndex (GALGAS_baseline_5F_intermediate_5F_instruction & outOperand0,
                                                                               const GALGAS_uint inRemoveIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
        outOperand0 = p->mObject.mProperty_mInstruction ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instructionList::setter_popFirst (GALGAS_baseline_5F_intermediate_5F_instruction & outOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instructionList::setter_popLast (GALGAS_baseline_5F_intermediate_5F_instruction & outOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instructionList::method_first (GALGAS_baseline_5F_intermediate_5F_instruction & outOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instructionList::method_last (GALGAS_baseline_5F_intermediate_5F_instruction & outOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instructionList GALGAS_baseline_5F_intermediate_5F_instructionList::add_operation (const GALGAS_baseline_5F_intermediate_5F_instructionList & inOperand,
                                                                                                                      Compiler * /* inCompiler */
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_instructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instructionList GALGAS_baseline_5F_intermediate_5F_instructionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_instructionList result = GALGAS_baseline_5F_intermediate_5F_instructionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instructionList GALGAS_baseline_5F_intermediate_5F_instructionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_instructionList result = GALGAS_baseline_5F_intermediate_5F_instructionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instructionList GALGAS_baseline_5F_intermediate_5F_instructionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_instructionList result = GALGAS_baseline_5F_intermediate_5F_instructionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instructionList::plusAssign_operation (const GALGAS_baseline_5F_intermediate_5F_instructionList inOperand,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instructionList::setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_instruction inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction GALGAS_baseline_5F_intermediate_5F_instructionList::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) attributes.ptr () ;
  GALGAS_baseline_5F_intermediate_5F_instruction result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_baseline_5F_intermediate_5F_instructionList::cEnumerator_baseline_5F_intermediate_5F_instructionList (const GALGAS_baseline_5F_intermediate_5F_instructionList & inEnumeratedObject,
                                                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element cEnumerator_baseline_5F_intermediate_5F_instructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (const cCollectionElement_baseline_5F_intermediate_5F_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction cEnumerator_baseline_5F_intermediate_5F_instructionList::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (const cCollectionElement_baseline_5F_intermediate_5F_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
  return p->mObject.mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instructionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList ("baseline_intermediate_instructionList",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instructionList GALGAS_baseline_5F_intermediate_5F_instructionList::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instructionList result ;
  const GALGAS_baseline_5F_intermediate_5F_instructionList * p = (const GALGAS_baseline_5F_intermediate_5F_instructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instructionList *> (p)) {
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

cPtr_baseline_5F_intermediate_5F_NULL::cPtr_baseline_5F_intermediate_5F_NULL (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_NULL::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_baseline_5F_intermediate_5F_NULL::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return ComparisonResult::operandEqual ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_intermediate_5F_NULL::objectCompare (const GALGAS_baseline_5F_intermediate_5F_NULL & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_NULL::GALGAS_baseline_5F_intermediate_5F_NULL (void) :
GALGAS_baseline_5F_intermediate_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_NULL GALGAS_baseline_5F_intermediate_5F_NULL::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_NULL * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_NULL (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_NULL_init (inCompiler) ;
  const GALGAS_baseline_5F_intermediate_5F_NULL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_NULL::
baseline_5F_intermediate_5F_NULL_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_NULL::GALGAS_baseline_5F_intermediate_5F_NULL (const cPtr_baseline_5F_intermediate_5F_NULL * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_NULL) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_NULL GALGAS_baseline_5F_intermediate_5F_NULL::class_func_new (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_NULL result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_NULL (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_NULL class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_NULL::cPtr_baseline_5F_intermediate_5F_NULL (LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_NULL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL ;
}

void cPtr_baseline_5F_intermediate_5F_NULL::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@baseline_intermediate_NULL]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_NULL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_NULL (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_NULL generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL ("baseline_intermediate_NULL",
                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_NULL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_NULL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_NULL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_NULL GALGAS_baseline_5F_intermediate_5F_NULL::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_NULL result ;
  const GALGAS_baseline_5F_intermediate_5F_NULL * p = (const GALGAS_baseline_5F_intermediate_5F_NULL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_NULL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_NULL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak::GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak & GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_NULL & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak::GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak (const GALGAS_baseline_5F_intermediate_5F_NULL & inSource) :
GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_NULL GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak::bang_baseline_5F_intermediate_5F_NULL_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_NULL result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_NULL) ;
      result = GALGAS_baseline_5F_intermediate_5F_NULL ((cPtr_baseline_5F_intermediate_5F_NULL *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_NULL-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak ("baseline_intermediate_NULL-weak",
                                                                                                & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_NULL_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_NULL-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_pseudo reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo::cPtr_baseline_5F_intermediate_5F_pseudo (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_pseudo::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_pseudo::GALGAS_baseline_5F_intermediate_5F_pseudo (void) :
GALGAS_baseline_5F_intermediate_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo::GALGAS_baseline_5F_intermediate_5F_pseudo (const cPtr_baseline_5F_intermediate_5F_pseudo * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_pseudo class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo::cPtr_baseline_5F_intermediate_5F_pseudo (LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_pseudo generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo ("baseline_intermediate_pseudo",
                                                                                          & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_pseudo::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_pseudo::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_pseudo (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo GALGAS_baseline_5F_intermediate_5F_pseudo::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo result ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo * p = (const GALGAS_baseline_5F_intermediate_5F_pseudo *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_pseudo *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak::GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak & GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_pseudo & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak::GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak (const GALGAS_baseline_5F_intermediate_5F_pseudo & inSource) :
GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak::bang_baseline_5F_intermediate_5F_pseudo_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_pseudo result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_pseudo) ;
      result = GALGAS_baseline_5F_intermediate_5F_pseudo ((cPtr_baseline_5F_intermediate_5F_pseudo *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_pseudo-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak ("baseline_intermediate_pseudo-weak",
                                                                                                  & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_pseudo_5F_PAGE reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (inCompiler COMMA_THERE),
mProperty_mPage () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_pseudo::printNonNullClassInstanceProperties () ;
    mProperty_mPage.printNonNullClassInstanceProperties ("mPage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPage.objectCompare (p->mProperty_mPage) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (void) :
GALGAS_baseline_5F_intermediate_5F_pseudo () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::
init_21_ (const GALGAS_uint & in_mPage,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_pseudo_5F_PAGE_init_21_ (in_mPage, inCompiler) ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::
baseline_5F_intermediate_5F_pseudo_5F_PAGE_init_21_ (const GALGAS_uint & in_mPage,
                                                     Compiler * /* inCompiler */) {
  mProperty_mPage = in_mPage ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_pseudo (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::class_func_new (const GALGAS_uint & in_mPage
                                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (in_mPage COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::readProperty_mPage (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
    return p->mProperty_mPage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::setProperty_mPage (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
    p->mProperty_mPage = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_pseudo_PAGE class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (const GALGAS_uint & in_mPage
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (THERE),
mProperty_mPage () {
  mProperty_mPage = in_mPage ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ;
}

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_pseudo_PAGE:") ;
  mProperty_mPage.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (mProperty_mPage COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_pseudo_PAGE generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ("baseline_intermediate_pseudo_PAGE",
                                                                                                  & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE result ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE * p = (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_PAGE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak & GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE & inSource) :
GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak::bang_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
      result = GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_pseudo_PAGE-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak ("baseline_intermediate_pseudo_PAGE-weak",
                                                                                                          & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_PAGE-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak & GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inSource) :
GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::bang_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
      result = GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_pseudo_LABEL-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak ("baseline_intermediate_pseudo_LABEL-weak",
                                                                                                           & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_LABEL-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak & GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inSource) :
GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak::bang_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
      result = GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_pseudo_BEGIN_ROUTINE-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak ("baseline_intermediate_pseudo_BEGIN_ROUTINE-weak",
                                                                                                                      & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                            Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_BEGIN_ROUTINE-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak & GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inSource) :
GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak::bang_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
      result = GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_pseudo_END_ROUTINE-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak ("baseline_intermediate_pseudo_END_ROUTINE-weak",
                                                                                                                    & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                        Compiler * inCompiler
                                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_END_ROUTINE-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_actualInstruction reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_actualInstruction::cPtr_baseline_5F_intermediate_5F_actualInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_baseline_5F_intermediate_5F_actualInstruction::objectCompare (const GALGAS_baseline_5F_intermediate_5F_actualInstruction & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_actualInstruction::GALGAS_baseline_5F_intermediate_5F_actualInstruction (void) :
GALGAS_baseline_5F_intermediate_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_actualInstruction::GALGAS_baseline_5F_intermediate_5F_actualInstruction (const cPtr_baseline_5F_intermediate_5F_actualInstruction * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_actualInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_baseline_5F_intermediate_5F_actualInstruction::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_actualInstruction * p = (cPtr_baseline_5F_intermediate_5F_actualInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_actualInstruction) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_actualInstruction::setProperty_mInstructionLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_actualInstruction * p = (cPtr_baseline_5F_intermediate_5F_actualInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_actualInstruction) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_actualInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_actualInstruction::cPtr_baseline_5F_intermediate_5F_actualInstruction (const GALGAS_location & in_mInstructionLocation
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_actualInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction ("baseline_intermediate_actualInstruction",
                                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_actualInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_actualInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_actualInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_actualInstruction GALGAS_baseline_5F_intermediate_5F_actualInstruction::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_actualInstruction result ;
  const GALGAS_baseline_5F_intermediate_5F_actualInstruction * p = (const GALGAS_baseline_5F_intermediate_5F_actualInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_actualInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_actualInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak::GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak & GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_actualInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak::GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak (const GALGAS_baseline_5F_intermediate_5F_actualInstruction & inSource) :
GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_actualInstruction GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak::bang_baseline_5F_intermediate_5F_actualInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_actualInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_actualInstruction) ;
      result = GALGAS_baseline_5F_intermediate_5F_actualInstruction ((cPtr_baseline_5F_intermediate_5F_actualInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_actualInstruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak ("baseline_intermediate_actualInstruction-weak",
                                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_actualInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction_5F_FD reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription (),
mProperty_m_5F_W_5F_isDestination () {
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

ComparisonResult cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                      const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GALGAS_bool & in_m_5F_W_5F_isDestination,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_instruction_5F_FD_init_21__21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::
baseline_5F_intermediate_5F_instruction_5F_FD_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                                    const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                    const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                           const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                                                                                           const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                           const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, in_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::setProperty_mInstruction (const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
    p->mProperty_mInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::setProperty_mRegisterDescription (const GALGAS_baseline_5F_intermediate_5F_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::setProperty_m_5F_W_5F_isDestination (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction_FD class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                                                                                        const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                                                                        const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription (),
mProperty_m_5F_W_5F_isDestination () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::classDescriptor (void) const {
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

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mRegisterDescription, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction_FD generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD ("baseline_intermediate_instruction_FD",
                                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD * p = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_FD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak::GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak & GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak::GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD & inSource) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak::bang_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
      result = GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD ((cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction_FD-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak ("baseline_intermediate_instruction_FD-weak",
                                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_FD-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction_5F_F reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_F::cPtr_baseline_5F_intermediate_5F_instruction_5F_F (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription () {
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

ComparisonResult cPtr_baseline_5F_intermediate_5F_instruction_5F_F::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_F * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::GALGAS_baseline_5F_intermediate_5F_instruction_5F_F (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_F GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::
init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                  const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                  const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_instruction_5F_F * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_F (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_instruction_5F_F_init_21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, inCompiler) ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_F::
baseline_5F_intermediate_5F_instruction_5F_F_init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                               const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                               const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::GALGAS_baseline_5F_intermediate_5F_instruction_5F_F (const cPtr_baseline_5F_intermediate_5F_instruction_5F_F * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_F GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                         const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                                                                                         const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_F result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_F (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_F * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::setProperty_mInstruction (const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_F * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
    p->mProperty_mInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_F * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::setProperty_mRegisterDescription (const GALGAS_baseline_5F_intermediate_5F_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_F * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction_F class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_F::cPtr_baseline_5F_intermediate_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                                                                                      const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                                                                      const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_F::classDescriptor (void) const {
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

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_F::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_F (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mRegisterDescription COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction_F generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F ("baseline_intermediate_instruction_F",
                                                                                                    & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction_5F_F (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_F GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_F result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F * p = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_F", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak::GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak & GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak::GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F & inSource) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_F GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak::bang_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_F result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
      result = GALGAS_baseline_5F_intermediate_5F_instruction_5F_F ((cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction_F-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak ("baseline_intermediate_instruction_F-weak",
                                                                                                            & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_F-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction_5F_FB reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
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

ComparisonResult cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                      const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GALGAS_uint & in_mBitNumber,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_instruction_5F_FB_init_21__21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, in_mBitNumber, inCompiler) ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::
baseline_5F_intermediate_5F_instruction_5F_FB_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                                    const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                    const GALGAS_uint & in_mBitNumber,
                                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                           const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                                                                                           const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                           const GALGAS_uint & in_mBitNumber
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, in_mBitNumber COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_bit_5F_oriented_5F_op GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_bit_5F_oriented_5F_op () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::setProperty_mInstruction (const GALGAS_baseline_5F_bit_5F_oriented_5F_op & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
    p->mProperty_mInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::setProperty_mRegisterDescription (const GALGAS_baseline_5F_intermediate_5F_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::setProperty_mBitNumber (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction_FB class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                                                                                        const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                                                                        const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                        const GALGAS_uint & in_mBitNumber
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::classDescriptor (void) const {
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

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mRegisterDescription, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction_FB generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB ("baseline_intermediate_instruction_FB",
                                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB * p = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_FB", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak::GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak & GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak::GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB & inSource) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak::bang_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
      result = GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB ((cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction_FB-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak ("baseline_intermediate_instruction_FB-weak",
                                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_FB-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction_5F_BitTestSkip reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
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

ComparisonResult cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSkipIfSet.objectCompare (p->mProperty_mSkipIfSet) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_bool & in_mSkipIfSet,
                      const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GALGAS_uint & in_mBitNumber,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_init_21__21__21__21_ (in_mInstructionLocation, in_mSkipIfSet, in_mRegisterDescription, in_mBitNumber, inCompiler) ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::
baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                                             const GALGAS_bool & in_mSkipIfSet,
                                                                             const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                             const GALGAS_uint & in_mBitNumber,
                                                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                                             const GALGAS_bool & in_mSkipIfSet,
                                                                                                                                             const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                                             const GALGAS_uint & in_mBitNumber
                                                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (in_mInstructionLocation, in_mSkipIfSet, in_mRegisterDescription, in_mBitNumber COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::readProperty_mSkipIfSet (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mSkipIfSet ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::setProperty_mSkipIfSet (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    p->mProperty_mSkipIfSet = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::setProperty_mRegisterDescription (const GALGAS_baseline_5F_intermediate_5F_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::setProperty_mBitNumber (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction_BitTestSkip class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (const GALGAS_location & in_mInstructionLocation,
                                                                                                                          const GALGAS_bool & in_mSkipIfSet,
                                                                                                                          const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                          const GALGAS_uint & in_mBitNumber
                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::classDescriptor (void) const {
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

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (mProperty_mInstructionLocation, mProperty_mSkipIfSet, mProperty_mRegisterDescription, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction_BitTestSkip generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ("baseline_intermediate_instruction_BitTestSkip",
                                                                                                              & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::extractObject (const GALGAS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_BitTestSkip", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak::GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak & GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak::GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak::bang_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
      result = GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ((cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction_BitTestSkip-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak ("baseline_intermediate_instruction_BitTestSkip-weak",
                                                                                                                      & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                            Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_BitTestSkip-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak::GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak & GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_GOTO & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak::GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak (const GALGAS_baseline_5F_intermediate_5F_GOTO & inSource) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_GOTO GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak::bang_baseline_5F_intermediate_5F_GOTO_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_GOTO result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_GOTO) ;
      result = GALGAS_baseline_5F_intermediate_5F_GOTO ((cPtr_baseline_5F_intermediate_5F_GOTO *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_GOTO-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak ("baseline_intermediate_GOTO-weak",
                                                                                                & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_GOTO-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak::GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak & GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_JUMP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak::GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak (const GALGAS_baseline_5F_intermediate_5F_JUMP & inSource) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JUMP GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak::bang_baseline_5F_intermediate_5F_JUMP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_JUMP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_JUMP) ;
      result = GALGAS_baseline_5F_intermediate_5F_JUMP ((cPtr_baseline_5F_intermediate_5F_JUMP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_JUMP-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak ("baseline_intermediate_JUMP-weak",
                                                                                                & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_JUMP-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak::GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak & GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_CALL & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak::GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak (const GALGAS_baseline_5F_intermediate_5F_CALL & inSource) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_CALL GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak::bang_baseline_5F_intermediate_5F_CALL_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_CALL result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_CALL) ;
      result = GALGAS_baseline_5F_intermediate_5F_CALL ((cPtr_baseline_5F_intermediate_5F_CALL *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_CALL-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak ("baseline_intermediate_CALL-weak",
                                                                                                & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_CALL-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak::GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak & GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_JSR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak::GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak (const GALGAS_baseline_5F_intermediate_5F_JSR & inSource) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JSR GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak::bang_baseline_5F_intermediate_5F_JSR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_JSR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_JSR) ;
      result = GALGAS_baseline_5F_intermediate_5F_JSR ((cPtr_baseline_5F_intermediate_5F_JSR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_JSR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak ("baseline_intermediate_JSR-weak",
                                                                                               & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_JSR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_WO_5F_OPERAND reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * p = (const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::objectCompare (const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_WO_5F_OPERAND_init_21__21_ (in_mInstructionLocation, in_mInstruction, inCompiler) ;
  const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::
baseline_5F_intermediate_5F_WO_5F_OPERAND_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND (const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                   const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction
                                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (in_mInstructionLocation, in_mInstruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_WO_5F_OPERAND_5F_group () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * p = (cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::setProperty_mInstruction (const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * p = (cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
    p->mProperty_mInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_WO_OPERAND class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (const GALGAS_location & in_mInstructionLocation,
                                                                                                const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::classDescriptor (void) const {
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

acPtr_class * cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (mProperty_mInstructionLocation, mProperty_mInstruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_WO_OPERAND generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND ("baseline_intermediate_WO_OPERAND",
                                                                                                 & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND result ;
  const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND * p = (const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_WO_OPERAND", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak::GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak & GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak::GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak (const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND & inSource) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak::bang_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
      result = GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND ((cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_WO_OPERAND-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak ("baseline_intermediate_WO_OPERAND-weak",
                                                                                                         & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_WO_OPERAND-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak::GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak & GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_TRIS & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak::GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak (const GALGAS_baseline_5F_intermediate_5F_TRIS & inSource) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_TRIS GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak::bang_baseline_5F_intermediate_5F_TRIS_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_TRIS result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_TRIS) ;
      result = GALGAS_baseline_5F_intermediate_5F_TRIS ((cPtr_baseline_5F_intermediate_5F_TRIS *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_TRIS-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak ("baseline_intermediate_TRIS-weak",
                                                                                                & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_TRIS-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mLiteralValue () {
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

ComparisonResult cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLiteralValue.objectCompare (p->mProperty_mLiteralValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::
init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                  const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                  const GALGAS_uint & in_mLiteralValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_instruction_5F_literalOperation_init_21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mLiteralValue, inCompiler) ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::
baseline_5F_intermediate_5F_instruction_5F_literalOperation_init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                              const GALGAS_uint & in_mLiteralValue,
                                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mLiteralValue = in_mLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                                                       const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                                                                                                       const GALGAS_uint & in_mLiteralValue
                                                                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (in_mInstructionLocation, in_mInstruction, in_mLiteralValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_literal_5F_instruction_5F_opcode () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::setProperty_mInstruction (const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
    p->mProperty_mInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::readProperty_mLiteralValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mLiteralValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::setProperty_mLiteralValue (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
    p->mProperty_mLiteralValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                                                                                    const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                                                                                    const GALGAS_uint & in_mLiteralValue
                                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction (),
mProperty_mLiteralValue () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mLiteralValue = in_mLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::classDescriptor (void) const {
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

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mLiteralValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction_literalOperation generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ("baseline_intermediate_instruction_literalOperation",
                                                                                                                   & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak & GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation & inSource) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::bang_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
      result = GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ((cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction_literalOperation-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak ("baseline_intermediate_instruction_literalOperation-weak",
                                                                                                                           & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_literalOperation-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOccurrenceFactor.printNonNullClassInstanceProperties ("mOccurrenceFactor") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOccurrenceFactor.objectCompare (p->mProperty_mOccurrenceFactor) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_luint & in_mOccurrenceFactor,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_instruction_5F_MNOP_init_21__21_ (in_mInstructionLocation, in_mOccurrenceFactor, inCompiler) ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::
baseline_5F_intermediate_5F_instruction_5F_MNOP_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_luint & in_mOccurrenceFactor,
                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP (const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                               const GALGAS_luint & in_mOccurrenceFactor
                                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (in_mInstructionLocation, in_mOccurrenceFactor COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::readProperty_mOccurrenceFactor (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
    return p->mProperty_mOccurrenceFactor ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::setProperty_mOccurrenceFactor (const GALGAS_luint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
    p->mProperty_mOccurrenceFactor = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction_MNOP class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                                                                            const GALGAS_luint & in_mOccurrenceFactor
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mOccurrenceFactor () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::classDescriptor (void) const {
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

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (mProperty_mInstructionLocation, mProperty_mOccurrenceFactor COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction_MNOP generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP ("baseline_intermediate_instruction_MNOP",
                                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP * p = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_MNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak::GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak & GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak::GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP & inSource) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak::bang_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
      result = GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP ((cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction_MNOP-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak ("baseline_intermediate_instruction_MNOP-weak",
                                                                                                               & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_MNOP-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_incDecRegisterInCondition reference class
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

ComparisonResult cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIncrement.objectCompare (p->mProperty_mIncrement) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBranchIfZero.objectCompare (p->mProperty_mBranchIfZero) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::objectCompare (const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::
init_21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                              const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                              const GALGAS_string & in_mTargetLabel,
                              const GALGAS_bool & in_mIncrement,
                              const GALGAS_bool & in_m_5F_W_5F_isDestination,
                              const GALGAS_bool & in_mBranchIfZero,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_incDecRegisterInCondition_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mRegisterDescription, in_mTargetLabel, in_mIncrement, in_m_5F_W_5F_isDestination, in_mBranchIfZero, inCompiler) ;
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::
baseline_5F_intermediate_5F_incDecRegisterInCondition_init_21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                    const GALGAS_string & in_mTargetLabel,
                                                                                    const GALGAS_bool & in_mIncrement,
                                                                                    const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                                    const GALGAS_bool & in_mBranchIfZero,
                                                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
  mProperty_mBranchIfZero = in_mBranchIfZero ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                                           const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                                           const GALGAS_string & in_mTargetLabel,
                                                                                                                                           const GALGAS_bool & in_mIncrement,
                                                                                                                                           const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                                                                                           const GALGAS_bool & in_mBranchIfZero
                                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (in_mInstructionLocation, in_mRegisterDescription, in_mTargetLabel, in_mIncrement, in_m_5F_W_5F_isDestination, in_mBranchIfZero COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::setProperty_mRegisterDescription (const GALGAS_baseline_5F_intermediate_5F_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::setProperty_mTargetLabel (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::readProperty_mIncrement (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    return p->mProperty_mIncrement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::setProperty_mIncrement (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    p->mProperty_mIncrement = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::setProperty_m_5F_W_5F_isDestination (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::readProperty_mBranchIfZero (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    return p->mProperty_mBranchIfZero ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::setProperty_mBranchIfZero (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    p->mProperty_mBranchIfZero = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_incDecRegisterInCondition class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (const GALGAS_location & in_mInstructionLocation,
                                                                                                                        const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                        const GALGAS_string & in_mTargetLabel,
                                                                                                                        const GALGAS_bool & in_mIncrement,
                                                                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                                                                        const GALGAS_bool & in_mBranchIfZero
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::classDescriptor (void) const {
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

acPtr_class * cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (mProperty_mInstructionLocation, mProperty_mRegisterDescription, mProperty_mTargetLabel, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination, mProperty_mBranchIfZero COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_incDecRegisterInCondition generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition ("baseline_intermediate_incDecRegisterInCondition",
                                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::extractObject (const GALGAS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition result ;
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_incDecRegisterInCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak::GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak & GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak::GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak (const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition & inSource) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak::bang_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
      result = GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition ((cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_incDecRegisterInCondition-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak ("baseline_intermediate_incDecRegisterInCondition-weak",
                                                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_incDecRegisterInCondition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_baselineRoutineMap::cMapElement_baselineRoutineMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_bool & in_mIsNoReturn,
                                                                const GALGAS_luint & in_mPage
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIsNoReturn (in_mIsNoReturn),
mProperty_mPage (in_mPage) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_baselineRoutineMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_baselineRoutineMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_baselineRoutineMap (mProperty_lkey, mProperty_mIsNoReturn, mProperty_mPage COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_baselineRoutineMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsNoReturn" ":") ;
  mProperty_mIsNoReturn.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPage" ":") ;
  mProperty_mPage.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_baselineRoutineMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_baselineRoutineMap * operand = (cMapElement_baselineRoutineMap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIsNoReturn.objectCompare (operand->mProperty_mIsNoReturn) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPage.objectCompare (operand->mProperty_mPage) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineRoutineMap::GALGAS_baselineRoutineMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineRoutineMap::GALGAS_baselineRoutineMap (const GALGAS_baselineRoutineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineRoutineMap & GALGAS_baselineRoutineMap::operator = (const GALGAS_baselineRoutineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineRoutineMap GALGAS_baselineRoutineMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_baselineRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineRoutineMap GALGAS_baselineRoutineMap::class_func_mapWithMapToOverride (const GALGAS_baselineRoutineMap & inMapToOverride
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baselineRoutineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineRoutineMap GALGAS_baselineRoutineMap::getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_baselineRoutineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baselineRoutineMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_bool & inArgument0,
                                                     const GALGAS_luint & inArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_baselineRoutineMap * p = nullptr ;
  macroMyNew (p, cMapElement_baselineRoutineMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@baselineRoutineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineRoutineMap GALGAS_baselineRoutineMap::add_operation (const GALGAS_baselineRoutineMap & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_baselineRoutineMap result = *this ;
  cEnumerator_baselineRoutineMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIsNoReturn (HERE), enumerator.current_mPage (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baselineRoutineMap::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_bool inArgument0,
                                                  GALGAS_luint inArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_baselineRoutineMap * p = nullptr ;
  macroMyNew (p, cMapElement_baselineRoutineMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' routine is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_baselineRoutineMap_searchKey = "the '%K' routine is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_baselineRoutineMap::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_bool & outArgument0,
                                                  GALGAS_luint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_baselineRoutineMap * p = (const cMapElement_baselineRoutineMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_baselineRoutineMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_baselineRoutineMap) ;
    outArgument0 = p->mProperty_mIsNoReturn ;
    outArgument1 = p->mProperty_mPage ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baselineRoutineMap::getter_mIsNoReturnForKey (const GALGAS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_baselineRoutineMap * p = (const cMapElement_baselineRoutineMap *) attributes ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_baselineRoutineMap) ;
    result = p->mProperty_mIsNoReturn ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_baselineRoutineMap::getter_mPageForKey (const GALGAS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_baselineRoutineMap * p = (const cMapElement_baselineRoutineMap *) attributes ;
  GALGAS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_baselineRoutineMap) ;
    result = p->mProperty_mPage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baselineRoutineMap::setter_setMIsNoReturnForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_baselineRoutineMap * p = (cMapElement_baselineRoutineMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_baselineRoutineMap) ;
    p->mProperty_mIsNoReturn = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baselineRoutineMap::setter_setMPageForKey (GALGAS_luint inAttributeValue,
                                                       GALGAS_string inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_baselineRoutineMap * p = (cMapElement_baselineRoutineMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_baselineRoutineMap) ;
    p->mProperty_mPage = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_baselineRoutineMap * GALGAS_baselineRoutineMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_baselineRoutineMap * result = (cMapElement_baselineRoutineMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_baselineRoutineMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_baselineRoutineMap::cEnumerator_baselineRoutineMap (const GALGAS_baselineRoutineMap & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineRoutineMap_2D_element cEnumerator_baselineRoutineMap::current (LOCATION_ARGS) const {
  const cMapElement_baselineRoutineMap * p = (const cMapElement_baselineRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_baselineRoutineMap) ;
  return GALGAS_baselineRoutineMap_2D_element (p->mProperty_lkey, p->mProperty_mIsNoReturn, p->mProperty_mPage) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_baselineRoutineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_baselineRoutineMap::current_mIsNoReturn (LOCATION_ARGS) const {
  const cMapElement_baselineRoutineMap * p = (const cMapElement_baselineRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_baselineRoutineMap) ;
  return p->mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_baselineRoutineMap::current_mPage (LOCATION_ARGS) const {
  const cMapElement_baselineRoutineMap * p = (const cMapElement_baselineRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_baselineRoutineMap) ;
  return p->mProperty_mPage ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baselineRoutineMap::optional_searchKey (const GALGAS_string & inKey,
                                                    GALGAS_bool & outArgument0,
                                                    GALGAS_luint & outArgument1) const {
  const cMapElement_baselineRoutineMap * p = (const cMapElement_baselineRoutineMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_baselineRoutineMap) ;
    outArgument0 = p->mProperty_mIsNoReturn ;
    outArgument1 = p->mProperty_mPage ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baselineRoutineMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baselineRoutineMap ("baselineRoutineMap",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baselineRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baselineRoutineMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baselineRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baselineRoutineMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineRoutineMap GALGAS_baselineRoutineMap::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baselineRoutineMap result ;
  const GALGAS_baselineRoutineMap * p = (const GALGAS_baselineRoutineMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baselineRoutineMap *> (p)) {
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
                                                                             const GALGAS_uint constin_inCurrentPage,
                                                                             const GALGAS_registerTable constin_inRegisterTable,
                                                                             const GALGAS_constantMap constin_inConstantMap,
                                                                             GALGAS_uint & io_ioLocalLabelIndex,
                                                                             const GALGAS_bool constin_inComplementaryBranch,
                                                                             const GALGAS_location constin_inInstructionLocation,
                                                                             const GALGAS_string constin_inTargetLabel,
                                                                             GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                             GALGAS_stringset & io_ioUsedRegisters,
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
//
//Abstract extension method '@baseline_intermediate_instruction print'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_print (cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                GALGAS_string & io_ioListFileContents,
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
//
//Abstract extension getter '@baseline_intermediate_instruction length'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint callExtensionGetter_length (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_uint result ;
  if (nullptr != inObject) {
    result = inObject->getter_length (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_baselineSymbolTableForOptimizations::cMapElement_baselineSymbolTableForOptimizations (const GALGAS_lstring & inKey,
                                                                                                  const GALGAS_uint & in_mDefinitionLineIndex
                                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mDefinitionLineIndex (in_mDefinitionLineIndex) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_baselineSymbolTableForOptimizations::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_baselineSymbolTableForOptimizations::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_baselineSymbolTableForOptimizations (mProperty_lkey, mProperty_mDefinitionLineIndex COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_baselineSymbolTableForOptimizations::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDefinitionLineIndex" ":") ;
  mProperty_mDefinitionLineIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_baselineSymbolTableForOptimizations::compare (const cCollectionElement * inOperand) const {
  cMapElement_baselineSymbolTableForOptimizations * operand = (cMapElement_baselineSymbolTableForOptimizations *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mDefinitionLineIndex.objectCompare (operand->mProperty_mDefinitionLineIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineSymbolTableForOptimizations::GALGAS_baselineSymbolTableForOptimizations (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineSymbolTableForOptimizations::GALGAS_baselineSymbolTableForOptimizations (const GALGAS_baselineSymbolTableForOptimizations & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineSymbolTableForOptimizations & GALGAS_baselineSymbolTableForOptimizations::operator = (const GALGAS_baselineSymbolTableForOptimizations & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineSymbolTableForOptimizations GALGAS_baselineSymbolTableForOptimizations::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_baselineSymbolTableForOptimizations result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineSymbolTableForOptimizations GALGAS_baselineSymbolTableForOptimizations::class_func_mapWithMapToOverride (const GALGAS_baselineSymbolTableForOptimizations & inMapToOverride
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baselineSymbolTableForOptimizations result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineSymbolTableForOptimizations GALGAS_baselineSymbolTableForOptimizations::getter_overriddenMap (Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_baselineSymbolTableForOptimizations result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baselineSymbolTableForOptimizations::addAssign_operation (const GALGAS_lstring & inKey,
                                                                      const GALGAS_uint & inArgument0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_baselineSymbolTableForOptimizations * p = nullptr ;
  macroMyNew (p, cMapElement_baselineSymbolTableForOptimizations (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@baselineSymbolTableForOptimizations insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineSymbolTableForOptimizations GALGAS_baselineSymbolTableForOptimizations::add_operation (const GALGAS_baselineSymbolTableForOptimizations & inOperand,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_baselineSymbolTableForOptimizations result = *this ;
  cEnumerator_baselineSymbolTableForOptimizations enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mDefinitionLineIndex (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baselineSymbolTableForOptimizations::setter_insertKey (GALGAS_lstring inKey,
                                                                   GALGAS_uint inArgument0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_baselineSymbolTableForOptimizations * p = nullptr ;
  macroMyNew (p, cMapElement_baselineSymbolTableForOptimizations (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_baselineSymbolTableForOptimizations_searchKey = "the '%K' label is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_baselineSymbolTableForOptimizations::method_searchKey (GALGAS_lstring inKey,
                                                                   GALGAS_uint & outArgument0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_baselineSymbolTableForOptimizations * p = (const cMapElement_baselineSymbolTableForOptimizations *) performSearch (inKey,
                                                                                                                                       inCompiler,
                                                                                                                                       kSearchErrorMessage_baselineSymbolTableForOptimizations_searchKey
                                                                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_baselineSymbolTableForOptimizations) ;
    outArgument0 = p->mProperty_mDefinitionLineIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baselineSymbolTableForOptimizations::setter_removeKey (GALGAS_lstring inKey,
                                                                   GALGAS_uint & outArgument0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "the '%K' label is not declared" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_baselineSymbolTableForOptimizations * p = (cMapElement_baselineSymbolTableForOptimizations *) attributes.ptr () ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_baselineSymbolTableForOptimizations) ;
    outArgument0 = p->mProperty_mDefinitionLineIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baselineSymbolTableForOptimizations::getter_mDefinitionLineIndexForKey (const GALGAS_string & inKey,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_baselineSymbolTableForOptimizations * p = (const cMapElement_baselineSymbolTableForOptimizations *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_baselineSymbolTableForOptimizations) ;
    result = p->mProperty_mDefinitionLineIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baselineSymbolTableForOptimizations::setter_setMDefinitionLineIndexForKey (GALGAS_uint inAttributeValue,
                                                                                       GALGAS_string inKey,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_baselineSymbolTableForOptimizations * p = (cMapElement_baselineSymbolTableForOptimizations *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_baselineSymbolTableForOptimizations) ;
    p->mProperty_mDefinitionLineIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_baselineSymbolTableForOptimizations * GALGAS_baselineSymbolTableForOptimizations::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                 const GALGAS_string & inKey
                                                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_baselineSymbolTableForOptimizations * result = (cMapElement_baselineSymbolTableForOptimizations *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_baselineSymbolTableForOptimizations) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_baselineSymbolTableForOptimizations::cEnumerator_baselineSymbolTableForOptimizations (const GALGAS_baselineSymbolTableForOptimizations & inEnumeratedObject,
                                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineSymbolTableForOptimizations_2D_element cEnumerator_baselineSymbolTableForOptimizations::current (LOCATION_ARGS) const {
  const cMapElement_baselineSymbolTableForOptimizations * p = (const cMapElement_baselineSymbolTableForOptimizations *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_baselineSymbolTableForOptimizations) ;
  return GALGAS_baselineSymbolTableForOptimizations_2D_element (p->mProperty_lkey, p->mProperty_mDefinitionLineIndex) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_baselineSymbolTableForOptimizations::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_baselineSymbolTableForOptimizations::current_mDefinitionLineIndex (LOCATION_ARGS) const {
  const cMapElement_baselineSymbolTableForOptimizations * p = (const cMapElement_baselineSymbolTableForOptimizations *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_baselineSymbolTableForOptimizations) ;
  return p->mProperty_mDefinitionLineIndex ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baselineSymbolTableForOptimizations::optional_searchKey (const GALGAS_string & inKey,
                                                                     GALGAS_uint & outArgument0) const {
  const cMapElement_baselineSymbolTableForOptimizations * p = (const cMapElement_baselineSymbolTableForOptimizations *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_baselineSymbolTableForOptimizations) ;
    outArgument0 = p->mProperty_mDefinitionLineIndex ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baselineSymbolTableForOptimizations generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations ("baselineSymbolTableForOptimizations",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baselineSymbolTableForOptimizations::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baselineSymbolTableForOptimizations::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baselineSymbolTableForOptimizations (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineSymbolTableForOptimizations GALGAS_baselineSymbolTableForOptimizations::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baselineSymbolTableForOptimizations result ;
  const GALGAS_baselineSymbolTableForOptimizations * p = (const GALGAS_baselineSymbolTableForOptimizations *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baselineSymbolTableForOptimizations *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baselineSymbolTableForOptimizations", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_instruction setCurrentAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction::method_setCurrentAddress (GALGAS_uint & ioArgument_ioCurrentWordAdress,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_instruction temp_0 = this ;
  ioArgument_ioCurrentWordAdress = ioArgument_ioCurrentWordAdress.add_operation (callExtensionGetter_length ((const cPtr_baseline_5F_intermediate_5F_instruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 20)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_setCurrentAddress (cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                            GALGAS_uint & io_ioCurrentWordAdress,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    inObject->method_setCurrentAddress  (io_ioCurrentWordAdress, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_intermediate_instruction isLABEL'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_baseline_5F_intermediate_5F_instruction::getter_isLABEL (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GALGAS_bool (false) ;
//---
  return result_outIsLABEL ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
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

GALGAS_bool cPtr_baseline_5F_intermediate_5F_instruction::getter_isNULL (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GALGAS_bool (false) ;
//---
  return result_outIsNULL ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_isNULL (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
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

GALGAS_bool cPtr_baseline_5F_intermediate_5F_instruction::getter_isSkippingInstruction (Compiler */* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GALGAS_bool (false) ;
//---
  return result_outIsSkipping ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_isSkippingInstruction (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
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

GALGAS_bool cPtr_baseline_5F_intermediate_5F_instruction::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (true) ;
//---
  return result_outIsReachable ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_nextInstructionIsReachable (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_instruction enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction::method_enterReferencedLabel (GALGAS_stringset & /* ioArgument_ioReferencedLabelSet */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterReferencedLabel (cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                               GALGAS_stringset & io_ioReferencedLabelSet,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    inObject->method_enterReferencedLabel  (io_ioReferencedLabelSet, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_instruction defineLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction::method_defineLabel (GALGAS_baselineSymbolTableForOptimizations & /* ioArgument_ioRoutineSymbolTable */,
                                                                       const GALGAS_uint /* constinArgument_inLineIndex */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_defineLabel (cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                      GALGAS_baselineSymbolTableForOptimizations & io_ioRoutineSymbolTable,
                                      const GALGAS_uint constin_inLineIndex,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    inObject->method_defineLabel  (io_ioRoutineSymbolTable, constin_inLineIndex, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_incDecRegisterInCondition optimizeTestDecInc'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::method_optimizeTestDecInc (const GALGAS_baselineSymbolTableForOptimizations constinArgument_inSymbolTable,
                                                                                            const GALGAS_uint constinArgument_inLineIndex,
                                                                                            GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                                            GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_line_19685 ;
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_0 = this ;
  constinArgument_inSymbolTable.method_searchKey (GALGAS_lstring::init_21__21_ (temp_0.readProperty_mTargetLabel (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 480)), inCompiler COMMA_HERE), var_line_19685, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 480)) ;
  GALGAS_baseline_5F_intermediate_5F_instruction var_firstInstruction_19864 ;
  {
  routine_findBaselineFirstInstructionFromAddress_3F__3F__21_ (var_line_19685.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 483)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_19864, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 482)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_baseline_5F_intermediate_5F_GOTO var_goto_19941 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_GOTO *> (var_firstInstruction_19864.ptr ())) ;
    if (nullptr == var_goto_19941.ptr ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      {
      const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_2 = this ;
      const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_3 = this ;
      const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_4 = this ;
      const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_5 = this ;
      const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_6 = this ;
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::init_21__21__21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mRegisterDescription (), var_goto_19941.readProperty_mTargetLabel ().readProperty_string (), temp_4.readProperty_mIncrement (), temp_5.readProperty_m_5F_W_5F_isDestination (), temp_6.readProperty_mBranchIfZero (), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 491)) ;
      }
      ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 502)).add_operation (GALGAS_string (": label of "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 502)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 502)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("GOTO "), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 503)) ;
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_8 = this ;
        test_7 = temp_8.readProperty_mIncrement ().boolEnum () ;
        if (kBoolTrue == test_7) {
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("INCF "), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 505)) ;
        }
      }
      if (kBoolFalse == test_7) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("DECF "), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 507)) ;
      }
      const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_9 = this ;
      ioArgument_ioListFileContents.plusAssign_operation(temp_9.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 509)) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_11 = this ;
        test_10 = temp_11.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
        if (kBoolTrue == test_10) {
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 511)) ;
        }
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_13 = this ;
        test_12 = temp_13.readProperty_mBranchIfZero ().boolEnum () ;
        if (kBoolTrue == test_12) {
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" Z"), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 514)) ;
        }
      }
      if (kBoolFalse == test_12) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" NZ"), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 516)) ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (": branching to GOTO replaced by second GOTO label\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 518)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeTestDecInc (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * inObject,
                                             const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                             const GALGAS_uint constin_inLineIndex,
                                             GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                             GALGAS_string & io_ioListFileContents,
                                             GALGAS_bool & io_ioOptimizationsDone,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    inObject->method_optimizeTestDecInc  (constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction::cPtr_baseline_5F_assembly_5F_instruction (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_instruction::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_baseline_5F_assembly_5F_instruction::objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_instruction::GALGAS_baseline_5F_assembly_5F_instruction (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction::GALGAS_baseline_5F_assembly_5F_instruction (const cPtr_baseline_5F_assembly_5F_instruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_instruction class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction::cPtr_baseline_5F_assembly_5F_instruction (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_instruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction ("baseline_assembly_instruction",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction GALGAS_baseline_5F_assembly_5F_instruction::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction result ;
  const GALGAS_baseline_5F_assembly_5F_instruction * p = (const GALGAS_baseline_5F_assembly_5F_instruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

