#include "galgas2/Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//--------------------------------------------------------------------------------------------------

cMapElement_symbolTableForClusterOrdering::cMapElement_symbolTableForClusterOrdering (const GALGAS_lstring & inKey,
                                                                                      const GALGAS_uint & in_mCluster
                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mCluster (in_mCluster) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_symbolTableForClusterOrdering::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_symbolTableForClusterOrdering::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_symbolTableForClusterOrdering (mProperty_lkey, mProperty_mCluster COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_symbolTableForClusterOrdering::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mCluster" ":") ;
  mProperty_mCluster.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_symbolTableForClusterOrdering::compare (const cCollectionElement * inOperand) const {
  cMapElement_symbolTableForClusterOrdering * operand = (cMapElement_symbolTableForClusterOrdering *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mCluster.objectCompare (operand->mProperty_mCluster) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering::GALGAS_symbolTableForClusterOrdering (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering::GALGAS_symbolTableForClusterOrdering (const GALGAS_symbolTableForClusterOrdering & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering & GALGAS_symbolTableForClusterOrdering::operator = (const GALGAS_symbolTableForClusterOrdering & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering GALGAS_symbolTableForClusterOrdering::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_symbolTableForClusterOrdering result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering GALGAS_symbolTableForClusterOrdering::constructor_mapWithMapToOverride (const GALGAS_symbolTableForClusterOrdering & inMapToOverride
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForClusterOrdering result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering GALGAS_symbolTableForClusterOrdering::getter_overriddenMap (Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_symbolTableForClusterOrdering result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForClusterOrdering::addAssign_operation (const GALGAS_lstring & inKey,
                                                                const GALGAS_uint & inArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForClusterOrdering * p = nullptr ;
  macroMyNew (p, cMapElement_symbolTableForClusterOrdering (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@symbolTableForClusterOrdering insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering GALGAS_symbolTableForClusterOrdering::add_operation (const GALGAS_symbolTableForClusterOrdering & inOperand,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_symbolTableForClusterOrdering result = *this ;
  cEnumerator_symbolTableForClusterOrdering enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mCluster (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForClusterOrdering::setter_insertKey (GALGAS_lstring inKey,
                                                             GALGAS_uint inArgument0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForClusterOrdering * p = nullptr ;
  macroMyNew (p, cMapElement_symbolTableForClusterOrdering (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_symbolTableForClusterOrdering_searchKey = "the '%K' label is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForClusterOrdering::method_searchKey (GALGAS_lstring inKey,
                                                             GALGAS_uint & outArgument0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_symbolTableForClusterOrdering * p = (const cMapElement_symbolTableForClusterOrdering *) performSearch (inKey,
                                                                                                                           inCompiler,
                                                                                                                           kSearchErrorMessage_symbolTableForClusterOrdering_searchKey
                                                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_symbolTableForClusterOrdering) ;
    outArgument0 = p->mProperty_mCluster ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_symbolTableForClusterOrdering::getter_mClusterForKey (const GALGAS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_symbolTableForClusterOrdering * p = (const cMapElement_symbolTableForClusterOrdering *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForClusterOrdering) ;
    result = p->mProperty_mCluster ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForClusterOrdering::setter_setMClusterForKey (GALGAS_uint inAttributeValue,
                                                                     GALGAS_string inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_symbolTableForClusterOrdering * p = (cMapElement_symbolTableForClusterOrdering *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForClusterOrdering) ;
    p->mProperty_mCluster = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_symbolTableForClusterOrdering * GALGAS_symbolTableForClusterOrdering::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                     const GALGAS_string & inKey
                                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForClusterOrdering * result = (cMapElement_symbolTableForClusterOrdering *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_symbolTableForClusterOrdering) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_symbolTableForClusterOrdering::cEnumerator_symbolTableForClusterOrdering (const GALGAS_symbolTableForClusterOrdering & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering_2D_element cEnumerator_symbolTableForClusterOrdering::current (LOCATION_ARGS) const {
  const cMapElement_symbolTableForClusterOrdering * p = (const cMapElement_symbolTableForClusterOrdering *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForClusterOrdering) ;
  return GALGAS_symbolTableForClusterOrdering_2D_element (p->mProperty_lkey, p->mProperty_mCluster) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_symbolTableForClusterOrdering::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_symbolTableForClusterOrdering::current_mCluster (LOCATION_ARGS) const {
  const cMapElement_symbolTableForClusterOrdering * p = (const cMapElement_symbolTableForClusterOrdering *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForClusterOrdering) ;
  return p->mProperty_mCluster ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_symbolTableForClusterOrdering::optional_searchKey (const GALGAS_string & inKey,
                                                               GALGAS_uint & outArgument0) const {
  const cMapElement_symbolTableForClusterOrdering * p = (const cMapElement_symbolTableForClusterOrdering *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_symbolTableForClusterOrdering) ;
    outArgument0 = p->mProperty_mCluster ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @symbolTableForClusterOrdering generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_symbolTableForClusterOrdering ("symbolTableForClusterOrdering",
                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_symbolTableForClusterOrdering::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForClusterOrdering ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_symbolTableForClusterOrdering::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_symbolTableForClusterOrdering (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering GALGAS_symbolTableForClusterOrdering::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForClusterOrdering result ;
  const GALGAS_symbolTableForClusterOrdering * p = (const GALGAS_symbolTableForClusterOrdering *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_symbolTableForClusterOrdering *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForClusterOrdering", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction instructionRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_SequentialInstruction::method_instructionRelativeBranchOverflow (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                       const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                                       const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                       GALGAS_branchOverflowMap & /* ioArgument_ioOverflowMap */,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_instructionRelativeBranchOverflow (cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                            const GALGAS_uint constin_inAddress,
                                                            const GALGAS_string constin_inBlockLabel,
                                                            const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                            GALGAS_branchOverflowMap & io_ioOverflowMap,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    inObject->method_instructionRelativeBranchOverflow  (constin_inAddress, constin_inBlockLabel, constin_inSymbolTable, io_ioOverflowMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18AbstractBlockTerminator terminatorRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractBlockTerminator::method_terminatorRelativeBranchOverflow (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                        const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                                        const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                        const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                        GALGAS_branchOverflowMap & /* ioArgument_ioOverflowMap */,
                                                                                        Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_terminatorRelativeBranchOverflow (cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                           const GALGAS_uint constin_inAddress,
                                                           const GALGAS_string constin_inBlockLabel,
                                                           const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                           const GALGAS_string constin_inNextBlockLabel,
                                                           GALGAS_branchOverflowMap & io_ioOverflowMap,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    inObject->method_terminatorRelativeBranchOverflow  (constin_inAddress, constin_inBlockLabel, constin_inSymbolTable, constin_inNextBlockLabel, io_ioOverflowMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18AbstractBlockTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractBlockTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                                 const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                                                 const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                                 const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                 GALGAS_uint & /* ioArgument_ioConversionCount */,
                                                                                                 GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                 GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                 Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_AbstractBlockTerminator temp_0 = this ;
  outArgument_outModifiedTerminator = temp_0 ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_performTerminatorRelativeBranchResolution (cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                    const GALGAS_uint constin_inAddress,
                                                                    const GALGAS_string constin_inBlockLabel,
                                                                    const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                                    const GALGAS_string constin_inNextBlockLabel,
                                                                    GALGAS_uint & io_ioConversionCount,
                                                                    GALGAS_string & io_ioListFileContents,
                                                                    GALGAS_ipic_31__38_AbstractBlockTerminator & out_outModifiedTerminator,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  out_outModifiedTerminator.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    inObject->method_performTerminatorRelativeBranchResolution  (constin_inAddress, constin_inBlockLabel, constin_inSymbolTable, constin_inNextBlockLabel, io_ioConversionCount, io_ioListFileContents, out_outModifiedTerminator, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

cMapElement_symbolTableForRelativesResolution::cMapElement_symbolTableForRelativesResolution (const GALGAS_lstring & inKey,
                                                                                              const GALGAS_uint & in_mLabelAddress
                                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLabelAddress (in_mLabelAddress) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_symbolTableForRelativesResolution::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_symbolTableForRelativesResolution::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_symbolTableForRelativesResolution (mProperty_lkey, mProperty_mLabelAddress COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_symbolTableForRelativesResolution::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mLabelAddress" ":") ;
  mProperty_mLabelAddress.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_symbolTableForRelativesResolution::compare (const cCollectionElement * inOperand) const {
  cMapElement_symbolTableForRelativesResolution * operand = (cMapElement_symbolTableForRelativesResolution *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mLabelAddress.objectCompare (operand->mProperty_mLabelAddress) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution::GALGAS_symbolTableForRelativesResolution (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution::GALGAS_symbolTableForRelativesResolution (const GALGAS_symbolTableForRelativesResolution & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution & GALGAS_symbolTableForRelativesResolution::operator = (const GALGAS_symbolTableForRelativesResolution & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution GALGAS_symbolTableForRelativesResolution::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_symbolTableForRelativesResolution result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution GALGAS_symbolTableForRelativesResolution::constructor_mapWithMapToOverride (const GALGAS_symbolTableForRelativesResolution & inMapToOverride
                                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForRelativesResolution result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution GALGAS_symbolTableForRelativesResolution::getter_overriddenMap (Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_symbolTableForRelativesResolution result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForRelativesResolution::addAssign_operation (const GALGAS_lstring & inKey,
                                                                    const GALGAS_uint & inArgument0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForRelativesResolution * p = nullptr ;
  macroMyNew (p, cMapElement_symbolTableForRelativesResolution (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@symbolTableForRelativesResolution insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution GALGAS_symbolTableForRelativesResolution::add_operation (const GALGAS_symbolTableForRelativesResolution & inOperand,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_symbolTableForRelativesResolution result = *this ;
  cEnumerator_symbolTableForRelativesResolution enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mLabelAddress (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForRelativesResolution::setter_insertKey (GALGAS_lstring inKey,
                                                                 GALGAS_uint inArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForRelativesResolution * p = nullptr ;
  macroMyNew (p, cMapElement_symbolTableForRelativesResolution (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_symbolTableForRelativesResolution_searchKey = "the '%K' label is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForRelativesResolution::method_searchKey (GALGAS_lstring inKey,
                                                                 GALGAS_uint & outArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_symbolTableForRelativesResolution * p = (const cMapElement_symbolTableForRelativesResolution *) performSearch (inKey,
                                                                                                                                   inCompiler,
                                                                                                                                   kSearchErrorMessage_symbolTableForRelativesResolution_searchKey
                                                                                                                                   COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_symbolTableForRelativesResolution) ;
    outArgument0 = p->mProperty_mLabelAddress ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_symbolTableForRelativesResolution::getter_mLabelAddressForKey (const GALGAS_string & inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_symbolTableForRelativesResolution * p = (const cMapElement_symbolTableForRelativesResolution *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForRelativesResolution) ;
    result = p->mProperty_mLabelAddress ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForRelativesResolution::setter_setMLabelAddressForKey (GALGAS_uint inAttributeValue,
                                                                              GALGAS_string inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_symbolTableForRelativesResolution * p = (cMapElement_symbolTableForRelativesResolution *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForRelativesResolution) ;
    p->mProperty_mLabelAddress = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_symbolTableForRelativesResolution * GALGAS_symbolTableForRelativesResolution::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                             const GALGAS_string & inKey
                                                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForRelativesResolution * result = (cMapElement_symbolTableForRelativesResolution *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_symbolTableForRelativesResolution) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_symbolTableForRelativesResolution::cEnumerator_symbolTableForRelativesResolution (const GALGAS_symbolTableForRelativesResolution & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution_2D_element cEnumerator_symbolTableForRelativesResolution::current (LOCATION_ARGS) const {
  const cMapElement_symbolTableForRelativesResolution * p = (const cMapElement_symbolTableForRelativesResolution *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForRelativesResolution) ;
  return GALGAS_symbolTableForRelativesResolution_2D_element (p->mProperty_lkey, p->mProperty_mLabelAddress) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_symbolTableForRelativesResolution::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_symbolTableForRelativesResolution::current_mLabelAddress (LOCATION_ARGS) const {
  const cMapElement_symbolTableForRelativesResolution * p = (const cMapElement_symbolTableForRelativesResolution *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForRelativesResolution) ;
  return p->mProperty_mLabelAddress ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_symbolTableForRelativesResolution::optional_searchKey (const GALGAS_string & inKey,
                                                                   GALGAS_uint & outArgument0) const {
  const cMapElement_symbolTableForRelativesResolution * p = (const cMapElement_symbolTableForRelativesResolution *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_symbolTableForRelativesResolution) ;
    outArgument0 = p->mProperty_mLabelAddress ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @symbolTableForRelativesResolution generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_symbolTableForRelativesResolution ("symbolTableForRelativesResolution",
                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_symbolTableForRelativesResolution::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_symbolTableForRelativesResolution::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_symbolTableForRelativesResolution (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution GALGAS_symbolTableForRelativesResolution::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForRelativesResolution result ;
  const GALGAS_symbolTableForRelativesResolution * p = (const GALGAS_symbolTableForRelativesResolution *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_symbolTableForRelativesResolution *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForRelativesResolution", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@codeList' list
//
//--------------------------------------------------------------------------------------------------

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
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_codeList::cCollectionElement_codeList (const GALGAS_string & in_mAssemblyCode,
                                                          const GALGAS_uintlist & in_mBinaryCode
                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAssemblyCode, in_mBinaryCode) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_codeList::cCollectionElement_codeList (const GALGAS_codeList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAssemblyCode, inElement.mProperty_mBinaryCode) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_codeList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_codeList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_codeList (mObject.mProperty_mAssemblyCode, mObject.mProperty_mBinaryCode COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_codeList::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mAssemblyCode" ":") ;
  mObject.mProperty_mAssemblyCode.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mBinaryCode" ":") ;
  mObject.mProperty_mBinaryCode.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_codeList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_codeList * operand = (cCollectionElement_codeList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_codeList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_codeList::GALGAS_codeList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_codeList::GALGAS_codeList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_codeList GALGAS_codeList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_codeList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

void GALGAS_codeList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const GALGAS_string & in_mAssemblyCode,
                                                 const GALGAS_uintlist & in_mBinaryCode
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_codeList * p = nullptr ;
  macroMyNew (p, cCollectionElement_codeList (in_mAssemblyCode,
                                              in_mBinaryCode COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_codeList::addAssign_operation (const GALGAS_string & inOperand0,
                                           const GALGAS_uintlist & inOperand1
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_codeList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_codeList::setter_append (const GALGAS_string inOperand0,
                                     const GALGAS_uintlist inOperand1,
                                     Compiler * /* inCompiler */
                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_codeList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_codeList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                            const GALGAS_uintlist inOperand1,
                                            const GALGAS_uint inInsertionIndex,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_codeList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                            GALGAS_uintlist & outOperand1,
                                            const GALGAS_uint inRemoveIndex,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_codeList * p = (cCollectionElement_codeList *) attributes.ptr () ;
      if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_codeList::setter_popFirst (GALGAS_string & outOperand0,
                                       GALGAS_uintlist & outOperand1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_codeList * p = (cCollectionElement_codeList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    outOperand0 = p->mObject.mProperty_mAssemblyCode ;
    outOperand1 = p->mObject.mProperty_mBinaryCode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_codeList::setter_popLast (GALGAS_string & outOperand0,
                                      GALGAS_uintlist & outOperand1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_codeList * p = (cCollectionElement_codeList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    outOperand0 = p->mObject.mProperty_mAssemblyCode ;
    outOperand1 = p->mObject.mProperty_mBinaryCode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_codeList::method_first (GALGAS_string & outOperand0,
                                    GALGAS_uintlist & outOperand1,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_codeList * p = (cCollectionElement_codeList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    outOperand0 = p->mObject.mProperty_mAssemblyCode ;
    outOperand1 = p->mObject.mProperty_mBinaryCode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_codeList::method_last (GALGAS_string & outOperand0,
                                   GALGAS_uintlist & outOperand1,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_codeList * p = (cCollectionElement_codeList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    outOperand0 = p->mObject.mProperty_mAssemblyCode ;
    outOperand1 = p->mObject.mProperty_mBinaryCode ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_codeList GALGAS_codeList::add_operation (const GALGAS_codeList & inOperand,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_codeList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_codeList GALGAS_codeList::getter_subListWithRange (const GALGAS_range & inRange,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_codeList result = GALGAS_codeList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_codeList GALGAS_codeList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_codeList result = GALGAS_codeList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_codeList GALGAS_codeList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_codeList result = GALGAS_codeList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_codeList::plusAssign_operation (const GALGAS_codeList inOperand,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_codeList::setter_setMAssemblyCodeAtIndex (GALGAS_string inOperand,
                                                      GALGAS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_codeList * p = (cCollectionElement_codeList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAssemblyCode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_codeList::getter_mAssemblyCodeAtIndex (const GALGAS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_codeList * p = (cCollectionElement_codeList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    result = p->mObject.mProperty_mAssemblyCode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_codeList::setter_setMBinaryCodeAtIndex (GALGAS_uintlist inOperand,
                                                    GALGAS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_codeList * p = (cCollectionElement_codeList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBinaryCode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uintlist GALGAS_codeList::getter_mBinaryCodeAtIndex (const GALGAS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_codeList * p = (cCollectionElement_codeList *) attributes.ptr () ;
  GALGAS_uintlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    result = p->mObject.mProperty_mBinaryCode ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_codeList::cEnumerator_codeList (const GALGAS_codeList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_codeList_2D_element cEnumerator_codeList::current (LOCATION_ARGS) const {
  const cCollectionElement_codeList * p = (const cCollectionElement_codeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_codeList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_codeList::current_mAssemblyCode (LOCATION_ARGS) const {
  const cCollectionElement_codeList * p = (const cCollectionElement_codeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_codeList) ;
  return p->mObject.mProperty_mAssemblyCode ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uintlist cEnumerator_codeList::current_mBinaryCode (LOCATION_ARGS) const {
  const cCollectionElement_codeList * p = (const cCollectionElement_codeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_codeList) ;
  return p->mObject.mProperty_mBinaryCode ;
}




//--------------------------------------------------------------------------------------------------
//
//     @codeList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_codeList ("codeList",
                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_codeList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_codeList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_codeList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_codeList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_codeList GALGAS_codeList::extractObject (const GALGAS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_codeList result ;
  const GALGAS_codeList * p = (const GALGAS_codeList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_codeList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("codeList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_pic_31__38__5F_dataAddressMap::cMapElement_pic_31__38__5F_dataAddressMap (const GALGAS_lstring & inKey,
                                                                                      const GALGAS_uint & in_mDataAddress
                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mDataAddress (in_mDataAddress) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_pic_31__38__5F_dataAddressMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_pic_31__38__5F_dataAddressMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_pic_31__38__5F_dataAddressMap (mProperty_lkey, mProperty_mDataAddress COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_pic_31__38__5F_dataAddressMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mDataAddress" ":") ;
  mProperty_mDataAddress.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_pic_31__38__5F_dataAddressMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_pic_31__38__5F_dataAddressMap * operand = (cMapElement_pic_31__38__5F_dataAddressMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mDataAddress.objectCompare (operand->mProperty_mDataAddress) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap::GALGAS_pic_31__38__5F_dataAddressMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap::GALGAS_pic_31__38__5F_dataAddressMap (const GALGAS_pic_31__38__5F_dataAddressMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap & GALGAS_pic_31__38__5F_dataAddressMap::operator = (const GALGAS_pic_31__38__5F_dataAddressMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap GALGAS_pic_31__38__5F_dataAddressMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataAddressMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap GALGAS_pic_31__38__5F_dataAddressMap::constructor_mapWithMapToOverride (const GALGAS_pic_31__38__5F_dataAddressMap & inMapToOverride
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataAddressMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap GALGAS_pic_31__38__5F_dataAddressMap::getter_overriddenMap (Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38__5F_dataAddressMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataAddressMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                                const GALGAS_uint & inArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cMapElement_pic_31__38__5F_dataAddressMap * p = nullptr ;
  macroMyNew (p, cMapElement_pic_31__38__5F_dataAddressMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@pic_31__38__5F_dataAddressMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap GALGAS_pic_31__38__5F_dataAddressMap::add_operation (const GALGAS_pic_31__38__5F_dataAddressMap & inOperand,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38__5F_dataAddressMap result = *this ;
  cEnumerator_pic_31__38__5F_dataAddressMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mDataAddress (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataAddressMap::setter_insertKey (GALGAS_lstring inKey,
                                                             GALGAS_uint inArgument0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_pic_31__38__5F_dataAddressMap * p = nullptr ;
  macroMyNew (p, cMapElement_pic_31__38__5F_dataAddressMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' data is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_pic_31__38__5F_dataAddressMap_searchKey = "the '%K' data is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataAddressMap::method_searchKey (GALGAS_lstring inKey,
                                                             GALGAS_uint & outArgument0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_pic_31__38__5F_dataAddressMap * p = (const cMapElement_pic_31__38__5F_dataAddressMap *) performSearch (inKey,
                                                                                                                           inCompiler,
                                                                                                                           kSearchErrorMessage_pic_31__38__5F_dataAddressMap_searchKey
                                                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataAddressMap) ;
    outArgument0 = p->mProperty_mDataAddress ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_pic_31__38__5F_dataAddressMap::getter_mDataAddressForKey (const GALGAS_string & inKey,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_pic_31__38__5F_dataAddressMap * p = (const cMapElement_pic_31__38__5F_dataAddressMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataAddressMap) ;
    result = p->mProperty_mDataAddress ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataAddressMap::setter_setMDataAddressForKey (GALGAS_uint inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_pic_31__38__5F_dataAddressMap * p = (cMapElement_pic_31__38__5F_dataAddressMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataAddressMap) ;
    p->mProperty_mDataAddress = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_pic_31__38__5F_dataAddressMap * GALGAS_pic_31__38__5F_dataAddressMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                     const GALGAS_string & inKey
                                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_pic_31__38__5F_dataAddressMap * result = (cMapElement_pic_31__38__5F_dataAddressMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_pic_31__38__5F_dataAddressMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_pic_31__38__5F_dataAddressMap::cEnumerator_pic_31__38__5F_dataAddressMap (const GALGAS_pic_31__38__5F_dataAddressMap & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap_2D_element cEnumerator_pic_31__38__5F_dataAddressMap::current (LOCATION_ARGS) const {
  const cMapElement_pic_31__38__5F_dataAddressMap * p = (const cMapElement_pic_31__38__5F_dataAddressMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataAddressMap) ;
  return GALGAS_pic_31__38__5F_dataAddressMap_2D_element (p->mProperty_lkey, p->mProperty_mDataAddress) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_pic_31__38__5F_dataAddressMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_pic_31__38__5F_dataAddressMap::current_mDataAddress (LOCATION_ARGS) const {
  const cMapElement_pic_31__38__5F_dataAddressMap * p = (const cMapElement_pic_31__38__5F_dataAddressMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataAddressMap) ;
  return p->mProperty_mDataAddress ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38__5F_dataAddressMap::optional_searchKey (const GALGAS_string & inKey,
                                                               GALGAS_uint & outArgument0) const {
  const cMapElement_pic_31__38__5F_dataAddressMap * p = (const cMapElement_pic_31__38__5F_dataAddressMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataAddressMap) ;
    outArgument0 = p->mProperty_mDataAddress ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18_dataAddressMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap ("pic18_dataAddressMap",
                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38__5F_dataAddressMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38__5F_dataAddressMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38__5F_dataAddressMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap GALGAS_pic_31__38__5F_dataAddressMap::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataAddressMap result ;
  const GALGAS_pic_31__38__5F_dataAddressMap * p = (const GALGAS_pic_31__38__5F_dataAddressMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38__5F_dataAddressMap *> (p)) {
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
                                       const GALGAS_uint constin_inAddress,
                                       const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                       const GALGAS_pic_31__38__5F_dataAddressMap constin_inDataMap,
                                       GALGAS_codeList & out_outCode,
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
                                                 const GALGAS_uint constin_inAddress,
                                                 const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                 const GALGAS_string constin_inNextBlockLabel,
                                                 GALGAS_codeList & out_outCode,
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

GALGAS_bool callExtensionGetter_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                     const GALGAS_ipic_31__38_AbstractBlockTerminator in_inTerminator,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isEqualToTerminator (in_inTerminator, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                     const GALGAS_string in_inNextBlockLabel,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_terminatorDisplay (in_inNextBlockLabel, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint callExtensionGetter_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                const GALGAS_string in_inNextBlockLabel,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_uint result ;
  if (nullptr != inObject) {
    result = inObject->getter_terminatorSize (in_inNextBlockLabel, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@ipic18SequentialInstruction instructionSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38_SequentialInstruction::getter_instructionSize (Compiler */* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint (uint32_t (2U)) ;
//---
  return result_outSize ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_uint callExtensionGetter_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GALGAS_uint result ;
  if (nullptr != inObject) {
    result = inObject->getter_instructionSize (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction performInstructionRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_SequentialInstruction::method_performInstructionRelativeBranchResolution (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                                const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                                                const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                                GALGAS_uint & /* ioArgument_ioConversionCount */,
                                                                                                GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_SequentialInstruction temp_0 = this ;
  outArgument_outModifiedInstruction = temp_0 ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_performInstructionRelativeBranchResolution (cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                     const GALGAS_uint constin_inAddress,
                                                                     const GALGAS_string constin_inBlockLabel,
                                                                     const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                                     GALGAS_uint & io_ioConversionCount,
                                                                     GALGAS_string & io_ioListFileContents,
                                                                     GALGAS_ipic_31__38_SequentialInstruction & out_outModifiedInstruction,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  out_outModifiedInstruction.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    inObject->method_performInstructionRelativeBranchResolution  (constin_inAddress, constin_inBlockLabel, constin_inSymbolTable, io_ioConversionCount, io_ioListFileContents, out_outModifiedInstruction, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18SequentialInstruction instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist callExtensionGetter_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_stringlist result ;
  if (nullptr != inObject) {
    result = inObject->getter_instructionDisplay (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@pic18InstructionWithNoOperandKind mnemonic'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_mnemonic (const GALGAS_pic_31__38_InstructionWithNoOperandKind & inObject,
                                        Compiler *
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




//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18PiccoloInstruction addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addUsedRoutines (cPtr_pic_31__38_PiccoloInstruction * inObject,
                                          const GALGAS_pic_31__38_MacroMap constin_inMacroMap,
                                          GALGAS_stringset & io_ioUsedRoutines,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_PiccoloInstruction) ;
    inObject->method_addUsedRoutines (constin_inMacroMap, io_ioUsedRoutines, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

bool cMapElement_declaredRoutineMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_declaredRoutineMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_declaredRoutineMap (mProperty_lkey, mProperty_mRequiredBank, mProperty_mReturnedBank, mProperty_mPreservesBank, mProperty_mIsNoReturn, mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_declaredRoutineMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mRequiredBank" ":") ;
  mProperty_mRequiredBank.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mReturnedBank" ":") ;
  mProperty_mReturnedBank.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mPreservesBank" ":") ;
  mProperty_mPreservesBank.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mIsNoReturn" ":") ;
  mProperty_mIsNoReturn.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mInstructionList" ":") ;
  mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap::GALGAS_declaredRoutineMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap::GALGAS_declaredRoutineMap (const GALGAS_declaredRoutineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap & GALGAS_declaredRoutineMap::operator = (const GALGAS_declaredRoutineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap GALGAS_declaredRoutineMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_declaredRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap GALGAS_declaredRoutineMap::constructor_mapWithMapToOverride (const GALGAS_declaredRoutineMap & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_declaredRoutineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap GALGAS_declaredRoutineMap::getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_declaredRoutineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declaredRoutineMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_luint & inArgument0,
                                                     const GALGAS_luint & inArgument1,
                                                     const GALGAS_bool & inArgument2,
                                                     const GALGAS_bool & inArgument3,
                                                     const GALGAS_pic_31__38_InstructionList & inArgument4,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_declaredRoutineMap * p = nullptr ;
  macroMyNew (p, cMapElement_declaredRoutineMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@declaredRoutineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap GALGAS_declaredRoutineMap::add_operation (const GALGAS_declaredRoutineMap & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_declaredRoutineMap result = *this ;
  cEnumerator_declaredRoutineMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mRequiredBank (HERE), enumerator.current_mReturnedBank (HERE), enumerator.current_mPreservesBank (HERE), enumerator.current_mIsNoReturn (HERE), enumerator.current_mInstructionList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declaredRoutineMap::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_luint inArgument0,
                                                  GALGAS_luint inArgument1,
                                                  GALGAS_bool inArgument2,
                                                  GALGAS_bool inArgument3,
                                                  GALGAS_pic_31__38_InstructionList inArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_declaredRoutineMap * p = nullptr ;
  macroMyNew (p, cMapElement_declaredRoutineMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' routine is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_declaredRoutineMap_searchKey = "the '%K' routine is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_declaredRoutineMap::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_luint & outArgument0,
                                                  GALGAS_luint & outArgument1,
                                                  GALGAS_bool & outArgument2,
                                                  GALGAS_bool & outArgument3,
                                                  GALGAS_pic_31__38_InstructionList & outArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_declaredRoutineMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_declaredRoutineMap::getter_mRequiredBankForKey (const GALGAS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) attributes ;
  GALGAS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    result = p->mProperty_mRequiredBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_declaredRoutineMap::getter_mReturnedBankForKey (const GALGAS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) attributes ;
  GALGAS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    result = p->mProperty_mReturnedBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_declaredRoutineMap::getter_mPreservesBankForKey (const GALGAS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) attributes ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    result = p->mProperty_mPreservesBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_declaredRoutineMap::getter_mIsNoReturnForKey (const GALGAS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) attributes ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    result = p->mProperty_mIsNoReturn ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_declaredRoutineMap::getter_mInstructionListForKey (const GALGAS_string & inKey,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) attributes ;
  GALGAS_pic_31__38_InstructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declaredRoutineMap::setter_setMRequiredBankForKey (GALGAS_luint inAttributeValue,
                                                               GALGAS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_declaredRoutineMap * p = (cMapElement_declaredRoutineMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    p->mProperty_mRequiredBank = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declaredRoutineMap::setter_setMReturnedBankForKey (GALGAS_luint inAttributeValue,
                                                               GALGAS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_declaredRoutineMap * p = (cMapElement_declaredRoutineMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    p->mProperty_mReturnedBank = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declaredRoutineMap::setter_setMPreservesBankForKey (GALGAS_bool inAttributeValue,
                                                                GALGAS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_declaredRoutineMap * p = (cMapElement_declaredRoutineMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    p->mProperty_mPreservesBank = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declaredRoutineMap::setter_setMIsNoReturnForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_declaredRoutineMap * p = (cMapElement_declaredRoutineMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    p->mProperty_mIsNoReturn = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declaredRoutineMap::setter_setMInstructionListForKey (GALGAS_pic_31__38_InstructionList inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_declaredRoutineMap * p = (cMapElement_declaredRoutineMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
    p->mProperty_mInstructionList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_declaredRoutineMap * GALGAS_declaredRoutineMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_declaredRoutineMap * result = (cMapElement_declaredRoutineMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_declaredRoutineMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_declaredRoutineMap::cEnumerator_declaredRoutineMap (const GALGAS_declaredRoutineMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap_2D_element cEnumerator_declaredRoutineMap::current (LOCATION_ARGS) const {
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
  return GALGAS_declaredRoutineMap_2D_element (p->mProperty_lkey, p->mProperty_mRequiredBank, p->mProperty_mReturnedBank, p->mProperty_mPreservesBank, p->mProperty_mIsNoReturn, p->mProperty_mInstructionList) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_declaredRoutineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_declaredRoutineMap::current_mRequiredBank (LOCATION_ARGS) const {
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
  return p->mProperty_mRequiredBank ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_declaredRoutineMap::current_mReturnedBank (LOCATION_ARGS) const {
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
  return p->mProperty_mReturnedBank ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_declaredRoutineMap::current_mPreservesBank (LOCATION_ARGS) const {
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
  return p->mProperty_mPreservesBank ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_declaredRoutineMap::current_mIsNoReturn (LOCATION_ARGS) const {
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
  return p->mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList cEnumerator_declaredRoutineMap::current_mInstructionList (LOCATION_ARGS) const {
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_declaredRoutineMap) ;
  return p->mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_declaredRoutineMap::optional_searchKey (const GALGAS_string & inKey,
                                                    GALGAS_luint & outArgument0,
                                                    GALGAS_luint & outArgument1,
                                                    GALGAS_bool & outArgument2,
                                                    GALGAS_bool & outArgument3,
                                                    GALGAS_pic_31__38_InstructionList & outArgument4) const {
  const cMapElement_declaredRoutineMap * p = (const cMapElement_declaredRoutineMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
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

//--------------------------------------------------------------------------------------------------
//
//     @declaredRoutineMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declaredRoutineMap ("declaredRoutineMap",
                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_declaredRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredRoutineMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_declaredRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declaredRoutineMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap GALGAS_declaredRoutineMap::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_declaredRoutineMap result ;
  const GALGAS_declaredRoutineMap * p = (const GALGAS_declaredRoutineMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_declaredRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declaredRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@pic18PiccoloInstruction performInlining'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_PiccoloInstruction::method_performInlining (const GALGAS_stringset /* constinArgument_inInlinedRoutineSet */,
                                                                 const GALGAS_declaredRoutineMap /* constinArgument_inDeclaredRoutineMap */,
                                                                 const GALGAS_stringset /* constinArgument_inCurrentlyInlinedRoutineSet */,
                                                                 GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_PiccoloInstruction temp_0 = this ;
  ioArgument_ioInstructionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 22)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_performInlining (cPtr_pic_31__38_PiccoloInstruction * inObject,
                                          const GALGAS_stringset constin_inInlinedRoutineSet,
                                          const GALGAS_declaredRoutineMap constin_inDeclaredRoutineMap,
                                          const GALGAS_stringset constin_inCurrentlyInlinedRoutineSet,
                                          GALGAS_pic_31__38_InstructionList & io_ioInstructionList,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_PiccoloInstruction) ;
    inObject->method_performInlining  (constin_inInlinedRoutineSet, constin_inDeclaredRoutineMap, constin_inCurrentlyInlinedRoutineSet, io_ioInstructionList, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18PiccoloSimpleInstruction analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSimpleInstruction (cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                   const GALGAS_uint constin_inAccessBankSplitOffset,
                                                   const GALGAS_routineMap constin_inRoutineMap,
                                                   const GALGAS_registerTable constin_inRegisterTable,
                                                   const GALGAS_pic_31__38__5F_dataMap constin_inDataMap,
                                                   const GALGAS_constantMap constin_inConstantMap,
                                                   GALGAS_uint & io_ioCurrentBank,
                                                   const GALGAS_bool constin_inShouldPreserveBSR,
                                                   GALGAS_stringset & io_ioUsedRegisters,
                                                   GALGAS_ipic_31__38_SequentialInstruction & out_outInstruction,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outInstruction.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_PiccoloSimpleInstruction) ;
    inObject->method_analyzeSimpleInstruction (constin_inAccessBankSplitOffset, constin_inRoutineMap, constin_inRegisterTable, constin_inDataMap, constin_inConstantMap, io_ioCurrentBank, constin_inShouldPreserveBSR, io_ioUsedRegisters, out_outInstruction, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18PiccoloInstruction analyze'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyze (cPtr_pic_31__38_PiccoloInstruction * inObject,
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

cMapElement_blockInstructionBlockMap::cMapElement_blockInstructionBlockMap (const GALGAS_lstring & inKey,
                                                                            const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                            const GALGAS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                                            const GALGAS_location & in_mEndOfBlock
                                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mBlockTerminaisonForBlockInstruction (in_mBlockTerminaisonForBlockInstruction),
mProperty_mEndOfBlock (in_mEndOfBlock) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_blockInstructionBlockMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_blockInstructionBlockMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_blockInstructionBlockMap (mProperty_lkey, mProperty_mInstructionList, mProperty_mBlockTerminaisonForBlockInstruction, mProperty_mEndOfBlock COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_blockInstructionBlockMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mInstructionList" ":") ;
  mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mBlockTerminaisonForBlockInstruction" ":") ;
  mProperty_mBlockTerminaisonForBlockInstruction.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mEndOfBlock" ":") ;
  mProperty_mEndOfBlock.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_blockInstructionBlockMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_blockInstructionBlockMap * operand = (cMapElement_blockInstructionBlockMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (operand->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBlockTerminaisonForBlockInstruction.objectCompare (operand->mProperty_mBlockTerminaisonForBlockInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfBlock.objectCompare (operand->mProperty_mEndOfBlock) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap::GALGAS_blockInstructionBlockMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap::GALGAS_blockInstructionBlockMap (const GALGAS_blockInstructionBlockMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap & GALGAS_blockInstructionBlockMap::operator = (const GALGAS_blockInstructionBlockMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap GALGAS_blockInstructionBlockMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_blockInstructionBlockMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap GALGAS_blockInstructionBlockMap::constructor_mapWithMapToOverride (const GALGAS_blockInstructionBlockMap & inMapToOverride
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_blockInstructionBlockMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap GALGAS_blockInstructionBlockMap::getter_overriddenMap (Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_blockInstructionBlockMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockInstructionBlockMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                           const GALGAS_pic_31__38_InstructionList & inArgument0,
                                                           const GALGAS_abstractBlockTerminationForBlockInstruction & inArgument1,
                                                           const GALGAS_location & inArgument2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_blockInstructionBlockMap * p = nullptr ;
  macroMyNew (p, cMapElement_blockInstructionBlockMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@blockInstructionBlockMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap GALGAS_blockInstructionBlockMap::add_operation (const GALGAS_blockInstructionBlockMap & inOperand,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_blockInstructionBlockMap result = *this ;
  cEnumerator_blockInstructionBlockMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mInstructionList (HERE), enumerator.current_mBlockTerminaisonForBlockInstruction (HERE), enumerator.current_mEndOfBlock (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockInstructionBlockMap::setter_insertKey (GALGAS_lstring inKey,
                                                        GALGAS_pic_31__38_InstructionList inArgument0,
                                                        GALGAS_abstractBlockTerminationForBlockInstruction inArgument1,
                                                        GALGAS_location inArgument2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_blockInstructionBlockMap * p = nullptr ;
  macroMyNew (p, cMapElement_blockInstructionBlockMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' block is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_blockInstructionBlockMap_searchKey = "the '%K' block is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_blockInstructionBlockMap::method_searchKey (GALGAS_lstring inKey,
                                                        GALGAS_pic_31__38_InstructionList & outArgument0,
                                                        GALGAS_abstractBlockTerminationForBlockInstruction & outArgument1,
                                                        GALGAS_location & outArgument2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) performSearch (inKey,
                                                                                                                 inCompiler,
                                                                                                                 kSearchErrorMessage_blockInstructionBlockMap_searchKey
                                                                                                                 COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
    outArgument0 = p->mProperty_mInstructionList ;
    outArgument1 = p->mProperty_mBlockTerminaisonForBlockInstruction ;
    outArgument2 = p->mProperty_mEndOfBlock ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_blockInstructionBlockMap::getter_mInstructionListForKey (const GALGAS_string & inKey,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) attributes ;
  GALGAS_pic_31__38_InstructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBlockTerminationForBlockInstruction GALGAS_blockInstructionBlockMap::getter_mBlockTerminaisonForBlockInstructionForKey (const GALGAS_string & inKey,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) attributes ;
  GALGAS_abstractBlockTerminationForBlockInstruction result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
    result = p->mProperty_mBlockTerminaisonForBlockInstruction ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_blockInstructionBlockMap::getter_mEndOfBlockForKey (const GALGAS_string & inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) attributes ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
    result = p->mProperty_mEndOfBlock ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockInstructionBlockMap::setter_setMInstructionListForKey (GALGAS_pic_31__38_InstructionList inAttributeValue,
                                                                        GALGAS_string inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_blockInstructionBlockMap * p = (cMapElement_blockInstructionBlockMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
    p->mProperty_mInstructionList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockInstructionBlockMap::setter_setMBlockTerminaisonForBlockInstructionForKey (GALGAS_abstractBlockTerminationForBlockInstruction inAttributeValue,
                                                                                            GALGAS_string inKey,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_blockInstructionBlockMap * p = (cMapElement_blockInstructionBlockMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
    p->mProperty_mBlockTerminaisonForBlockInstruction = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockInstructionBlockMap::setter_setMEndOfBlockForKey (GALGAS_location inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_blockInstructionBlockMap * p = (cMapElement_blockInstructionBlockMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
    p->mProperty_mEndOfBlock = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_blockInstructionBlockMap * GALGAS_blockInstructionBlockMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                           const GALGAS_string & inKey
                                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_blockInstructionBlockMap * result = (cMapElement_blockInstructionBlockMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_blockInstructionBlockMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_blockInstructionBlockMap::cEnumerator_blockInstructionBlockMap (const GALGAS_blockInstructionBlockMap & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap_2D_element cEnumerator_blockInstructionBlockMap::current (LOCATION_ARGS) const {
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
  return GALGAS_blockInstructionBlockMap_2D_element (p->mProperty_lkey, p->mProperty_mInstructionList, p->mProperty_mBlockTerminaisonForBlockInstruction, p->mProperty_mEndOfBlock) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_blockInstructionBlockMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList cEnumerator_blockInstructionBlockMap::current_mInstructionList (LOCATION_ARGS) const {
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
  return p->mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBlockTerminationForBlockInstruction cEnumerator_blockInstructionBlockMap::current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const {
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
  return p->mProperty_mBlockTerminaisonForBlockInstruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_blockInstructionBlockMap::current_mEndOfBlock (LOCATION_ARGS) const {
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
  return p->mProperty_mEndOfBlock ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_blockInstructionBlockMap::optional_searchKey (const GALGAS_string & inKey,
                                                          GALGAS_pic_31__38_InstructionList & outArgument0,
                                                          GALGAS_abstractBlockTerminationForBlockInstruction & outArgument1,
                                                          GALGAS_location & outArgument2) const {
  const cMapElement_blockInstructionBlockMap * p = (const cMapElement_blockInstructionBlockMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_blockInstructionBlockMap) ;
    outArgument0 = p->mProperty_mInstructionList ;
    outArgument1 = p->mProperty_mBlockTerminaisonForBlockInstruction ;
    outArgument2 = p->mProperty_mEndOfBlock ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @blockInstructionBlockMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_blockInstructionBlockMap ("blockInstructionBlockMap",
                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_blockInstructionBlockMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInstructionBlockMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_blockInstructionBlockMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockInstructionBlockMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap GALGAS_blockInstructionBlockMap::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_blockInstructionBlockMap result ;
  const GALGAS_blockInstructionBlockMap * p = (const GALGAS_blockInstructionBlockMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_blockInstructionBlockMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockInstructionBlockMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_blockInitialBankSelectionMap::cMapElement_blockInitialBankSelectionMap (const GALGAS_lstring & inKey,
                                                                                    const GALGAS_uint & in_mInitialBankSelection,
                                                                                    const GALGAS_string & in_mSourceBlock
                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mInitialBankSelection (in_mInitialBankSelection),
mProperty_mSourceBlock (in_mSourceBlock) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_blockInitialBankSelectionMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_blockInitialBankSelectionMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_blockInitialBankSelectionMap (mProperty_lkey, mProperty_mInitialBankSelection, mProperty_mSourceBlock COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_blockInitialBankSelectionMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mInitialBankSelection" ":") ;
  mProperty_mInitialBankSelection.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mSourceBlock" ":") ;
  mProperty_mSourceBlock.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_blockInitialBankSelectionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_blockInitialBankSelectionMap * operand = (cMapElement_blockInitialBankSelectionMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mInitialBankSelection.objectCompare (operand->mProperty_mInitialBankSelection) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceBlock.objectCompare (operand->mProperty_mSourceBlock) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap::GALGAS_blockInitialBankSelectionMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap::GALGAS_blockInitialBankSelectionMap (const GALGAS_blockInitialBankSelectionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap & GALGAS_blockInitialBankSelectionMap::operator = (const GALGAS_blockInitialBankSelectionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap GALGAS_blockInitialBankSelectionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_blockInitialBankSelectionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap GALGAS_blockInitialBankSelectionMap::constructor_mapWithMapToOverride (const GALGAS_blockInitialBankSelectionMap & inMapToOverride
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_blockInitialBankSelectionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap GALGAS_blockInitialBankSelectionMap::getter_overriddenMap (Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_blockInitialBankSelectionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockInitialBankSelectionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                               const GALGAS_uint & inArgument0,
                                                               const GALGAS_string & inArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_blockInitialBankSelectionMap * p = nullptr ;
  macroMyNew (p, cMapElement_blockInitialBankSelectionMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@blockInitialBankSelectionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap GALGAS_blockInitialBankSelectionMap::add_operation (const GALGAS_blockInitialBankSelectionMap & inOperand,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_blockInitialBankSelectionMap result = *this ;
  cEnumerator_blockInitialBankSelectionMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mInitialBankSelection (HERE), enumerator.current_mSourceBlock (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockInitialBankSelectionMap::setter_insertKey (GALGAS_lstring inKey,
                                                            GALGAS_uint inArgument0,
                                                            GALGAS_string inArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_blockInitialBankSelectionMap * p = nullptr ;
  macroMyNew (p, cMapElement_blockInitialBankSelectionMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' block is already declared (internal error)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_blockInitialBankSelectionMap_searchKey = "the '%K' block is not declared (internal error)" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_blockInitialBankSelectionMap::method_searchKey (GALGAS_lstring inKey,
                                                            GALGAS_uint & outArgument0,
                                                            GALGAS_string & outArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_blockInitialBankSelectionMap * p = (const cMapElement_blockInitialBankSelectionMap *) performSearch (inKey,
                                                                                                                         inCompiler,
                                                                                                                         kSearchErrorMessage_blockInitialBankSelectionMap_searchKey
                                                                                                                         COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
    outArgument0 = p->mProperty_mInitialBankSelection ;
    outArgument1 = p->mProperty_mSourceBlock ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_blockInitialBankSelectionMap::getter_mInitialBankSelectionForKey (const GALGAS_string & inKey,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_blockInitialBankSelectionMap * p = (const cMapElement_blockInitialBankSelectionMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
    result = p->mProperty_mInitialBankSelection ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_blockInitialBankSelectionMap::getter_mSourceBlockForKey (const GALGAS_string & inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_blockInitialBankSelectionMap * p = (const cMapElement_blockInitialBankSelectionMap *) attributes ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
    result = p->mProperty_mSourceBlock ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockInitialBankSelectionMap::setter_setMInitialBankSelectionForKey (GALGAS_uint inAttributeValue,
                                                                                 GALGAS_string inKey,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_blockInitialBankSelectionMap * p = (cMapElement_blockInitialBankSelectionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
    p->mProperty_mInitialBankSelection = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockInitialBankSelectionMap::setter_setMSourceBlockForKey (GALGAS_string inAttributeValue,
                                                                        GALGAS_string inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_blockInitialBankSelectionMap * p = (cMapElement_blockInitialBankSelectionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
    p->mProperty_mSourceBlock = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_blockInitialBankSelectionMap * GALGAS_blockInitialBankSelectionMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                   const GALGAS_string & inKey
                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_blockInitialBankSelectionMap * result = (cMapElement_blockInitialBankSelectionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_blockInitialBankSelectionMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_blockInitialBankSelectionMap::cEnumerator_blockInitialBankSelectionMap (const GALGAS_blockInitialBankSelectionMap & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap_2D_element cEnumerator_blockInitialBankSelectionMap::current (LOCATION_ARGS) const {
  const cMapElement_blockInitialBankSelectionMap * p = (const cMapElement_blockInitialBankSelectionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
  return GALGAS_blockInitialBankSelectionMap_2D_element (p->mProperty_lkey, p->mProperty_mInitialBankSelection, p->mProperty_mSourceBlock) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_blockInitialBankSelectionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_blockInitialBankSelectionMap::current_mInitialBankSelection (LOCATION_ARGS) const {
  const cMapElement_blockInitialBankSelectionMap * p = (const cMapElement_blockInitialBankSelectionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
  return p->mProperty_mInitialBankSelection ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_blockInitialBankSelectionMap::current_mSourceBlock (LOCATION_ARGS) const {
  const cMapElement_blockInitialBankSelectionMap * p = (const cMapElement_blockInitialBankSelectionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
  return p->mProperty_mSourceBlock ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_blockInitialBankSelectionMap::optional_searchKey (const GALGAS_string & inKey,
                                                              GALGAS_uint & outArgument0,
                                                              GALGAS_string & outArgument1) const {
  const cMapElement_blockInitialBankSelectionMap * p = (const cMapElement_blockInitialBankSelectionMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_blockInitialBankSelectionMap) ;
    outArgument0 = p->mProperty_mInitialBankSelection ;
    outArgument1 = p->mProperty_mSourceBlock ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @blockInitialBankSelectionMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_blockInitialBankSelectionMap ("blockInitialBankSelectionMap",
                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_blockInitialBankSelectionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInitialBankSelectionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_blockInitialBankSelectionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockInitialBankSelectionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap GALGAS_blockInitialBankSelectionMap::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_blockInitialBankSelectionMap result ;
  const GALGAS_blockInitialBankSelectionMap * p = (const GALGAS_blockInitialBankSelectionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_blockInitialBankSelectionMap *> (p)) {
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
                                           GALGAS_stringset & io_ioVisitedBlockSet,
                                           const GALGAS_blockInstructionBlockMap constin_inBlockMap,
                                           const GALGAS_string constin_inCurrentBlockName,
                                           const GALGAS_uint constin_inInitialBlockSetting,
                                           GALGAS_blockInitialBankSelectionMap & io_ioBlockInitialBankSelectionMap,
                                           GALGAS_bool & io_ioContinuesInSequence,
                                           GALGAS_bool & io_ioContinueAccessibilityExploration,
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
                                        const GALGAS_uint constin_inAccessBankSplitOffset,
                                        const GALGAS_uint constin_inCurrentBank,
                                        const GALGAS_registerTable constin_inRegisterTable,
                                        const GALGAS_constantMap constin_inConstantMap,
                                        GALGAS_uint & io_ioLocalLabelIndex,
                                        GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                        GALGAS_stringset & io_ioUsedRegisters,
                                        const GALGAS_string constin_inLabelForBlock,
                                        GALGAS_ipic_31__38_AbstractBlockTerminator & out_outTerminator,
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
//
//Abstract extension method '@pic18ConditionExpression analyzeCondition'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeCondition (cPtr_pic_31__38_ConditionExpression * inObject,
                                           const GALGAS_uint constin_inAccessBankSplitOffset,
                                           const GALGAS_uint constin_inCurrentBank,
                                           const GALGAS_registerTable constin_inRegisterTable,
                                           const GALGAS_constantMap constin_inConstantMap,
                                           GALGAS_uint & io_ioLocalLabelIndex,
                                           GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                           const GALGAS_lstring constin_inConditionTrueLabel,
                                           const GALGAS_lstring constin_inConditionFalseLabel,
                                           GALGAS_stringset & io_ioUsedRegisters,
                                           GALGAS_ipic_31__38_AbstractBlockTerminator & out_outCurrentBlockTerminator,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCurrentBlockTerminator.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_ConditionExpression) ;
    inObject->method_analyzeCondition (constin_inAccessBankSplitOffset, constin_inCurrentBank, constin_inRegisterTable, constin_inConstantMap, io_ioLocalLabelIndex, io_ioGeneratedBlockList, constin_inConditionTrueLabel, constin_inConditionFalseLabel, io_ioUsedRegisters, out_outCurrentBlockTerminator, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeTerminator (cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                             const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                             const GALGAS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                             const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                             const GALGAS_string constin_inBlockLabel,
                                             GALGAS_bool & io_ioOptimizationDone,
                                             GALGAS_string & io_ioListFileContents,
                                             GALGAS_ipic_31__38_AbstractBlockTerminator & out_outOptimizedTerminator,
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
//
//Extension method '@ipic18AbstractConditionTerminator getOptimizedTerminators'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractConditionTerminator::method_getOptimizedTerminators (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                   const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                   const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                   const GALGAS_string constinArgument_inBlockLabel,
                                                                                   GALGAS_bool & ioArgument_ioOptimizationDone,
                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                   GALGAS_ipic_31__38_SingleInstructionTerminator & outArgument_outOptimizedTrueTerminator,
                                                                                   GALGAS_ipic_31__38_SingleInstructionTerminator & outArgument_outOptimizedFalseTerminator,
                                                                                   GALGAS_bool & outArgument_outIdenticalTerminators,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38_AbstractBlockTerminator var_optimizedTrueTerminator_7320 ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  callExtensionMethod_optimizeTerminator ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, ioArgument_ioOptimizationDone, ioArgument_ioListFileContents, var_optimizedTrueTerminator_7320, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 169)) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator temp_1 ;
  if (var_optimizedTrueTerminator_7320.isValid ()) {
    if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_optimizedTrueTerminator_7320.ptr ())) {
      temp_1 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_7320.ptr () ;
    }else{
      inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_optimizedTrueTerminator_7320.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 178)) ;
    }
  }
  outArgument_outOptimizedTrueTerminator = temp_1 ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_optimizedFalseTerminator_7691 ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_2 = this ;
  callExtensionMethod_optimizeTerminator ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, ioArgument_ioOptimizationDone, ioArgument_ioListFileContents, var_optimizedFalseTerminator_7691, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 180)) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator temp_3 ;
  if (var_optimizedFalseTerminator_7691.isValid ()) {
    if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_optimizedFalseTerminator_7691.ptr ())) {
      temp_3 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedFalseTerminator_7691.ptr () ;
    }else{
      inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_optimizedFalseTerminator_7691.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 189)) ;
    }
  }
  outArgument_outOptimizedFalseTerminator = temp_3 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())).operator_and (GALGAS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 191)).boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outIdenticalTerminators = GALGAS_bool (true) ;
    }
  }
  if (kBoolFalse == test_4) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())).operator_and (GALGAS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 193)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_ipic_31__38_RetlwTerminator temp_6 ;
        if (outArgument_outOptimizedTrueTerminator.isValid ()) {
          if (nullptr != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())) {
            temp_6 = (cPtr_ipic_31__38_RetlwTerminator *) outArgument_outOptimizedTrueTerminator.ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_RetlwTerminator", outArgument_outOptimizedTrueTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 194)) ;
          }
        }
        GALGAS_ipic_31__38_RetlwTerminator var_t_8173 = temp_6 ;
        GALGAS_ipic_31__38_RetlwTerminator temp_7 ;
        if (outArgument_outOptimizedFalseTerminator.isValid ()) {
          if (nullptr != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) {
            temp_7 = (cPtr_ipic_31__38_RetlwTerminator *) outArgument_outOptimizedFalseTerminator.ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_RetlwTerminator", outArgument_outOptimizedFalseTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 195)) ;
          }
        }
        GALGAS_ipic_31__38_RetlwTerminator var_f_8264 = temp_7 ;
        outArgument_outIdenticalTerminators = GALGAS_bool (kIsEqual, var_t_8173.readProperty_mLiteralValue ().objectCompare (var_f_8264.readProperty_mLiteralValue ())) ;
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())).operator_and (GALGAS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 197)).boolEnum () ;
        if (kBoolTrue == test_8) {
          GALGAS_ipic_31__38_JumpTerminator temp_9 ;
          if (outArgument_outOptimizedTrueTerminator.isValid ()) {
            if (nullptr != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())) {
              temp_9 = (cPtr_ipic_31__38_JumpTerminator *) outArgument_outOptimizedTrueTerminator.ptr () ;
            }else{
              inCompiler->castError ("ipic_31__38_JumpTerminator", outArgument_outOptimizedTrueTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 198)) ;
            }
          }
          GALGAS_ipic_31__38_JumpTerminator var_t_8550 = temp_9 ;
          GALGAS_ipic_31__38_JumpTerminator temp_10 ;
          if (outArgument_outOptimizedFalseTerminator.isValid ()) {
            if (nullptr != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) {
              temp_10 = (cPtr_ipic_31__38_JumpTerminator *) outArgument_outOptimizedFalseTerminator.ptr () ;
            }else{
              inCompiler->castError ("ipic_31__38_JumpTerminator", outArgument_outOptimizedFalseTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 199)) ;
            }
          }
          GALGAS_ipic_31__38_JumpTerminator var_f_8639 = temp_10 ;
          outArgument_outIdenticalTerminators = GALGAS_bool (kIsEqual, var_t_8550.readProperty_mLabel ().objectCompare (var_f_8639.readProperty_mLabel ())) ;
        }
      }
      if (kBoolFalse == test_8) {
        outArgument_outIdenticalTerminators = GALGAS_bool (false) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getOptimizedTerminators (cPtr_ipic_31__38_AbstractConditionTerminator * inObject,
                                                  const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                  const GALGAS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                                  const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                                  const GALGAS_string constin_inBlockLabel,
                                                  GALGAS_bool & io_ioOptimizationDone,
                                                  GALGAS_string & io_ioListFileContents,
                                                  GALGAS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedTrueTerminator,
                                                  GALGAS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedFalseTerminator,
                                                  GALGAS_bool & out_outIdenticalTerminators,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  out_outOptimizedTrueTerminator.drop () ;
  out_outOptimizedFalseTerminator.drop () ;
  out_outIdenticalTerminators.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractConditionTerminator) ;
    inObject->method_getOptimizedTerminators  (constin_inSymbolTable, constin_inOptimizeFlagStruct, constin_inBlockList, constin_inBlockLabel, io_ioOptimizationDone, io_ioListFileContents, out_outOptimizedTrueTerminator, out_outOptimizedFalseTerminator, out_outIdenticalTerminators, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator enterTerminatorReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterTerminatorReferencedLabels (cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                          const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                          const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                                          GALGAS_stringset & io_ioReferencedBlockSet,
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
//
//Extension method '@ipic18SequentialInstruction enterInstructionReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_SequentialInstruction::method_enterInstructionReferencedLabels (const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                                      const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                                      GALGAS_stringset & /* ioArgument_ioReferencedBlockSet */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInstructionReferencedLabels (cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                           const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                           const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                                           GALGAS_stringset & io_ioReferencedBlockSet,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    inObject->method_enterInstructionReferencedLabels  (constin_inSymbolTable, constin_inBlockList, io_ioReferencedBlockSet, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction optimizeInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_SequentialInstruction::method_optimizeInstruction (const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                         const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                         const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                         const GALGAS_lstring /* constinArgument_inBlockLabel */,
                                                                         GALGAS_bool & outArgument_outOptimizationDone,
                                                                         GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                         GALGAS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                         GALGAS_bool & outArgument_outNOPsubstitution,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_SequentialInstruction temp_0 = this ;
  outArgument_outOptimizedInstruction = temp_0 ;
  outArgument_outOptimizationDone = GALGAS_bool (false) ;
  outArgument_outNOPsubstitution = GALGAS_bool (false) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeInstruction (cPtr_ipic_31__38_SequentialInstruction * inObject,
                                              const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                              const GALGAS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                              const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                              const GALGAS_lstring constin_inBlockLabel,
                                              GALGAS_bool & out_outOptimizationDone,
                                              GALGAS_string & io_ioListFileContents,
                                              GALGAS_ipic_31__38_SequentialInstruction & out_outOptimizedInstruction,
                                              GALGAS_bool & out_outNOPsubstitution,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  out_outOptimizationDone.drop () ;
  out_outOptimizedInstruction.drop () ;
  out_outNOPsubstitution.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    inObject->method_optimizeInstruction  (constin_inSymbolTable, constin_inOptimizeFlagStruct, constin_inBlockList, constin_inBlockLabel, out_outOptimizationDone, io_ioListFileContents, out_outOptimizedInstruction, out_outNOPsubstitution, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstructionList enterInstructionReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInstructionReferencedLabels (const GALGAS_ipic_31__38_SequentialInstructionList inObject,
                                                       const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                       const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                       GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_SequentialInstructionList temp_0 = inObject ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_35981 (temp_0, kENUMERATION_UP) ;
  while (enumerator_35981.hasCurrentObject ()) {
    callExtensionMethod_enterInstructionReferencedLabels ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_35981.current_mInstruction (HERE).ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 943)) ;
    enumerator_35981.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------

GALGAS_optimizeFlagStruct::GALGAS_optimizeFlagStruct (void) :
mProperty_mRemoveEmptyRoutine (),
mProperty_mJSRtoRETLWreplacedByMOVLW (),
mProperty_mJSRfollowedByRETreplacedByJUMP (),
mProperty_mMOVLWfollowedByRETreplacedByRETLW (),
mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction (),
mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (),
mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_optimizeFlagStruct::~ GALGAS_optimizeFlagStruct (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_optimizeFlagStruct::GALGAS_optimizeFlagStruct (const GALGAS_bool & inOperand0,
                                                      const GALGAS_bool & inOperand1,
                                                      const GALGAS_bool & inOperand2,
                                                      const GALGAS_bool & inOperand3,
                                                      const GALGAS_bool & inOperand4,
                                                      const GALGAS_bool & inOperand5,
                                                      const GALGAS_bool & inOperand6) :
mProperty_mRemoveEmptyRoutine (inOperand0),
mProperty_mJSRtoRETLWreplacedByMOVLW (inOperand1),
mProperty_mJSRfollowedByRETreplacedByJUMP (inOperand2),
mProperty_mMOVLWfollowedByRETreplacedByRETLW (inOperand3),
mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction (inOperand4),
mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (inOperand5),
mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_optimizeFlagStruct GALGAS_optimizeFlagStruct::constructor_new (const GALGAS_bool & in_mRemoveEmptyRoutine,
                                                                      const GALGAS_bool & in_mJSRtoRETLWreplacedByMOVLW,
                                                                      const GALGAS_bool & in_mJSRfollowedByRETreplacedByJUMP,
                                                                      const GALGAS_bool & in_mMOVLWfollowedByRETreplacedByRETLW,
                                                                      const GALGAS_bool & in_mJSRtoOneInstructionRoutineReplacedByInstruction,
                                                                      const GALGAS_bool & in_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction,
                                                                      const GALGAS_bool & in_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optimizeFlagStruct result ;
  if (in_mRemoveEmptyRoutine.isValid () && in_mJSRtoRETLWreplacedByMOVLW.isValid () && in_mJSRfollowedByRETreplacedByJUMP.isValid () && in_mMOVLWfollowedByRETreplacedByRETLW.isValid () && in_mJSRtoOneInstructionRoutineReplacedByInstruction.isValid () && in_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction.isValid () && in_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank.isValid ()) {
    result = GALGAS_optimizeFlagStruct (in_mRemoveEmptyRoutine, in_mJSRtoRETLWreplacedByMOVLW, in_mJSRfollowedByRETreplacedByJUMP, in_mMOVLWfollowedByRETreplacedByRETLW, in_mJSRtoOneInstructionRoutineReplacedByInstruction, in_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction, in_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_optimizeFlagStruct::objectCompare (const GALGAS_optimizeFlagStruct & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRemoveEmptyRoutine.objectCompare (inOperand.mProperty_mRemoveEmptyRoutine) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mJSRtoRETLWreplacedByMOVLW.objectCompare (inOperand.mProperty_mJSRtoRETLWreplacedByMOVLW) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mJSRfollowedByRETreplacedByJUMP.objectCompare (inOperand.mProperty_mJSRfollowedByRETreplacedByJUMP) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMOVLWfollowedByRETreplacedByRETLW.objectCompare (inOperand.mProperty_mMOVLWfollowedByRETreplacedByRETLW) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction.objectCompare (inOperand.mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction.objectCompare (inOperand.mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank.objectCompare (inOperand.mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_optimizeFlagStruct::isValid (void) const {
  return mProperty_mRemoveEmptyRoutine.isValid () && mProperty_mJSRtoRETLWreplacedByMOVLW.isValid () && mProperty_mJSRfollowedByRETreplacedByJUMP.isValid () && mProperty_mMOVLWfollowedByRETreplacedByRETLW.isValid () && mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction.isValid () && mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction.isValid () && mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optimizeFlagStruct::drop (void) {
  mProperty_mRemoveEmptyRoutine.drop () ;
  mProperty_mJSRtoRETLWreplacedByMOVLW.drop () ;
  mProperty_mJSRfollowedByRETreplacedByJUMP.drop () ;
  mProperty_mMOVLWfollowedByRETreplacedByRETLW.drop () ;
  mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction.drop () ;
  mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction.drop () ;
  mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optimizeFlagStruct::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.addString ("<struct @optimizeFlagStruct:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mRemoveEmptyRoutine.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mJSRtoRETLWreplacedByMOVLW.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mJSRfollowedByRETreplacedByJUMP.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mMOVLWfollowedByRETreplacedByRETLW.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @optimizeFlagStruct generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optimizeFlagStruct ("optimizeFlagStruct",
                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optimizeFlagStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optimizeFlagStruct ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optimizeFlagStruct::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optimizeFlagStruct (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optimizeFlagStruct GALGAS_optimizeFlagStruct::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_optimizeFlagStruct result ;
  const GALGAS_optimizeFlagStruct * p = (const GALGAS_optimizeFlagStruct *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_optimizeFlagStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optimizeFlagStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@bool flagValue'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_flagValue (const GALGAS_bool & inObject,
                                         Compiler *
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_bool temp_0 = inObject ;
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = temp_0.boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string ("enabled") ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string ("disabled") ;
  }
  result_outResult = temp_1 ;
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//
//'@blockInvocationGraph' graph
//
//--------------------------------------------------------------------------------------------------

GALGAS_blockInvocationGraph::GALGAS_blockInvocationGraph (void) :
AC_GALGAS_graph () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInvocationGraph GALGAS_blockInvocationGraph::constructor_emptyGraph (LOCATION_ARGS) {
  GALGAS_blockInvocationGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockInvocationGraph::setter_addNode (GALGAS_lstring inKey,
                                                  GALGAS_string inArgument_0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GALGAS_stringlist::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' label is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}


//--------------------------------------------------------------------------------------------------

void GALGAS_blockInvocationGraph::method_topologicalSort (GALGAS_stringlist & outSortedList,
                                                          GALGAS_lstringlist & outSortedKeyList,
                                                          GALGAS_stringlist & outUnsortedList,
                                                          GALGAS_lstringlist & outUnsortedKeyList,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_stringlist (sortedList) ;
  outUnsortedList = GALGAS_stringlist (unsortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockInvocationGraph::method_depthFirstTopologicalSort (GALGAS_stringlist & outSortedList,
                                                                    GALGAS_lstringlist & outSortedKeyList,
                                                                    GALGAS_stringlist & outUnsortedList,
                                                                    GALGAS_lstringlist & outUnsortedKeyList,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_stringlist (sortedList) ;
  outUnsortedList = GALGAS_stringlist (unsortedList) ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_blockInvocationGraph GALGAS_blockInvocationGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GALGAS_blockInvocationGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockInvocationGraph::method_circularities (GALGAS_stringlist & outInfoList,
                                                        GALGAS_lstringlist & outKeyList
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_stringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockInvocationGraph::method_nodesWithNoSuccessor (GALGAS_stringlist & outInfoList,
                                                               GALGAS_lstringlist & outKeyList
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_stringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockInvocationGraph::method_nodesWithNoPredecessor (GALGAS_stringlist & outInfoList,
                                                                 GALGAS_lstringlist & outKeyList
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_stringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInvocationGraph GALGAS_blockInvocationGraph::getter_subgraphFromNodes (const GALGAS_lstringlist & inStartKeyList,
                                                                                   const GALGAS_stringset & inKeysToExclude,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_blockInvocationGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_blockInvocationGraph::getter_nodeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist resultingList ;
  if (isValid ()) {
    resultingList = graph () ;
  }
  return resultingList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_blockInvocationGraph::getter_accessibleNodesFrom (const GALGAS_lstringlist & inStartKeyList,
                                                                            const GALGAS_stringset & inNodesToExclude,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  GALGAS_blockInvocationGraph resultingGraph ;
  subGraph (resultingGraph,
            inStartKeyList,
            inNodesToExclude,
            inCompiler
            COMMA_THERE) ;
  if (resultingGraph.isValid ()) {
    result = resultingGraph.getter_lkeyList (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @blockInvocationGraph generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_blockInvocationGraph ("blockInvocationGraph",
                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_blockInvocationGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInvocationGraph ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_blockInvocationGraph::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockInvocationGraph (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInvocationGraph GALGAS_blockInvocationGraph::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_blockInvocationGraph result ;
  const GALGAS_blockInvocationGraph * p = (const GALGAS_blockInvocationGraph *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_blockInvocationGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockInvocationGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction buildInstructionInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_SequentialInstruction::method_buildInstructionInvocationGraph (const GALGAS_lstring /* constinArgument_inBlockLabel */,
                                                                                     GALGAS_string & /* ioArgument_ioGraphVizString */,
                                                                                     Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildInstructionInvocationGraph (cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                          const GALGAS_lstring constin_inBlockLabel,
                                                          GALGAS_string & io_ioGraphVizString,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    inObject->method_buildInstructionInvocationGraph  (constin_inBlockLabel, io_ioGraphVizString, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildTerminatorInvocationGraph (cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                         const GALGAS_lstring constin_inBlockLabel,
                                                         GALGAS_string & io_ioGraphVizString,
                                                         const GALGAS_bool constin_inDottedArrow,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    inObject->method_buildTerminatorInvocationGraph (constin_inBlockLabel, io_ioGraphVizString, constin_inDottedArrow, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                             const GALGAS_string in_inNextBlockLabel,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_needToInsertJumpInstruction (in_inNextBlockLabel, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18AbstractBlockTerminator buildTerminatorOrderedGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractBlockTerminator::method_buildTerminatorOrderedGraph (const GALGAS_lstring /* constinArgument_inBlockLabel */,
                                                                                   GALGAS_blockInvocationGraph & /* ioArgument_ioGraph */,
                                                                                   Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildTerminatorOrderedGraph (cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                      const GALGAS_lstring constin_inBlockLabel,
                                                      GALGAS_blockInvocationGraph & io_ioGraph,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    inObject->method_buildTerminatorOrderedGraph  (constin_inBlockLabel, io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Class for element of '@clusterList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_clusterList : public cCollectionElement {
  public: GALGAS_clusterList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_clusterList (const GALGAS_ipic_31__38_BlockList & in_mBlockList
                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_clusterList (const GALGAS_clusterList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_clusterList::cCollectionElement_clusterList (const GALGAS_ipic_31__38_BlockList & in_mBlockList
                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mBlockList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_clusterList::cCollectionElement_clusterList (const GALGAS_clusterList_2D_element & inElement COMMA_LOCATION_ARGS) :
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

void cCollectionElement_clusterList::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mBlockList" ":") ;
  mObject.mProperty_mBlockList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_clusterList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_clusterList * operand = (cCollectionElement_clusterList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_clusterList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_clusterList::GALGAS_clusterList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_clusterList::GALGAS_clusterList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_clusterList GALGAS_clusterList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_clusterList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_clusterList GALGAS_clusterList::constructor_listWithValue (const GALGAS_ipic_31__38_BlockList & inOperand0
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_clusterList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_clusterList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_clusterList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_clusterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                    const GALGAS_ipic_31__38_BlockList & in_mBlockList
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_clusterList * p = nullptr ;
  macroMyNew (p, cCollectionElement_clusterList (in_mBlockList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_clusterList::addAssign_operation (const GALGAS_ipic_31__38_BlockList & inOperand0
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_clusterList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_clusterList::setter_append (const GALGAS_ipic_31__38_BlockList inOperand0,
                                        Compiler * /* inCompiler */
                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_clusterList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_clusterList::setter_insertAtIndex (const GALGAS_ipic_31__38_BlockList inOperand0,
                                               const GALGAS_uint inInsertionIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_clusterList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_clusterList::setter_removeAtIndex (GALGAS_ipic_31__38_BlockList & outOperand0,
                                               const GALGAS_uint inRemoveIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_clusterList * p = (cCollectionElement_clusterList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_clusterList) ;
        outOperand0 = p->mObject.mProperty_mBlockList ;
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

void GALGAS_clusterList::setter_popFirst (GALGAS_ipic_31__38_BlockList & outOperand0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_clusterList * p = (cCollectionElement_clusterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_clusterList) ;
    outOperand0 = p->mObject.mProperty_mBlockList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_clusterList::setter_popLast (GALGAS_ipic_31__38_BlockList & outOperand0,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_clusterList * p = (cCollectionElement_clusterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_clusterList) ;
    outOperand0 = p->mObject.mProperty_mBlockList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_clusterList::method_first (GALGAS_ipic_31__38_BlockList & outOperand0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_clusterList * p = (cCollectionElement_clusterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_clusterList) ;
    outOperand0 = p->mObject.mProperty_mBlockList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_clusterList::method_last (GALGAS_ipic_31__38_BlockList & outOperand0,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_clusterList * p = (cCollectionElement_clusterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_clusterList) ;
    outOperand0 = p->mObject.mProperty_mBlockList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_clusterList GALGAS_clusterList::add_operation (const GALGAS_clusterList & inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_clusterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_clusterList GALGAS_clusterList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_clusterList result = GALGAS_clusterList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_clusterList GALGAS_clusterList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_clusterList result = GALGAS_clusterList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_clusterList GALGAS_clusterList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_clusterList result = GALGAS_clusterList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_clusterList::plusAssign_operation (const GALGAS_clusterList inOperand,
                                               Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_clusterList::setter_setMBlockListAtIndex (GALGAS_ipic_31__38_BlockList inOperand,
                                                      GALGAS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_clusterList * p = (cCollectionElement_clusterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_clusterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBlockList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList GALGAS_clusterList::getter_mBlockListAtIndex (const GALGAS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_clusterList * p = (cCollectionElement_clusterList *) attributes.ptr () ;
  GALGAS_ipic_31__38_BlockList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_clusterList) ;
    result = p->mObject.mProperty_mBlockList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_clusterList::cEnumerator_clusterList (const GALGAS_clusterList & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_clusterList_2D_element cEnumerator_clusterList::current (LOCATION_ARGS) const {
  const cCollectionElement_clusterList * p = (const cCollectionElement_clusterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_clusterList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList cEnumerator_clusterList::current_mBlockList (LOCATION_ARGS) const {
  const cCollectionElement_clusterList * p = (const cCollectionElement_clusterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_clusterList) ;
  return p->mObject.mProperty_mBlockList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @clusterList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_clusterList ("clusterList",
                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_clusterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_clusterList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_clusterList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_clusterList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_clusterList GALGAS_clusterList::extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_clusterList result ;
  const GALGAS_clusterList * p = (const GALGAS_clusterList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_clusterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("clusterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_neededConversionForClusterOrder::cMapElement_neededConversionForClusterOrder (const GALGAS_lstring & inKey,
                                                                                          const GALGAS_uint & in_mConversions
                                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mConversions (in_mConversions) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_neededConversionForClusterOrder::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_neededConversionForClusterOrder::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_neededConversionForClusterOrder (mProperty_lkey, mProperty_mConversions COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_neededConversionForClusterOrder::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mConversions" ":") ;
  mProperty_mConversions.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_neededConversionForClusterOrder::compare (const cCollectionElement * inOperand) const {
  cMapElement_neededConversionForClusterOrder * operand = (cMapElement_neededConversionForClusterOrder *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mConversions.objectCompare (operand->mProperty_mConversions) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder::GALGAS_neededConversionForClusterOrder (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder::GALGAS_neededConversionForClusterOrder (const GALGAS_neededConversionForClusterOrder & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder & GALGAS_neededConversionForClusterOrder::operator = (const GALGAS_neededConversionForClusterOrder & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder GALGAS_neededConversionForClusterOrder::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_neededConversionForClusterOrder result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder GALGAS_neededConversionForClusterOrder::constructor_mapWithMapToOverride (const GALGAS_neededConversionForClusterOrder & inMapToOverride
                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_neededConversionForClusterOrder result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder GALGAS_neededConversionForClusterOrder::getter_overriddenMap (Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_neededConversionForClusterOrder result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_neededConversionForClusterOrder::addAssign_operation (const GALGAS_lstring & inKey,
                                                                  const GALGAS_uint & inArgument0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_neededConversionForClusterOrder * p = nullptr ;
  macroMyNew (p, cMapElement_neededConversionForClusterOrder (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@neededConversionForClusterOrder insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder GALGAS_neededConversionForClusterOrder::add_operation (const GALGAS_neededConversionForClusterOrder & inOperand,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_neededConversionForClusterOrder result = *this ;
  cEnumerator_neededConversionForClusterOrder enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mConversions (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_neededConversionForClusterOrder::setter_insertKey (GALGAS_lstring inKey,
                                                               GALGAS_uint inArgument0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_neededConversionForClusterOrder * p = nullptr ;
  macroMyNew (p, cMapElement_neededConversionForClusterOrder (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_neededConversionForClusterOrder_searchKey = "the '%K' key is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_neededConversionForClusterOrder::method_searchKey (GALGAS_lstring inKey,
                                                               GALGAS_uint & outArgument0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_neededConversionForClusterOrder * p = (const cMapElement_neededConversionForClusterOrder *) performSearch (inKey,
                                                                                                                               inCompiler,
                                                                                                                               kSearchErrorMessage_neededConversionForClusterOrder_searchKey
                                                                                                                               COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_neededConversionForClusterOrder) ;
    outArgument0 = p->mProperty_mConversions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_neededConversionForClusterOrder::getter_mConversionsForKey (const GALGAS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_neededConversionForClusterOrder * p = (const cMapElement_neededConversionForClusterOrder *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_neededConversionForClusterOrder) ;
    result = p->mProperty_mConversions ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_neededConversionForClusterOrder::setter_setMConversionsForKey (GALGAS_uint inAttributeValue,
                                                                           GALGAS_string inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_neededConversionForClusterOrder * p = (cMapElement_neededConversionForClusterOrder *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_neededConversionForClusterOrder) ;
    p->mProperty_mConversions = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_neededConversionForClusterOrder * GALGAS_neededConversionForClusterOrder::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                         const GALGAS_string & inKey
                                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_neededConversionForClusterOrder * result = (cMapElement_neededConversionForClusterOrder *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_neededConversionForClusterOrder) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_neededConversionForClusterOrder::cEnumerator_neededConversionForClusterOrder (const GALGAS_neededConversionForClusterOrder & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder_2D_element cEnumerator_neededConversionForClusterOrder::current (LOCATION_ARGS) const {
  const cMapElement_neededConversionForClusterOrder * p = (const cMapElement_neededConversionForClusterOrder *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_neededConversionForClusterOrder) ;
  return GALGAS_neededConversionForClusterOrder_2D_element (p->mProperty_lkey, p->mProperty_mConversions) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_neededConversionForClusterOrder::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_neededConversionForClusterOrder::current_mConversions (LOCATION_ARGS) const {
  const cMapElement_neededConversionForClusterOrder * p = (const cMapElement_neededConversionForClusterOrder *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_neededConversionForClusterOrder) ;
  return p->mProperty_mConversions ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_neededConversionForClusterOrder::optional_searchKey (const GALGAS_string & inKey,
                                                                 GALGAS_uint & outArgument0) const {
  const cMapElement_neededConversionForClusterOrder * p = (const cMapElement_neededConversionForClusterOrder *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_neededConversionForClusterOrder) ;
    outArgument0 = p->mProperty_mConversions ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @neededConversionForClusterOrder generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_neededConversionForClusterOrder ("neededConversionForClusterOrder",
                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_neededConversionForClusterOrder::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_neededConversionForClusterOrder ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_neededConversionForClusterOrder::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_neededConversionForClusterOrder (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder GALGAS_neededConversionForClusterOrder::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_neededConversionForClusterOrder result ;
  const GALGAS_neededConversionForClusterOrder * p = (const GALGAS_neededConversionForClusterOrder *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_neededConversionForClusterOrder *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("neededConversionForClusterOrder", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_generatedCodeMap::cMapElement_generatedCodeMap (const GALGAS_lstring & inKey,
                                                            const GALGAS_codeList & in_mCode,
                                                            const GALGAS_ipic_31__38_SequentialInstruction & in_mInstruction
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mCode (in_mCode),
mProperty_mInstruction (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_generatedCodeMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_generatedCodeMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_generatedCodeMap (mProperty_lkey, mProperty_mCode, mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_generatedCodeMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mCode" ":") ;
  mProperty_mCode.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mInstruction" ":") ;
  mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_generatedCodeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_generatedCodeMap * operand = (cMapElement_generatedCodeMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mCode.objectCompare (operand->mProperty_mCode) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction.objectCompare (operand->mProperty_mInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap::GALGAS_generatedCodeMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap::GALGAS_generatedCodeMap (const GALGAS_generatedCodeMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap & GALGAS_generatedCodeMap::operator = (const GALGAS_generatedCodeMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap GALGAS_generatedCodeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_generatedCodeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap GALGAS_generatedCodeMap::constructor_mapWithMapToOverride (const GALGAS_generatedCodeMap & inMapToOverride
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_generatedCodeMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap GALGAS_generatedCodeMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_generatedCodeMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_generatedCodeMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                   const GALGAS_codeList & inArgument0,
                                                   const GALGAS_ipic_31__38_SequentialInstruction & inArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_generatedCodeMap * p = nullptr ;
  macroMyNew (p, cMapElement_generatedCodeMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@generatedCodeMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap GALGAS_generatedCodeMap::add_operation (const GALGAS_generatedCodeMap & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_generatedCodeMap result = *this ;
  cEnumerator_generatedCodeMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mCode (HERE), enumerator.current_mInstruction (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_generatedCodeMap::setter_insertKey (GALGAS_lstring inKey,
                                                GALGAS_codeList inArgument0,
                                                GALGAS_ipic_31__38_SequentialInstruction inArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_generatedCodeMap * p = nullptr ;
  macroMyNew (p, cMapElement_generatedCodeMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' entry is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_generatedCodeMap_searchKey = "the '%K' entry is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_generatedCodeMap::method_searchKey (GALGAS_lstring inKey,
                                                GALGAS_codeList & outArgument0,
                                                GALGAS_ipic_31__38_SequentialInstruction & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_generatedCodeMap * p = (const cMapElement_generatedCodeMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_generatedCodeMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
    outArgument0 = p->mProperty_mCode ;
    outArgument1 = p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_codeList GALGAS_generatedCodeMap::getter_mCodeForKey (const GALGAS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_generatedCodeMap * p = (const cMapElement_generatedCodeMap *) attributes ;
  GALGAS_codeList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
    result = p->mProperty_mCode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstruction GALGAS_generatedCodeMap::getter_mInstructionForKey (const GALGAS_string & inKey,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_generatedCodeMap * p = (const cMapElement_generatedCodeMap *) attributes ;
  GALGAS_ipic_31__38_SequentialInstruction result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
    result = p->mProperty_mInstruction ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_generatedCodeMap::setter_setMCodeForKey (GALGAS_codeList inAttributeValue,
                                                     GALGAS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_generatedCodeMap * p = (cMapElement_generatedCodeMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
    p->mProperty_mCode = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_generatedCodeMap::setter_setMInstructionForKey (GALGAS_ipic_31__38_SequentialInstruction inAttributeValue,
                                                            GALGAS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_generatedCodeMap * p = (cMapElement_generatedCodeMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
    p->mProperty_mInstruction = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_generatedCodeMap * GALGAS_generatedCodeMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_generatedCodeMap * result = (cMapElement_generatedCodeMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_generatedCodeMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_generatedCodeMap::cEnumerator_generatedCodeMap (const GALGAS_generatedCodeMap & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap_2D_element cEnumerator_generatedCodeMap::current (LOCATION_ARGS) const {
  const cMapElement_generatedCodeMap * p = (const cMapElement_generatedCodeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
  return GALGAS_generatedCodeMap_2D_element (p->mProperty_lkey, p->mProperty_mCode, p->mProperty_mInstruction) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_generatedCodeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_codeList cEnumerator_generatedCodeMap::current_mCode (LOCATION_ARGS) const {
  const cMapElement_generatedCodeMap * p = (const cMapElement_generatedCodeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
  return p->mProperty_mCode ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstruction cEnumerator_generatedCodeMap::current_mInstruction (LOCATION_ARGS) const {
  const cMapElement_generatedCodeMap * p = (const cMapElement_generatedCodeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
  return p->mProperty_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_generatedCodeMap::optional_searchKey (const GALGAS_string & inKey,
                                                  GALGAS_codeList & outArgument0,
                                                  GALGAS_ipic_31__38_SequentialInstruction & outArgument1) const {
  const cMapElement_generatedCodeMap * p = (const cMapElement_generatedCodeMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_generatedCodeMap) ;
    outArgument0 = p->mProperty_mCode ;
    outArgument1 = p->mProperty_mInstruction ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @generatedCodeMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_generatedCodeMap ("generatedCodeMap",
                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_generatedCodeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generatedCodeMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_generatedCodeMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_generatedCodeMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap GALGAS_generatedCodeMap::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_generatedCodeMap result ;
  const GALGAS_generatedCodeMap * p = (const GALGAS_generatedCodeMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_generatedCodeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generatedCodeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@uint x4string'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_x_34_string (const GALGAS_uint & inObject,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_uint temp_0 = inObject ;
  result_outResult = temp_0.divide_operation (GALGAS_uint (uint32_t (4096U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 13)).operator_and (GALGAS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 13)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 13)) ;
  const GALGAS_uint temp_1 = inObject ;
  result_outResult.plusAssign_operation(temp_1.divide_operation (GALGAS_uint (uint32_t (256U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 14)).operator_and (GALGAS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 14)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 14)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 14)) ;
  const GALGAS_uint temp_2 = inObject ;
  result_outResult.plusAssign_operation(temp_2.divide_operation (GALGAS_uint (uint32_t (16U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 15)).operator_and (GALGAS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 15)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 15)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 15)) ;
  const GALGAS_uint temp_3 = inObject ;
  result_outResult.plusAssign_operation(temp_3.operator_and (GALGAS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 16)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 16)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 16)) ;
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@uint x6string'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_x_36_string (const GALGAS_uint & inObject,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_uint temp_0 = inObject ;
  result_outResult = temp_0.divide_operation (GALGAS_uint (uint32_t (65536U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 22)).operator_and (GALGAS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 22)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 22)) ;
  const GALGAS_uint temp_1 = inObject ;
  result_outResult.plusAssign_operation(temp_1.divide_operation (GALGAS_uint (uint32_t (4096U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 23)).operator_and (GALGAS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 23)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 23)) ;
  const GALGAS_uint temp_2 = inObject ;
  result_outResult.plusAssign_operation(temp_2.divide_operation (GALGAS_uint (uint32_t (256U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 24)).operator_and (GALGAS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 24)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 24)) ;
  const GALGAS_uint temp_3 = inObject ;
  result_outResult.plusAssign_operation(temp_3.divide_operation (GALGAS_uint (uint32_t (16U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 25)).operator_and (GALGAS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 25)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 25)) ;
  const GALGAS_uint temp_4 = inObject ;
  result_outResult.plusAssign_operation(temp_4.operator_and (GALGAS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 26)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 26)) ;
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------

cMapElement_blockMapForStackComputation::cMapElement_blockMapForStackComputation (const GALGAS_lstring & inKey,
                                                                                  const GALGAS_ipic_31__38_Block & in_mBlock
                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mBlock (in_mBlock) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_blockMapForStackComputation::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_blockMapForStackComputation::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_blockMapForStackComputation (mProperty_lkey, mProperty_mBlock COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_blockMapForStackComputation::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mBlock" ":") ;
  mProperty_mBlock.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_blockMapForStackComputation::compare (const cCollectionElement * inOperand) const {
  cMapElement_blockMapForStackComputation * operand = (cMapElement_blockMapForStackComputation *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mBlock.objectCompare (operand->mProperty_mBlock) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation::GALGAS_blockMapForStackComputation (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation::GALGAS_blockMapForStackComputation (const GALGAS_blockMapForStackComputation & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation & GALGAS_blockMapForStackComputation::operator = (const GALGAS_blockMapForStackComputation & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation GALGAS_blockMapForStackComputation::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_blockMapForStackComputation result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation GALGAS_blockMapForStackComputation::constructor_mapWithMapToOverride (const GALGAS_blockMapForStackComputation & inMapToOverride
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_blockMapForStackComputation result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation GALGAS_blockMapForStackComputation::getter_overriddenMap (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_blockMapForStackComputation result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockMapForStackComputation::addAssign_operation (const GALGAS_lstring & inKey,
                                                              const GALGAS_ipic_31__38_Block & inArgument0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_blockMapForStackComputation * p = nullptr ;
  macroMyNew (p, cMapElement_blockMapForStackComputation (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@blockMapForStackComputation insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation GALGAS_blockMapForStackComputation::add_operation (const GALGAS_blockMapForStackComputation & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_blockMapForStackComputation result = *this ;
  cEnumerator_blockMapForStackComputation enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mBlock (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockMapForStackComputation::setter_insertKey (GALGAS_lstring inKey,
                                                           GALGAS_ipic_31__38_Block inArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_blockMapForStackComputation * p = nullptr ;
  macroMyNew (p, cMapElement_blockMapForStackComputation (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' block is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_blockMapForStackComputation_searchKey = "the '%K' block is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_blockMapForStackComputation::method_searchKey (GALGAS_lstring inKey,
                                                           GALGAS_ipic_31__38_Block & outArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_blockMapForStackComputation * p = (const cMapElement_blockMapForStackComputation *) performSearch (inKey,
                                                                                                                       inCompiler,
                                                                                                                       kSearchErrorMessage_blockMapForStackComputation_searchKey
                                                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_blockMapForStackComputation) ;
    outArgument0 = p->mProperty_mBlock ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_Block GALGAS_blockMapForStackComputation::getter_mBlockForKey (const GALGAS_string & inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_blockMapForStackComputation * p = (const cMapElement_blockMapForStackComputation *) attributes ;
  GALGAS_ipic_31__38_Block result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockMapForStackComputation) ;
    result = p->mProperty_mBlock ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockMapForStackComputation::setter_setMBlockForKey (GALGAS_ipic_31__38_Block inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_blockMapForStackComputation * p = (cMapElement_blockMapForStackComputation *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockMapForStackComputation) ;
    p->mProperty_mBlock = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_blockMapForStackComputation * GALGAS_blockMapForStackComputation::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_blockMapForStackComputation * result = (cMapElement_blockMapForStackComputation *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_blockMapForStackComputation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_blockMapForStackComputation::cEnumerator_blockMapForStackComputation (const GALGAS_blockMapForStackComputation & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation_2D_element cEnumerator_blockMapForStackComputation::current (LOCATION_ARGS) const {
  const cMapElement_blockMapForStackComputation * p = (const cMapElement_blockMapForStackComputation *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockMapForStackComputation) ;
  return GALGAS_blockMapForStackComputation_2D_element (p->mProperty_lkey, p->mProperty_mBlock) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_blockMapForStackComputation::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_Block cEnumerator_blockMapForStackComputation::current_mBlock (LOCATION_ARGS) const {
  const cMapElement_blockMapForStackComputation * p = (const cMapElement_blockMapForStackComputation *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockMapForStackComputation) ;
  return p->mProperty_mBlock ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_blockMapForStackComputation::optional_searchKey (const GALGAS_string & inKey,
                                                             GALGAS_ipic_31__38_Block & outArgument0) const {
  const cMapElement_blockMapForStackComputation * p = (const cMapElement_blockMapForStackComputation *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_blockMapForStackComputation) ;
    outArgument0 = p->mProperty_mBlock ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @blockMapForStackComputation generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_blockMapForStackComputation ("blockMapForStackComputation",
                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_blockMapForStackComputation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockMapForStackComputation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_blockMapForStackComputation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockMapForStackComputation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation GALGAS_blockMapForStackComputation::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_blockMapForStackComputation result ;
  const GALGAS_blockMapForStackComputation * p = (const GALGAS_blockMapForStackComputation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_blockMapForStackComputation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockMapForStackComputation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_routineCallMap::cMapElement_routineCallMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_stringset & in_mCalledRoutineSet,
                                                        const GALGAS_uint & in_mTerminatorStackNeeds
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mCalledRoutineSet (in_mCalledRoutineSet),
mProperty_mTerminatorStackNeeds (in_mTerminatorStackNeeds) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_routineCallMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_routineCallMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_routineCallMap (mProperty_lkey, mProperty_mCalledRoutineSet, mProperty_mTerminatorStackNeeds COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_routineCallMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mCalledRoutineSet" ":") ;
  mProperty_mCalledRoutineSet.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mTerminatorStackNeeds" ":") ;
  mProperty_mTerminatorStackNeeds.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_routineCallMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_routineCallMap * operand = (cMapElement_routineCallMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mCalledRoutineSet.objectCompare (operand->mProperty_mCalledRoutineSet) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTerminatorStackNeeds.objectCompare (operand->mProperty_mTerminatorStackNeeds) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineCallMap::GALGAS_routineCallMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineCallMap::GALGAS_routineCallMap (const GALGAS_routineCallMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineCallMap & GALGAS_routineCallMap::operator = (const GALGAS_routineCallMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineCallMap GALGAS_routineCallMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_routineCallMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineCallMap GALGAS_routineCallMap::constructor_mapWithMapToOverride (const GALGAS_routineCallMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_routineCallMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineCallMap GALGAS_routineCallMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_routineCallMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineCallMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_stringset & inArgument0,
                                                 const GALGAS_uint & inArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_routineCallMap * p = nullptr ;
  macroMyNew (p, cMapElement_routineCallMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineCallMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineCallMap GALGAS_routineCallMap::add_operation (const GALGAS_routineCallMap & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_routineCallMap result = *this ;
  cEnumerator_routineCallMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mCalledRoutineSet (HERE), enumerator.current_mTerminatorStackNeeds (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineCallMap::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_stringset inArgument0,
                                              GALGAS_uint inArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_routineCallMap * p = nullptr ;
  macroMyNew (p, cMapElement_routineCallMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' entry is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_routineCallMap::getter_mCalledRoutineSetForKey (const GALGAS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineCallMap * p = (const cMapElement_routineCallMap *) attributes ;
  GALGAS_stringset result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineCallMap) ;
    result = p->mProperty_mCalledRoutineSet ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_routineCallMap::getter_mTerminatorStackNeedsForKey (const GALGAS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineCallMap * p = (const cMapElement_routineCallMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineCallMap) ;
    result = p->mProperty_mTerminatorStackNeeds ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineCallMap::setter_setMCalledRoutineSetForKey (GALGAS_stringset inAttributeValue,
                                                               GALGAS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineCallMap * p = (cMapElement_routineCallMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineCallMap) ;
    p->mProperty_mCalledRoutineSet = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineCallMap::setter_setMTerminatorStackNeedsForKey (GALGAS_uint inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineCallMap * p = (cMapElement_routineCallMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineCallMap) ;
    p->mProperty_mTerminatorStackNeeds = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_routineCallMap * GALGAS_routineCallMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_routineCallMap * result = (cMapElement_routineCallMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_routineCallMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_routineCallMap::cEnumerator_routineCallMap (const GALGAS_routineCallMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineCallMap_2D_element cEnumerator_routineCallMap::current (LOCATION_ARGS) const {
  const cMapElement_routineCallMap * p = (const cMapElement_routineCallMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineCallMap) ;
  return GALGAS_routineCallMap_2D_element (p->mProperty_lkey, p->mProperty_mCalledRoutineSet, p->mProperty_mTerminatorStackNeeds) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_routineCallMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringset cEnumerator_routineCallMap::current_mCalledRoutineSet (LOCATION_ARGS) const {
  const cMapElement_routineCallMap * p = (const cMapElement_routineCallMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineCallMap) ;
  return p->mProperty_mCalledRoutineSet ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_routineCallMap::current_mTerminatorStackNeeds (LOCATION_ARGS) const {
  const cMapElement_routineCallMap * p = (const cMapElement_routineCallMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineCallMap) ;
  return p->mProperty_mTerminatorStackNeeds ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineCallMap::optional_searchKey (const GALGAS_string & inKey,
                                                GALGAS_stringset & outArgument0,
                                                GALGAS_uint & outArgument1) const {
  const cMapElement_routineCallMap * p = (const cMapElement_routineCallMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_routineCallMap) ;
    outArgument0 = p->mProperty_mCalledRoutineSet ;
    outArgument1 = p->mProperty_mTerminatorStackNeeds ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineCallMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineCallMap ("routineCallMap",
                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineCallMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineCallMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineCallMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineCallMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineCallMap GALGAS_routineCallMap::extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_routineCallMap result ;
  const GALGAS_routineCallMap * p = (const GALGAS_routineCallMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineCallMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineCallMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_routineStackRequirementMap::cMapElement_routineStackRequirementMap (const GALGAS_lstring & inKey,
                                                                                const GALGAS_uint & in_mLevels
                                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLevels (in_mLevels) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_routineStackRequirementMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_routineStackRequirementMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_routineStackRequirementMap (mProperty_lkey, mProperty_mLevels COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_routineStackRequirementMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mLevels" ":") ;
  mProperty_mLevels.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_routineStackRequirementMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_routineStackRequirementMap * operand = (cMapElement_routineStackRequirementMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mLevels.objectCompare (operand->mProperty_mLevels) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap::GALGAS_routineStackRequirementMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap::GALGAS_routineStackRequirementMap (const GALGAS_routineStackRequirementMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap & GALGAS_routineStackRequirementMap::operator = (const GALGAS_routineStackRequirementMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap GALGAS_routineStackRequirementMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_routineStackRequirementMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap GALGAS_routineStackRequirementMap::constructor_mapWithMapToOverride (const GALGAS_routineStackRequirementMap & inMapToOverride
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_routineStackRequirementMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap GALGAS_routineStackRequirementMap::getter_overriddenMap (Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_routineStackRequirementMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineStackRequirementMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                             const GALGAS_uint & inArgument0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_routineStackRequirementMap * p = nullptr ;
  macroMyNew (p, cMapElement_routineStackRequirementMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineStackRequirementMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap GALGAS_routineStackRequirementMap::add_operation (const GALGAS_routineStackRequirementMap & inOperand,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_routineStackRequirementMap result = *this ;
  cEnumerator_routineStackRequirementMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mLevels (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineStackRequirementMap::setter_insertKey (GALGAS_lstring inKey,
                                                          GALGAS_uint inArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_routineStackRequirementMap * p = nullptr ;
  macroMyNew (p, cMapElement_routineStackRequirementMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' entry is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_routineStackRequirementMap_searchKey = "the '%K' entry is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_routineStackRequirementMap::method_searchKey (GALGAS_lstring inKey,
                                                          GALGAS_uint & outArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_routineStackRequirementMap * p = (const cMapElement_routineStackRequirementMap *) performSearch (inKey,
                                                                                                                     inCompiler,
                                                                                                                     kSearchErrorMessage_routineStackRequirementMap_searchKey
                                                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_routineStackRequirementMap) ;
    outArgument0 = p->mProperty_mLevels ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_routineStackRequirementMap::getter_mLevelsForKey (const GALGAS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineStackRequirementMap * p = (const cMapElement_routineStackRequirementMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineStackRequirementMap) ;
    result = p->mProperty_mLevels ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineStackRequirementMap::setter_setMLevelsForKey (GALGAS_uint inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineStackRequirementMap * p = (cMapElement_routineStackRequirementMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineStackRequirementMap) ;
    p->mProperty_mLevels = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_routineStackRequirementMap * GALGAS_routineStackRequirementMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                               const GALGAS_string & inKey
                                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_routineStackRequirementMap * result = (cMapElement_routineStackRequirementMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_routineStackRequirementMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_routineStackRequirementMap::cEnumerator_routineStackRequirementMap (const GALGAS_routineStackRequirementMap & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap_2D_element cEnumerator_routineStackRequirementMap::current (LOCATION_ARGS) const {
  const cMapElement_routineStackRequirementMap * p = (const cMapElement_routineStackRequirementMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineStackRequirementMap) ;
  return GALGAS_routineStackRequirementMap_2D_element (p->mProperty_lkey, p->mProperty_mLevels) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_routineStackRequirementMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_routineStackRequirementMap::current_mLevels (LOCATION_ARGS) const {
  const cMapElement_routineStackRequirementMap * p = (const cMapElement_routineStackRequirementMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineStackRequirementMap) ;
  return p->mProperty_mLevels ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineStackRequirementMap::optional_searchKey (const GALGAS_string & inKey,
                                                            GALGAS_uint & outArgument0) const {
  const cMapElement_routineStackRequirementMap * p = (const cMapElement_routineStackRequirementMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_routineStackRequirementMap) ;
    outArgument0 = p->mProperty_mLevels ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineStackRequirementMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineStackRequirementMap ("routineStackRequirementMap",
                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineStackRequirementMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineStackRequirementMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineStackRequirementMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineStackRequirementMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap GALGAS_routineStackRequirementMap::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_routineStackRequirementMap result ;
  const GALGAS_routineStackRequirementMap * p = (const GALGAS_routineStackRequirementMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineStackRequirementMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineStackRequirementMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator exploreAccessibleBlocksForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_exploreAccessibleBlocksForStackComputations (cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                      GALGAS_stringset & io_ioBlockToExploreSet,
                                                                      GALGAS_stringset & io_ioExploredBlockSet,
                                                                      GALGAS_uint & out_outStackNeeds,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outStackNeeds.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    inObject->method_exploreAccessibleBlocksForStackComputations (io_ioBlockToExploreSet, io_ioExploredBlockSet, out_outStackNeeds, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction buildCalledRoutineSetForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_SequentialInstruction::method_buildCalledRoutineSetForStackComputations (GALGAS_stringset & /* ioArgument_ioRoutineCalledSet */,
                                                                                               Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildCalledRoutineSetForStackComputations (cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                    GALGAS_stringset & io_ioRoutineCalledSet,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    inObject->method_buildCalledRoutineSetForStackComputations  (io_ioRoutineCalledSet, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

cMapElement_blockDurationMap::cMapElement_blockDurationMap (const GALGAS_lstring & inKey,
                                                            const GALGAS_uint & in_mMinDuration,
                                                            const GALGAS_uint & in_mMaxDuration
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mMinDuration (in_mMinDuration),
mProperty_mMaxDuration (in_mMaxDuration) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_blockDurationMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_blockDurationMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_blockDurationMap (mProperty_lkey, mProperty_mMinDuration, mProperty_mMaxDuration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_blockDurationMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mMinDuration" ":") ;
  mProperty_mMinDuration.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mMaxDuration" ":") ;
  mProperty_mMaxDuration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_blockDurationMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_blockDurationMap * operand = (cMapElement_blockDurationMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mMinDuration.objectCompare (operand->mProperty_mMinDuration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMaxDuration.objectCompare (operand->mProperty_mMaxDuration) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap::GALGAS_blockDurationMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap::GALGAS_blockDurationMap (const GALGAS_blockDurationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap & GALGAS_blockDurationMap::operator = (const GALGAS_blockDurationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap GALGAS_blockDurationMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_blockDurationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap GALGAS_blockDurationMap::constructor_mapWithMapToOverride (const GALGAS_blockDurationMap & inMapToOverride
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_blockDurationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap GALGAS_blockDurationMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_blockDurationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockDurationMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                   const GALGAS_uint & inArgument0,
                                                   const GALGAS_uint & inArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_blockDurationMap * p = nullptr ;
  macroMyNew (p, cMapElement_blockDurationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@blockDurationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap GALGAS_blockDurationMap::add_operation (const GALGAS_blockDurationMap & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_blockDurationMap result = *this ;
  cEnumerator_blockDurationMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mMinDuration (HERE), enumerator.current_mMaxDuration (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockDurationMap::setter_insertKey (GALGAS_lstring inKey,
                                                GALGAS_uint inArgument0,
                                                GALGAS_uint inArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_blockDurationMap * p = nullptr ;
  macroMyNew (p, cMapElement_blockDurationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' entry is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_blockDurationMap_searchKey = "the '%K' entry is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_blockDurationMap::method_searchKey (GALGAS_lstring inKey,
                                                GALGAS_uint & outArgument0,
                                                GALGAS_uint & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_blockDurationMap * p = (const cMapElement_blockDurationMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_blockDurationMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_blockDurationMap) ;
    outArgument0 = p->mProperty_mMinDuration ;
    outArgument1 = p->mProperty_mMaxDuration ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_blockDurationMap::getter_mMinDurationForKey (const GALGAS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_blockDurationMap * p = (const cMapElement_blockDurationMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockDurationMap) ;
    result = p->mProperty_mMinDuration ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_blockDurationMap::getter_mMaxDurationForKey (const GALGAS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_blockDurationMap * p = (const cMapElement_blockDurationMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockDurationMap) ;
    result = p->mProperty_mMaxDuration ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockDurationMap::setter_setMMinDurationForKey (GALGAS_uint inAttributeValue,
                                                            GALGAS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_blockDurationMap * p = (cMapElement_blockDurationMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockDurationMap) ;
    p->mProperty_mMinDuration = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockDurationMap::setter_setMMaxDurationForKey (GALGAS_uint inAttributeValue,
                                                            GALGAS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_blockDurationMap * p = (cMapElement_blockDurationMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_blockDurationMap) ;
    p->mProperty_mMaxDuration = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_blockDurationMap * GALGAS_blockDurationMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_blockDurationMap * result = (cMapElement_blockDurationMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_blockDurationMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_blockDurationMap::cEnumerator_blockDurationMap (const GALGAS_blockDurationMap & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap_2D_element cEnumerator_blockDurationMap::current (LOCATION_ARGS) const {
  const cMapElement_blockDurationMap * p = (const cMapElement_blockDurationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockDurationMap) ;
  return GALGAS_blockDurationMap_2D_element (p->mProperty_lkey, p->mProperty_mMinDuration, p->mProperty_mMaxDuration) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_blockDurationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_blockDurationMap::current_mMinDuration (LOCATION_ARGS) const {
  const cMapElement_blockDurationMap * p = (const cMapElement_blockDurationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockDurationMap) ;
  return p->mProperty_mMinDuration ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_blockDurationMap::current_mMaxDuration (LOCATION_ARGS) const {
  const cMapElement_blockDurationMap * p = (const cMapElement_blockDurationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_blockDurationMap) ;
  return p->mProperty_mMaxDuration ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_blockDurationMap::optional_searchKey (const GALGAS_string & inKey,
                                                  GALGAS_uint & outArgument0,
                                                  GALGAS_uint & outArgument1) const {
  const cMapElement_blockDurationMap * p = (const cMapElement_blockDurationMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_blockDurationMap) ;
    outArgument0 = p->mProperty_mMinDuration ;
    outArgument1 = p->mProperty_mMaxDuration ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @blockDurationMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_blockDurationMap ("blockDurationMap",
                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_blockDurationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockDurationMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_blockDurationMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockDurationMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap GALGAS_blockDurationMap::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_blockDurationMap result ;
  const GALGAS_blockDurationMap * p = (const GALGAS_blockDurationMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_blockDurationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockDurationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator terminatorMinMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_terminatorMinMaxDuration (cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                   const GALGAS_blockDurationMap constin_inExploredBlockMap,
                                                   const GALGAS_string constin_inNextLabel,
                                                   GALGAS_uint & out_outMin,
                                                   GALGAS_uint & out_outMax,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outMin.drop () ;
  out_outMax.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    inObject->method_terminatorMinMaxDuration (constin_inExploredBlockMap, constin_inNextLabel, out_outMin, out_outMax, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18SingleInstructionTerminator duration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_duration (cPtr_ipic_31__38_SingleInstructionTerminator * inObject,
                                   const GALGAS_blockDurationMap constin_inExploredBlockMap,
                                   const GALGAS_string constin_inNextLabel,
                                   GALGAS_uint & out_outMin,
                                   GALGAS_uint & out_outMax,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outMin.drop () ;
  out_outMax.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SingleInstructionTerminator) ;
    inObject->method_duration (constin_inExploredBlockMap, constin_inNextLabel, out_outMin, out_outMax, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction minMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_SequentialInstruction::method_minMaxDuration (GALGAS_blockDurationMap /* inArgument_inExploredBlockMap */,
                                                                    GALGAS_uint & outArgument_outMin,
                                                                    GALGAS_uint & outArgument_outMax,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint (uint32_t (1U)) ;
  outArgument_outMax = GALGAS_uint (uint32_t (1U)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_minMaxDuration (cPtr_ipic_31__38_SequentialInstruction * inObject,
                                         GALGAS_blockDurationMap in_inExploredBlockMap,
                                         GALGAS_uint & out_outMin,
                                         GALGAS_uint & out_outMax,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  out_outMin.drop () ;
  out_outMax.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    inObject->method_minMaxDuration  (in_inExploredBlockMap, out_outMin, out_outMax, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@declarationInRam handleDeclaration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_handleDeclaration (cPtr_declarationInRam * inObject,
                                            const GALGAS_constantMap constin_inConstantMap,
                                            GALGAS_stringset & io_ioUsedRegisters,
                                            GALGAS_ramBankTable & io_ioRamBank,
                                            GALGAS_registerTable & io_ioRegisterTable,
                                            const GALGAS_lstring constin_inCurrentRamBank,
                                            GALGAS_declaredByteMap & io_ioDeclaredByteMap,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_declarationInRam) ;
    inObject->method_handleDeclaration (constin_inConstantMap, io_ioUsedRegisters, io_ioRamBank, io_ioRegisterTable, constin_inCurrentRamBank, io_ioDeclaredByteMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//--------------------------------------------------------------------------------------------------

#include "strings/unicode_character_cpp.h"
#include "galgas2/scanner_actions.h"
#include "galgas2/cLexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

cTokenFor_piccoloDevice_5F_lexique::cTokenFor_piccoloDevice_5F_lexique (void) :
mLexicalAttribute_charValue (),
mLexicalAttribute_identifierString (),
mLexicalAttribute_tokenString (),
mLexicalAttribute_uint_33__32_value () {
}

//--------------------------------------------------------------------------------------------------

C_Lexique_piccoloDevice_5F_lexique::C_Lexique_piccoloDevice_5F_lexique (Compiler * inCallerCompiler,
                                                                        const String & inSourceFileName
                                                                        COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

C_Lexique_piccoloDevice_5F_lexique::C_Lexique_piccoloDevice_5F_lexique (Compiler * inCallerCompiler,
                                                                        const String & inSourceString,
                                                                        const String & inStringForError
                                                                        COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
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

String C_Lexique_piccoloDevice_5F_lexique::getMessageForTerminal (const int32_t inTerminalIndex) const {
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

//--- Unicode string for '$_2C_$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique__2C_ [] = {
  TO_UNICODE (','),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D_$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique__2D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2F_$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique__2F_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_30_x$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique__30_x [] = {
  TO_UNICODE ('0'),
  TO_UNICODE ('x'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A_$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique__3A_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3B_$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique__3B_ [] = {
  TO_UNICODE (';'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3C_$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique__3C_ [] = {
  TO_UNICODE ('<'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E_$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique__3E_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5B_$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique__5B_ [] = {
  TO_UNICODE ('['),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5D_$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique__5D_ [] = {
  TO_UNICODE (']'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$at$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_at [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$bank$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_bank [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('k'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$configuration$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_configuration [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('g'),
  TO_UNICODE ('u'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$controller$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_controller [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$description$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_description [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE ('c'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$eepromsize$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_eepromsize [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('z'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$illegal$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_illegal [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('g'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$mask$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_mask [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('k'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$message$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_message [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE ('a'),
  TO_UNICODE ('g'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$mirrorat$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_mirrorat [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$processor$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_processor [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$ram$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_ram [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('m'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$register$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_register [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('g'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$romsize$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_romsize [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('z'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$setting$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_setting [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$to$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_to [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$unusedregister$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_unusedregister [] = {
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('g'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$width$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique_width [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('d'),
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7B_$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique__7B_ [] = {
  TO_UNICODE ('{'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7D_$'
static const utf32 kUnicodeString_piccoloDevice_5F_lexique__7D_ [] = {
  TO_UNICODE ('}'),
  TO_UNICODE (0)
} ;

//--------------------------------------------------------------------------------------------------
//             Key words table 'controlKeyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_piccoloDevice_5F_lexique_controlKeyWordList = 18 ;

static const C_unicode_lexique_table_entry ktable_for_piccoloDevice_5F_lexique_controlKeyWordList [ktable_size_piccoloDevice_5F_lexique_controlKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_at, 2, C_Lexique_piccoloDevice_5F_lexique::kToken_at),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_to, 2, C_Lexique_piccoloDevice_5F_lexique::kToken_to),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_ram, 3, C_Lexique_piccoloDevice_5F_lexique::kToken_ram),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_bank, 4, C_Lexique_piccoloDevice_5F_lexique::kToken_bank),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_mask, 4, C_Lexique_piccoloDevice_5F_lexique::kToken_mask),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_width, 5, C_Lexique_piccoloDevice_5F_lexique::kToken_width),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_illegal, 7, C_Lexique_piccoloDevice_5F_lexique::kToken_illegal),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_message, 7, C_Lexique_piccoloDevice_5F_lexique::kToken_message),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_romsize, 7, C_Lexique_piccoloDevice_5F_lexique::kToken_romsize),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_setting, 7, C_Lexique_piccoloDevice_5F_lexique::kToken_setting),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_mirrorat, 8, C_Lexique_piccoloDevice_5F_lexique::kToken_mirrorat),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_register, 8, C_Lexique_piccoloDevice_5F_lexique::kToken_register),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_processor, 9, C_Lexique_piccoloDevice_5F_lexique::kToken_processor),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_controller, 10, C_Lexique_piccoloDevice_5F_lexique::kToken_controller),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_eepromsize, 10, C_Lexique_piccoloDevice_5F_lexique::kToken_eepromsize),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_description, 11, C_Lexique_piccoloDevice_5F_lexique::kToken_description),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_configuration, 13, C_Lexique_piccoloDevice_5F_lexique::kToken_configuration),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique_unusedregister, 14, C_Lexique_piccoloDevice_5F_lexique::kToken_unusedregister)
} ;

int32_t C_Lexique_piccoloDevice_5F_lexique::search_into_controlKeyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_piccoloDevice_5F_lexique_controlKeyWordList, ktable_size_piccoloDevice_5F_lexique_controlKeyWordList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'delimitorsList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_piccoloDevice_5F_lexique_delimitorsList = 11 ;

static const C_unicode_lexique_table_entry ktable_for_piccoloDevice_5F_lexique_delimitorsList [ktable_size_piccoloDevice_5F_lexique_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__2C_, 1, C_Lexique_piccoloDevice_5F_lexique::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__2D_, 1, C_Lexique_piccoloDevice_5F_lexique::kToken__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__2F_, 1, C_Lexique_piccoloDevice_5F_lexique::kToken__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__3A_, 1, C_Lexique_piccoloDevice_5F_lexique::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__3B_, 1, C_Lexique_piccoloDevice_5F_lexique::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__3C_, 1, C_Lexique_piccoloDevice_5F_lexique::kToken__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__3E_, 1, C_Lexique_piccoloDevice_5F_lexique::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__5B_, 1, C_Lexique_piccoloDevice_5F_lexique::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__5D_, 1, C_Lexique_piccoloDevice_5F_lexique::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__7B_, 1, C_Lexique_piccoloDevice_5F_lexique::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccoloDevice_5F_lexique__7D_, 1, C_Lexique_piccoloDevice_5F_lexique::kToken__7D_)
} ;

int32_t C_Lexique_piccoloDevice_5F_lexique::search_into_delimitorsList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_piccoloDevice_5F_lexique_delimitorsList, ktable_size_piccoloDevice_5F_lexique_delimitorsList) ;
}


//--------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//--------------------------------------------------------------------------------------------------

String C_Lexique_piccoloDevice_5F_lexique::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_piccoloDevice_5F_lexique * ptr = (const cTokenFor_piccoloDevice_5F_lexique *) inTokenPtr ;
  String s ;
  if (ptr == nullptr) {
    s.addString ("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.addString ("$$") ;
      break ;
    case kToken_identifier:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("identifier") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
      s.addStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_integer:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("integer") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
      s.addUnsigned (ptr->mLexicalAttribute_uint_33__32_value) ;
      break ;
    case kToken_string:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("string") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
      s.addStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("comment") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_controller:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("controller") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_processor:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("processor") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_romsize:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("romsize") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_eepromsize:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("eepromsize") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bank:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("bank") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_unusedregister:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("unusedregister") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_mirrorat:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("mirrorat") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_ram:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("ram") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_register:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("register") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_at:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("at") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_to:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("to") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_configuration:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("configuration") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_width:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("width") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_description:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("description") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_mask:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("mask") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_illegal:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("illegal") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_message:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("message") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_setting:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("setting") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("<") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString (">") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2C_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString (",") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("-") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2F_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("/") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3B_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString (";") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3A_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString (":") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5B_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("[") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("]") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7B_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("{") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("}") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
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

void C_Lexique_piccoloDevice_5F_lexique::internalParseLexicalToken (cTokenFor_piccoloDevice_5F_lexique & token) {
  bool loop = true ;
  token.mLexicalAttribute_charValue = TO_UNICODE (0) ;
  token.mLexicalAttribute_identifierString.setLengthToZero () ;
  token.mLexicalAttribute_tokenString.setLengthToZero () ;
  token.mLexicalAttribute_uint_33__32_value = 0 ;
  mTokenStartLocation = mCurrentLocation ;
  try{
    if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, ::scanner_function_toLower (*this, previousChar ())) ;
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
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
    }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__30_x, 2, true)) {
      do {
        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccoloDevice_5F_lexique_hexNumberTooLarge, gLexicalMessage_piccoloDevice_5F_lexique_internalError) ;
        }else if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f'))) {
          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccoloDevice_5F_lexique_hexNumberTooLarge, gLexicalMessage_piccoloDevice_5F_lexique_internalError) ;
        }else if (testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccoloDevice_5F_lexique_hexNumberTooLarge, gLexicalMessage_piccoloDevice_5F_lexique_internalError) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_integer ;
      enterToken (token) ;
    }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
      ::scanner_routine_enterDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccoloDevice_5F_lexique_decimalNumberTooLarge, gLexicalMessage_piccoloDevice_5F_lexique_internalError) ;
      do {
        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          ::scanner_routine_enterDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccoloDevice_5F_lexique_decimalNumberTooLarge, gLexicalMessage_piccoloDevice_5F_lexique_internalError) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_integer ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__7D_, 1, true)) {
      token.mTokenCode = kToken__7D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__7B_, 1, true)) {
      token.mTokenCode = kToken__7B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__5D_, 1, true)) {
      token.mTokenCode = kToken__5D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__5B_, 1, true)) {
      token.mTokenCode = kToken__5B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__3E_, 1, true)) {
      token.mTokenCode = kToken__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__3C_, 1, true)) {
      token.mTokenCode = kToken__3C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__3B_, 1, true)) {
      token.mTokenCode = kToken__3B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__3A_, 1, true)) {
      token.mTokenCode = kToken__3A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__2F_, 1, true)) {
      token.mTokenCode = kToken__2F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__2D_, 1, true)) {
      token.mTokenCode = kToken__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccoloDevice_5F_lexique__2C_, 1, true)) {
      token.mTokenCode = kToken__2C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
      do {
        if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
          if (testForInputUTF32Char (TO_UNICODE ('f'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\f')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('n'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\n')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('r'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\r')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('t'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\t')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('v'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\v')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('0'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\0')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\"')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('\''))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\'')) ;
          }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            do {
              ::scanner_routine_enterHexDigitIntoASCIIcharacter (*this, token.mLexicalAttribute_charValue, previousChar (), gLexicalMessage_piccoloDevice_5F_lexique_ASCIIcodeTooLargeError, gLexicalMessage_piccoloDevice_5F_lexique_internalError) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
              }else{
                loop = false ;
              }
            }while (loop) ;
            loop = true ;
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
          }else{
            lexicalError (gLexicalMessage_piccoloDevice_5F_lexique_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else if (testForInputUTF32Char (TO_UNICODE (' ')) || testForInputUTF32Char (TO_UNICODE ('!')) || testForInputUTF32CharRange (TO_UNICODE ('#'), TO_UNICODE ('~'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
        token.mTokenCode = kToken_string ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_piccoloDevice_5F_lexique_incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32Char (TO_UNICODE ('#'))) {
      do {
        if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      enterDroppedTerminal (kToken_comment) ;
    }else if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE (' '))) {
    }else if (testForInputUTF32Char (TO_UNICODE ('\0'))) { // End of source text ? 
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

bool C_Lexique_piccoloDevice_5F_lexique::parseLexicalToken (void) {
  cTokenFor_piccoloDevice_5F_lexique token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    internalParseLexicalToken (token) ;
  }
  if (UNICODE_VALUE (mCurrentChar) == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//--------------------------------------------------------------------------------------------------
//                         E N T E R    T O K E N                                                
//--------------------------------------------------------------------------------------------------

void C_Lexique_piccoloDevice_5F_lexique::enterToken (cTokenFor_piccoloDevice_5F_lexique & ioToken) {
  cTokenFor_piccoloDevice_5F_lexique * ptr = nullptr ;
  macroMyNew (ptr, cTokenFor_piccoloDevice_5F_lexique ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  // ptr->mIsOptional = ioToken.mIsOptional ;
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

utf32 C_Lexique_piccoloDevice_5F_lexique::attributeValue_charValue (void) const {
  cTokenFor_piccoloDevice_5F_lexique * ptr = (cTokenFor_piccoloDevice_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_charValue ;
}

//--------------------------------------------------------------------------------------------------

String C_Lexique_piccoloDevice_5F_lexique::attributeValue_identifierString (void) const {
  cTokenFor_piccoloDevice_5F_lexique * ptr = (cTokenFor_piccoloDevice_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_identifierString ;
}

//--------------------------------------------------------------------------------------------------

String C_Lexique_piccoloDevice_5F_lexique::attributeValue_tokenString (void) const {
  cTokenFor_piccoloDevice_5F_lexique * ptr = (cTokenFor_piccoloDevice_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//--------------------------------------------------------------------------------------------------

uint32_t C_Lexique_piccoloDevice_5F_lexique::attributeValue_uint_33__32_value (void) const {
  cTokenFor_piccoloDevice_5F_lexique * ptr = (cTokenFor_piccoloDevice_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//--------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//--------------------------------------------------------------------------------------------------

GALGAS_lchar C_Lexique_piccoloDevice_5F_lexique::synthetizedAttribute_charValue (void) const {
  cTokenFor_piccoloDevice_5F_lexique * ptr = (cTokenFor_piccoloDevice_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_piccoloDevice_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_char value (ptr->mLexicalAttribute_charValue) ;
  GALGAS_lchar result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring C_Lexique_piccoloDevice_5F_lexique::synthetizedAttribute_identifierString (void) const {
  cTokenFor_piccoloDevice_5F_lexique * ptr = (cTokenFor_piccoloDevice_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_piccoloDevice_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_identifierString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring C_Lexique_piccoloDevice_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_piccoloDevice_5F_lexique * ptr = (cTokenFor_piccoloDevice_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_piccoloDevice_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_tokenString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint C_Lexique_piccoloDevice_5F_lexique::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_piccoloDevice_5F_lexique * ptr = (cTokenFor_piccoloDevice_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_piccoloDevice_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GALGAS_luint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist C_Lexique_piccoloDevice_5F_lexique::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("integer") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("string") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("comment") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("controller") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("processor") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("romsize") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("eepromsize") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("bank") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("unusedregister") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("mirrorat") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("ram") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("register") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("at") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("to") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("configuration") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("width") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("description") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("mask") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("illegal") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("message") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("setting") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("<") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (">") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (",") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("-") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("/") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (";") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (":") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("[") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("]") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("{") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("}") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_piccoloDevice_5F_lexique (TC_UniqueArray <String> & ioList) {
  ioList.appendObject ("piccoloDevice_lexique:controlKeyWordList") ;
  ioList.appendObject ("piccoloDevice_lexique:delimitorsList") ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_piccoloDevice_5F_lexique (const String & inIdentifier,
                                                               bool & ioFound,
                                                               TC_UniqueArray <String> & ioList) {
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

static cLexiqueIntrospection lexiqueIntrospection_piccoloDevice_5F_lexique
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_piccoloDevice_5F_lexique, getKeywordsForIdentifier_piccoloDevice_5F_lexique) ;

//--------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//--------------------------------------------------------------------------------------------------

uint32_t C_Lexique_piccoloDevice_5F_lexique::styleIndexForTerminal (const int32_t inTerminalIndex) const {
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

String C_Lexique_piccoloDevice_5F_lexique::styleNameForIndex (const uint32_t inStyleIndex) const {
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

cMapElement_declaredByteMap::cMapElement_declaredByteMap (const GALGAS_lstring & inKey
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_declaredByteMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_declaredByteMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_declaredByteMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_declaredByteMap::description (String & /* ioString */, const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_declaredByteMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_declaredByteMap * operand = (cMapElement_declaredByteMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap::GALGAS_declaredByteMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap::GALGAS_declaredByteMap (const GALGAS_declaredByteMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap & GALGAS_declaredByteMap::operator = (const GALGAS_declaredByteMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap GALGAS_declaredByteMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_declaredByteMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap GALGAS_declaredByteMap::constructor_mapWithMapToOverride (const GALGAS_declaredByteMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_declaredByteMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap GALGAS_declaredByteMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_declaredByteMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declaredByteMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_declaredByteMap * p = nullptr ;
  macroMyNew (p, cMapElement_declaredByteMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@declaredByteMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap GALGAS_declaredByteMap::add_operation (const GALGAS_declaredByteMap & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_declaredByteMap result = *this ;
  cEnumerator_declaredByteMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declaredByteMap::setter_insertKey (GALGAS_lstring inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_declaredByteMap * p = nullptr ;
  macroMyNew (p, cMapElement_declaredByteMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' byte is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_declaredByteMap_searchKey = "the '%K' byte is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_declaredByteMap::method_searchKey (GALGAS_lstring inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_declaredByteMap * p = (const cMapElement_declaredByteMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_declaredByteMap_searchKey
                                                                                               COMMA_THERE) ;
  if (nullptr == p) {
  }else{
    macroValidSharedObject (p, cMapElement_declaredByteMap) ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_declaredByteMap * GALGAS_declaredByteMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_declaredByteMap * result = (cMapElement_declaredByteMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_declaredByteMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_declaredByteMap::cEnumerator_declaredByteMap (const GALGAS_declaredByteMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap_2D_element cEnumerator_declaredByteMap::current (LOCATION_ARGS) const {
  const cMapElement_declaredByteMap * p = (const cMapElement_declaredByteMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_declaredByteMap) ;
  return GALGAS_declaredByteMap_2D_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_declaredByteMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_declaredByteMap::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_declaredByteMap * p = (const cMapElement_declaredByteMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_declaredByteMap) ;
  }else{
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @declaredByteMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declaredByteMap ("declaredByteMap",
                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_declaredByteMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredByteMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_declaredByteMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declaredByteMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap GALGAS_declaredByteMap::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_declaredByteMap result ;
  const GALGAS_declaredByteMap * p = (const GALGAS_declaredByteMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_declaredByteMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declaredByteMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_registerTable::cMapElement_registerTable (const GALGAS_lstring & inKey,
                                                      const GALGAS_uintlist & in_mRegisterAddressList,
                                                      const GALGAS_uint & in_mSize,
                                                      const GALGAS_bitSliceTable & in_mBitSliceTable,
                                                      const GALGAS_string & in_mBitDefinitionString,
                                                      const GALGAS_registerProtection & in_mProtection
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mRegisterAddressList (in_mRegisterAddressList),
mProperty_mSize (in_mSize),
mProperty_mBitSliceTable (in_mBitSliceTable),
mProperty_mBitDefinitionString (in_mBitDefinitionString),
mProperty_mProtection (in_mProtection) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_registerTable::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_registerTable::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_registerTable (mProperty_lkey, mProperty_mRegisterAddressList, mProperty_mSize, mProperty_mBitSliceTable, mProperty_mBitDefinitionString, mProperty_mProtection COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_registerTable::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mRegisterAddressList" ":") ;
  mProperty_mRegisterAddressList.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mSize" ":") ;
  mProperty_mSize.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mBitSliceTable" ":") ;
  mProperty_mBitSliceTable.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mBitDefinitionString" ":") ;
  mProperty_mBitDefinitionString.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mProtection" ":") ;
  mProperty_mProtection.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_registerTable::compare (const cCollectionElement * inOperand) const {
  cMapElement_registerTable * operand = (cMapElement_registerTable *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterAddressList.objectCompare (operand->mProperty_mRegisterAddressList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSize.objectCompare (operand->mProperty_mSize) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitSliceTable.objectCompare (operand->mProperty_mBitSliceTable) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitDefinitionString.objectCompare (operand->mProperty_mBitDefinitionString) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mProtection.objectCompare (operand->mProperty_mProtection) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerTable::GALGAS_registerTable (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerTable::GALGAS_registerTable (const GALGAS_registerTable & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerTable & GALGAS_registerTable::operator = (const GALGAS_registerTable & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerTable GALGAS_registerTable::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_registerTable result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerTable GALGAS_registerTable::constructor_mapWithMapToOverride (const GALGAS_registerTable & inMapToOverride
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_registerTable result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerTable GALGAS_registerTable::getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_registerTable result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerTable::addAssign_operation (const GALGAS_lstring & inKey,
                                                const GALGAS_uintlist & inArgument0,
                                                const GALGAS_uint & inArgument1,
                                                const GALGAS_bitSliceTable & inArgument2,
                                                const GALGAS_string & inArgument3,
                                                const GALGAS_registerProtection & inArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_registerTable * p = nullptr ;
  macroMyNew (p, cMapElement_registerTable (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@registerTable insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerTable GALGAS_registerTable::add_operation (const GALGAS_registerTable & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_registerTable result = *this ;
  cEnumerator_registerTable enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mRegisterAddressList (HERE), enumerator.current_mSize (HERE), enumerator.current_mBitSliceTable (HERE), enumerator.current_mBitDefinitionString (HERE), enumerator.current_mProtection (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerTable::setter_insertKey (GALGAS_lstring inKey,
                                             GALGAS_uintlist inArgument0,
                                             GALGAS_uint inArgument1,
                                             GALGAS_bitSliceTable inArgument2,
                                             GALGAS_string inArgument3,
                                             GALGAS_registerProtection inArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_registerTable * p = nullptr ;
  macroMyNew (p, cMapElement_registerTable (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' register is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_registerTable_searchKey = "the '%K' register is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_registerTable::method_searchKey (GALGAS_lstring inKey,
                                             GALGAS_uintlist & outArgument0,
                                             GALGAS_uint & outArgument1,
                                             GALGAS_bitSliceTable & outArgument2,
                                             GALGAS_string & outArgument3,
                                             GALGAS_registerProtection & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) performSearch (inKey,
                                                                                           inCompiler,
                                                                                           kSearchErrorMessage_registerTable_searchKey
                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_registerTable) ;
    outArgument0 = p->mProperty_mRegisterAddressList ;
    outArgument1 = p->mProperty_mSize ;
    outArgument2 = p->mProperty_mBitSliceTable ;
    outArgument3 = p->mProperty_mBitDefinitionString ;
    outArgument4 = p->mProperty_mProtection ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uintlist GALGAS_registerTable::getter_mRegisterAddressListForKey (const GALGAS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) attributes ;
  GALGAS_uintlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    result = p->mProperty_mRegisterAddressList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_registerTable::getter_mSizeForKey (const GALGAS_string & inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    result = p->mProperty_mSize ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable GALGAS_registerTable::getter_mBitSliceTableForKey (const GALGAS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) attributes ;
  GALGAS_bitSliceTable result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    result = p->mProperty_mBitSliceTable ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_registerTable::getter_mBitDefinitionStringForKey (const GALGAS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) attributes ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    result = p->mProperty_mBitDefinitionString ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerProtection GALGAS_registerTable::getter_mProtectionForKey (const GALGAS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) attributes ;
  GALGAS_registerProtection result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    result = p->mProperty_mProtection ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerTable::setter_setMRegisterAddressListForKey (GALGAS_uintlist inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_registerTable * p = (cMapElement_registerTable *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    p->mProperty_mRegisterAddressList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerTable::setter_setMSizeForKey (GALGAS_uint inAttributeValue,
                                                  GALGAS_string inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_registerTable * p = (cMapElement_registerTable *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    p->mProperty_mSize = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerTable::setter_setMBitSliceTableForKey (GALGAS_bitSliceTable inAttributeValue,
                                                           GALGAS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_registerTable * p = (cMapElement_registerTable *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    p->mProperty_mBitSliceTable = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerTable::setter_setMBitDefinitionStringForKey (GALGAS_string inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_registerTable * p = (cMapElement_registerTable *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    p->mProperty_mBitDefinitionString = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerTable::setter_setMProtectionForKey (GALGAS_registerProtection inAttributeValue,
                                                        GALGAS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_registerTable * p = (cMapElement_registerTable *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    p->mProperty_mProtection = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_registerTable * GALGAS_registerTable::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_registerTable * result = (cMapElement_registerTable *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_registerTable) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_registerTable::cEnumerator_registerTable (const GALGAS_registerTable & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerTable_2D_element cEnumerator_registerTable::current (LOCATION_ARGS) const {
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerTable) ;
  return GALGAS_registerTable_2D_element (p->mProperty_lkey, p->mProperty_mRegisterAddressList, p->mProperty_mSize, p->mProperty_mBitSliceTable, p->mProperty_mBitDefinitionString, p->mProperty_mProtection) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_registerTable::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uintlist cEnumerator_registerTable::current_mRegisterAddressList (LOCATION_ARGS) const {
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerTable) ;
  return p->mProperty_mRegisterAddressList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_registerTable::current_mSize (LOCATION_ARGS) const {
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerTable) ;
  return p->mProperty_mSize ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable cEnumerator_registerTable::current_mBitSliceTable (LOCATION_ARGS) const {
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerTable) ;
  return p->mProperty_mBitSliceTable ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_registerTable::current_mBitDefinitionString (LOCATION_ARGS) const {
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerTable) ;
  return p->mProperty_mBitDefinitionString ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerProtection cEnumerator_registerTable::current_mProtection (LOCATION_ARGS) const {
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerTable) ;
  return p->mProperty_mProtection ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_registerTable::optional_searchKey (const GALGAS_string & inKey,
                                               GALGAS_uintlist & outArgument0,
                                               GALGAS_uint & outArgument1,
                                               GALGAS_bitSliceTable & outArgument2,
                                               GALGAS_string & outArgument3,
                                               GALGAS_registerProtection & outArgument4) const {
  const cMapElement_registerTable * p = (const cMapElement_registerTable *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_registerTable) ;
    outArgument0 = p->mProperty_mRegisterAddressList ;
    outArgument1 = p->mProperty_mSize ;
    outArgument2 = p->mProperty_mBitSliceTable ;
    outArgument3 = p->mProperty_mBitDefinitionString ;
    outArgument4 = p->mProperty_mProtection ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @registerTable generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerTable ("registerTable",
                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerTable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerTable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerTable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerTable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerTable GALGAS_registerTable::extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_registerTable result ;
  const GALGAS_registerTable * p = (const GALGAS_registerTable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_registerTable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerTable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@registerTable checkPrivateAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkPrivateAccess (const GALGAS_registerTable inObject,
                                         const GALGAS_lstring constinArgument_inKey,
                                         const GALGAS_bool constinArgument_inWriteAccess,
                                         const GALGAS_registerProtection constinArgument_inRegisterProtection,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inRegisterProtection.enumValue ()) {
  case GALGAS_registerProtection::kNotBuilt:
    break ;
  case GALGAS_registerProtection::kEnum_publicRegister:
    {
    }
    break ;
  case GALGAS_registerProtection::kEnum_protectedRegister:
    {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        GALGAS_bool test_1 = constinArgument_inWriteAccess ;
        if (kBoolTrue == test_1.boolEnum ()) {
          const GALGAS_registerTable temp_2 = inObject ;
          test_1 = temp_2.getter_hasKey (constinArgument_inKey.readProperty_string () COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 32)) ;
        }
        test_0 = test_1.boolEnum () ;
        if (kBoolTrue == test_0) {
          const GALGAS_registerTable temp_3 = inObject ;
          GALGAS_location var_declarationLocation_1019 = temp_3.getter_locationForKey (constinArgument_inKey.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 33)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsNotEqual, var_declarationLocation_1019.getter_file (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 34)).objectCompare (constinArgument_inKey.readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 34)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (constinArgument_inKey.readProperty_location (), GALGAS_string ("register is protected, write is reserved to instructions in declaration file"), fixItArray5  COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 35)) ;
            }
          }
        }
      }
    }
    break ;
  case GALGAS_registerProtection::kEnum_privateRegister:
    {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_registerTable temp_7 = inObject ;
        test_6 = temp_7.getter_hasKey (constinArgument_inKey.readProperty_string () COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 39)).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_registerTable temp_8 = inObject ;
          GALGAS_location var_declarationLocation_1323 = temp_8.getter_locationForKey (constinArgument_inKey.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 40)) ;
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = GALGAS_bool (kIsNotEqual, var_declarationLocation_1323.getter_file (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 41)).objectCompare (constinArgument_inKey.readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 41)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (constinArgument_inKey.readProperty_location (), GALGAS_string ("register is private to declaration file"), fixItArray10  COMMA_SOURCE_FILE ("piccoloDevice_semantics.galgas", 42)) ;
            }
          }
        }
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------

cMapElement_ramBankTable::cMapElement_ramBankTable (const GALGAS_lstring & inKey,
                                                    const GALGAS_uint & in_mFirstAddress,
                                                    const GALGAS_uint & in_mFirstFreeAddress,
                                                    const GALGAS_uint & in_mLastAddressPlusOne,
                                                    const GALGAS_uintlist & in_mMirrorOffsetList
                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFirstAddress (in_mFirstAddress),
mProperty_mFirstFreeAddress (in_mFirstFreeAddress),
mProperty_mLastAddressPlusOne (in_mLastAddressPlusOne),
mProperty_mMirrorOffsetList (in_mMirrorOffsetList) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_ramBankTable::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_ramBankTable::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_ramBankTable (mProperty_lkey, mProperty_mFirstAddress, mProperty_mFirstFreeAddress, mProperty_mLastAddressPlusOne, mProperty_mMirrorOffsetList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_ramBankTable::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mFirstAddress" ":") ;
  mProperty_mFirstAddress.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mFirstFreeAddress" ":") ;
  mProperty_mFirstFreeAddress.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mLastAddressPlusOne" ":") ;
  mProperty_mLastAddressPlusOne.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mMirrorOffsetList" ":") ;
  mProperty_mMirrorOffsetList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_ramBankTable::compare (const cCollectionElement * inOperand) const {
  cMapElement_ramBankTable * operand = (cMapElement_ramBankTable *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mFirstAddress.objectCompare (operand->mProperty_mFirstAddress) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFirstFreeAddress.objectCompare (operand->mProperty_mFirstFreeAddress) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLastAddressPlusOne.objectCompare (operand->mProperty_mLastAddressPlusOne) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMirrorOffsetList.objectCompare (operand->mProperty_mMirrorOffsetList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramBankTable::GALGAS_ramBankTable (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramBankTable::GALGAS_ramBankTable (const GALGAS_ramBankTable & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramBankTable & GALGAS_ramBankTable::operator = (const GALGAS_ramBankTable & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramBankTable GALGAS_ramBankTable::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_ramBankTable result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramBankTable GALGAS_ramBankTable::constructor_mapWithMapToOverride (const GALGAS_ramBankTable & inMapToOverride
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_ramBankTable result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramBankTable GALGAS_ramBankTable::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_ramBankTable result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ramBankTable::addAssign_operation (const GALGAS_lstring & inKey,
                                               const GALGAS_uint & inArgument0,
                                               const GALGAS_uint & inArgument1,
                                               const GALGAS_uint & inArgument2,
                                               const GALGAS_uintlist & inArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_ramBankTable * p = nullptr ;
  macroMyNew (p, cMapElement_ramBankTable (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@ramBankTable insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramBankTable GALGAS_ramBankTable::add_operation (const GALGAS_ramBankTable & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_ramBankTable result = *this ;
  cEnumerator_ramBankTable enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mFirstAddress (HERE), enumerator.current_mFirstFreeAddress (HERE), enumerator.current_mLastAddressPlusOne (HERE), enumerator.current_mMirrorOffsetList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ramBankTable::setter_insertKey (GALGAS_lstring inKey,
                                            GALGAS_uint inArgument0,
                                            GALGAS_uint inArgument1,
                                            GALGAS_uint inArgument2,
                                            GALGAS_uintlist inArgument3,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_ramBankTable * p = nullptr ;
  macroMyNew (p, cMapElement_ramBankTable (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' bank ram is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_ramBankTable_searchKey = "the '%K' bank ram is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_ramBankTable::method_searchKey (GALGAS_lstring inKey,
                                            GALGAS_uint & outArgument0,
                                            GALGAS_uint & outArgument1,
                                            GALGAS_uint & outArgument2,
                                            GALGAS_uintlist & outArgument3,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kSearchErrorMessage_ramBankTable_searchKey
                                                                                         COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    outArgument0 = p->mProperty_mFirstAddress ;
    outArgument1 = p->mProperty_mFirstFreeAddress ;
    outArgument2 = p->mProperty_mLastAddressPlusOne ;
    outArgument3 = p->mProperty_mMirrorOffsetList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ramBankTable::getter_mFirstAddressForKey (const GALGAS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    result = p->mProperty_mFirstAddress ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ramBankTable::getter_mFirstFreeAddressForKey (const GALGAS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    result = p->mProperty_mFirstFreeAddress ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ramBankTable::getter_mLastAddressPlusOneForKey (const GALGAS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    result = p->mProperty_mLastAddressPlusOne ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uintlist GALGAS_ramBankTable::getter_mMirrorOffsetListForKey (const GALGAS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) attributes ;
  GALGAS_uintlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    result = p->mProperty_mMirrorOffsetList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ramBankTable::setter_setMFirstAddressForKey (GALGAS_uint inAttributeValue,
                                                         GALGAS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_ramBankTable * p = (cMapElement_ramBankTable *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    p->mProperty_mFirstAddress = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ramBankTable::setter_setMFirstFreeAddressForKey (GALGAS_uint inAttributeValue,
                                                             GALGAS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_ramBankTable * p = (cMapElement_ramBankTable *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    p->mProperty_mFirstFreeAddress = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ramBankTable::setter_setMLastAddressPlusOneForKey (GALGAS_uint inAttributeValue,
                                                               GALGAS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_ramBankTable * p = (cMapElement_ramBankTable *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    p->mProperty_mLastAddressPlusOne = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ramBankTable::setter_setMMirrorOffsetListForKey (GALGAS_uintlist inAttributeValue,
                                                             GALGAS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_ramBankTable * p = (cMapElement_ramBankTable *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    p->mProperty_mMirrorOffsetList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_ramBankTable * GALGAS_ramBankTable::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                   const GALGAS_string & inKey
                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_ramBankTable * result = (cMapElement_ramBankTable *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_ramBankTable) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_ramBankTable::cEnumerator_ramBankTable (const GALGAS_ramBankTable & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramBankTable_2D_element cEnumerator_ramBankTable::current (LOCATION_ARGS) const {
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_ramBankTable) ;
  return GALGAS_ramBankTable_2D_element (p->mProperty_lkey, p->mProperty_mFirstAddress, p->mProperty_mFirstFreeAddress, p->mProperty_mLastAddressPlusOne, p->mProperty_mMirrorOffsetList) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_ramBankTable::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_ramBankTable::current_mFirstAddress (LOCATION_ARGS) const {
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_ramBankTable) ;
  return p->mProperty_mFirstAddress ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_ramBankTable::current_mFirstFreeAddress (LOCATION_ARGS) const {
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_ramBankTable) ;
  return p->mProperty_mFirstFreeAddress ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_ramBankTable::current_mLastAddressPlusOne (LOCATION_ARGS) const {
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_ramBankTable) ;
  return p->mProperty_mLastAddressPlusOne ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uintlist cEnumerator_ramBankTable::current_mMirrorOffsetList (LOCATION_ARGS) const {
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_ramBankTable) ;
  return p->mProperty_mMirrorOffsetList ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ramBankTable::optional_searchKey (const GALGAS_string & inKey,
                                              GALGAS_uint & outArgument0,
                                              GALGAS_uint & outArgument1,
                                              GALGAS_uint & outArgument2,
                                              GALGAS_uintlist & outArgument3) const {
  const cMapElement_ramBankTable * p = (const cMapElement_ramBankTable *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_ramBankTable) ;
    outArgument0 = p->mProperty_mFirstAddress ;
    outArgument1 = p->mProperty_mFirstFreeAddress ;
    outArgument2 = p->mProperty_mLastAddressPlusOne ;
    outArgument3 = p->mProperty_mMirrorOffsetList ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ramBankTable generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ramBankTable ("ramBankTable",
                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ramBankTable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ramBankTable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ramBankTable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ramBankTable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramBankTable GALGAS_ramBankTable::extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ramBankTable result ;
  const GALGAS_ramBankTable * p = (const GALGAS_ramBankTable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ramBankTable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ramBankTable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_processorType::GALGAS_processorType (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_processorType GALGAS_processorType::constructor_pic_31__38__5F__36__30_ (UNUSED_LOCATION_ARGS) {
  GALGAS_processorType result ;
  result.mEnum = kEnum_pic_31__38__5F__36__30_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_processorType GALGAS_processorType::constructor_pic_31__38__5F__38__30_ (UNUSED_LOCATION_ARGS) {
  GALGAS_processorType result ;
  result.mEnum = kEnum_pic_31__38__5F__38__30_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_processorType GALGAS_processorType::constructor_midrange (UNUSED_LOCATION_ARGS) {
  GALGAS_processorType result ;
  result.mEnum = kEnum_midrange ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_processorType GALGAS_processorType::constructor_baseline (UNUSED_LOCATION_ARGS) {
  GALGAS_processorType result ;
  result.mEnum = kEnum_baseline ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_processorType::optional_pic_31__38__5F__36__30_ () const {
  const bool ok = mEnum == kEnum_pic_31__38__5F__36__30_ ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_processorType::optional_pic_31__38__5F__38__30_ () const {
  const bool ok = mEnum == kEnum_pic_31__38__5F__38__30_ ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_processorType::optional_midrange () const {
  const bool ok = mEnum == kEnum_midrange ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_processorType::optional_baseline () const {
  const bool ok = mEnum == kEnum_baseline ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_processorType [5] = {
  "(not built)",
  "pic18_60",
  "pic18_80",
  "midrange",
  "baseline"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_processorType::getter_isPic_31__38__5F__36__30_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_pic_31__38__5F__36__30_ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_processorType::getter_isPic_31__38__5F__38__30_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_pic_31__38__5F__38__30_ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_processorType::getter_isMidrange (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_midrange == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_processorType::getter_isBaseline (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_baseline == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_processorType::description (String & ioString,
                                        const int32_t /* inIndentation */) const {
  ioString.addString ("<enum @processorType: ") ;
  ioString.addString (gEnumNameArrayFor_processorType [mEnum]) ;
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_processorType::objectCompare (const GALGAS_processorType & inOperand) const {
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

//--------------------------------------------------------------------------------------------------
//
//     @processorType generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_processorType ("processorType",
                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_processorType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_processorType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_processorType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_processorType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_processorType GALGAS_processorType::extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_processorType result ;
  const GALGAS_processorType * p = (const GALGAS_processorType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_processorType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("processorType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@illegalMaskList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_illegalMaskList : public cCollectionElement {
  public: GALGAS_illegalMaskList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_illegalMaskList (const GALGAS_luint & in_mIllegalValue,
                                              const GALGAS_luint & in_mIllegalMask,
                                              const GALGAS_lstring & in_mDescription
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_illegalMaskList (const GALGAS_illegalMaskList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_illegalMaskList::cCollectionElement_illegalMaskList (const GALGAS_luint & in_mIllegalValue,
                                                                        const GALGAS_luint & in_mIllegalMask,
                                                                        const GALGAS_lstring & in_mDescription
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mIllegalValue, in_mIllegalMask, in_mDescription) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_illegalMaskList::cCollectionElement_illegalMaskList (const GALGAS_illegalMaskList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mIllegalValue, inElement.mProperty_mIllegalMask, inElement.mProperty_mDescription) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_illegalMaskList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_illegalMaskList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_illegalMaskList (mObject.mProperty_mIllegalValue, mObject.mProperty_mIllegalMask, mObject.mProperty_mDescription COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_illegalMaskList::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mIllegalValue" ":") ;
  mObject.mProperty_mIllegalValue.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mIllegalMask" ":") ;
  mObject.mProperty_mIllegalMask.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mDescription" ":") ;
  mObject.mProperty_mDescription.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_illegalMaskList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_illegalMaskList * operand = (cCollectionElement_illegalMaskList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_illegalMaskList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList::GALGAS_illegalMaskList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList::GALGAS_illegalMaskList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList GALGAS_illegalMaskList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_illegalMaskList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList GALGAS_illegalMaskList::constructor_listWithValue (const GALGAS_luint & inOperand0,
                                                                          const GALGAS_luint & inOperand1,
                                                                          const GALGAS_lstring & inOperand2
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_illegalMaskList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_illegalMaskList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_illegalMaskList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_luint & in_mIllegalValue,
                                                        const GALGAS_luint & in_mIllegalMask,
                                                        const GALGAS_lstring & in_mDescription
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_illegalMaskList * p = nullptr ;
  macroMyNew (p, cCollectionElement_illegalMaskList (in_mIllegalValue,
                                                     in_mIllegalMask,
                                                     in_mDescription COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList::addAssign_operation (const GALGAS_luint & inOperand0,
                                                  const GALGAS_luint & inOperand1,
                                                  const GALGAS_lstring & inOperand2
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_illegalMaskList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList::setter_append (const GALGAS_luint inOperand0,
                                            const GALGAS_luint inOperand1,
                                            const GALGAS_lstring inOperand2,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_illegalMaskList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList::setter_insertAtIndex (const GALGAS_luint inOperand0,
                                                   const GALGAS_luint inOperand1,
                                                   const GALGAS_lstring inOperand2,
                                                   const GALGAS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_illegalMaskList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_illegalMaskList::setter_removeAtIndex (GALGAS_luint & outOperand0,
                                                   GALGAS_luint & outOperand1,
                                                   GALGAS_lstring & outOperand2,
                                                   const GALGAS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
        outOperand0 = p->mObject.mProperty_mIllegalValue ;
        outOperand1 = p->mObject.mProperty_mIllegalMask ;
        outOperand2 = p->mObject.mProperty_mDescription ;
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

void GALGAS_illegalMaskList::setter_popFirst (GALGAS_luint & outOperand0,
                                              GALGAS_luint & outOperand1,
                                              GALGAS_lstring & outOperand2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    outOperand0 = p->mObject.mProperty_mIllegalValue ;
    outOperand1 = p->mObject.mProperty_mIllegalMask ;
    outOperand2 = p->mObject.mProperty_mDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList::setter_popLast (GALGAS_luint & outOperand0,
                                             GALGAS_luint & outOperand1,
                                             GALGAS_lstring & outOperand2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    outOperand0 = p->mObject.mProperty_mIllegalValue ;
    outOperand1 = p->mObject.mProperty_mIllegalMask ;
    outOperand2 = p->mObject.mProperty_mDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList::method_first (GALGAS_luint & outOperand0,
                                           GALGAS_luint & outOperand1,
                                           GALGAS_lstring & outOperand2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    outOperand0 = p->mObject.mProperty_mIllegalValue ;
    outOperand1 = p->mObject.mProperty_mIllegalMask ;
    outOperand2 = p->mObject.mProperty_mDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList::method_last (GALGAS_luint & outOperand0,
                                          GALGAS_luint & outOperand1,
                                          GALGAS_lstring & outOperand2,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    outOperand0 = p->mObject.mProperty_mIllegalValue ;
    outOperand1 = p->mObject.mProperty_mIllegalMask ;
    outOperand2 = p->mObject.mProperty_mDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList GALGAS_illegalMaskList::add_operation (const GALGAS_illegalMaskList & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_illegalMaskList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList GALGAS_illegalMaskList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_illegalMaskList result = GALGAS_illegalMaskList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList GALGAS_illegalMaskList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_illegalMaskList result = GALGAS_illegalMaskList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList GALGAS_illegalMaskList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_illegalMaskList result = GALGAS_illegalMaskList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList::plusAssign_operation (const GALGAS_illegalMaskList inOperand,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList::setter_setMIllegalValueAtIndex (GALGAS_luint inOperand,
                                                             GALGAS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIllegalValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_illegalMaskList::getter_mIllegalValueAtIndex (const GALGAS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) attributes.ptr () ;
  GALGAS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    result = p->mObject.mProperty_mIllegalValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList::setter_setMIllegalMaskAtIndex (GALGAS_luint inOperand,
                                                            GALGAS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIllegalMask = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_illegalMaskList::getter_mIllegalMaskAtIndex (const GALGAS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) attributes.ptr () ;
  GALGAS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    result = p->mObject.mProperty_mIllegalMask ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList::setter_setMDescriptionAtIndex (GALGAS_lstring inOperand,
                                                            GALGAS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDescription = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_illegalMaskList::getter_mDescriptionAtIndex (const GALGAS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_illegalMaskList * p = (cCollectionElement_illegalMaskList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
    result = p->mObject.mProperty_mDescription ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_illegalMaskList::cEnumerator_illegalMaskList (const GALGAS_illegalMaskList & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList_2D_element cEnumerator_illegalMaskList::current (LOCATION_ARGS) const {
  const cCollectionElement_illegalMaskList * p = (const cCollectionElement_illegalMaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_illegalMaskList::current_mIllegalValue (LOCATION_ARGS) const {
  const cCollectionElement_illegalMaskList * p = (const cCollectionElement_illegalMaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
  return p->mObject.mProperty_mIllegalValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_illegalMaskList::current_mIllegalMask (LOCATION_ARGS) const {
  const cCollectionElement_illegalMaskList * p = (const cCollectionElement_illegalMaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
  return p->mObject.mProperty_mIllegalMask ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_illegalMaskList::current_mDescription (LOCATION_ARGS) const {
  const cCollectionElement_illegalMaskList * p = (const cCollectionElement_illegalMaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_illegalMaskList) ;
  return p->mObject.mProperty_mDescription ;
}




//--------------------------------------------------------------------------------------------------
//
//     @illegalMaskList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_illegalMaskList ("illegalMaskList",
                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_illegalMaskList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_illegalMaskList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_illegalMaskList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_illegalMaskList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList GALGAS_illegalMaskList::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_illegalMaskList result ;
  const GALGAS_illegalMaskList * p = (const GALGAS_illegalMaskList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_illegalMaskList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("illegalMaskList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_configRegisterMaskMap::cMapElement_configRegisterMaskMap (const GALGAS_lstring & inKey,
                                                                      const GALGAS_luint & in_mMaskValue,
                                                                      const GALGAS_lstring & in_mDescription,
                                                                      const GALGAS_fieldSettingMap & in_mFieldSettingMap
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mMaskValue (in_mMaskValue),
mProperty_mDescription (in_mDescription),
mProperty_mFieldSettingMap (in_mFieldSettingMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_configRegisterMaskMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_configRegisterMaskMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_configRegisterMaskMap (mProperty_lkey, mProperty_mMaskValue, mProperty_mDescription, mProperty_mFieldSettingMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_configRegisterMaskMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mMaskValue" ":") ;
  mProperty_mMaskValue.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mDescription" ":") ;
  mProperty_mDescription.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mFieldSettingMap" ":") ;
  mProperty_mFieldSettingMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_configRegisterMaskMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_configRegisterMaskMap * operand = (cMapElement_configRegisterMaskMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mMaskValue.objectCompare (operand->mProperty_mMaskValue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDescription.objectCompare (operand->mProperty_mDescription) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFieldSettingMap.objectCompare (operand->mProperty_mFieldSettingMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap::GALGAS_configRegisterMaskMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap::GALGAS_configRegisterMaskMap (const GALGAS_configRegisterMaskMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap & GALGAS_configRegisterMaskMap::operator = (const GALGAS_configRegisterMaskMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap GALGAS_configRegisterMaskMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_configRegisterMaskMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap GALGAS_configRegisterMaskMap::constructor_mapWithMapToOverride (const GALGAS_configRegisterMaskMap & inMapToOverride
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_configRegisterMaskMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap GALGAS_configRegisterMaskMap::getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_configRegisterMaskMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMaskMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                        const GALGAS_luint & inArgument0,
                                                        const GALGAS_lstring & inArgument1,
                                                        const GALGAS_fieldSettingMap & inArgument2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_configRegisterMaskMap * p = nullptr ;
  macroMyNew (p, cMapElement_configRegisterMaskMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@configRegisterMaskMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap GALGAS_configRegisterMaskMap::add_operation (const GALGAS_configRegisterMaskMap & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_configRegisterMaskMap result = *this ;
  cEnumerator_configRegisterMaskMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mMaskValue (HERE), enumerator.current_mDescription (HERE), enumerator.current_mFieldSettingMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMaskMap::setter_insertKey (GALGAS_lstring inKey,
                                                     GALGAS_luint inArgument0,
                                                     GALGAS_lstring inArgument1,
                                                     GALGAS_fieldSettingMap inArgument2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_configRegisterMaskMap * p = nullptr ;
  macroMyNew (p, cMapElement_configRegisterMaskMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' configuration register mask is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_configRegisterMaskMap_searchKey = "the '%K' configuration register mask is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMaskMap::method_searchKey (GALGAS_lstring inKey,
                                                     GALGAS_luint & outArgument0,
                                                     GALGAS_lstring & outArgument1,
                                                     GALGAS_fieldSettingMap & outArgument2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_configRegisterMaskMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
    outArgument0 = p->mProperty_mMaskValue ;
    outArgument1 = p->mProperty_mDescription ;
    outArgument2 = p->mProperty_mFieldSettingMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_configRegisterMaskMap::getter_mMaskValueForKey (const GALGAS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) attributes ;
  GALGAS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
    result = p->mProperty_mMaskValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_configRegisterMaskMap::getter_mDescriptionForKey (const GALGAS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) attributes ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
    result = p->mProperty_mDescription ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap GALGAS_configRegisterMaskMap::getter_mFieldSettingMapForKey (const GALGAS_string & inKey,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) attributes ;
  GALGAS_fieldSettingMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
    result = p->mProperty_mFieldSettingMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMaskMap::setter_setMMaskValueForKey (GALGAS_luint inAttributeValue,
                                                               GALGAS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_configRegisterMaskMap * p = (cMapElement_configRegisterMaskMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
    p->mProperty_mMaskValue = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMaskMap::setter_setMDescriptionForKey (GALGAS_lstring inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_configRegisterMaskMap * p = (cMapElement_configRegisterMaskMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
    p->mProperty_mDescription = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMaskMap::setter_setMFieldSettingMapForKey (GALGAS_fieldSettingMap inAttributeValue,
                                                                     GALGAS_string inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_configRegisterMaskMap * p = (cMapElement_configRegisterMaskMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
    p->mProperty_mFieldSettingMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_configRegisterMaskMap * GALGAS_configRegisterMaskMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_configRegisterMaskMap * result = (cMapElement_configRegisterMaskMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_configRegisterMaskMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_configRegisterMaskMap::cEnumerator_configRegisterMaskMap (const GALGAS_configRegisterMaskMap & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap_2D_element cEnumerator_configRegisterMaskMap::current (LOCATION_ARGS) const {
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
  return GALGAS_configRegisterMaskMap_2D_element (p->mProperty_lkey, p->mProperty_mMaskValue, p->mProperty_mDescription, p->mProperty_mFieldSettingMap) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_configRegisterMaskMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_configRegisterMaskMap::current_mMaskValue (LOCATION_ARGS) const {
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
  return p->mProperty_mMaskValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_configRegisterMaskMap::current_mDescription (LOCATION_ARGS) const {
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
  return p->mProperty_mDescription ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap cEnumerator_configRegisterMaskMap::current_mFieldSettingMap (LOCATION_ARGS) const {
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
  return p->mProperty_mFieldSettingMap ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_configRegisterMaskMap::optional_searchKey (const GALGAS_string & inKey,
                                                       GALGAS_luint & outArgument0,
                                                       GALGAS_lstring & outArgument1,
                                                       GALGAS_fieldSettingMap & outArgument2) const {
  const cMapElement_configRegisterMaskMap * p = (const cMapElement_configRegisterMaskMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_configRegisterMaskMap) ;
    outArgument0 = p->mProperty_mMaskValue ;
    outArgument1 = p->mProperty_mDescription ;
    outArgument2 = p->mProperty_mFieldSettingMap ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @configRegisterMaskMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configRegisterMaskMap ("configRegisterMaskMap",
                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_configRegisterMaskMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configRegisterMaskMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_configRegisterMaskMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configRegisterMaskMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap GALGAS_configRegisterMaskMap::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_configRegisterMaskMap result ;
  const GALGAS_configRegisterMaskMap * p = (const GALGAS_configRegisterMaskMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_configRegisterMaskMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configRegisterMaskMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_configRegisterMap::cMapElement_configRegisterMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_luint & in_mRegisterAddress,
                                                              const GALGAS_luint & in_mRegisterWidth,
                                                              const GALGAS_configRegisterMaskMap & in_mConfigRegisterMaskMap,
                                                              const GALGAS_illegalMaskList & in_mIllegalMaskList
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mRegisterAddress (in_mRegisterAddress),
mProperty_mRegisterWidth (in_mRegisterWidth),
mProperty_mConfigRegisterMaskMap (in_mConfigRegisterMaskMap),
mProperty_mIllegalMaskList (in_mIllegalMaskList) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_configRegisterMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_configRegisterMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_configRegisterMap (mProperty_lkey, mProperty_mRegisterAddress, mProperty_mRegisterWidth, mProperty_mConfigRegisterMaskMap, mProperty_mIllegalMaskList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_configRegisterMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mRegisterAddress" ":") ;
  mProperty_mRegisterAddress.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mRegisterWidth" ":") ;
  mProperty_mRegisterWidth.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mConfigRegisterMaskMap" ":") ;
  mProperty_mConfigRegisterMaskMap.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mIllegalMaskList" ":") ;
  mProperty_mIllegalMaskList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_configRegisterMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_configRegisterMap * operand = (cMapElement_configRegisterMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterAddress.objectCompare (operand->mProperty_mRegisterAddress) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterWidth.objectCompare (operand->mProperty_mRegisterWidth) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConfigRegisterMaskMap.objectCompare (operand->mProperty_mConfigRegisterMaskMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIllegalMaskList.objectCompare (operand->mProperty_mIllegalMaskList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap::GALGAS_configRegisterMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap::GALGAS_configRegisterMap (const GALGAS_configRegisterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap & GALGAS_configRegisterMap::operator = (const GALGAS_configRegisterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap GALGAS_configRegisterMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_configRegisterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap GALGAS_configRegisterMap::constructor_mapWithMapToOverride (const GALGAS_configRegisterMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_configRegisterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap GALGAS_configRegisterMap::getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_configRegisterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_luint & inArgument0,
                                                    const GALGAS_luint & inArgument1,
                                                    const GALGAS_configRegisterMaskMap & inArgument2,
                                                    const GALGAS_illegalMaskList & inArgument3,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_configRegisterMap * p = nullptr ;
  macroMyNew (p, cMapElement_configRegisterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@configRegisterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap GALGAS_configRegisterMap::add_operation (const GALGAS_configRegisterMap & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_configRegisterMap result = *this ;
  cEnumerator_configRegisterMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mRegisterAddress (HERE), enumerator.current_mRegisterWidth (HERE), enumerator.current_mConfigRegisterMaskMap (HERE), enumerator.current_mIllegalMaskList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_luint inArgument0,
                                                 GALGAS_luint inArgument1,
                                                 GALGAS_configRegisterMaskMap inArgument2,
                                                 GALGAS_illegalMaskList inArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_configRegisterMap * p = nullptr ;
  macroMyNew (p, cMapElement_configRegisterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' configuration register is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_configRegisterMap_searchKey = "the '%K' configuration register is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_luint & outArgument0,
                                                 GALGAS_luint & outArgument1,
                                                 GALGAS_configRegisterMaskMap & outArgument2,
                                                 GALGAS_illegalMaskList & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_configRegisterMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    outArgument0 = p->mProperty_mRegisterAddress ;
    outArgument1 = p->mProperty_mRegisterWidth ;
    outArgument2 = p->mProperty_mConfigRegisterMaskMap ;
    outArgument3 = p->mProperty_mIllegalMaskList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_configRegisterMap::getter_mRegisterAddressForKey (const GALGAS_string & inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) attributes ;
  GALGAS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    result = p->mProperty_mRegisterAddress ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_configRegisterMap::getter_mRegisterWidthForKey (const GALGAS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) attributes ;
  GALGAS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    result = p->mProperty_mRegisterWidth ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap GALGAS_configRegisterMap::getter_mConfigRegisterMaskMapForKey (const GALGAS_string & inKey,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) attributes ;
  GALGAS_configRegisterMaskMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    result = p->mProperty_mConfigRegisterMaskMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList GALGAS_configRegisterMap::getter_mIllegalMaskListForKey (const GALGAS_string & inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) attributes ;
  GALGAS_illegalMaskList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    result = p->mProperty_mIllegalMaskList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMap::setter_setMRegisterAddressForKey (GALGAS_luint inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_configRegisterMap * p = (cMapElement_configRegisterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    p->mProperty_mRegisterAddress = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMap::setter_setMRegisterWidthForKey (GALGAS_luint inAttributeValue,
                                                               GALGAS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_configRegisterMap * p = (cMapElement_configRegisterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    p->mProperty_mRegisterWidth = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMap::setter_setMConfigRegisterMaskMapForKey (GALGAS_configRegisterMaskMap inAttributeValue,
                                                                       GALGAS_string inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_configRegisterMap * p = (cMapElement_configRegisterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    p->mProperty_mConfigRegisterMaskMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMap::setter_setMIllegalMaskListForKey (GALGAS_illegalMaskList inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_configRegisterMap * p = (cMapElement_configRegisterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    p->mProperty_mIllegalMaskList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_configRegisterMap * GALGAS_configRegisterMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_configRegisterMap * result = (cMapElement_configRegisterMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_configRegisterMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_configRegisterMap::cEnumerator_configRegisterMap (const GALGAS_configRegisterMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap_2D_element cEnumerator_configRegisterMap::current (LOCATION_ARGS) const {
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMap) ;
  return GALGAS_configRegisterMap_2D_element (p->mProperty_lkey, p->mProperty_mRegisterAddress, p->mProperty_mRegisterWidth, p->mProperty_mConfigRegisterMaskMap, p->mProperty_mIllegalMaskList) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_configRegisterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_configRegisterMap::current_mRegisterAddress (LOCATION_ARGS) const {
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMap) ;
  return p->mProperty_mRegisterAddress ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_configRegisterMap::current_mRegisterWidth (LOCATION_ARGS) const {
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMap) ;
  return p->mProperty_mRegisterWidth ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap cEnumerator_configRegisterMap::current_mConfigRegisterMaskMap (LOCATION_ARGS) const {
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMap) ;
  return p->mProperty_mConfigRegisterMaskMap ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList cEnumerator_configRegisterMap::current_mIllegalMaskList (LOCATION_ARGS) const {
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configRegisterMap) ;
  return p->mProperty_mIllegalMaskList ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_configRegisterMap::optional_searchKey (const GALGAS_string & inKey,
                                                   GALGAS_luint & outArgument0,
                                                   GALGAS_luint & outArgument1,
                                                   GALGAS_configRegisterMaskMap & outArgument2,
                                                   GALGAS_illegalMaskList & outArgument3) const {
  const cMapElement_configRegisterMap * p = (const cMapElement_configRegisterMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_configRegisterMap) ;
    outArgument0 = p->mProperty_mRegisterAddress ;
    outArgument1 = p->mProperty_mRegisterWidth ;
    outArgument2 = p->mProperty_mConfigRegisterMaskMap ;
    outArgument3 = p->mProperty_mIllegalMaskList ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @configRegisterMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configRegisterMap ("configRegisterMap",
                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_configRegisterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configRegisterMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_configRegisterMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configRegisterMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap GALGAS_configRegisterMap::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_configRegisterMap result ;
  const GALGAS_configRegisterMap * p = (const GALGAS_configRegisterMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_configRegisterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configRegisterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_piccoloDevice_5F_syntax::rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_ (GALGAS_piccoloDeviceModel & outArgument_outPiccoloDeviceModel,
                                                                                        C_Lexique_piccoloDevice_5F_lexique * inCompiler) {
  outArgument_outPiccoloDeviceModel.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_controller COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 11)) ;
  GALGAS_lstring var_deviceName_336 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 12)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 13)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_processor COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 14)) ;
  GALGAS_processorType var_processorType_388 ;
  GALGAS_lstring var_processorName_427 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 16)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_processorName_427.readProperty_string ().objectCompare (GALGAS_string ("pic18_60"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_processorType_388 = GALGAS_processorType::constructor_pic_31__38__5F__36__30_ (SOURCE_FILE ("piccoloDevice_syntax.galgas", 18)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsEqual, var_processorName_427.readProperty_string ().objectCompare (GALGAS_string ("pic18_80"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_processorType_388 = GALGAS_processorType::constructor_pic_31__38__5F__38__30_ (SOURCE_FILE ("piccoloDevice_syntax.galgas", 20)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, var_processorName_427.readProperty_string ().objectCompare (GALGAS_string ("mid-range"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_processorType_388 = GALGAS_processorType::constructor_midrange (SOURCE_FILE ("piccoloDevice_syntax.galgas", 22)) ;
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, var_processorName_427.readProperty_string ().objectCompare (GALGAS_string ("baseline"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_processorType_388 = GALGAS_processorType::constructor_baseline (SOURCE_FILE ("piccoloDevice_syntax.galgas", 24)) ;
          }
        }
        if (kBoolFalse == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 26)), GALGAS_string ("The '").add_operation (var_processorName_427.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 26)).add_operation (GALGAS_string ("' processor is not handled"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 26)), fixItArray4  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 26)) ;
          var_processorType_388.drop () ; // Release error dropped variable
        }
      }
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_romsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 29)) ;
  GALGAS_luint var_romSize_964 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 31)) ;
  GALGAS_uint var_eepromSize_990 ;
  GALGAS_uint var_eepromAddress_1013 ;
  switch (select_piccoloDevice_5F_syntax_0 (inCompiler)) {
  case 1: {
    var_eepromSize_990 = GALGAS_uint (uint32_t (0U)) ;
    var_eepromAddress_1013 = GALGAS_uint (uint32_t (0U)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_eepromsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 38)) ;
    GALGAS_luint var_l_5F_eepromSize_1125 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 39)) ;
    var_eepromSize_990 = var_l_5F_eepromSize_1125.readProperty_uint () ;
    inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 41)) ;
    GALGAS_luint var_l_5F_eepromAddress_1208 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 42)) ;
    var_eepromAddress_1013 = var_l_5F_eepromAddress_1208.readProperty_uint () ;
    inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 44)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 46)) ;
  GALGAS_luint var_bankCount_1312 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 48)) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    if (select_piccoloDevice_5F_syntax_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_unusedregister COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 51)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 52)) ;
      switch (select_piccoloDevice_5F_syntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 55)) ;
        inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 56)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 58)) ;
    }else{
      repeatFlag_5 = false ;
    }
  }
  GALGAS_ramBankTable var_ramBankTable_1521 = GALGAS_ramBankTable::constructor_emptyMap (SOURCE_FILE ("piccoloDevice_syntax.galgas", 60)) ;
  bool repeatFlag_6 = true ;
  while (repeatFlag_6) {
    if (select_piccoloDevice_5F_syntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_ram COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 63)) ;
      GALGAS_lstring var_ramName_1618 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 64)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 65)) ;
      GALGAS_luint var_ramStart_1660 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 66)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 67)) ;
      GALGAS_luint var_ramEnd_1704 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 68)) ;
      GALGAS_uintlist var_mirrorOffsetList_1719 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("piccoloDevice_syntax.galgas", 69)) ;
      switch (select_piccoloDevice_5F_syntax_4 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_mirrorat COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 72)) ;
        bool repeatFlag_7 = true ;
        while (repeatFlag_7) {
          GALGAS_luint var_mirrorStartAddress_1837 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 74)) ;
          var_mirrorOffsetList_1719.addAssign_operation (var_mirrorStartAddress_1837.readProperty_uint ().substract_operation (var_ramStart_1660.readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 75))  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 75)) ;
          if (select_piccoloDevice_5F_syntax_5 (inCompiler) == 2) {
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 77)) ;
          }else{
            repeatFlag_7 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 80)) ;
      {
      var_ramBankTable_1521.setter_insertKey (var_ramName_1618, var_ramStart_1660.readProperty_uint (), var_ramStart_1660.readProperty_uint (), var_ramEnd_1704.readProperty_uint ().add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 85)), var_mirrorOffsetList_1719, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 81)) ;
      }
    }else{
      repeatFlag_6 = false ;
    }
  }
  GALGAS_registerTable var_registerTable_2166 = GALGAS_registerTable::constructor_emptyMap (SOURCE_FILE ("piccoloDevice_syntax.galgas", 89)) ;
  bool repeatFlag_8 = true ;
  while (repeatFlag_8) {
    if (select_piccoloDevice_5F_syntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_register COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 92)) ;
      GALGAS_lstring var_registerName_2270 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 93)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 94)) ;
      GALGAS_uintlist var_registerAddressList_2300 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("piccoloDevice_syntax.galgas", 95)) ;
      bool repeatFlag_9 = true ;
      while (repeatFlag_9) {
        GALGAS_luint var_registerAddress_2382 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 97)) ;
        var_registerAddressList_2300.addAssign_operation (var_registerAddress_2382.readProperty_uint ()  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 98)) ;
        if (select_piccoloDevice_5F_syntax_7 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 100)) ;
        }else{
          repeatFlag_9 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 102)) ;
      GALGAS_uint var_sliceIndex_2499 = GALGAS_uint (uint32_t (8U)) ;
      GALGAS_bitSliceTable var_bitSliceTable_2522 = GALGAS_bitSliceTable::constructor_emptyMap (SOURCE_FILE ("piccoloDevice_syntax.galgas", 104)) ;
      GALGAS_string var_bitDefinitionString_2579 = GALGAS_string (" <") ;
      bool repeatFlag_10 = true ;
      while (repeatFlag_10) {
        switch (select_piccoloDevice_5F_syntax_9 (inCompiler)) {
        case 1: {
          GALGAS_uint var_sliceWidth_2648 = GALGAS_uint (uint32_t (0U)) ;
          bool repeatFlag_11 = true ;
          while (repeatFlag_11) {
            GALGAS_uint var_sliceBase_2716 = var_sliceIndex_2499 ;
            GALGAS_lstring var_sliceName_2776 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 111)) ;
            switch (select_piccoloDevice_5F_syntax_11 (inCompiler)) {
            case 1: {
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GALGAS_bool (kIsNotEqual, var_sliceWidth_2648.objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (kIsNotEqual, var_sliceWidth_2648.objectCompare (GALGAS_uint (uint32_t (1U)))) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 113)).boolEnum () ;
                if (kBoolTrue == test_12) {
                  TC_Array <C_FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (var_sliceName_2776.readProperty_location (), GALGAS_string ("a slice of 1 bit is expected for '").add_operation (var_sliceName_2776.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 114)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 114)), fixItArray13  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 114)) ;
                }
              }
              var_sliceWidth_2648 = GALGAS_uint (uint32_t (1U)) ;
              var_bitDefinitionString_2579.plusAssign_operation(var_sliceName_2776.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 117)) ;
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 119)) ;
              GALGAS_luint var_sliceSize_3106 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
              inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 120)) ;
              enumGalgasBool test_14 = kBoolTrue ;
              if (kBoolTrue == test_14) {
                test_14 = GALGAS_bool (kIsNotEqual, var_sliceWidth_2648.objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (kIsNotEqual, var_sliceWidth_2648.objectCompare (var_sliceSize_3106.readProperty_uint ())) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 121)).boolEnum () ;
                if (kBoolTrue == test_14) {
                  TC_Array <C_FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (var_sliceName_2776.readProperty_location (), GALGAS_string ("a slice of ").add_operation (var_sliceWidth_2648.getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)).add_operation (GALGAS_string (" bits is expected for '"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)).add_operation (var_sliceName_2776.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)), fixItArray15  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)) ;
                }
              }
              var_sliceWidth_2648 = var_sliceSize_3106.readProperty_uint () ;
              var_sliceBase_2716 = var_sliceBase_2716.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 125)).substract_operation (var_sliceSize_3106.readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 125)) ;
              inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 126)) ;
              var_bitDefinitionString_2579.plusAssign_operation(var_sliceName_2776.readProperty_string ().add_operation (GALGAS_string ("["), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)).add_operation (var_sliceSize_3106.readProperty_uint ().getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)) ;
            } break ;
            default:
              break ;
            }
            {
            var_bitSliceTable_2522.setter_insertKey (var_sliceName_2776, var_sliceIndex_2499.substract_operation (var_sliceWidth_2648, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 129)), var_sliceWidth_2648, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 129)) ;
            }
            if (select_piccoloDevice_5F_syntax_10 (inCompiler) == 2) {
              inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 131)) ;
              var_bitDefinitionString_2579.plusAssign_operation(GALGAS_string ("/"), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 132)) ;
            }else{
              repeatFlag_11 = false ;
            }
          }
          var_sliceIndex_2499 = var_sliceIndex_2499.substract_operation (var_sliceWidth_2648, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 134)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 136)) ;
          var_bitDefinitionString_2579.plusAssign_operation(GALGAS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 137)) ;
          var_sliceIndex_2499.minusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 138)) ;
        } break ;
        default:
          break ;
        }
        if (select_piccoloDevice_5F_syntax_8 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 141)) ;
          var_bitDefinitionString_2579.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 142)) ;
        }else{
          repeatFlag_10 = false ;
        }
      }
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        test_16 = GALGAS_bool (kIsNotEqual, var_sliceIndex_2499.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_16) {
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (var_registerName_2270.readProperty_location (), GALGAS_string ("Incorrect bit definition for register '").add_operation (var_registerName_2270.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 145)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 145)), fixItArray17  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 145)) ;
        }
      }
      var_bitDefinitionString_2579.plusAssign_operation(GALGAS_string (">"), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 147)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 148)) ;
      {
      var_registerTable_2166.setter_insertKey (var_registerName_2270, var_registerAddressList_2300, GALGAS_uint (uint32_t (1U)), var_bitSliceTable_2522, var_bitDefinitionString_2579, GALGAS_registerProtection::constructor_publicRegister (SOURCE_FILE ("piccoloDevice_syntax.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 149)) ;
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 150)) ;
    }else{
      repeatFlag_8 = false ;
    }
  }
  GALGAS_configRegisterMap var_configRegisterMap_4197 = GALGAS_configRegisterMap::constructor_emptyMap (SOURCE_FILE ("piccoloDevice_syntax.galgas", 152)) ;
  bool repeatFlag_18 = true ;
  while (repeatFlag_18) {
    if (select_piccoloDevice_5F_syntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_configuration COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 155)) ;
      GALGAS_lstring var_configRegisterName_4314 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 156)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 157)) ;
      GALGAS_luint var_configRegisterAddress_4368 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 158)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_width COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 159)) ;
      GALGAS_luint var_configRegisterWidth_4428 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 160)) ;
      GALGAS_illegalMaskList var_illegalMaskList_4456 = GALGAS_illegalMaskList::constructor_emptyList (SOURCE_FILE ("piccoloDevice_syntax.galgas", 161)) ;
      bool repeatFlag_19 = true ;
      while (repeatFlag_19) {
        if (select_piccoloDevice_5F_syntax_13 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_illegal COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 164)) ;
          GALGAS_luint var_illegalValue_4567 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 165)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 166)) ;
          GALGAS_luint var_illegalMask_4621 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 167)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_message COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 168)) ;
          GALGAS_lstring var_illegalDescriptionString_4678 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 169)) ;
          var_illegalMaskList_4456.addAssign_operation (var_illegalValue_4567, var_illegalMask_4621, var_illegalDescriptionString_4678  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 170)) ;
        }else{
          repeatFlag_19 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 172)) ;
      GALGAS_configRegisterMaskMap var_configRegisterMaskMap_4805 = GALGAS_configRegisterMaskMap::constructor_emptyMap (SOURCE_FILE ("piccoloDevice_syntax.galgas", 173)) ;
      GALGAS_stringset var_settingNameSet_4870 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("piccoloDevice_syntax.galgas", 174)) ;
      bool repeatFlag_20 = true ;
      while (repeatFlag_20) {
        if (select_piccoloDevice_5F_syntax_14 (inCompiler) == 2) {
          GALGAS_lstring var_maskName_4962 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 177)) ;
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            test_21 = var_settingNameSet_4870.getter_hasKey (var_maskName_4962.readProperty_string () COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 178)).boolEnum () ;
            if (kBoolTrue == test_21) {
              TC_Array <C_FixItDescription> fixItArray22 ;
              inCompiler->emitSemanticError (var_maskName_4962.readProperty_location (), GALGAS_string ("The '").add_operation (var_maskName_4962.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 179)).add_operation (GALGAS_string ("' setting is already defined"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 179)), fixItArray22  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 179)) ;
            }
          }
          var_settingNameSet_4870.addAssign_operation (var_maskName_4962.readProperty_string ()  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 181)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 182)) ;
          GALGAS_luint var_maskValue_5193 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 183)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 184)) ;
          GALGAS_lstring var_maskDescriptionString_5252 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 185)) ;
          GALGAS_fieldSettingMap var_fieldSettingMap_5284 = GALGAS_fieldSettingMap::constructor_emptyMap (SOURCE_FILE ("piccoloDevice_syntax.galgas", 186)) ;
          bool repeatFlag_23 = true ;
          while (repeatFlag_23) {
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_setting COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 188)) ;
            GALGAS_luint var_value_5390 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 189)) ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 190)) ;
            GALGAS_luint var_mask_5441 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 191)) ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 192)) ;
            GALGAS_lstring var_descriptionString_5499 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 193)) ;
            {
            var_fieldSettingMap_5284.setter_insertKey (var_descriptionString_5499, var_value_5390.readProperty_uint (), var_mask_5441.readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 194)) ;
            }
            if (select_piccoloDevice_5F_syntax_15 (inCompiler) == 2) {
            }else{
              repeatFlag_23 = false ;
            }
          }
          {
          var_configRegisterMaskMap_4805.setter_insertKey (var_maskName_4962, var_maskValue_5193, var_maskDescriptionString_5252, var_fieldSettingMap_5284, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 197)) ;
          }
        }else{
          repeatFlag_20 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 199)) ;
      {
      var_configRegisterMap_4197.setter_insertKey (var_configRegisterName_4314, var_configRegisterAddress_4368, var_configRegisterWidth_4428, var_configRegisterMaskMap_4805, var_illegalMaskList_4456, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 200)) ;
      }
    }else{
      repeatFlag_18 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 208)) ;
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    test_24 = GALGAS_bool (kIsEqual, var_processorName_427.readProperty_string ().objectCompare (GALGAS_string ("pic18_60"))).operator_or (GALGAS_bool (kIsEqual, var_processorName_427.readProperty_string ().objectCompare (GALGAS_string ("pic18_80"))) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 210)).boolEnum () ;
    if (kBoolTrue == test_24) {
      GALGAS_uintlist joker_6126_5 ; // Joker input parameter
      GALGAS_uint joker_6126_4 ; // Joker input parameter
      GALGAS_bitSliceTable joker_6126_3 ; // Joker input parameter
      GALGAS_string joker_6126_2 ; // Joker input parameter
      GALGAS_registerProtection joker_6126_1 ; // Joker input parameter
      var_registerTable_2166.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("BSR"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 211)), joker_6126_5, joker_6126_4, joker_6126_3, joker_6126_2, joker_6126_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 211)) ;
      GALGAS_uintlist joker_6202_5 ; // Joker input parameter
      GALGAS_uint joker_6202_4 ; // Joker input parameter
      GALGAS_bitSliceTable joker_6202_3 ; // Joker input parameter
      GALGAS_string joker_6202_2 ; // Joker input parameter
      GALGAS_registerProtection joker_6202_1 ; // Joker input parameter
      var_registerTable_2166.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("TOSL"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 212)), joker_6202_5, joker_6202_4, joker_6202_3, joker_6202_2, joker_6202_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 212)) ;
      GALGAS_uintlist joker_6278_5 ; // Joker input parameter
      GALGAS_uint joker_6278_4 ; // Joker input parameter
      GALGAS_bitSliceTable joker_6278_3 ; // Joker input parameter
      GALGAS_string joker_6278_2 ; // Joker input parameter
      GALGAS_registerProtection joker_6278_1 ; // Joker input parameter
      var_registerTable_2166.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("TOSH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 213)), joker_6278_5, joker_6278_4, joker_6278_3, joker_6278_2, joker_6278_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 213)) ;
      GALGAS_uintlist joker_6354_5 ; // Joker input parameter
      GALGAS_uint joker_6354_4 ; // Joker input parameter
      GALGAS_bitSliceTable joker_6354_3 ; // Joker input parameter
      GALGAS_string joker_6354_2 ; // Joker input parameter
      GALGAS_registerProtection joker_6354_1 ; // Joker input parameter
      var_registerTable_2166.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("TOSU"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 214)), joker_6354_5, joker_6354_4, joker_6354_3, joker_6354_2, joker_6354_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 214)) ;
    }
  }
  GALGAS_string var_sharedBankName_6422 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_25 = kBoolTrue ;
  if (kBoolTrue == test_25) {
    test_25 = GALGAS_bool (kIsEqual, var_processorName_427.readProperty_string ().objectCompare (GALGAS_string ("mid-range"))).boolEnum () ;
    if (kBoolTrue == test_25) {
      cEnumerator_ramBankTable enumerator_6552 (var_ramBankTable_1521, kENUMERATION_UP) ;
      bool bool_26 = GALGAS_bool (kIsEqual, var_sharedBankName_6422.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      if (enumerator_6552.hasCurrentObject () && bool_26) {
        while (enumerator_6552.hasCurrentObject () && bool_26) {
          GALGAS_uint var_bankAccessibility_6635 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 220)).left_shift_operation (enumerator_6552.current_mFirstFreeAddress (HERE).right_shift_operation (GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 220)).getter_uint (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 220)) ;
          cEnumerator_uintlist enumerator_6696 (enumerator_6552.current_mMirrorOffsetList (HERE), kENUMERATION_UP) ;
          while (enumerator_6696.hasCurrentObject ()) {
            var_bankAccessibility_6635 = var_bankAccessibility_6635.operator_or (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)).left_shift_operation (enumerator_6552.current_mFirstFreeAddress (HERE).add_operation (enumerator_6696.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)).right_shift_operation (GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)).getter_uint (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)) ;
            enumerator_6696.gotoNextObject () ;
          }
          enumGalgasBool test_27 = kBoolTrue ;
          if (kBoolTrue == test_27) {
            test_27 = GALGAS_bool (kIsEqual, GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 224)).left_shift_operation (var_bankCount_1312.readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 224)).objectCompare (var_bankAccessibility_6635.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 224)).getter_bigint (SOURCE_FILE ("piccoloDevice_syntax.galgas", 224)))).boolEnum () ;
            if (kBoolTrue == test_27) {
              var_sharedBankName_6422 = enumerator_6552.current_lkey (HERE).readProperty_string () ;
            }
          }
          enumerator_6552.gotoNextObject () ;
          if (enumerator_6552.hasCurrentObject ()) {
            bool_26 = GALGAS_bool (kIsEqual, var_sharedBankName_6422.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
          }
        }
      }
    }
  }
  outArgument_outPiccoloDeviceModel = GALGAS_piccoloDeviceModel::constructor_new (var_deviceName_336, var_processorType_388, var_romSize_964, var_bankCount_1312, var_registerTable_2166, var_ramBankTable_1521, var_eepromSize_990, var_eepromAddress_1013, var_configRegisterMap_4197, var_sharedBankName_6422, inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 230)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_piccoloDevice_5F_syntax::rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_piccoloDevice_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_controller COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 11)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 12)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 13)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_processor COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 14)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 16)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_romsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 31)) ;
  switch (select_piccoloDevice_5F_syntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_eepromsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 38)) ;
    inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 39)) ;
    inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 41)) ;
    inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 42)) ;
    inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 44)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 48)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_piccoloDevice_5F_syntax_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_unusedregister COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 51)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 52)) ;
      switch (select_piccoloDevice_5F_syntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 55)) ;
        inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 56)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 58)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_piccoloDevice_5F_syntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_ram COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 63)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 64)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 65)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 66)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 67)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 68)) ;
      switch (select_piccoloDevice_5F_syntax_4 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_mirrorat COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 72)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 74)) ;
          if (select_piccoloDevice_5F_syntax_5 (inCompiler) == 2) {
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 77)) ;
          }else{
            repeatFlag_2 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 80)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    if (select_piccoloDevice_5F_syntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_register COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 92)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 93)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 94)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 97)) ;
        if (select_piccoloDevice_5F_syntax_7 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 100)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 102)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        switch (select_piccoloDevice_5F_syntax_9 (inCompiler)) {
        case 1: {
          bool repeatFlag_6 = true ;
          while (repeatFlag_6) {
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 111)) ;
            switch (select_piccoloDevice_5F_syntax_11 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 119)) ;
              inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 120)) ;
              inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 126)) ;
            } break ;
            default:
              break ;
            }
            if (select_piccoloDevice_5F_syntax_10 (inCompiler) == 2) {
              inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 131)) ;
            }else{
              repeatFlag_6 = false ;
            }
          }
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 136)) ;
        } break ;
        default:
          break ;
        }
        if (select_piccoloDevice_5F_syntax_8 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 141)) ;
        }else{
          repeatFlag_5 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 148)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 150)) ;
    }else{
      repeatFlag_3 = false ;
    }
  }
  bool repeatFlag_7 = true ;
  while (repeatFlag_7) {
    if (select_piccoloDevice_5F_syntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_configuration COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 155)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 156)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 157)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 158)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_width COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 159)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 160)) ;
      bool repeatFlag_8 = true ;
      while (repeatFlag_8) {
        if (select_piccoloDevice_5F_syntax_13 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_illegal COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 164)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 165)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 166)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 167)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_message COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 168)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 169)) ;
        }else{
          repeatFlag_8 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 172)) ;
      bool repeatFlag_9 = true ;
      while (repeatFlag_9) {
        if (select_piccoloDevice_5F_syntax_14 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 177)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 182)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 183)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 184)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 185)) ;
          bool repeatFlag_10 = true ;
          while (repeatFlag_10) {
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_setting COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 188)) ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 189)) ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 190)) ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 191)) ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 192)) ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 193)) ;
            if (select_piccoloDevice_5F_syntax_15 (inCompiler) == 2) {
            }else{
              repeatFlag_10 = false ;
            }
          }
        }else{
          repeatFlag_9 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 199)) ;
    }else{
      repeatFlag_7 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 208)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_piccoloDevice_5F_syntax::rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_indexing (C_Lexique_piccoloDevice_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_controller COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 11)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 12)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 13)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_processor COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 14)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 16)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_romsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 31)) ;
  switch (select_piccoloDevice_5F_syntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_eepromsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 38)) ;
    inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 39)) ;
    inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 41)) ;
    inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 42)) ;
    inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 44)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 48)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_piccoloDevice_5F_syntax_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_unusedregister COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 51)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 52)) ;
      switch (select_piccoloDevice_5F_syntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 55)) ;
        inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 56)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 58)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_piccoloDevice_5F_syntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_ram COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 63)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 64)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 65)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 66)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 67)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 68)) ;
      switch (select_piccoloDevice_5F_syntax_4 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_mirrorat COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 72)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 74)) ;
          if (select_piccoloDevice_5F_syntax_5 (inCompiler) == 2) {
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 77)) ;
          }else{
            repeatFlag_2 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 80)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    if (select_piccoloDevice_5F_syntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_register COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 92)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 93)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 94)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 97)) ;
        if (select_piccoloDevice_5F_syntax_7 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 100)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 102)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        switch (select_piccoloDevice_5F_syntax_9 (inCompiler)) {
        case 1: {
          bool repeatFlag_6 = true ;
          while (repeatFlag_6) {
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 111)) ;
            switch (select_piccoloDevice_5F_syntax_11 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 119)) ;
              inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 120)) ;
              inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 126)) ;
            } break ;
            default:
              break ;
            }
            if (select_piccoloDevice_5F_syntax_10 (inCompiler) == 2) {
              inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 131)) ;
            }else{
              repeatFlag_6 = false ;
            }
          }
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 136)) ;
        } break ;
        default:
          break ;
        }
        if (select_piccoloDevice_5F_syntax_8 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 141)) ;
        }else{
          repeatFlag_5 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 148)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 150)) ;
    }else{
      repeatFlag_3 = false ;
    }
  }
  bool repeatFlag_7 = true ;
  while (repeatFlag_7) {
    if (select_piccoloDevice_5F_syntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_configuration COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 155)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 156)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 157)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 158)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_width COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 159)) ;
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 160)) ;
      bool repeatFlag_8 = true ;
      while (repeatFlag_8) {
        if (select_piccoloDevice_5F_syntax_13 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_illegal COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 164)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 165)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 166)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 167)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_message COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 168)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 169)) ;
        }else{
          repeatFlag_8 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 172)) ;
      bool repeatFlag_9 = true ;
      while (repeatFlag_9) {
        if (select_piccoloDevice_5F_syntax_14 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 177)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 182)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 183)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 184)) ;
          inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 185)) ;
          bool repeatFlag_10 = true ;
          while (repeatFlag_10) {
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_setting COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 188)) ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 189)) ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 190)) ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 191)) ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 192)) ;
            inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 193)) ;
            if (select_piccoloDevice_5F_syntax_15 (inCompiler) == 2) {
            }else{
              repeatFlag_10 = false ;
            }
          }
        }else{
          repeatFlag_9 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 199)) ;
    }else{
      repeatFlag_7 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 208)) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRamList_2D_element::GALGAS_declarationInRamList_2D_element (void) :
mProperty_mDeclarationInRAM () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRamList_2D_element::~ GALGAS_declarationInRamList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRamList_2D_element::GALGAS_declarationInRamList_2D_element (const GALGAS_declarationInRam & inOperand0) :
mProperty_mDeclarationInRAM (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRamList_2D_element GALGAS_declarationInRamList_2D_element::constructor_new (const GALGAS_declarationInRam & in_mDeclarationInRAM,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declarationInRamList_2D_element result ;
  if (in_mDeclarationInRAM.isValid ()) {
    result = GALGAS_declarationInRamList_2D_element (in_mDeclarationInRAM) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_declarationInRamList_2D_element::objectCompare (const GALGAS_declarationInRamList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDeclarationInRAM.objectCompare (inOperand.mProperty_mDeclarationInRAM) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_declarationInRamList_2D_element::isValid (void) const {
  return mProperty_mDeclarationInRAM.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationInRamList_2D_element::drop (void) {
  mProperty_mDeclarationInRAM.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationInRamList_2D_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.addString ("<struct @declarationInRamList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mDeclarationInRAM.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @declarationInRamList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declarationInRamList_2D_element ("declarationInRamList-element",
                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_declarationInRamList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationInRamList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_declarationInRamList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationInRamList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRamList_2D_element GALGAS_declarationInRamList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_declarationInRamList_2D_element result ;
  const GALGAS_declarationInRamList_2D_element * p = (const GALGAS_declarationInRamList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_declarationInRamList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationInRamList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configDefinitionList_2D_element::GALGAS_configDefinitionList_2D_element (void) :
mProperty_mDefinitionLocation (),
mProperty_mSettingList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_configDefinitionList_2D_element::~ GALGAS_configDefinitionList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_configDefinitionList_2D_element::GALGAS_configDefinitionList_2D_element (const GALGAS_location & inOperand0,
                                                                                const GALGAS_configSettingList & inOperand1) :
mProperty_mDefinitionLocation (inOperand0),
mProperty_mSettingList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_configDefinitionList_2D_element GALGAS_configDefinitionList_2D_element::constructor_new (const GALGAS_location & in_mDefinitionLocation,
                                                                                                const GALGAS_configSettingList & in_mSettingList,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_configDefinitionList_2D_element result ;
  if (in_mDefinitionLocation.isValid () && in_mSettingList.isValid ()) {
    result = GALGAS_configDefinitionList_2D_element (in_mDefinitionLocation, in_mSettingList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_configDefinitionList_2D_element::objectCompare (const GALGAS_configDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDefinitionLocation.objectCompare (inOperand.mProperty_mDefinitionLocation) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSettingList.objectCompare (inOperand.mProperty_mSettingList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_configDefinitionList_2D_element::isValid (void) const {
  return mProperty_mDefinitionLocation.isValid () && mProperty_mSettingList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configDefinitionList_2D_element::drop (void) {
  mProperty_mDefinitionLocation.drop () ;
  mProperty_mSettingList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configDefinitionList_2D_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.addString ("<struct @configDefinitionList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mDefinitionLocation.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSettingList.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @configDefinitionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configDefinitionList_2D_element ("configDefinitionList-element",
                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_configDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configDefinitionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_configDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configDefinitionList_2D_element GALGAS_configDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_configDefinitionList_2D_element result ;
  const GALGAS_configDefinitionList_2D_element * p = (const GALGAS_configDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_configDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList_2D_element::GALGAS_immediatExpressionList_2D_element (void) :
mProperty_mExpression (),
mProperty_mErrorLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList_2D_element::~ GALGAS_immediatExpressionList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList_2D_element::GALGAS_immediatExpressionList_2D_element (const GALGAS_immediatExpression & inOperand0,
                                                                                    const GALGAS_location & inOperand1) :
mProperty_mExpression (inOperand0),
mProperty_mErrorLocation (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList_2D_element GALGAS_immediatExpressionList_2D_element::constructor_new (const GALGAS_immediatExpression & in_mExpression,
                                                                                                    const GALGAS_location & in_mErrorLocation,
                                                                                                    Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_immediatExpressionList_2D_element result ;
  if (in_mExpression.isValid () && in_mErrorLocation.isValid ()) {
    result = GALGAS_immediatExpressionList_2D_element (in_mExpression, in_mErrorLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatExpressionList_2D_element::objectCompare (const GALGAS_immediatExpressionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mErrorLocation.objectCompare (inOperand.mProperty_mErrorLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_immediatExpressionList_2D_element::isValid (void) const {
  return mProperty_mExpression.isValid () && mProperty_mErrorLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatExpressionList_2D_element::drop (void) {
  mProperty_mExpression.drop () ;
  mProperty_mErrorLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatExpressionList_2D_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.addString ("<struct @immediatExpressionList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @immediatExpressionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatExpressionList_2D_element ("immediatExpressionList-element",
                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatExpressionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatExpressionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatExpressionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatExpressionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList_2D_element GALGAS_immediatExpressionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_immediatExpressionList_2D_element result ;
  const GALGAS_immediatExpressionList_2D_element * p = (const GALGAS_immediatExpressionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatExpressionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatExpressionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList_2D_element::GALGAS_baseline_5F_instructionList_2D_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList_2D_element::~ GALGAS_baseline_5F_instructionList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList_2D_element::GALGAS_baseline_5F_instructionList_2D_element (const GALGAS_baseline_5F_instruction & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList_2D_element GALGAS_baseline_5F_instructionList_2D_element::constructor_new (const GALGAS_baseline_5F_instruction & in_mInstruction,
                                                                                                              Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instructionList_2D_element result ;
  if (in_mInstruction.isValid ()) {
    result = GALGAS_baseline_5F_instructionList_2D_element (in_mInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_instructionList_2D_element::objectCompare (const GALGAS_baseline_5F_instructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_instructionList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instructionList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instructionList_2D_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.addString ("<struct @baseline_instructionList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instructionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instructionList_2D_element ("baseline_instructionList-element",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instructionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instructionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList_2D_element GALGAS_baseline_5F_instructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instructionList_2D_element result ;
  const GALGAS_baseline_5F_instructionList_2D_element * p = (const GALGAS_baseline_5F_instructionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_partList_2D_element::GALGAS_baseline_5F_partList_2D_element (void) :
mProperty_mCondition (),
mProperty_mInstructionList (),
mProperty_mEndOfPartLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_partList_2D_element::~ GALGAS_baseline_5F_partList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_partList_2D_element::GALGAS_baseline_5F_partList_2D_element (const GALGAS_baseline_5F_conditionExpression & inOperand0,
                                                                                const GALGAS_baseline_5F_instructionList & inOperand1,
                                                                                const GALGAS_location & inOperand2) :
mProperty_mCondition (inOperand0),
mProperty_mInstructionList (inOperand1),
mProperty_mEndOfPartLocation (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_partList_2D_element GALGAS_baseline_5F_partList_2D_element::constructor_new (const GALGAS_baseline_5F_conditionExpression & in_mCondition,
                                                                                                const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                                                                const GALGAS_location & in_mEndOfPartLocation,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_partList_2D_element result ;
  if (in_mCondition.isValid () && in_mInstructionList.isValid () && in_mEndOfPartLocation.isValid ()) {
    result = GALGAS_baseline_5F_partList_2D_element (in_mCondition, in_mInstructionList, in_mEndOfPartLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_partList_2D_element::objectCompare (const GALGAS_baseline_5F_partList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mCondition.objectCompare (inOperand.mProperty_mCondition) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfPartLocation.objectCompare (inOperand.mProperty_mEndOfPartLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_partList_2D_element::isValid (void) const {
  return mProperty_mCondition.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfPartLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_partList_2D_element::drop (void) {
  mProperty_mCondition.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfPartLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_partList_2D_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.addString ("<struct @baseline_partList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mCondition.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mEndOfPartLocation.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_partList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_partList_2D_element ("baseline_partList-element",
                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_partList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_partList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_partList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_partList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_partList_2D_element GALGAS_baseline_5F_partList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_partList_2D_element result ;
  const GALGAS_baseline_5F_partList_2D_element * p = (const GALGAS_baseline_5F_partList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_partList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_partList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::~ GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element (const GALGAS_baseline_5F_intermediate_5F_instruction & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::constructor_new (const GALGAS_baseline_5F_intermediate_5F_instruction & in_mInstruction,
                                                                                                                                              Compiler * /* inCompiler */
                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element result ;
  if (in_mInstruction.isValid ()) {
    result = GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element (in_mInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::description (String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString.addString ("<struct @baseline_intermediate_instructionList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instructionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element ("baseline_intermediate_instructionList-element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element result ;
  const GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element * p = (const GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::GALGAS_baseline_5F_assembly_5F_instructionList_2D_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::~ GALGAS_baseline_5F_assembly_5F_instructionList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::GALGAS_baseline_5F_assembly_5F_instructionList_2D_element (const GALGAS_baseline_5F_assembly_5F_instruction & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instructionList_2D_element GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::constructor_new (const GALGAS_baseline_5F_assembly_5F_instruction & in_mInstruction,
                                                                                                                                      Compiler * /* inCompiler */
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instructionList_2D_element result ;
  if (in_mInstruction.isValid ()) {
    result = GALGAS_baseline_5F_assembly_5F_instructionList_2D_element (in_mInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::objectCompare (const GALGAS_baseline_5F_assembly_5F_instructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.addString ("<struct @baseline_assembly_instructionList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_instructionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instructionList_2D_element ("baseline_assembly_instructionList-element",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instructionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instructionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instructionList_2D_element GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instructionList_2D_element result ;
  const GALGAS_baseline_5F_assembly_5F_instructionList_2D_element * p = (const GALGAS_baseline_5F_assembly_5F_instructionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList_2D_element::GALGAS_midrange_5F_instructionList_2D_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList_2D_element::~ GALGAS_midrange_5F_instructionList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList_2D_element::GALGAS_midrange_5F_instructionList_2D_element (const GALGAS_midrange_5F_instruction & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList_2D_element GALGAS_midrange_5F_instructionList_2D_element::constructor_new (const GALGAS_midrange_5F_instruction & in_mInstruction,
                                                                                                              Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instructionList_2D_element result ;
  if (in_mInstruction.isValid ()) {
    result = GALGAS_midrange_5F_instructionList_2D_element (in_mInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_midrange_5F_instructionList_2D_element::objectCompare (const GALGAS_midrange_5F_instructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_instructionList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instructionList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instructionList_2D_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.addString ("<struct @midrange_instructionList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instructionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instructionList_2D_element ("midrange_instructionList-element",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instructionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instructionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList_2D_element GALGAS_midrange_5F_instructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instructionList_2D_element result ;
  const GALGAS_midrange_5F_instructionList_2D_element * p = (const GALGAS_midrange_5F_instructionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_partList_2D_element::GALGAS_midrange_5F_partList_2D_element (void) :
mProperty_mCondition (),
mProperty_mInstructionList (),
mProperty_mEndOfPartLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_partList_2D_element::~ GALGAS_midrange_5F_partList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_partList_2D_element::GALGAS_midrange_5F_partList_2D_element (const GALGAS_midrange_5F_conditionExpression & inOperand0,
                                                                                const GALGAS_midrange_5F_instructionList & inOperand1,
                                                                                const GALGAS_location & inOperand2) :
mProperty_mCondition (inOperand0),
mProperty_mInstructionList (inOperand1),
mProperty_mEndOfPartLocation (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_partList_2D_element GALGAS_midrange_5F_partList_2D_element::constructor_new (const GALGAS_midrange_5F_conditionExpression & in_mCondition,
                                                                                                const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                const GALGAS_location & in_mEndOfPartLocation,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_partList_2D_element result ;
  if (in_mCondition.isValid () && in_mInstructionList.isValid () && in_mEndOfPartLocation.isValid ()) {
    result = GALGAS_midrange_5F_partList_2D_element (in_mCondition, in_mInstructionList, in_mEndOfPartLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_midrange_5F_partList_2D_element::objectCompare (const GALGAS_midrange_5F_partList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mCondition.objectCompare (inOperand.mProperty_mCondition) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfPartLocation.objectCompare (inOperand.mProperty_mEndOfPartLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_partList_2D_element::isValid (void) const {
  return mProperty_mCondition.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfPartLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_partList_2D_element::drop (void) {
  mProperty_mCondition.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfPartLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_partList_2D_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.addString ("<struct @midrange_partList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mCondition.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mEndOfPartLocation.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_partList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_partList_2D_element ("midrange_partList-element",
                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_partList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_partList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_partList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_partList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_partList_2D_element GALGAS_midrange_5F_partList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_partList_2D_element result ;
  const GALGAS_midrange_5F_partList_2D_element * p = (const GALGAS_midrange_5F_partList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_partList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_partList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::~ GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element (const GALGAS_midrange_5F_intermediate_5F_instruction & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::constructor_new (const GALGAS_midrange_5F_intermediate_5F_instruction & in_mInstruction,
                                                                                                                                              Compiler * /* inCompiler */
                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element result ;
  if (in_mInstruction.isValid ()) {
    result = GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element (in_mInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::description (String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString.addString ("<struct @midrange_intermediate_instructionList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instructionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element ("midrange_intermediate_instructionList-element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element result ;
  const GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element * p = (const GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList_2D_element::GALGAS_pic_31__38_InstructionList_2D_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList_2D_element::~ GALGAS_pic_31__38_InstructionList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList_2D_element::GALGAS_pic_31__38_InstructionList_2D_element (const GALGAS_pic_31__38_PiccoloInstruction & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList_2D_element GALGAS_pic_31__38_InstructionList_2D_element::constructor_new (const GALGAS_pic_31__38_PiccoloInstruction & in_mInstruction,
                                                                                                            Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionList_2D_element result ;
  if (in_mInstruction.isValid ()) {
    result = GALGAS_pic_31__38_InstructionList_2D_element (in_mInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_InstructionList_2D_element::objectCompare (const GALGAS_pic_31__38_InstructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_InstructionList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InstructionList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InstructionList_2D_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.addString ("<struct @pic18InstructionList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18InstructionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_InstructionList_2D_element ("pic18InstructionList-element",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_InstructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_InstructionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_InstructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_InstructionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList_2D_element GALGAS_pic_31__38_InstructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionList_2D_element result ;
  const GALGAS_pic_31__38_InstructionList_2D_element * p = (const GALGAS_pic_31__38_InstructionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_InstructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18InstructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList_2D_element::GALGAS_pic_31__38_DoWhilePartList_2D_element (void) :
mProperty_mCondition (),
mProperty_mInstructionList (),
mProperty_mEndOfPartLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList_2D_element::~ GALGAS_pic_31__38_DoWhilePartList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList_2D_element::GALGAS_pic_31__38_DoWhilePartList_2D_element (const GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                                                            const GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                            const GALGAS_location & inOperand2) :
mProperty_mCondition (inOperand0),
mProperty_mInstructionList (inOperand1),
mProperty_mEndOfPartLocation (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList_2D_element GALGAS_pic_31__38_DoWhilePartList_2D_element::constructor_new (const GALGAS_pic_31__38_ConditionExpression & in_mCondition,
                                                                                                            const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                            const GALGAS_location & in_mEndOfPartLocation,
                                                                                                            Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_DoWhilePartList_2D_element result ;
  if (in_mCondition.isValid () && in_mInstructionList.isValid () && in_mEndOfPartLocation.isValid ()) {
    result = GALGAS_pic_31__38_DoWhilePartList_2D_element (in_mCondition, in_mInstructionList, in_mEndOfPartLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_DoWhilePartList_2D_element::objectCompare (const GALGAS_pic_31__38_DoWhilePartList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mCondition.objectCompare (inOperand.mProperty_mCondition) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfPartLocation.objectCompare (inOperand.mProperty_mEndOfPartLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_DoWhilePartList_2D_element::isValid (void) const {
  return mProperty_mCondition.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfPartLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_DoWhilePartList_2D_element::drop (void) {
  mProperty_mCondition.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfPartLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_DoWhilePartList_2D_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.addString ("<struct @pic18DoWhilePartList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mCondition.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mEndOfPartLocation.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18DoWhilePartList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList_2D_element ("pic18DoWhilePartList-element",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_DoWhilePartList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_DoWhilePartList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_DoWhilePartList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList_2D_element GALGAS_pic_31__38_DoWhilePartList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_DoWhilePartList_2D_element result ;
  const GALGAS_pic_31__38_DoWhilePartList_2D_element * p = (const GALGAS_pic_31__38_DoWhilePartList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_DoWhilePartList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18DoWhilePartList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkpicList_2D_element::GALGAS_checkpicList_2D_element (void) :
mProperty_mErrorLocation (),
mProperty_mValueList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkpicList_2D_element::~ GALGAS_checkpicList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkpicList_2D_element::GALGAS_checkpicList_2D_element (const GALGAS_location & inOperand0,
                                                                const GALGAS_lstringlist & inOperand1) :
mProperty_mErrorLocation (inOperand0),
mProperty_mValueList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkpicList_2D_element GALGAS_checkpicList_2D_element::constructor_new (const GALGAS_location & in_mErrorLocation,
                                                                                const GALGAS_lstringlist & in_mValueList,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_checkpicList_2D_element result ;
  if (in_mErrorLocation.isValid () && in_mValueList.isValid ()) {
    result = GALGAS_checkpicList_2D_element (in_mErrorLocation, in_mValueList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_checkpicList_2D_element::objectCompare (const GALGAS_checkpicList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mErrorLocation.objectCompare (inOperand.mProperty_mErrorLocation) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValueList.objectCompare (inOperand.mProperty_mValueList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_checkpicList_2D_element::isValid (void) const {
  return mProperty_mErrorLocation.isValid () && mProperty_mValueList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkpicList_2D_element::drop (void) {
  mProperty_mErrorLocation.drop () ;
  mProperty_mValueList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkpicList_2D_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.addString ("<struct @checkpicList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mValueList.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @checkpicList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_checkpicList_2D_element ("checkpicList-element",
                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_checkpicList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkpicList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_checkpicList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_checkpicList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkpicList_2D_element GALGAS_checkpicList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_checkpicList_2D_element result ;
  const GALGAS_checkpicList_2D_element * p = (const GALGAS_checkpicList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_checkpicList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkpicList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList_2D_element::GALGAS_pic_31__38_CaseExpressionList_2D_element (void) :
mProperty_mCaseItem () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList_2D_element::~ GALGAS_pic_31__38_CaseExpressionList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList_2D_element::GALGAS_pic_31__38_CaseExpressionList_2D_element (const GALGAS_pic_31__38_AbstractCaseItem & inOperand0) :
mProperty_mCaseItem (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList_2D_element GALGAS_pic_31__38_CaseExpressionList_2D_element::constructor_new (const GALGAS_pic_31__38_AbstractCaseItem & in_mCaseItem,
                                                                                                                  Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_CaseExpressionList_2D_element result ;
  if (in_mCaseItem.isValid ()) {
    result = GALGAS_pic_31__38_CaseExpressionList_2D_element (in_mCaseItem) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_CaseExpressionList_2D_element::objectCompare (const GALGAS_pic_31__38_CaseExpressionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mCaseItem.objectCompare (inOperand.mProperty_mCaseItem) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_CaseExpressionList_2D_element::isValid (void) const {
  return mProperty_mCaseItem.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_CaseExpressionList_2D_element::drop (void) {
  mProperty_mCaseItem.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_CaseExpressionList_2D_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.addString ("<struct @pic18CaseExpressionList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mCaseItem.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18CaseExpressionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList_2D_element ("pic18CaseExpressionList-element",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_CaseExpressionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_CaseExpressionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_CaseExpressionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList_2D_element GALGAS_pic_31__38_CaseExpressionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_CaseExpressionList_2D_element result ;
  const GALGAS_pic_31__38_CaseExpressionList_2D_element * p = (const GALGAS_pic_31__38_CaseExpressionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_CaseExpressionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18CaseExpressionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element (void) :
mProperty_mStartOfCase (),
mProperty_mCaseExpressionList (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::~ GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element (const GALGAS_location & inOperand0,
                                                                                                                const GALGAS_pic_31__38_CaseExpressionList & inOperand1,
                                                                                                                const GALGAS_pic_31__38_InstructionList & inOperand2) :
mProperty_mStartOfCase (inOperand0),
mProperty_mCaseExpressionList (inOperand1),
mProperty_mInstructionList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::constructor_new (const GALGAS_location & in_mStartOfCase,
                                                                                                                                const GALGAS_pic_31__38_CaseExpressionList & in_mCaseExpressionList,
                                                                                                                                const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                                Compiler * /* inCompiler */
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element result ;
  if (in_mStartOfCase.isValid () && in_mCaseExpressionList.isValid () && in_mInstructionList.isValid ()) {
    result = GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element (in_mStartOfCase, in_mCaseExpressionList, in_mInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::objectCompare (const GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mStartOfCase.objectCompare (inOperand.mProperty_mStartOfCase) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCaseExpressionList.objectCompare (inOperand.mProperty_mCaseExpressionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::isValid (void) const {
  return mProperty_mStartOfCase.isValid () && mProperty_mCaseExpressionList.isValid () && mProperty_mInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::drop (void) {
  mProperty_mStartOfCase.drop () ;
  mProperty_mCaseExpressionList.drop () ;
  mProperty_mInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.addString ("<struct @pic18SwitchInstructionCaseList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mStartOfCase.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mCaseExpressionList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18SwitchInstructionCaseList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element ("pic18SwitchInstructionCaseList-element",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element result ;
  const GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element * p = (const GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18SwitchInstructionCaseList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList_2D_element::GALGAS_ipic_31__38_SequentialInstructionList_2D_element (void) :
mProperty_mInstruction (),
mProperty_mMin (),
mProperty_mMax () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList_2D_element::~ GALGAS_ipic_31__38_SequentialInstructionList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList_2D_element::GALGAS_ipic_31__38_SequentialInstructionList_2D_element (const GALGAS_ipic_31__38_SequentialInstruction & inOperand0,
                                                                                                                  const GALGAS_uint & inOperand1,
                                                                                                                  const GALGAS_uint & inOperand2) :
mProperty_mInstruction (inOperand0),
mProperty_mMin (inOperand1),
mProperty_mMax (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList_2D_element GALGAS_ipic_31__38_SequentialInstructionList_2D_element::constructor_new (const GALGAS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                                                                                  const GALGAS_uint & in_mMin,
                                                                                                                                  const GALGAS_uint & in_mMax,
                                                                                                                                  Compiler * /* inCompiler */
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38_SequentialInstructionList_2D_element result ;
  if (in_mInstruction.isValid () && in_mMin.isValid () && in_mMax.isValid ()) {
    result = GALGAS_ipic_31__38_SequentialInstructionList_2D_element (in_mInstruction, in_mMin, in_mMax) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38_SequentialInstructionList_2D_element::objectCompare (const GALGAS_ipic_31__38_SequentialInstructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMin.objectCompare (inOperand.mProperty_mMin) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMax.objectCompare (inOperand.mProperty_mMax) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ipic_31__38_SequentialInstructionList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () && mProperty_mMin.isValid () && mProperty_mMax.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
  mProperty_mMin.drop () ;
  mProperty_mMax.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList_2D_element::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.addString ("<struct @ipic18SequentialInstructionList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mMin.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mMax.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18SequentialInstructionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList_2D_element ("ipic18SequentialInstructionList-element",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_SequentialInstructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_SequentialInstructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_SequentialInstructionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList_2D_element GALGAS_ipic_31__38_SequentialInstructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_SequentialInstructionList_2D_element result ;
  const GALGAS_ipic_31__38_SequentialInstructionList_2D_element * p = (const GALGAS_ipic_31__38_SequentialInstructionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_SequentialInstructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18SequentialInstructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchOverflowMap_2D_element::GALGAS_branchOverflowMap_2D_element (void) :
mProperty_key (),
mProperty_mList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchOverflowMap_2D_element::~ GALGAS_branchOverflowMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchOverflowMap_2D_element::GALGAS_branchOverflowMap_2D_element (const GALGAS_string & inOperand0,
                                                                          const GALGAS_stringlist & inOperand1) :
mProperty_key (inOperand0),
mProperty_mList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchOverflowMap_2D_element GALGAS_branchOverflowMap_2D_element::constructor_new (const GALGAS_string & in_key,
                                                                                          const GALGAS_stringlist & in_mList,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_branchOverflowMap_2D_element result ;
  if (in_key.isValid () && in_mList.isValid ()) {
    result = GALGAS_branchOverflowMap_2D_element (in_key, in_mList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_branchOverflowMap_2D_element::objectCompare (const GALGAS_branchOverflowMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_key.objectCompare (inOperand.mProperty_key) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mList.objectCompare (inOperand.mProperty_mList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_branchOverflowMap_2D_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_mList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_branchOverflowMap_2D_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_mList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_branchOverflowMap_2D_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.addString ("<struct @branchOverflowMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_key.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mList.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @branchOverflowMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_branchOverflowMap_2D_element ("branchOverflowMap-element",
                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_branchOverflowMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchOverflowMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_branchOverflowMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_branchOverflowMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchOverflowMap_2D_element GALGAS_branchOverflowMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_branchOverflowMap_2D_element result ;
  const GALGAS_branchOverflowMap_2D_element * p = (const GALGAS_branchOverflowMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_branchOverflowMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("branchOverflowMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_codeList_2D_element::GALGAS_codeList_2D_element (void) :
mProperty_mAssemblyCode (),
mProperty_mBinaryCode () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_codeList_2D_element::~ GALGAS_codeList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_codeList_2D_element::GALGAS_codeList_2D_element (const GALGAS_string & inOperand0,
                                                        const GALGAS_uintlist & inOperand1) :
mProperty_mAssemblyCode (inOperand0),
mProperty_mBinaryCode (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_codeList_2D_element GALGAS_codeList_2D_element::constructor_new (const GALGAS_string & in_mAssemblyCode,
                                                                        const GALGAS_uintlist & in_mBinaryCode,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList_2D_element result ;
  if (in_mAssemblyCode.isValid () && in_mBinaryCode.isValid ()) {
    result = GALGAS_codeList_2D_element (in_mAssemblyCode, in_mBinaryCode) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_codeList_2D_element::objectCompare (const GALGAS_codeList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mAssemblyCode.objectCompare (inOperand.mProperty_mAssemblyCode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBinaryCode.objectCompare (inOperand.mProperty_mBinaryCode) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_codeList_2D_element::isValid (void) const {
  return mProperty_mAssemblyCode.isValid () && mProperty_mBinaryCode.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_codeList_2D_element::drop (void) {
  mProperty_mAssemblyCode.drop () ;
  mProperty_mBinaryCode.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_codeList_2D_element::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.addString ("<struct @codeList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mAssemblyCode.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mBinaryCode.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @codeList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_codeList_2D_element ("codeList-element",
                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_codeList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_codeList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_codeList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_codeList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_codeList_2D_element GALGAS_codeList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_codeList_2D_element result ;
  const GALGAS_codeList_2D_element * p = (const GALGAS_codeList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_codeList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("codeList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_clusterList_2D_element::GALGAS_clusterList_2D_element (void) :
mProperty_mBlockList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_clusterList_2D_element::~ GALGAS_clusterList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_clusterList_2D_element::GALGAS_clusterList_2D_element (const GALGAS_ipic_31__38_BlockList & inOperand0) :
mProperty_mBlockList (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_clusterList_2D_element GALGAS_clusterList_2D_element::constructor_new (const GALGAS_ipic_31__38_BlockList & in_mBlockList,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_clusterList_2D_element result ;
  if (in_mBlockList.isValid ()) {
    result = GALGAS_clusterList_2D_element (in_mBlockList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_clusterList_2D_element::objectCompare (const GALGAS_clusterList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mBlockList.objectCompare (inOperand.mProperty_mBlockList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_clusterList_2D_element::isValid (void) const {
  return mProperty_mBlockList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_clusterList_2D_element::drop (void) {
  mProperty_mBlockList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_clusterList_2D_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.addString ("<struct @clusterList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mBlockList.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @clusterList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_clusterList_2D_element ("clusterList-element",
                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_clusterList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_clusterList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_clusterList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_clusterList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_clusterList_2D_element GALGAS_clusterList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_clusterList_2D_element result ;
  const GALGAS_clusterList_2D_element * p = (const GALGAS_clusterList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_clusterList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("clusterList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @registerExpression reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_registerExpression::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterName.printNonNullClassInstanceProperties ("mRegisterName") ;
    mProperty_mOffset.printNonNullClassInstanceProperties ("mOffset") ;
    mProperty_mEndOfOffsetExpression.printNonNullClassInstanceProperties ("mEndOfOffsetExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_registerExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_registerExpression * p = (const cPtr_registerExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_registerExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterName.objectCompare (p->mProperty_mRegisterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOffset.objectCompare (p->mProperty_mOffset) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfOffsetExpression.objectCompare (p->mProperty_mEndOfOffsetExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_registerExpression::objectCompare (const GALGAS_registerExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression::GALGAS_registerExpression (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression::GALGAS_registerExpression (const cPtr_registerExpression * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_registerExpression) ;
}
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

void GALGAS_registerExpression::setter_setMRegisterName (GALGAS_lstring inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_registerExpression * p = (cPtr_registerExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerExpression) ;
    p->mProperty_mRegisterName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerExpression::setter_setMOffset (GALGAS_immediatExpression inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_registerExpression * p = (cPtr_registerExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerExpression) ;
    p->mProperty_mOffset = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerExpression::setter_setMEndOfOffsetExpression (GALGAS_location inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_registerExpression * p = (cPtr_registerExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerExpression) ;
    p->mProperty_mEndOfOffsetExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_registerExpression::readProperty_mRegisterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_registerExpression * p = (cPtr_registerExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerExpression) ;
    return p->mProperty_mRegisterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_registerExpression::readProperty_mOffset (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_registerExpression * p = (cPtr_registerExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerExpression) ;
    return p->mProperty_mOffset ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_registerExpression::readProperty_mEndOfOffsetExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_registerExpression * p = (cPtr_registerExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerExpression) ;
    return p->mProperty_mEndOfOffsetExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @registerExpression class
//--------------------------------------------------------------------------------------------------

cPtr_registerExpression::cPtr_registerExpression (const GALGAS_lstring & in_mRegisterName,
                                                  const GALGAS_immediatExpression & in_mOffset,
                                                  const GALGAS_location & in_mEndOfOffsetExpression
                                                  COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mRegisterName (in_mRegisterName),
mProperty_mOffset (in_mOffset),
mProperty_mEndOfOffsetExpression (in_mEndOfOffsetExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_registerExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerExpression ;
}

void cPtr_registerExpression::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.addString ("[@registerExpression:") ;
  mProperty_mRegisterName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mOffset.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEndOfOffsetExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_registerExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_registerExpression (mProperty_mRegisterName, mProperty_mOffset, mProperty_mEndOfOffsetExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @registerExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerExpression ("registerExpression",
                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_registerExpression::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_registerExpression result ;
  const GALGAS_registerExpression * p = (const GALGAS_registerExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_registerExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @byteDeclarationInRam reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_byteDeclarationInRam::printNonNullClassInstanceProperties (void) const {
    cPtr_declarationInRam::printNonNullClassInstanceProperties () ;
    mProperty_mName.printNonNullClassInstanceProperties ("mName") ;
    mProperty_mSizeExpression.printNonNullClassInstanceProperties ("mSizeExpression") ;
    mProperty_mBitSliceTable.printNonNullClassInstanceProperties ("mBitSliceTable") ;
    mProperty_mBitDefinitionString.printNonNullClassInstanceProperties ("mBitDefinitionString") ;
    mProperty_mProtection.printNonNullClassInstanceProperties ("mProtection") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_byteDeclarationInRam::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_byteDeclarationInRam * p = (const cPtr_byteDeclarationInRam *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
  if (kOperandEqual == result) {
    result = mProperty_mName.objectCompare (p->mProperty_mName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSizeExpression.objectCompare (p->mProperty_mSizeExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitSliceTable.objectCompare (p->mProperty_mBitSliceTable) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitDefinitionString.objectCompare (p->mProperty_mBitDefinitionString) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mProtection.objectCompare (p->mProperty_mProtection) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_byteDeclarationInRam::objectCompare (const GALGAS_byteDeclarationInRam & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_byteDeclarationInRam::GALGAS_byteDeclarationInRam (void) :
GALGAS_declarationInRam () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_byteDeclarationInRam::GALGAS_byteDeclarationInRam (const cPtr_byteDeclarationInRam * inSourcePtr) :
GALGAS_declarationInRam (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_byteDeclarationInRam) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_byteDeclarationInRam GALGAS_byteDeclarationInRam::constructor_new (const GALGAS_lstring & inAttribute_mName,
                                                                          const GALGAS_immediatExpression & inAttribute_mSizeExpression,
                                                                          const GALGAS_bitSliceTable & inAttribute_mBitSliceTable,
                                                                          const GALGAS_string & inAttribute_mBitDefinitionString,
                                                                          const GALGAS_registerProtection & inAttribute_mProtection
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_byteDeclarationInRam result ;
  if (inAttribute_mName.isValid () && inAttribute_mSizeExpression.isValid () && inAttribute_mBitSliceTable.isValid () && inAttribute_mBitDefinitionString.isValid () && inAttribute_mProtection.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_byteDeclarationInRam (inAttribute_mName, inAttribute_mSizeExpression, inAttribute_mBitSliceTable, inAttribute_mBitDefinitionString, inAttribute_mProtection COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_byteDeclarationInRam::setter_setMName (GALGAS_lstring inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    p->mProperty_mName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_byteDeclarationInRam::setter_setMSizeExpression (GALGAS_immediatExpression inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    p->mProperty_mSizeExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_byteDeclarationInRam::setter_setMBitSliceTable (GALGAS_bitSliceTable inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    p->mProperty_mBitSliceTable = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_byteDeclarationInRam::setter_setMBitDefinitionString (GALGAS_string inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    p->mProperty_mBitDefinitionString = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_byteDeclarationInRam::setter_setMProtection (GALGAS_registerProtection inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    p->mProperty_mProtection = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_byteDeclarationInRam::readProperty_mName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    return p->mProperty_mName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_byteDeclarationInRam::readProperty_mSizeExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    return p->mProperty_mSizeExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable GALGAS_byteDeclarationInRam::readProperty_mBitSliceTable (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bitSliceTable () ;
  }else{
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    return p->mProperty_mBitSliceTable ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_byteDeclarationInRam::readProperty_mBitDefinitionString (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    return p->mProperty_mBitDefinitionString ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerProtection GALGAS_byteDeclarationInRam::readProperty_mProtection (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerProtection () ;
  }else{
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    return p->mProperty_mProtection ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @byteDeclarationInRam class
//--------------------------------------------------------------------------------------------------

cPtr_byteDeclarationInRam::cPtr_byteDeclarationInRam (const GALGAS_lstring & in_mName,
                                                      const GALGAS_immediatExpression & in_mSizeExpression,
                                                      const GALGAS_bitSliceTable & in_mBitSliceTable,
                                                      const GALGAS_string & in_mBitDefinitionString,
                                                      const GALGAS_registerProtection & in_mProtection
                                                      COMMA_LOCATION_ARGS) :
cPtr_declarationInRam (THERE),
mProperty_mName (in_mName),
mProperty_mSizeExpression (in_mSizeExpression),
mProperty_mBitSliceTable (in_mBitSliceTable),
mProperty_mBitDefinitionString (in_mBitDefinitionString),
mProperty_mProtection (in_mProtection) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_byteDeclarationInRam::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_byteDeclarationInRam ;
}

void cPtr_byteDeclarationInRam::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.addString ("[@byteDeclarationInRam:") ;
  mProperty_mName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBitSliceTable.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBitDefinitionString.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mProtection.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_byteDeclarationInRam::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_byteDeclarationInRam (mProperty_mName, mProperty_mSizeExpression, mProperty_mBitSliceTable, mProperty_mBitDefinitionString, mProperty_mProtection COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @byteDeclarationInRam generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_byteDeclarationInRam ("byteDeclarationInRam",
                                             & kTypeDescriptor_GALGAS_declarationInRam) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_byteDeclarationInRam::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_byteDeclarationInRam ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_byteDeclarationInRam::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_byteDeclarationInRam (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_byteDeclarationInRam GALGAS_byteDeclarationInRam::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_byteDeclarationInRam result ;
  const GALGAS_byteDeclarationInRam * p = (const GALGAS_byteDeclarationInRam *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_byteDeclarationInRam *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("byteDeclarationInRam", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatInteger reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatInteger::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_immediatInteger::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatInteger * p = (const cPtr_immediatInteger *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatInteger) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_immediatInteger::objectCompare (const GALGAS_immediatInteger & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatInteger::GALGAS_immediatInteger (void) :
GALGAS_immediatExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatInteger::GALGAS_immediatInteger (const cPtr_immediatInteger * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatInteger) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_immediatInteger GALGAS_immediatInteger::constructor_new (const GALGAS_luint & inAttribute_mValue
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_immediatInteger result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatInteger (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatInteger::setter_setMValue (GALGAS_luint inValue
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatInteger * p = (cPtr_immediatInteger *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatInteger) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_immediatInteger::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_immediatInteger * p = (cPtr_immediatInteger *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatInteger) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatInteger class
//--------------------------------------------------------------------------------------------------

cPtr_immediatInteger::cPtr_immediatInteger (const GALGAS_luint & in_mValue
                                            COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mProperty_mValue (in_mValue) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatInteger::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatInteger ;
}

void cPtr_immediatInteger::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.addString ("[@immediatInteger:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatInteger::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatInteger (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @immediatInteger generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatInteger ("immediatInteger",
                                        & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatInteger::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatInteger ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatInteger::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatInteger (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatInteger GALGAS_immediatInteger::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_immediatInteger result ;
  const GALGAS_immediatInteger * p = (const GALGAS_immediatInteger *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatInteger *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatInteger", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatRegister reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatRegister::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mRegister.printNonNullClassInstanceProperties ("mRegister") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_immediatRegister::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatRegister * p = (const cPtr_immediatRegister *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatRegister) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegister.objectCompare (p->mProperty_mRegister) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_immediatRegister::objectCompare (const GALGAS_immediatRegister & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatRegister::GALGAS_immediatRegister (void) :
GALGAS_immediatExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatRegister::GALGAS_immediatRegister (const cPtr_immediatRegister * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatRegister) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_immediatRegister GALGAS_immediatRegister::constructor_new (const GALGAS_registerExpression & inAttribute_mRegister
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_immediatRegister result ;
  if (inAttribute_mRegister.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatRegister (inAttribute_mRegister COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatRegister::setter_setMRegister (GALGAS_registerExpression inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatRegister * p = (cPtr_immediatRegister *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatRegister) ;
    p->mProperty_mRegister = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_immediatRegister::readProperty_mRegister (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_immediatRegister * p = (cPtr_immediatRegister *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatRegister) ;
    return p->mProperty_mRegister ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatRegister class
//--------------------------------------------------------------------------------------------------

cPtr_immediatRegister::cPtr_immediatRegister (const GALGAS_registerExpression & in_mRegister
                                              COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mProperty_mRegister (in_mRegister) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatRegister::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatRegister ;
}

void cPtr_immediatRegister::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.addString ("[@immediatRegister:") ;
  mProperty_mRegister.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatRegister::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatRegister (mProperty_mRegister COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @immediatRegister generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatRegister ("immediatRegister",
                                         & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatRegister::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatRegister ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatRegister::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatRegister (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatRegister GALGAS_immediatRegister::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_immediatRegister result ;
  const GALGAS_immediatRegister * p = (const GALGAS_immediatRegister *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatRegister *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatRegister", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatSlice reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatSlice::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterName.printNonNullClassInstanceProperties ("mRegisterName") ;
    mProperty_mSliceExpressionList.printNonNullClassInstanceProperties ("mSliceExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_immediatSlice::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatSlice * p = (const cPtr_immediatSlice *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatSlice) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterName.objectCompare (p->mProperty_mRegisterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSliceExpressionList.objectCompare (p->mProperty_mSliceExpressionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_immediatSlice::objectCompare (const GALGAS_immediatSlice & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSlice::GALGAS_immediatSlice (void) :
GALGAS_immediatExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSlice::GALGAS_immediatSlice (const cPtr_immediatSlice * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatSlice) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_immediatSlice GALGAS_immediatSlice::constructor_new (const GALGAS_lstring & inAttribute_mRegisterName,
                                                            const GALGAS_immediatSliceExpressionList & inAttribute_mSliceExpressionList
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_immediatSlice result ;
  if (inAttribute_mRegisterName.isValid () && inAttribute_mSliceExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatSlice (inAttribute_mRegisterName, inAttribute_mSliceExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatSlice::setter_setMRegisterName (GALGAS_lstring inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatSlice * p = (cPtr_immediatSlice *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSlice) ;
    p->mProperty_mRegisterName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatSlice::setter_setMSliceExpressionList (GALGAS_immediatSliceExpressionList inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatSlice * p = (cPtr_immediatSlice *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSlice) ;
    p->mProperty_mSliceExpressionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_immediatSlice::readProperty_mRegisterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_immediatSlice * p = (cPtr_immediatSlice *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSlice) ;
    return p->mProperty_mRegisterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSliceExpressionList GALGAS_immediatSlice::readProperty_mSliceExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatSliceExpressionList () ;
  }else{
    cPtr_immediatSlice * p = (cPtr_immediatSlice *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSlice) ;
    return p->mProperty_mSliceExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatSlice class
//--------------------------------------------------------------------------------------------------

cPtr_immediatSlice::cPtr_immediatSlice (const GALGAS_lstring & in_mRegisterName,
                                        const GALGAS_immediatSliceExpressionList & in_mSliceExpressionList
                                        COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mProperty_mRegisterName (in_mRegisterName),
mProperty_mSliceExpressionList (in_mSliceExpressionList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatSlice::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSlice ;
}

void cPtr_immediatSlice::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.addString ("[@immediatSlice:") ;
  mProperty_mRegisterName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSliceExpressionList.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatSlice::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatSlice (mProperty_mRegisterName, mProperty_mSliceExpressionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @immediatSlice generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatSlice ("immediatSlice",
                                      & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatSlice::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSlice ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatSlice::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatSlice (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSlice GALGAS_immediatSlice::extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_immediatSlice result ;
  const GALGAS_immediatSlice * p = (const GALGAS_immediatSlice *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatSlice *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatSlice", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @bitNumberLabelValue reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bitNumberLabelValue::printNonNullClassInstanceProperties (void) const {
    cPtr_bitNumberExpression::printNonNullClassInstanceProperties () ;
    mProperty_mBitNumberLabelValue.printNonNullClassInstanceProperties ("mBitNumberLabelValue") ;
    mProperty_mBitNumberIndexValue.printNonNullClassInstanceProperties ("mBitNumberIndexValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_bitNumberLabelValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_bitNumberLabelValue * p = (const cPtr_bitNumberLabelValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_bitNumberLabelValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mBitNumberLabelValue.objectCompare (p->mProperty_mBitNumberLabelValue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitNumberIndexValue.objectCompare (p->mProperty_mBitNumberIndexValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_bitNumberLabelValue::objectCompare (const GALGAS_bitNumberLabelValue & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLabelValue::GALGAS_bitNumberLabelValue (void) :
GALGAS_bitNumberExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLabelValue::GALGAS_bitNumberLabelValue (const cPtr_bitNumberLabelValue * inSourcePtr) :
GALGAS_bitNumberExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitNumberLabelValue) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLabelValue GALGAS_bitNumberLabelValue::constructor_new (const GALGAS_lstring & inAttribute_mBitNumberLabelValue,
                                                                        const GALGAS_luint & inAttribute_mBitNumberIndexValue
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_bitNumberLabelValue result ;
  if (inAttribute_mBitNumberLabelValue.isValid () && inAttribute_mBitNumberIndexValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_bitNumberLabelValue (inAttribute_mBitNumberLabelValue, inAttribute_mBitNumberIndexValue COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitNumberLabelValue::setter_setMBitNumberLabelValue (GALGAS_lstring inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_bitNumberLabelValue * p = (cPtr_bitNumberLabelValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLabelValue) ;
    p->mProperty_mBitNumberLabelValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitNumberLabelValue::setter_setMBitNumberIndexValue (GALGAS_luint inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_bitNumberLabelValue * p = (cPtr_bitNumberLabelValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLabelValue) ;
    p->mProperty_mBitNumberIndexValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_bitNumberLabelValue::readProperty_mBitNumberLabelValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_bitNumberLabelValue * p = (cPtr_bitNumberLabelValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLabelValue) ;
    return p->mProperty_mBitNumberLabelValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_bitNumberLabelValue::readProperty_mBitNumberIndexValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_bitNumberLabelValue * p = (cPtr_bitNumberLabelValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLabelValue) ;
    return p->mProperty_mBitNumberIndexValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @bitNumberLabelValue class
//--------------------------------------------------------------------------------------------------

cPtr_bitNumberLabelValue::cPtr_bitNumberLabelValue (const GALGAS_lstring & in_mBitNumberLabelValue,
                                                    const GALGAS_luint & in_mBitNumberIndexValue
                                                    COMMA_LOCATION_ARGS) :
cPtr_bitNumberExpression (THERE),
mProperty_mBitNumberLabelValue (in_mBitNumberLabelValue),
mProperty_mBitNumberIndexValue (in_mBitNumberIndexValue) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_bitNumberLabelValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLabelValue ;
}

void cPtr_bitNumberLabelValue::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.addString ("[@bitNumberLabelValue:") ;
  mProperty_mBitNumberLabelValue.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBitNumberIndexValue.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_bitNumberLabelValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bitNumberLabelValue (mProperty_mBitNumberLabelValue, mProperty_mBitNumberIndexValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @bitNumberLabelValue generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bitNumberLabelValue ("bitNumberLabelValue",
                                            & kTypeDescriptor_GALGAS_bitNumberExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bitNumberLabelValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLabelValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bitNumberLabelValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitNumberLabelValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLabelValue GALGAS_bitNumberLabelValue::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_bitNumberLabelValue result ;
  const GALGAS_bitNumberLabelValue * p = (const GALGAS_bitNumberLabelValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bitNumberLabelValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberLabelValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_FD reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_FD::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction_5F_FD_5F_base_5F_code.printNonNullClassInstanceProperties ("mInstruction_FD_base_code") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_instruction_5F_FD::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_instruction_5F_FD *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction_5F_FD_5F_base_5F_code.objectCompare (p->mProperty_mInstruction_5F_FD_5F_base_5F_code) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_instruction_5F_FD::objectCompare (const GALGAS_baseline_5F_instruction_5F_FD & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD::GALGAS_baseline_5F_instruction_5F_FD (void) :
GALGAS_baseline_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD::GALGAS_baseline_5F_instruction_5F_FD (const cPtr_baseline_5F_instruction_5F_FD * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_FD) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD GALGAS_baseline_5F_instruction_5F_FD::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inAttribute_mInstruction_5F_FD_5F_base_5F_code,
                                                                                            const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                            const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction_5F_FD_5F_base_5F_code.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_FD (inAttribute_mInstructionLocation, inAttribute_mInstruction_5F_FD_5F_base_5F_code, inAttribute_mRegisterExpression, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_FD::setter_setMInstruction_5F_FD_5F_base_5F_code (GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_FD * p = (cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    p->mProperty_mInstruction_5F_FD_5F_base_5F_code = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_FD::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_FD * p = (cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_FD::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_FD * p = (cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD::readProperty_mInstruction_5F_FD_5F_base_5F_code (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FD * p = (cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    return p->mProperty_mInstruction_5F_FD_5F_base_5F_code ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_baseline_5F_instruction_5F_FD::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FD * p = (cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FD * p = (cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_FD class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_FD::cPtr_baseline_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction_5F_FD_5F_base_5F_code (in_mInstruction_5F_FD_5F_base_5F_code),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_FD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD ;
}

void cPtr_baseline_5F_instruction_5F_FD::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.addString ("[@baseline_instruction_FD:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mInstruction_5F_FD_5F_base_5F_code.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_FD::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_FD (mProperty_mInstructionLocation, mProperty_mInstruction_5F_FD_5F_base_5F_code, mProperty_mRegisterExpression, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_FD generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD ("baseline_instruction_FD",
                                                      & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_FD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_FD::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_FD (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD GALGAS_baseline_5F_instruction_5F_FD::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD result ;
  const GALGAS_baseline_5F_instruction_5F_FD * p = (const GALGAS_baseline_5F_instruction_5F_FD *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_FD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_FD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_F reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_F::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mFAinstruction.printNonNullClassInstanceProperties ("mFAinstruction") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_instruction_5F_F::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_F * p = (const cPtr_baseline_5F_instruction_5F_F *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_F) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFAinstruction.objectCompare (p->mProperty_mFAinstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_instruction_5F_F::objectCompare (const GALGAS_baseline_5F_instruction_5F_F & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_F::GALGAS_baseline_5F_instruction_5F_F (void) :
GALGAS_baseline_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_F::GALGAS_baseline_5F_instruction_5F_F (const cPtr_baseline_5F_instruction_5F_F * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_F) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_F GALGAS_baseline_5F_instruction_5F_F::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & inAttribute_mFAinstruction,
                                                                                          const GALGAS_registerExpression & inAttribute_mRegisterExpression
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_F result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mFAinstruction.isValid () && inAttribute_mRegisterExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_F (inAttribute_mInstructionLocation, inAttribute_mFAinstruction, inAttribute_mRegisterExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_F::setter_setMFAinstruction (GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_F * p = (cPtr_baseline_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_F) ;
    p->mProperty_mFAinstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_F::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_F * p = (cPtr_baseline_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_F) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_F::readProperty_mFAinstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code () ;
  }else{
    cPtr_baseline_5F_instruction_5F_F * p = (cPtr_baseline_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_F) ;
    return p->mProperty_mFAinstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_baseline_5F_instruction_5F_F::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_F * p = (cPtr_baseline_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_F) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_F class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_F::cPtr_baseline_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                      const GALGAS_registerExpression & in_mRegisterExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mFAinstruction (in_mFAinstruction),
mProperty_mRegisterExpression (in_mRegisterExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_F::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F ;
}

void cPtr_baseline_5F_instruction_5F_F::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.addString ("[@baseline_instruction_F:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mFAinstruction.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_F::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_F (mProperty_mInstructionLocation, mProperty_mFAinstruction, mProperty_mRegisterExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_F generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F ("baseline_instruction_F",
                                                     & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_F::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_F::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_F (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_F GALGAS_baseline_5F_instruction_5F_F::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_F result ;
  const GALGAS_baseline_5F_instruction_5F_F * p = (const GALGAS_baseline_5F_instruction_5F_F *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_F *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_F", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_FB reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_FB::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mBitOrientedOp.printNonNullClassInstanceProperties ("mBitOrientedOp") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_instruction_5F_FB::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_instruction_5F_FB *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitOrientedOp.objectCompare (p->mProperty_mBitOrientedOp) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_instruction_5F_FB::objectCompare (const GALGAS_baseline_5F_instruction_5F_FB & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FB::GALGAS_baseline_5F_instruction_5F_FB (void) :
GALGAS_baseline_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FB::GALGAS_baseline_5F_instruction_5F_FB (const cPtr_baseline_5F_instruction_5F_FB * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_FB) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FB GALGAS_baseline_5F_instruction_5F_FB::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_baseline_5F_bit_5F_oriented_5F_op & inAttribute_mBitOrientedOp,
                                                                                            const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                            const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FB result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBitOrientedOp.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_FB (inAttribute_mInstructionLocation, inAttribute_mBitOrientedOp, inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_FB::setter_setMBitOrientedOp (GALGAS_baseline_5F_bit_5F_oriented_5F_op inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_FB * p = (cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    p->mProperty_mBitOrientedOp = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_FB::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_FB * p = (cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_FB::setter_setMBitNumber (GALGAS_bitNumberExpression inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_FB * p = (cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_bit_5F_oriented_5F_op GALGAS_baseline_5F_instruction_5F_FB::readProperty_mBitOrientedOp (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_bit_5F_oriented_5F_op () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FB * p = (cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    return p->mProperty_mBitOrientedOp ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_baseline_5F_instruction_5F_FB::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FB * p = (cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression GALGAS_baseline_5F_instruction_5F_FB::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bitNumberExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FB * p = (cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_FB class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_FB::cPtr_baseline_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bitNumberExpression & in_mBitNumber
                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mBitOrientedOp (in_mBitOrientedOp),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mBitNumber (in_mBitNumber) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_FB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB ;
}

void cPtr_baseline_5F_instruction_5F_FB::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.addString ("[@baseline_instruction_FB:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBitOrientedOp.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_FB::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_FB (mProperty_mInstructionLocation, mProperty_mBitOrientedOp, mProperty_mRegisterExpression, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_FB generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB ("baseline_instruction_FB",
                                                      & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_FB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_FB::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_FB (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FB GALGAS_baseline_5F_instruction_5F_FB::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FB result ;
  const GALGAS_baseline_5F_instruction_5F_FB * p = (const GALGAS_baseline_5F_instruction_5F_FB *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_FB *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_FB", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_CALL reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_CALL::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_instruction_5F_CALL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_CALL * p = (const cPtr_baseline_5F_instruction_5F_CALL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_CALL) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_instruction_5F_CALL::objectCompare (const GALGAS_baseline_5F_instruction_5F_CALL & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_CALL::GALGAS_baseline_5F_instruction_5F_CALL (void) :
GALGAS_baseline_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_CALL::GALGAS_baseline_5F_instruction_5F_CALL (const cPtr_baseline_5F_instruction_5F_CALL * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_CALL) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_CALL GALGAS_baseline_5F_instruction_5F_CALL::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_CALL result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_CALL (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_CALL::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_CALL * p = (cPtr_baseline_5F_instruction_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_CALL) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_CALL::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_instruction_5F_CALL * p = (cPtr_baseline_5F_instruction_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_CALL) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_CALL class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_CALL::cPtr_baseline_5F_instruction_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_CALL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL ;
}

void cPtr_baseline_5F_instruction_5F_CALL::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.addString ("[@baseline_instruction_CALL:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_CALL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_CALL (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_CALL generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL ("baseline_instruction_CALL",
                                                        & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_CALL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_CALL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_CALL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_CALL GALGAS_baseline_5F_instruction_5F_CALL::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_CALL result ;
  const GALGAS_baseline_5F_instruction_5F_CALL * p = (const GALGAS_baseline_5F_instruction_5F_CALL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_CALL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_CALL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

