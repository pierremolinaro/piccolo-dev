#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//----------------------------------------------------------------------------------------------------------------------
// @byteDeclarationInRam reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_byteDeclarationInRam::GALGAS_byteDeclarationInRam (void) :
GALGAS_declarationInRam () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_byteDeclarationInRam::GALGAS_byteDeclarationInRam (const cPtr_byteDeclarationInRam * inSourcePtr) :
GALGAS_declarationInRam (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_byteDeclarationInRam) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_byteDeclarationInRam::setter_setMName (GALGAS_lstring inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    p->mProperty_mName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_byteDeclarationInRam::setter_setMSizeExpression (GALGAS_immediatExpression inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    p->mProperty_mSizeExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_byteDeclarationInRam::setter_setMBitSliceTable (GALGAS_bitSliceTable inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    p->mProperty_mBitSliceTable = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_byteDeclarationInRam::setter_setMBitDefinitionString (GALGAS_string inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    p->mProperty_mBitDefinitionString = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_byteDeclarationInRam::setter_setMProtection (GALGAS_registerProtection inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    p->mProperty_mProtection = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_byteDeclarationInRam::readProperty_mName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    return p->mProperty_mName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_byteDeclarationInRam::readProperty_mSizeExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    return p->mProperty_mSizeExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable GALGAS_byteDeclarationInRam::readProperty_mBitSliceTable (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bitSliceTable () ;
  }else{
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    return p->mProperty_mBitSliceTable ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_byteDeclarationInRam::readProperty_mBitDefinitionString (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    return p->mProperty_mBitDefinitionString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerProtection GALGAS_byteDeclarationInRam::readProperty_mProtection (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_registerProtection () ;
  }else{
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    return p->mProperty_mProtection ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @byteDeclarationInRam class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_byteDeclarationInRam::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_byteDeclarationInRam ;
}

void cPtr_byteDeclarationInRam::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@byteDeclarationInRam:" ;
  mProperty_mName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitSliceTable.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitDefinitionString.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mProtection.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_byteDeclarationInRam::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_byteDeclarationInRam (mProperty_mName, mProperty_mSizeExpression, mProperty_mBitSliceTable, mProperty_mBitDefinitionString, mProperty_mProtection COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@byteDeclarationInRam type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_byteDeclarationInRam ("byteDeclarationInRam",
                                             & kTypeDescriptor_GALGAS_declarationInRam) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_byteDeclarationInRam::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_byteDeclarationInRam ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_byteDeclarationInRam::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_byteDeclarationInRam (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_byteDeclarationInRam GALGAS_byteDeclarationInRam::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_byteDeclarationInRam result ;
  const GALGAS_byteDeclarationInRam * p = (const GALGAS_byteDeclarationInRam *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_byteDeclarationInRam *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("byteDeclarationInRam", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_byteDeclarationInRam_2D_weak::objectCompare (const GALGAS_byteDeclarationInRam_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_byteDeclarationInRam_2D_weak::GALGAS_byteDeclarationInRam_2D_weak (void) :
GALGAS_declarationInRam_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_byteDeclarationInRam_2D_weak & GALGAS_byteDeclarationInRam_2D_weak::operator = (const GALGAS_byteDeclarationInRam & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_byteDeclarationInRam_2D_weak::GALGAS_byteDeclarationInRam_2D_weak (const GALGAS_byteDeclarationInRam & inSource) :
GALGAS_declarationInRam_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_byteDeclarationInRam_2D_weak GALGAS_byteDeclarationInRam_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_byteDeclarationInRam_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_byteDeclarationInRam GALGAS_byteDeclarationInRam_2D_weak::bang_byteDeclarationInRam_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_byteDeclarationInRam result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_byteDeclarationInRam) ;
      result = GALGAS_byteDeclarationInRam ((cPtr_byteDeclarationInRam *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@byteDeclarationInRam-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_byteDeclarationInRam_2D_weak ("byteDeclarationInRam-weak",
                                                     & kTypeDescriptor_GALGAS_declarationInRam_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_byteDeclarationInRam_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_byteDeclarationInRam_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_byteDeclarationInRam_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_byteDeclarationInRam_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_byteDeclarationInRam_2D_weak GALGAS_byteDeclarationInRam_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_byteDeclarationInRam_2D_weak result ;
  const GALGAS_byteDeclarationInRam_2D_weak * p = (const GALGAS_byteDeclarationInRam_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_byteDeclarationInRam_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("byteDeclarationInRam-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @immediatInteger reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_immediatInteger::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatInteger * p = (const cPtr_immediatInteger *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatInteger) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatInteger::GALGAS_immediatInteger (void) :
GALGAS_immediatExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatInteger GALGAS_immediatInteger::constructor_default (LOCATION_ARGS) {
  return GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_default (HERE)
                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatInteger::GALGAS_immediatInteger (const cPtr_immediatInteger * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatInteger) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatInteger GALGAS_immediatInteger::constructor_new (const GALGAS_luint & inAttribute_mValue
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_immediatInteger result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatInteger (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_immediatInteger::setter_setMValue (GALGAS_luint inValue
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_immediatInteger * p = (cPtr_immediatInteger *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatInteger) ;
    p->mProperty_mValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_immediatInteger::readProperty_mValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_immediatInteger * p = (cPtr_immediatInteger *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatInteger) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @immediatInteger class
//----------------------------------------------------------------------------------------------------------------------

cPtr_immediatInteger::cPtr_immediatInteger (const GALGAS_luint & in_mValue
                                            COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatInteger::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatInteger ;
}

void cPtr_immediatInteger::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@immediatInteger:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatInteger::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_immediatInteger (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@immediatInteger type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatInteger ("immediatInteger",
                                        & kTypeDescriptor_GALGAS_immediatExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatInteger::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatInteger ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatInteger::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatInteger (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatInteger GALGAS_immediatInteger::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_immediatInteger result ;
  const GALGAS_immediatInteger * p = (const GALGAS_immediatInteger *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_immediatInteger *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatInteger", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatInteger_2D_weak::objectCompare (const GALGAS_immediatInteger_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatInteger_2D_weak::GALGAS_immediatInteger_2D_weak (void) :
GALGAS_immediatExpression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatInteger_2D_weak & GALGAS_immediatInteger_2D_weak::operator = (const GALGAS_immediatInteger & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatInteger_2D_weak::GALGAS_immediatInteger_2D_weak (const GALGAS_immediatInteger & inSource) :
GALGAS_immediatExpression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatInteger_2D_weak GALGAS_immediatInteger_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_immediatInteger_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatInteger GALGAS_immediatInteger_2D_weak::bang_immediatInteger_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatInteger result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatInteger) ;
      result = GALGAS_immediatInteger ((cPtr_immediatInteger *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@immediatInteger-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatInteger_2D_weak ("immediatInteger-weak",
                                                & kTypeDescriptor_GALGAS_immediatExpression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatInteger_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatInteger_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatInteger_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatInteger_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatInteger_2D_weak GALGAS_immediatInteger_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_immediatInteger_2D_weak result ;
  const GALGAS_immediatInteger_2D_weak * p = (const GALGAS_immediatInteger_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_immediatInteger_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatInteger-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @immediatSlice reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatSlice::GALGAS_immediatSlice (void) :
GALGAS_immediatExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatSlice GALGAS_immediatSlice::constructor_default (LOCATION_ARGS) {
  return GALGAS_immediatSlice::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_immediatSliceExpressionList::constructor_emptyList (HERE)
                                                COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatSlice::GALGAS_immediatSlice (const cPtr_immediatSlice * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatSlice) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatSlice GALGAS_immediatSlice::constructor_new (const GALGAS_lstring & inAttribute_mRegisterName,
                                                            const GALGAS_immediatSliceExpressionList & inAttribute_mSliceExpressionList
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_immediatSlice result ;
  if (inAttribute_mRegisterName.isValid () && inAttribute_mSliceExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatSlice (inAttribute_mRegisterName, inAttribute_mSliceExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_immediatSlice::setter_setMRegisterName (GALGAS_lstring inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_immediatSlice * p = (cPtr_immediatSlice *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSlice) ;
    p->mProperty_mRegisterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_immediatSlice::setter_setMSliceExpressionList (GALGAS_immediatSliceExpressionList inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_immediatSlice * p = (cPtr_immediatSlice *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSlice) ;
    p->mProperty_mSliceExpressionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_immediatSlice::readProperty_mRegisterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_immediatSlice * p = (cPtr_immediatSlice *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSlice) ;
    return p->mProperty_mRegisterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatSliceExpressionList GALGAS_immediatSlice::readProperty_mSliceExpressionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_immediatSliceExpressionList () ;
  }else{
    cPtr_immediatSlice * p = (cPtr_immediatSlice *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSlice) ;
    return p->mProperty_mSliceExpressionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @immediatSlice class
//----------------------------------------------------------------------------------------------------------------------

cPtr_immediatSlice::cPtr_immediatSlice (const GALGAS_lstring & in_mRegisterName,
                                        const GALGAS_immediatSliceExpressionList & in_mSliceExpressionList
                                        COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mProperty_mRegisterName (in_mRegisterName),
mProperty_mSliceExpressionList (in_mSliceExpressionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatSlice::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSlice ;
}

void cPtr_immediatSlice::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "[@immediatSlice:" ;
  mProperty_mRegisterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSliceExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatSlice::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_immediatSlice (mProperty_mRegisterName, mProperty_mSliceExpressionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@immediatSlice type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatSlice ("immediatSlice",
                                      & kTypeDescriptor_GALGAS_immediatExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatSlice::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSlice ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatSlice::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatSlice (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatSlice GALGAS_immediatSlice::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_immediatSlice result ;
  const GALGAS_immediatSlice * p = (const GALGAS_immediatSlice *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_immediatSlice *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatSlice", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatSlice_2D_weak::objectCompare (const GALGAS_immediatSlice_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatSlice_2D_weak::GALGAS_immediatSlice_2D_weak (void) :
GALGAS_immediatExpression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatSlice_2D_weak & GALGAS_immediatSlice_2D_weak::operator = (const GALGAS_immediatSlice & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatSlice_2D_weak::GALGAS_immediatSlice_2D_weak (const GALGAS_immediatSlice & inSource) :
GALGAS_immediatExpression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatSlice_2D_weak GALGAS_immediatSlice_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_immediatSlice_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatSlice GALGAS_immediatSlice_2D_weak::bang_immediatSlice_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatSlice result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatSlice) ;
      result = GALGAS_immediatSlice ((cPtr_immediatSlice *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@immediatSlice-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatSlice_2D_weak ("immediatSlice-weak",
                                              & kTypeDescriptor_GALGAS_immediatExpression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatSlice_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSlice_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatSlice_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatSlice_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatSlice_2D_weak GALGAS_immediatSlice_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_immediatSlice_2D_weak result ;
  const GALGAS_immediatSlice_2D_weak * p = (const GALGAS_immediatSlice_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_immediatSlice_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatSlice-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @bitNumberLabelValue reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberLabelValue::GALGAS_bitNumberLabelValue (void) :
GALGAS_bitNumberExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberLabelValue GALGAS_bitNumberLabelValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_bitNumberLabelValue::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_luint::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberLabelValue::GALGAS_bitNumberLabelValue (const cPtr_bitNumberLabelValue * inSourcePtr) :
GALGAS_bitNumberExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitNumberLabelValue) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberLabelValue GALGAS_bitNumberLabelValue::constructor_new (const GALGAS_lstring & inAttribute_mBitNumberLabelValue,
                                                                        const GALGAS_luint & inAttribute_mBitNumberIndexValue
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_bitNumberLabelValue result ;
  if (inAttribute_mBitNumberLabelValue.isValid () && inAttribute_mBitNumberIndexValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_bitNumberLabelValue (inAttribute_mBitNumberLabelValue, inAttribute_mBitNumberIndexValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bitNumberLabelValue::setter_setMBitNumberLabelValue (GALGAS_lstring inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_bitNumberLabelValue * p = (cPtr_bitNumberLabelValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLabelValue) ;
    p->mProperty_mBitNumberLabelValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bitNumberLabelValue::setter_setMBitNumberIndexValue (GALGAS_luint inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_bitNumberLabelValue * p = (cPtr_bitNumberLabelValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLabelValue) ;
    p->mProperty_mBitNumberIndexValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_bitNumberLabelValue::readProperty_mBitNumberLabelValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_bitNumberLabelValue * p = (cPtr_bitNumberLabelValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLabelValue) ;
    return p->mProperty_mBitNumberLabelValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_bitNumberLabelValue::readProperty_mBitNumberIndexValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_bitNumberLabelValue * p = (cPtr_bitNumberLabelValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLabelValue) ;
    return p->mProperty_mBitNumberIndexValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @bitNumberLabelValue class
//----------------------------------------------------------------------------------------------------------------------

cPtr_bitNumberLabelValue::cPtr_bitNumberLabelValue (const GALGAS_lstring & in_mBitNumberLabelValue,
                                                    const GALGAS_luint & in_mBitNumberIndexValue
                                                    COMMA_LOCATION_ARGS) :
cPtr_bitNumberExpression (THERE),
mProperty_mBitNumberLabelValue (in_mBitNumberLabelValue),
mProperty_mBitNumberIndexValue (in_mBitNumberIndexValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_bitNumberLabelValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLabelValue ;
}

void cPtr_bitNumberLabelValue::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@bitNumberLabelValue:" ;
  mProperty_mBitNumberLabelValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitNumberIndexValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_bitNumberLabelValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_bitNumberLabelValue (mProperty_mBitNumberLabelValue, mProperty_mBitNumberIndexValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@bitNumberLabelValue type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bitNumberLabelValue ("bitNumberLabelValue",
                                            & kTypeDescriptor_GALGAS_bitNumberExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bitNumberLabelValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLabelValue ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bitNumberLabelValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitNumberLabelValue (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberLabelValue GALGAS_bitNumberLabelValue::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_bitNumberLabelValue result ;
  const GALGAS_bitNumberLabelValue * p = (const GALGAS_bitNumberLabelValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bitNumberLabelValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberLabelValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_bitNumberLabelValue_2D_weak::objectCompare (const GALGAS_bitNumberLabelValue_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberLabelValue_2D_weak::GALGAS_bitNumberLabelValue_2D_weak (void) :
GALGAS_bitNumberExpression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberLabelValue_2D_weak & GALGAS_bitNumberLabelValue_2D_weak::operator = (const GALGAS_bitNumberLabelValue & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberLabelValue_2D_weak::GALGAS_bitNumberLabelValue_2D_weak (const GALGAS_bitNumberLabelValue & inSource) :
GALGAS_bitNumberExpression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberLabelValue_2D_weak GALGAS_bitNumberLabelValue_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_bitNumberLabelValue_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberLabelValue GALGAS_bitNumberLabelValue_2D_weak::bang_bitNumberLabelValue_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bitNumberLabelValue result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bitNumberLabelValue) ;
      result = GALGAS_bitNumberLabelValue ((cPtr_bitNumberLabelValue *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@bitNumberLabelValue-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bitNumberLabelValue_2D_weak ("bitNumberLabelValue-weak",
                                                    & kTypeDescriptor_GALGAS_bitNumberExpression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bitNumberLabelValue_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLabelValue_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bitNumberLabelValue_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitNumberLabelValue_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberLabelValue_2D_weak GALGAS_bitNumberLabelValue_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_bitNumberLabelValue_2D_weak result ;
  const GALGAS_bitNumberLabelValue_2D_weak * p = (const GALGAS_bitNumberLabelValue_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bitNumberLabelValue_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberLabelValue-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_CALL reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_CALL::GALGAS_baseline_5F_instruction_5F_CALL (void) :
GALGAS_baseline_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_CALL GALGAS_baseline_5F_instruction_5F_CALL::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_instruction_5F_CALL::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_CALL::GALGAS_baseline_5F_instruction_5F_CALL (const cPtr_baseline_5F_instruction_5F_CALL * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_CALL) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_CALL GALGAS_baseline_5F_instruction_5F_CALL::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_CALL result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_CALL (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_CALL::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_CALL * p = (cPtr_baseline_5F_instruction_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_CALL) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_CALL::readProperty_mTargetLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_instruction_5F_CALL * p = (cPtr_baseline_5F_instruction_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_CALL) ;
    return p->mProperty_mTargetLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_CALL class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_CALL::cPtr_baseline_5F_instruction_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_CALL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL ;
}

void cPtr_baseline_5F_instruction_5F_CALL::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_CALL:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_CALL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_CALL (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_instruction_CALL type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL ("baseline_instruction_CALL",
                                                        & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_CALL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_CALL::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_CALL (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_CALL GALGAS_baseline_5F_instruction_5F_CALL::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_CALL result ;
  const GALGAS_baseline_5F_instruction_5F_CALL * p = (const GALGAS_baseline_5F_instruction_5F_CALL *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_CALL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_CALL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_instruction_5F_CALL_2D_weak::objectCompare (const GALGAS_baseline_5F_instruction_5F_CALL_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_CALL_2D_weak::GALGAS_baseline_5F_instruction_5F_CALL_2D_weak (void) :
GALGAS_baseline_5F_instruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_CALL_2D_weak & GALGAS_baseline_5F_instruction_5F_CALL_2D_weak::operator = (const GALGAS_baseline_5F_instruction_5F_CALL & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_CALL_2D_weak::GALGAS_baseline_5F_instruction_5F_CALL_2D_weak (const GALGAS_baseline_5F_instruction_5F_CALL & inSource) :
GALGAS_baseline_5F_instruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_CALL_2D_weak GALGAS_baseline_5F_instruction_5F_CALL_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_CALL_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_CALL GALGAS_baseline_5F_instruction_5F_CALL_2D_weak::bang_baseline_5F_instruction_5F_CALL_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_CALL result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_CALL) ;
      result = GALGAS_baseline_5F_instruction_5F_CALL ((cPtr_baseline_5F_instruction_5F_CALL *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_instruction_CALL-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL_2D_weak ("baseline_instruction_CALL-weak",
                                                                & kTypeDescriptor_GALGAS_baseline_5F_instruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_CALL_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_CALL_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_CALL_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_CALL_2D_weak GALGAS_baseline_5F_instruction_5F_CALL_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_CALL_2D_weak result ;
  const GALGAS_baseline_5F_instruction_5F_CALL_2D_weak * p = (const GALGAS_baseline_5F_instruction_5F_CALL_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_CALL_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_CALL-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_JSR reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_instruction_5F_JSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_JSR * p = (const cPtr_baseline_5F_instruction_5F_JSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_JSR) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_instruction_5F_JSR::objectCompare (const GALGAS_baseline_5F_instruction_5F_JSR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JSR::GALGAS_baseline_5F_instruction_5F_JSR (void) :
GALGAS_baseline_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JSR GALGAS_baseline_5F_instruction_5F_JSR::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_instruction_5F_JSR::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                 GALGAS_lstring::constructor_default (HERE)
                                                                 COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JSR::GALGAS_baseline_5F_instruction_5F_JSR (const cPtr_baseline_5F_instruction_5F_JSR * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_JSR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JSR GALGAS_baseline_5F_instruction_5F_JSR::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                              const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_JSR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_JSR (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_JSR::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_JSR * p = (cPtr_baseline_5F_instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_JSR) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_JSR::readProperty_mTargetLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_instruction_5F_JSR * p = (cPtr_baseline_5F_instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_JSR) ;
    return p->mProperty_mTargetLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_JSR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_JSR::cPtr_baseline_5F_instruction_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_lstring & in_mTargetLabel
                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR ;
}

void cPtr_baseline_5F_instruction_5F_JSR::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_JSR:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_JSR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_JSR (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_instruction_JSR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR ("baseline_instruction_JSR",
                                                       & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_JSR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JSR GALGAS_baseline_5F_instruction_5F_JSR::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_JSR result ;
  const GALGAS_baseline_5F_instruction_5F_JSR * p = (const GALGAS_baseline_5F_instruction_5F_JSR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_JSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_JSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_instruction_5F_JSR_2D_weak::objectCompare (const GALGAS_baseline_5F_instruction_5F_JSR_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JSR_2D_weak::GALGAS_baseline_5F_instruction_5F_JSR_2D_weak (void) :
GALGAS_baseline_5F_instruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JSR_2D_weak & GALGAS_baseline_5F_instruction_5F_JSR_2D_weak::operator = (const GALGAS_baseline_5F_instruction_5F_JSR & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JSR_2D_weak::GALGAS_baseline_5F_instruction_5F_JSR_2D_weak (const GALGAS_baseline_5F_instruction_5F_JSR & inSource) :
GALGAS_baseline_5F_instruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JSR_2D_weak GALGAS_baseline_5F_instruction_5F_JSR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_JSR_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JSR GALGAS_baseline_5F_instruction_5F_JSR_2D_weak::bang_baseline_5F_instruction_5F_JSR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_JSR result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_JSR) ;
      result = GALGAS_baseline_5F_instruction_5F_JSR ((cPtr_baseline_5F_instruction_5F_JSR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_instruction_JSR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR_2D_weak ("baseline_instruction_JSR-weak",
                                                               & kTypeDescriptor_GALGAS_baseline_5F_instruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_JSR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_JSR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_JSR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JSR_2D_weak GALGAS_baseline_5F_instruction_5F_JSR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_JSR_2D_weak result ;
  const GALGAS_baseline_5F_instruction_5F_JSR_2D_weak * p = (const GALGAS_baseline_5F_instruction_5F_JSR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_JSR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_JSR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_GOTO reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_instruction_5F_GOTO::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_GOTO * p = (const cPtr_baseline_5F_instruction_5F_GOTO *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_GOTO) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_instruction_5F_GOTO::objectCompare (const GALGAS_baseline_5F_instruction_5F_GOTO & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_GOTO::GALGAS_baseline_5F_instruction_5F_GOTO (void) :
GALGAS_baseline_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_GOTO GALGAS_baseline_5F_instruction_5F_GOTO::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_instruction_5F_GOTO::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_GOTO::GALGAS_baseline_5F_instruction_5F_GOTO (const cPtr_baseline_5F_instruction_5F_GOTO * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_GOTO) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_GOTO GALGAS_baseline_5F_instruction_5F_GOTO::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_GOTO result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_GOTO (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_GOTO::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_GOTO * p = (cPtr_baseline_5F_instruction_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_GOTO) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_GOTO::readProperty_mTargetLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_instruction_5F_GOTO * p = (cPtr_baseline_5F_instruction_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_GOTO) ;
    return p->mProperty_mTargetLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_GOTO class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_GOTO::cPtr_baseline_5F_instruction_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_GOTO::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO ;
}

void cPtr_baseline_5F_instruction_5F_GOTO::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_GOTO:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_GOTO::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_GOTO (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_instruction_GOTO type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO ("baseline_instruction_GOTO",
                                                        & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_GOTO::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_GOTO::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_GOTO (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_GOTO GALGAS_baseline_5F_instruction_5F_GOTO::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_GOTO result ;
  const GALGAS_baseline_5F_instruction_5F_GOTO * p = (const GALGAS_baseline_5F_instruction_5F_GOTO *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_GOTO *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_GOTO", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak::objectCompare (const GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak::GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak (void) :
GALGAS_baseline_5F_instruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak & GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak::operator = (const GALGAS_baseline_5F_instruction_5F_GOTO & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak::GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak (const GALGAS_baseline_5F_instruction_5F_GOTO & inSource) :
GALGAS_baseline_5F_instruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_GOTO GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak::bang_baseline_5F_instruction_5F_GOTO_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_GOTO result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_GOTO) ;
      result = GALGAS_baseline_5F_instruction_5F_GOTO ((cPtr_baseline_5F_instruction_5F_GOTO *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_instruction_GOTO-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak ("baseline_instruction_GOTO-weak",
                                                                & kTypeDescriptor_GALGAS_baseline_5F_instruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak result ;
  const GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak * p = (const GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_GOTO-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_JUMP reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_instruction_5F_JUMP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_JUMP * p = (const cPtr_baseline_5F_instruction_5F_JUMP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_JUMP) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_instruction_5F_JUMP::objectCompare (const GALGAS_baseline_5F_instruction_5F_JUMP & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JUMP::GALGAS_baseline_5F_instruction_5F_JUMP (void) :
GALGAS_baseline_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JUMP GALGAS_baseline_5F_instruction_5F_JUMP::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_instruction_5F_JUMP::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JUMP::GALGAS_baseline_5F_instruction_5F_JUMP (const cPtr_baseline_5F_instruction_5F_JUMP * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_JUMP) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JUMP GALGAS_baseline_5F_instruction_5F_JUMP::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_JUMP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_JUMP (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_JUMP::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_JUMP * p = (cPtr_baseline_5F_instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_JUMP) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_JUMP::readProperty_mTargetLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_instruction_5F_JUMP * p = (cPtr_baseline_5F_instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_JUMP) ;
    return p->mProperty_mTargetLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_JUMP class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_JUMP::cPtr_baseline_5F_instruction_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_JUMP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP ;
}

void cPtr_baseline_5F_instruction_5F_JUMP::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_JUMP:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_JUMP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_JUMP (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_instruction_JUMP type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP ("baseline_instruction_JUMP",
                                                        & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_JUMP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_JUMP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_JUMP (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JUMP GALGAS_baseline_5F_instruction_5F_JUMP::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_JUMP result ;
  const GALGAS_baseline_5F_instruction_5F_JUMP * p = (const GALGAS_baseline_5F_instruction_5F_JUMP *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_JUMP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_JUMP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak::objectCompare (const GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak::GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak (void) :
GALGAS_baseline_5F_instruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak & GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak::operator = (const GALGAS_baseline_5F_instruction_5F_JUMP & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak::GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak (const GALGAS_baseline_5F_instruction_5F_JUMP & inSource) :
GALGAS_baseline_5F_instruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JUMP GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak::bang_baseline_5F_instruction_5F_JUMP_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_JUMP result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_JUMP) ;
      result = GALGAS_baseline_5F_instruction_5F_JUMP ((cPtr_baseline_5F_instruction_5F_JUMP *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_instruction_JUMP-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak ("baseline_instruction_JUMP-weak",
                                                                & kTypeDescriptor_GALGAS_baseline_5F_instruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak result ;
  const GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak * p = (const GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_JUMP-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_TRIS reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_instruction_5F_TRIS::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_TRIS * p = (const cPtr_baseline_5F_instruction_5F_TRIS *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_TRIS) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperand.objectCompare (p->mProperty_mOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_instruction_5F_TRIS::objectCompare (const GALGAS_baseline_5F_instruction_5F_TRIS & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_TRIS::GALGAS_baseline_5F_instruction_5F_TRIS (void) :
GALGAS_baseline_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_TRIS GALGAS_baseline_5F_instruction_5F_TRIS::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_instruction_5F_TRIS::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_TRIS::GALGAS_baseline_5F_instruction_5F_TRIS (const cPtr_baseline_5F_instruction_5F_TRIS * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_TRIS) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_TRIS GALGAS_baseline_5F_instruction_5F_TRIS::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mOperand
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_TRIS result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_TRIS (inAttribute_mInstructionLocation, inAttribute_mOperand COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_TRIS::setter_setMOperand (GALGAS_lstring inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_TRIS * p = (cPtr_baseline_5F_instruction_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_TRIS) ;
    p->mProperty_mOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_TRIS::readProperty_mOperand (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_instruction_5F_TRIS * p = (cPtr_baseline_5F_instruction_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_TRIS) ;
    return p->mProperty_mOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_TRIS class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_TRIS::cPtr_baseline_5F_instruction_5F_TRIS (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mOperand
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mOperand (in_mOperand) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_TRIS::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS ;
}

void cPtr_baseline_5F_instruction_5F_TRIS::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_TRIS:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_TRIS::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_TRIS (mProperty_mInstructionLocation, mProperty_mOperand COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_instruction_TRIS type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS ("baseline_instruction_TRIS",
                                                        & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_TRIS::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_TRIS::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_TRIS (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_TRIS GALGAS_baseline_5F_instruction_5F_TRIS::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_TRIS result ;
  const GALGAS_baseline_5F_instruction_5F_TRIS * p = (const GALGAS_baseline_5F_instruction_5F_TRIS *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_TRIS *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_TRIS", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak::objectCompare (const GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak::GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak (void) :
GALGAS_baseline_5F_instruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak & GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak::operator = (const GALGAS_baseline_5F_instruction_5F_TRIS & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak::GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak (const GALGAS_baseline_5F_instruction_5F_TRIS & inSource) :
GALGAS_baseline_5F_instruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_TRIS GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak::bang_baseline_5F_instruction_5F_TRIS_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_TRIS result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_TRIS) ;
      result = GALGAS_baseline_5F_instruction_5F_TRIS ((cPtr_baseline_5F_instruction_5F_TRIS *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_instruction_TRIS-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak ("baseline_instruction_TRIS-weak",
                                                                & kTypeDescriptor_GALGAS_baseline_5F_instruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak result ;
  const GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak * p = (const GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_TRIS-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_STATIC_5F_REPEAT reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantName.objectCompare (p->mProperty_mConstantName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLowerBoundExpression.objectCompare (p->mProperty_mLowerBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUpperBoundExpression.objectCompare (p->mProperty_mUpperBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfInstruction.objectCompare (p->mProperty_mEndOfInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::objectCompare (const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (void) :
GALGAS_baseline_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                        const GALGAS_lstring & inAttribute_mConstantName,
                                                                                                                        const GALGAS_immediatExpression & inAttribute_mLowerBoundExpression,
                                                                                                                        const GALGAS_immediatExpression & inAttribute_mUpperBoundExpression,
                                                                                                                        const GALGAS_baseline_5F_instructionList & inAttribute_mInstructionList,
                                                                                                                        const GALGAS_location & inAttribute_mEndOfInstruction
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mConstantName.isValid () && inAttribute_mLowerBoundExpression.isValid () && inAttribute_mUpperBoundExpression.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mEndOfInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT (inAttribute_mInstructionLocation, inAttribute_mConstantName, inAttribute_mLowerBoundExpression, inAttribute_mUpperBoundExpression, inAttribute_mInstructionList, inAttribute_mEndOfInstruction COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::setter_setMConstantName (GALGAS_lstring inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mConstantName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::setter_setMLowerBoundExpression (GALGAS_immediatExpression inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mLowerBoundExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::setter_setMUpperBoundExpression (GALGAS_immediatExpression inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mUpperBoundExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::setter_setMInstructionList (GALGAS_baseline_5F_instructionList inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::setter_setMEndOfInstruction (GALGAS_location inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mEndOfInstruction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mConstantName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mConstantName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mLowerBoundExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mLowerBoundExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mUpperBoundExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mUpperBoundExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_baseline_5F_instructionList () ;
  }else{
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mEndOfInstruction (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mEndOfInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_STATIC_REPEAT class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT (const GALGAS_location & in_mInstructionLocation,
                                                                                                    const GALGAS_lstring & in_mConstantName,
                                                                                                    const GALGAS_immediatExpression & in_mLowerBoundExpression,
                                                                                                    const GALGAS_immediatExpression & in_mUpperBoundExpression,
                                                                                                    const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                                                                    const GALGAS_location & in_mEndOfInstruction
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mConstantName (in_mConstantName),
mProperty_mLowerBoundExpression (in_mLowerBoundExpression),
mProperty_mUpperBoundExpression (in_mUpperBoundExpression),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mEndOfInstruction (in_mEndOfInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT ;
}

void cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_STATIC_REPEAT:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLowerBoundExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUpperBoundExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT (mProperty_mInstructionLocation, mProperty_mConstantName, mProperty_mLowerBoundExpression, mProperty_mUpperBoundExpression, mProperty_mInstructionList, mProperty_mEndOfInstruction COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_instruction_STATIC_REPEAT type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT ("baseline_instruction_STATIC_REPEAT",
                                                                    & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT result ;
  const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_STATIC_REPEAT", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::objectCompare (const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak (void) :
GALGAS_baseline_5F_instruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak & GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::operator = (const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak (const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inSource) :
GALGAS_baseline_5F_instruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::bang_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
      result = GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT ((cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_instruction_STATIC_REPEAT-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak ("baseline_instruction_STATIC_REPEAT-weak",
                                                                            & kTypeDescriptor_GALGAS_baseline_5F_instruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak result ;
  const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak * p = (const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_STATIC_REPEAT-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_model::GALGAS_baseline_5F_model (void) :
mProperty_mProgramName (),
mProperty_mDeviceName (),
mProperty_mConfigDefinitionList (),
mProperty_mRamDefinitionList (),
mProperty_mUnusedRegisterList (),
mProperty_mConstantDefinitionList (),
mProperty_mRoutineDefinitionList (),
mProperty_mUnusedRoutineList (),
mProperty_mEndOfProgram () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_model::~ GALGAS_baseline_5F_model (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_model::GALGAS_baseline_5F_model (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_lstring & inOperand1,
                                                    const GALGAS_configDefinitionList & inOperand2,
                                                    const GALGAS_ramDefinitionList & inOperand3,
                                                    const GALGAS_lstringlist & inOperand4,
                                                    const GALGAS_constantDefinitionList & inOperand5,
                                                    const GALGAS_baseline_5F_routineDefinitionList & inOperand6,
                                                    const GALGAS_lstringlist & inOperand7,
                                                    const GALGAS_location & inOperand8) :
mProperty_mProgramName (inOperand0),
mProperty_mDeviceName (inOperand1),
mProperty_mConfigDefinitionList (inOperand2),
mProperty_mRamDefinitionList (inOperand3),
mProperty_mUnusedRegisterList (inOperand4),
mProperty_mConstantDefinitionList (inOperand5),
mProperty_mRoutineDefinitionList (inOperand6),
mProperty_mUnusedRoutineList (inOperand7),
mProperty_mEndOfProgram (inOperand8) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_model GALGAS_baseline_5F_model::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_baseline_5F_model (GALGAS_lstring::constructor_default (HERE),
                                   GALGAS_lstring::constructor_default (HERE),
                                   GALGAS_configDefinitionList::constructor_emptyList (HERE),
                                   GALGAS_ramDefinitionList::constructor_emptyList (HERE),
                                   GALGAS_lstringlist::constructor_emptyList (HERE),
                                   GALGAS_constantDefinitionList::constructor_emptyList (HERE),
                                   GALGAS_baseline_5F_routineDefinitionList::constructor_emptyList (HERE),
                                   GALGAS_lstringlist::constructor_emptyList (HERE),
                                   GALGAS_location::constructor_nowhere (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_model GALGAS_baseline_5F_model::constructor_new (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstring & inOperand1,
                                                                    const GALGAS_configDefinitionList & inOperand2,
                                                                    const GALGAS_ramDefinitionList & inOperand3,
                                                                    const GALGAS_lstringlist & inOperand4,
                                                                    const GALGAS_constantDefinitionList & inOperand5,
                                                                    const GALGAS_baseline_5F_routineDefinitionList & inOperand6,
                                                                    const GALGAS_lstringlist & inOperand7,
                                                                    const GALGAS_location & inOperand8 
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_model result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid ()) {
    result = GALGAS_baseline_5F_model (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_model::objectCompare (const GALGAS_baseline_5F_model & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProgramName.objectCompare (inOperand.mProperty_mProgramName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDeviceName.objectCompare (inOperand.mProperty_mDeviceName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConfigDefinitionList.objectCompare (inOperand.mProperty_mConfigDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRamDefinitionList.objectCompare (inOperand.mProperty_mRamDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUnusedRegisterList.objectCompare (inOperand.mProperty_mUnusedRegisterList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConstantDefinitionList.objectCompare (inOperand.mProperty_mConstantDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineDefinitionList.objectCompare (inOperand.mProperty_mRoutineDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUnusedRoutineList.objectCompare (inOperand.mProperty_mUnusedRoutineList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfProgram.objectCompare (inOperand.mProperty_mEndOfProgram) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_model::isValid (void) const {
  return mProperty_mProgramName.isValid () && mProperty_mDeviceName.isValid () && mProperty_mConfigDefinitionList.isValid () && mProperty_mRamDefinitionList.isValid () && mProperty_mUnusedRegisterList.isValid () && mProperty_mConstantDefinitionList.isValid () && mProperty_mRoutineDefinitionList.isValid () && mProperty_mUnusedRoutineList.isValid () && mProperty_mEndOfProgram.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_model::drop (void) {
  mProperty_mProgramName.drop () ;
  mProperty_mDeviceName.drop () ;
  mProperty_mConfigDefinitionList.drop () ;
  mProperty_mRamDefinitionList.drop () ;
  mProperty_mUnusedRegisterList.drop () ;
  mProperty_mConstantDefinitionList.drop () ;
  mProperty_mRoutineDefinitionList.drop () ;
  mProperty_mUnusedRoutineList.drop () ;
  mProperty_mEndOfProgram.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_model::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<struct @baseline_model:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mProgramName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDeviceName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mConfigDefinitionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRamDefinitionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUnusedRegisterList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mConstantDefinitionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineDefinitionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUnusedRoutineList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfProgram.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_model type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_model ("baseline_model",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_model::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_model ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_model::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_model (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_model GALGAS_baseline_5F_model::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_model result ;
  const GALGAS_baseline_5F_model * p = (const GALGAS_baseline_5F_model *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_model *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_model", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_pseudo_5F_LABEL reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
  if (kOperandEqual == result) {
    result = mProperty_mLabel.objectCompare (p->mProperty_mLabel) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (void) :
GALGAS_baseline_5F_intermediate_5F_pseudo () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_pseudo (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (const GALGAS_lstring & inAttribute_mLabel
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL result ;
  if (inAttribute_mLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (inAttribute_mLabel COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::setter_setMLabel (GALGAS_lstring inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
    p->mProperty_mLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::readProperty_mLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
    return p->mProperty_mLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_pseudo_LABEL class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (const GALGAS_lstring & in_mLabel
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (THERE),
mProperty_mLabel (in_mLabel) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ;
}

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_pseudo_LABEL:" ;
  mProperty_mLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (mProperty_mLabel COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_intermediate_pseudo_LABEL type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ("baseline_intermediate_pseudo_LABEL",
                                                                    & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL result ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL * p = (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_LABEL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak & GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inSource) :
GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::bang_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
      result = GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_intermediate_pseudo_LABEL-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak ("baseline_intermediate_pseudo_LABEL-weak",
                                                                            & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_LABEL-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsRegular.objectCompare (p->mProperty_mIsRegular) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (void) :
GALGAS_baseline_5F_intermediate_5F_pseudo () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                         GALGAS_bool::constructor_default (HERE)
                                                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_pseudo (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::constructor_new (const GALGAS_lstring & inAttribute_mRoutineName,
                                                                                                                                              const GALGAS_bool & inAttribute_mIsRegular
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE result ;
  if (inAttribute_mRoutineName.isValid () && inAttribute_mIsRegular.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (inAttribute_mRoutineName, inAttribute_mIsRegular COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::setter_setMRoutineName (GALGAS_lstring inValue
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
    p->mProperty_mRoutineName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::setter_setMIsRegular (GALGAS_bool inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
    p->mProperty_mIsRegular = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::readProperty_mRoutineName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
    return p->mProperty_mRoutineName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::readProperty_mIsRegular (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
    return p->mProperty_mIsRegular ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_pseudo_BEGIN_ROUTINE class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                                                                          const GALGAS_bool & in_mIsRegular
                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (THERE),
mProperty_mRoutineName (in_mRoutineName),
mProperty_mIsRegular (in_mIsRegular) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ;
}

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_pseudo_BEGIN_ROUTINE:" ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsRegular.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (mProperty_mRoutineName, mProperty_mIsRegular COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_intermediate_pseudo_BEGIN_ROUTINE type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ("baseline_intermediate_pseudo_BEGIN_ROUTINE",
                                                                               & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::extractObject (const GALGAS_object & inObject,
                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE result ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_BEGIN_ROUTINE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak & GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inSource) :
GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak::bang_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
      result = GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_intermediate_pseudo_BEGIN_ROUTINE-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak ("baseline_intermediate_pseudo_BEGIN_ROUTINE-weak",
                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_BEGIN_ROUTINE-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPage.objectCompare (p->mProperty_mPage) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (void) :
GALGAS_baseline_5F_intermediate_5F_pseudo () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                       GALGAS_uint::constructor_default (HERE)
                                                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_pseudo (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::constructor_new (const GALGAS_lstring & inAttribute_mRoutineName,
                                                                                                                                          const GALGAS_uint & inAttribute_mPage
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE result ;
  if (inAttribute_mRoutineName.isValid () && inAttribute_mPage.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (inAttribute_mRoutineName, inAttribute_mPage COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::setter_setMRoutineName (GALGAS_lstring inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
    p->mProperty_mRoutineName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::setter_setMPage (GALGAS_uint inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
    p->mProperty_mPage = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::readProperty_mRoutineName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
    return p->mProperty_mRoutineName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::readProperty_mPage (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
    return p->mProperty_mPage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_pseudo_END_ROUTINE class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                                                                      const GALGAS_uint & in_mPage
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (THERE),
mProperty_mRoutineName (in_mRoutineName),
mProperty_mPage (in_mPage) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ;
}

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_pseudo_END_ROUTINE:" ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPage.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (mProperty_mRoutineName, mProperty_mPage COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_intermediate_pseudo_END_ROUTINE type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ("baseline_intermediate_pseudo_END_ROUTINE",
                                                                             & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::extractObject (const GALGAS_object & inObject,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE result ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_END_ROUTINE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak & GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inSource) :
GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak::bang_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
      result = GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_intermediate_pseudo_END_ROUTINE-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak ("baseline_intermediate_pseudo_END_ROUTINE-weak",
                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_END_ROUTINE-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_GOTO reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_intermediate_5F_GOTO::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_GOTO * p = (const cPtr_baseline_5F_intermediate_5F_GOTO *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_GOTO) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_GOTO::objectCompare (const GALGAS_baseline_5F_intermediate_5F_GOTO & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_GOTO::GALGAS_baseline_5F_intermediate_5F_GOTO (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_GOTO GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                   GALGAS_lstring::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_GOTO::GALGAS_baseline_5F_intermediate_5F_GOTO (const cPtr_baseline_5F_intermediate_5F_GOTO * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_GOTO) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_GOTO GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_GOTO result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_GOTO (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_GOTO::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_GOTO * p = (cPtr_baseline_5F_intermediate_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_GOTO) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_GOTO::readProperty_mTargetLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_GOTO * p = (cPtr_baseline_5F_intermediate_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_GOTO) ;
    return p->mProperty_mTargetLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_GOTO class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_GOTO::cPtr_baseline_5F_intermediate_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_GOTO::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO ;
}

void cPtr_baseline_5F_intermediate_5F_GOTO::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_GOTO:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_GOTO::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_GOTO (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_intermediate_GOTO type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO ("baseline_intermediate_GOTO",
                                                         & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_GOTO::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_GOTO::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_GOTO (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_GOTO GALGAS_baseline_5F_intermediate_5F_GOTO::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_GOTO result ;
  const GALGAS_baseline_5F_intermediate_5F_GOTO * p = (const GALGAS_baseline_5F_intermediate_5F_GOTO *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_GOTO *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_GOTO", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak::GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak & GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_GOTO & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak::GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak (const GALGAS_baseline_5F_intermediate_5F_GOTO & inSource) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_GOTO GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak::bang_baseline_5F_intermediate_5F_GOTO_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_GOTO result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_GOTO) ;
      result = GALGAS_baseline_5F_intermediate_5F_GOTO ((cPtr_baseline_5F_intermediate_5F_GOTO *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_intermediate_GOTO-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak ("baseline_intermediate_GOTO-weak",
                                                                 & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_GOTO-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_JUMP reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_intermediate_5F_JUMP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_JUMP * p = (const cPtr_baseline_5F_intermediate_5F_JUMP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCurrentPage.objectCompare (p->mProperty_mCurrentPage) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetPage.objectCompare (p->mProperty_mTargetPage) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_JUMP::objectCompare (const GALGAS_baseline_5F_intermediate_5F_JUMP & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JUMP::GALGAS_baseline_5F_intermediate_5F_JUMP (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JUMP GALGAS_baseline_5F_intermediate_5F_JUMP::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_JUMP::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                   GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_uint::constructor_default (HERE),
                                                                   GALGAS_uint::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JUMP::GALGAS_baseline_5F_intermediate_5F_JUMP (const cPtr_baseline_5F_intermediate_5F_JUMP * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_JUMP) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JUMP GALGAS_baseline_5F_intermediate_5F_JUMP::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstring & inAttribute_mTargetLabel,
                                                                                                  const GALGAS_uint & inAttribute_mCurrentPage,
                                                                                                  const GALGAS_uint & inAttribute_mTargetPage
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_JUMP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mCurrentPage.isValid () && inAttribute_mTargetPage.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_JUMP (inAttribute_mInstructionLocation, inAttribute_mTargetLabel, inAttribute_mCurrentPage, inAttribute_mTargetPage COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_JUMP::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_JUMP::setter_setMCurrentPage (GALGAS_uint inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    p->mProperty_mCurrentPage = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_JUMP::setter_setMTargetPage (GALGAS_uint inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    p->mProperty_mTargetPage = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_JUMP::readProperty_mTargetLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    return p->mProperty_mTargetLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_JUMP::readProperty_mCurrentPage (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    return p->mProperty_mCurrentPage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_JUMP::readProperty_mTargetPage (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    return p->mProperty_mTargetPage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_JUMP class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_JUMP::cPtr_baseline_5F_intermediate_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel,
                                                                              const GALGAS_uint & in_mCurrentPage,
                                                                              const GALGAS_uint & in_mTargetPage
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel),
mProperty_mCurrentPage (in_mCurrentPage),
mProperty_mTargetPage (in_mTargetPage) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_JUMP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP ;
}

void cPtr_baseline_5F_intermediate_5F_JUMP::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_JUMP:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCurrentPage.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetPage.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_JUMP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_JUMP (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mCurrentPage, mProperty_mTargetPage COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_intermediate_JUMP type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP ("baseline_intermediate_JUMP",
                                                         & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_JUMP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_JUMP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_JUMP (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JUMP GALGAS_baseline_5F_intermediate_5F_JUMP::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_JUMP result ;
  const GALGAS_baseline_5F_intermediate_5F_JUMP * p = (const GALGAS_baseline_5F_intermediate_5F_JUMP *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_JUMP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_JUMP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak::GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak & GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_JUMP & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak::GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak (const GALGAS_baseline_5F_intermediate_5F_JUMP & inSource) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JUMP GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak::bang_baseline_5F_intermediate_5F_JUMP_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_JUMP result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_JUMP) ;
      result = GALGAS_baseline_5F_intermediate_5F_JUMP ((cPtr_baseline_5F_intermediate_5F_JUMP *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_intermediate_JUMP-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak ("baseline_intermediate_JUMP-weak",
                                                                 & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_JUMP-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_CALL reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_intermediate_5F_CALL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_CALL * p = (const cPtr_baseline_5F_intermediate_5F_CALL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_CALL) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_CALL::objectCompare (const GALGAS_baseline_5F_intermediate_5F_CALL & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_CALL::GALGAS_baseline_5F_intermediate_5F_CALL (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_CALL GALGAS_baseline_5F_intermediate_5F_CALL::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_CALL::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                   GALGAS_lstring::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_CALL::GALGAS_baseline_5F_intermediate_5F_CALL (const cPtr_baseline_5F_intermediate_5F_CALL * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_CALL) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_CALL GALGAS_baseline_5F_intermediate_5F_CALL::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_CALL result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_CALL (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_CALL::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_CALL * p = (cPtr_baseline_5F_intermediate_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_CALL) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_CALL::readProperty_mTargetLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_CALL * p = (cPtr_baseline_5F_intermediate_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_CALL) ;
    return p->mProperty_mTargetLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_CALL class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_CALL::cPtr_baseline_5F_intermediate_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_CALL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL ;
}

void cPtr_baseline_5F_intermediate_5F_CALL::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_CALL:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_CALL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_CALL (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_intermediate_CALL type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL ("baseline_intermediate_CALL",
                                                         & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_CALL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_CALL::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_CALL (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_CALL GALGAS_baseline_5F_intermediate_5F_CALL::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_CALL result ;
  const GALGAS_baseline_5F_intermediate_5F_CALL * p = (const GALGAS_baseline_5F_intermediate_5F_CALL *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_CALL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_CALL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak::GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak & GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_CALL & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak::GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak (const GALGAS_baseline_5F_intermediate_5F_CALL & inSource) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_CALL GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak::bang_baseline_5F_intermediate_5F_CALL_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_CALL result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_CALL) ;
      result = GALGAS_baseline_5F_intermediate_5F_CALL ((cPtr_baseline_5F_intermediate_5F_CALL *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_intermediate_CALL-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak ("baseline_intermediate_CALL-weak",
                                                                 & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_CALL-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_JSR reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_intermediate_5F_JSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_JSR * p = (const cPtr_baseline_5F_intermediate_5F_JSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCurrentPage.objectCompare (p->mProperty_mCurrentPage) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetPage.objectCompare (p->mProperty_mTargetPage) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_JSR::objectCompare (const GALGAS_baseline_5F_intermediate_5F_JSR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JSR::GALGAS_baseline_5F_intermediate_5F_JSR (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JSR GALGAS_baseline_5F_intermediate_5F_JSR::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_JSR::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_uint::constructor_default (HERE),
                                                                  GALGAS_uint::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JSR::GALGAS_baseline_5F_intermediate_5F_JSR (const cPtr_baseline_5F_intermediate_5F_JSR * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_JSR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JSR GALGAS_baseline_5F_intermediate_5F_JSR::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mTargetLabel,
                                                                                                const GALGAS_uint & inAttribute_mCurrentPage,
                                                                                                const GALGAS_uint & inAttribute_mTargetPage
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_JSR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mCurrentPage.isValid () && inAttribute_mTargetPage.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_JSR (inAttribute_mInstructionLocation, inAttribute_mTargetLabel, inAttribute_mCurrentPage, inAttribute_mTargetPage COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_JSR::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_JSR::setter_setMCurrentPage (GALGAS_uint inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    p->mProperty_mCurrentPage = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_JSR::setter_setMTargetPage (GALGAS_uint inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    p->mProperty_mTargetPage = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_JSR::readProperty_mTargetLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    return p->mProperty_mTargetLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_JSR::readProperty_mCurrentPage (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    return p->mProperty_mCurrentPage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_JSR::readProperty_mTargetPage (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    return p->mProperty_mTargetPage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_JSR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_JSR::cPtr_baseline_5F_intermediate_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel,
                                                                            const GALGAS_uint & in_mCurrentPage,
                                                                            const GALGAS_uint & in_mTargetPage
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel),
mProperty_mCurrentPage (in_mCurrentPage),
mProperty_mTargetPage (in_mTargetPage) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR ;
}

void cPtr_baseline_5F_intermediate_5F_JSR::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_JSR:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCurrentPage.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetPage.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_JSR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_JSR (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mCurrentPage, mProperty_mTargetPage COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_intermediate_JSR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR ("baseline_intermediate_JSR",
                                                        & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_JSR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JSR GALGAS_baseline_5F_intermediate_5F_JSR::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_JSR result ;
  const GALGAS_baseline_5F_intermediate_5F_JSR * p = (const GALGAS_baseline_5F_intermediate_5F_JSR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_JSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_JSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak::GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak & GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_JSR & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak::GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak (const GALGAS_baseline_5F_intermediate_5F_JSR & inSource) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JSR GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak::bang_baseline_5F_intermediate_5F_JSR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_JSR result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_JSR) ;
      result = GALGAS_baseline_5F_intermediate_5F_JSR ((cPtr_baseline_5F_intermediate_5F_JSR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_intermediate_JSR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak ("baseline_intermediate_JSR-weak",
                                                                & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_JSR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_TRIS reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_intermediate_5F_TRIS::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_TRIS * p = (const cPtr_baseline_5F_intermediate_5F_TRIS *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_TRIS) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperand.objectCompare (p->mProperty_mOperand) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOpcode.objectCompare (p->mProperty_mOpcode) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_TRIS::objectCompare (const GALGAS_baseline_5F_intermediate_5F_TRIS & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_TRIS::GALGAS_baseline_5F_intermediate_5F_TRIS (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_TRIS GALGAS_baseline_5F_intermediate_5F_TRIS::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_TRIS::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                   GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_uint::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_TRIS::GALGAS_baseline_5F_intermediate_5F_TRIS (const cPtr_baseline_5F_intermediate_5F_TRIS * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_TRIS) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_TRIS GALGAS_baseline_5F_intermediate_5F_TRIS::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstring & inAttribute_mOperand,
                                                                                                  const GALGAS_uint & inAttribute_mOpcode
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_TRIS result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOperand.isValid () && inAttribute_mOpcode.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_TRIS (inAttribute_mInstructionLocation, inAttribute_mOperand, inAttribute_mOpcode COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_TRIS::setter_setMOperand (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_TRIS * p = (cPtr_baseline_5F_intermediate_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_TRIS) ;
    p->mProperty_mOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_TRIS::setter_setMOpcode (GALGAS_uint inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_TRIS * p = (cPtr_baseline_5F_intermediate_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_TRIS) ;
    p->mProperty_mOpcode = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_TRIS::readProperty_mOperand (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_TRIS * p = (cPtr_baseline_5F_intermediate_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_TRIS) ;
    return p->mProperty_mOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_TRIS::readProperty_mOpcode (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_TRIS * p = (cPtr_baseline_5F_intermediate_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_TRIS) ;
    return p->mProperty_mOpcode ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_TRIS class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_TRIS::cPtr_baseline_5F_intermediate_5F_TRIS (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mOperand,
                                                                              const GALGAS_uint & in_mOpcode
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mOperand (in_mOperand),
mProperty_mOpcode (in_mOpcode) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_TRIS::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS ;
}

void cPtr_baseline_5F_intermediate_5F_TRIS::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_TRIS:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOpcode.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_TRIS::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_TRIS (mProperty_mInstructionLocation, mProperty_mOperand, mProperty_mOpcode COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_intermediate_TRIS type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS ("baseline_intermediate_TRIS",
                                                         & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_TRIS::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_TRIS::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_TRIS (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_TRIS GALGAS_baseline_5F_intermediate_5F_TRIS::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_TRIS result ;
  const GALGAS_baseline_5F_intermediate_5F_TRIS * p = (const GALGAS_baseline_5F_intermediate_5F_TRIS *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_TRIS *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_TRIS", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak::objectCompare (const GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak::GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak & GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak::operator = (const GALGAS_baseline_5F_intermediate_5F_TRIS & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak::GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak (const GALGAS_baseline_5F_intermediate_5F_TRIS & inSource) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_TRIS GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak::bang_baseline_5F_intermediate_5F_TRIS_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_TRIS result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_TRIS) ;
      result = GALGAS_baseline_5F_intermediate_5F_TRIS ((cPtr_baseline_5F_intermediate_5F_TRIS *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_intermediate_TRIS-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak ("baseline_intermediate_TRIS-weak",
                                                                 & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak result ;
  const GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak * p = (const GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_TRIS-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_GOTO optimizeGOTO'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_baseline_5F_intermediate_5F_GOTO_optimizeGOTO> gExtensionMethodTable_baseline_5F_intermediate_5F_GOTO_optimizeGOTO ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_optimizeGOTO (const int32_t inClassIndex,
                                        extensionMethodSignature_baseline_5F_intermediate_5F_GOTO_optimizeGOTO inMethod) {
  gExtensionMethodTable_baseline_5F_intermediate_5F_GOTO_optimizeGOTO.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeGOTO (const cPtr_baseline_5F_intermediate_5F_GOTO * inObject,
                                       const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                       const GALGAS_uint constin_inLineIndex,
                                       GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GALGAS_string & io_ioListFileContents,
                                       GALGAS_bool & io_ioOptimizationsDone,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_GOTO) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_baseline_5F_intermediate_5F_GOTO_optimizeGOTO f = NULL ;
    if (classIndex < gExtensionMethodTable_baseline_5F_intermediate_5F_GOTO_optimizeGOTO.count ()) {
      f = gExtensionMethodTable_baseline_5F_intermediate_5F_GOTO_optimizeGOTO (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_baseline_5F_intermediate_5F_GOTO_optimizeGOTO.count ()) {
           f = gExtensionMethodTable_baseline_5F_intermediate_5F_GOTO_optimizeGOTO (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_baseline_5F_intermediate_5F_GOTO_optimizeGOTO.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_GOTO_optimizeGOTO (const cPtr_baseline_5F_intermediate_5F_GOTO * inObject,
                                                                           const GALGAS_baselineSymbolTableForOptimizations constinArgument_inSymbolTable,
                                                                           const GALGAS_uint constinArgument_inLineIndex,
                                                                           GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                           GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_GOTO * object = inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_GOTO) ;
  GALGAS_stringset var_reachedLabelSet_10173 ;
  {
  GALGAS_baseline_5F_intermediate_5F_instruction joker_10151 ; // Joker input parameter
  routine_findBaselineFirstInstructionOrLabelFromAddress (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 260)), ioArgument_ioGeneratedInstructionList, joker_10151, var_reachedLabelSet_10173, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 260)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_intermediate_5F_GOTO temp_1 = object ;
    test_0 = var_reachedLabelSet_10173.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 261)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 262)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 262)) ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 263)).add_operation (GALGAS_string (": GOTO branching to next instruction deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 263)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_uint var_line_10574 ;
    const GALGAS_baseline_5F_intermediate_5F_GOTO temp_2 = object ;
    constinArgument_inSymbolTable.method_searchKey (temp_2.readProperty_mTargetLabel (), var_line_10574, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 266)) ;
    GALGAS_baseline_5F_intermediate_5F_instruction var_firstInstruction_10722 ;
    {
    routine_findBaselineFirstInstructionFromAddress (var_line_10574.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 268)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_10722, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 268)) ;
    }
    if (var_firstInstruction_10722.isValid ()) {
      if (var_firstInstruction_10722.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation) {
        GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation cast_10873_literalOp ((cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) var_firstInstruction_10722.ptr ()) ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, cast_10873_literalOp.readProperty_mInstruction ().objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 272)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            {
            ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (cast_10873_literalOp, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 273)) ;
            }
            ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 278)).add_operation (GALGAS_string (": GOTO branching to RETLW replaced by RETLW\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 278)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 278)) ;
          }
        }
      }else if (var_firstInstruction_10722.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO) {
        GALGAS_baseline_5F_intermediate_5F_GOTO cast_11277_goto ((cPtr_baseline_5F_intermediate_5F_GOTO *) var_firstInstruction_10722.ptr ()) ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          const GALGAS_baseline_5F_intermediate_5F_GOTO temp_5 = object ;
          test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mTargetLabel ().objectCompare (cast_11277_goto.readProperty_mTargetLabel ())).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            const GALGAS_baseline_5F_intermediate_5F_GOTO temp_6 = object ;
            ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (temp_6.readProperty_mInstructionLocation (), cast_11277_goto.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 283)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 282)) ;
            }
            ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
            const GALGAS_baseline_5F_intermediate_5F_GOTO temp_7 = object ;
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 289)).add_operation (GALGAS_string (": GOTO "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 289)).add_operation (temp_7.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 289)).add_operation (GALGAS_string (" branching to GOTO "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 289)).add_operation (cast_11277_goto.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 289)).add_operation (GALGAS_string (" replaced by GOTO "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 289)).add_operation (cast_11277_goto.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 289)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 289)) ;
          }
        }
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_GOTO_optimizeGOTO (void) {
  enterExtensionMethod_optimizeGOTO (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO.mSlotID,
                                     extensionMethod_baseline_5F_intermediate_5F_GOTO_optimizeGOTO) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_baseline_5F_intermediate_5F_GOTO_optimizeGOTO (void) {
  gExtensionMethodTable_baseline_5F_intermediate_5F_GOTO_optimizeGOTO.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_GOTO_optimizeGOTO (defineExtensionMethod_baseline_5F_intermediate_5F_GOTO_optimizeGOTO,
                                                                          freeExtensionMethod_baseline_5F_intermediate_5F_GOTO_optimizeGOTO) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_JUMP optimizeJUMP'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_baseline_5F_intermediate_5F_JUMP_optimizeJUMP> gExtensionMethodTable_baseline_5F_intermediate_5F_JUMP_optimizeJUMP ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_optimizeJUMP (const int32_t inClassIndex,
                                        extensionMethodSignature_baseline_5F_intermediate_5F_JUMP_optimizeJUMP inMethod) {
  gExtensionMethodTable_baseline_5F_intermediate_5F_JUMP_optimizeJUMP.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeJUMP (const cPtr_baseline_5F_intermediate_5F_JUMP * inObject,
                                       const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                       const GALGAS_uint constin_inLineIndex,
                                       GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GALGAS_string & io_ioListFileContents,
                                       GALGAS_bool & io_ioOptimizationsDone,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_baseline_5F_intermediate_5F_JUMP_optimizeJUMP f = NULL ;
    if (classIndex < gExtensionMethodTable_baseline_5F_intermediate_5F_JUMP_optimizeJUMP.count ()) {
      f = gExtensionMethodTable_baseline_5F_intermediate_5F_JUMP_optimizeJUMP (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_baseline_5F_intermediate_5F_JUMP_optimizeJUMP.count ()) {
           f = gExtensionMethodTable_baseline_5F_intermediate_5F_JUMP_optimizeJUMP (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_baseline_5F_intermediate_5F_JUMP_optimizeJUMP.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_JUMP_optimizeJUMP (const cPtr_baseline_5F_intermediate_5F_JUMP * inObject,
                                                                           const GALGAS_baselineSymbolTableForOptimizations constinArgument_inSymbolTable,
                                                                           const GALGAS_uint constinArgument_inLineIndex,
                                                                           GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                           GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_JUMP * object = inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JUMP) ;
  GALGAS_uint var_line_12268 ;
  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_0 = object ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_line_12268, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 305)) ;
  GALGAS_baseline_5F_intermediate_5F_instruction var_firstInstruction_12459 ;
  {
  routine_findBaselineFirstInstructionFromAddress (var_line_12268.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 308)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_12459, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 307)) ;
  }
  if (var_firstInstruction_12459.isValid ()) {
    if (var_firstInstruction_12459.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation) {
      GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation cast_12606_literalOp ((cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) var_firstInstruction_12459.ptr ()) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, cast_12606_literalOp.readProperty_mInstruction ().objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 315)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (cast_12606_literalOp, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 316)) ;
          }
          ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 321)).add_operation (GALGAS_string (": JUMP branching to RETLW replaced by RETLW\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 321)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 321)) ;
        }
      }
    }else if (var_firstInstruction_12459.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO) {
      GALGAS_baseline_5F_intermediate_5F_GOTO cast_12992_goto ((cPtr_baseline_5F_intermediate_5F_GOTO *) var_firstInstruction_12459.ptr ()) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        const GALGAS_baseline_5F_intermediate_5F_JUMP temp_3 = object ;
        test_2 = GALGAS_bool (kIsNotEqual, temp_3.readProperty_mTargetLabel ().objectCompare (cast_12992_goto.readProperty_mTargetLabel ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          const GALGAS_baseline_5F_intermediate_5F_JUMP temp_4 = object ;
          const GALGAS_baseline_5F_intermediate_5F_JUMP temp_5 = object ;
          const GALGAS_baseline_5F_intermediate_5F_JUMP temp_6 = object ;
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_JUMP::constructor_new (temp_4.readProperty_mInstructionLocation (), cast_12992_goto.readProperty_mTargetLabel (), temp_5.readProperty_mCurrentPage (), temp_6.readProperty_mTargetPage ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 326)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 325)) ;
          }
          ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
          const GALGAS_baseline_5F_intermediate_5F_JUMP temp_7 = object ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 334)).add_operation (GALGAS_string (": JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 334)).add_operation (temp_7.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 334)).add_operation (GALGAS_string (" branching to GOTO "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 334)).add_operation (cast_12992_goto.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 335)).add_operation (GALGAS_string (" replaced by JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 335)).add_operation (cast_12992_goto.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 336)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 334)) ;
        }
      }
    }else if (var_firstInstruction_12459.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP) {
      GALGAS_baseline_5F_intermediate_5F_JUMP cast_13579_jump ((cPtr_baseline_5F_intermediate_5F_JUMP *) var_firstInstruction_12459.ptr ()) ;
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        const GALGAS_baseline_5F_intermediate_5F_JUMP temp_9 = object ;
        test_8 = GALGAS_bool (kIsNotEqual, temp_9.readProperty_mTargetLabel ().objectCompare (cast_13579_jump.readProperty_mTargetLabel ())).boolEnum () ;
        if (kBoolTrue == test_8) {
          {
          const GALGAS_baseline_5F_intermediate_5F_JUMP temp_10 = object ;
          const GALGAS_baseline_5F_intermediate_5F_JUMP temp_11 = object ;
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_JUMP::constructor_new (temp_10.readProperty_mInstructionLocation (), cast_13579_jump.readProperty_mTargetLabel (), temp_11.readProperty_mCurrentPage (), cast_13579_jump.readProperty_mTargetPage ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 341)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 340)) ;
          }
          ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
          const GALGAS_baseline_5F_intermediate_5F_JUMP temp_12 = object ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 349)).add_operation (GALGAS_string (": JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 349)).add_operation (temp_12.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 349)).add_operation (GALGAS_string (" branching to JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 349)).add_operation (cast_13579_jump.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 350)).add_operation (GALGAS_string (" replaced by JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 350)).add_operation (cast_13579_jump.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 351)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 349)) ;
        }
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_JUMP_optimizeJUMP (void) {
  enterExtensionMethod_optimizeJUMP (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP.mSlotID,
                                     extensionMethod_baseline_5F_intermediate_5F_JUMP_optimizeJUMP) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_baseline_5F_intermediate_5F_JUMP_optimizeJUMP (void) {
  gExtensionMethodTable_baseline_5F_intermediate_5F_JUMP_optimizeJUMP.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_JUMP_optimizeJUMP (defineExtensionMethod_baseline_5F_intermediate_5F_JUMP_optimizeJUMP,
                                                                          freeExtensionMethod_baseline_5F_intermediate_5F_JUMP_optimizeJUMP) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_CALL optimizeCALL'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_baseline_5F_intermediate_5F_CALL_optimizeCALL> gExtensionMethodTable_baseline_5F_intermediate_5F_CALL_optimizeCALL ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_optimizeCALL (const int32_t inClassIndex,
                                        extensionMethodSignature_baseline_5F_intermediate_5F_CALL_optimizeCALL inMethod) {
  gExtensionMethodTable_baseline_5F_intermediate_5F_CALL_optimizeCALL.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeCALL (const cPtr_baseline_5F_intermediate_5F_CALL * inObject,
                                       const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                       const GALGAS_uint constin_inLineIndex,
                                       GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GALGAS_string & io_ioListFileContents,
                                       GALGAS_bool & io_ioOptimizationsDone,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_CALL) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_baseline_5F_intermediate_5F_CALL_optimizeCALL f = NULL ;
    if (classIndex < gExtensionMethodTable_baseline_5F_intermediate_5F_CALL_optimizeCALL.count ()) {
      f = gExtensionMethodTable_baseline_5F_intermediate_5F_CALL_optimizeCALL (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_baseline_5F_intermediate_5F_CALL_optimizeCALL.count ()) {
           f = gExtensionMethodTable_baseline_5F_intermediate_5F_CALL_optimizeCALL (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_baseline_5F_intermediate_5F_CALL_optimizeCALL.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_CALL_optimizeCALL (const cPtr_baseline_5F_intermediate_5F_CALL * inObject,
                                                                           const GALGAS_baselineSymbolTableForOptimizations constinArgument_inSymbolTable,
                                                                           const GALGAS_uint constinArgument_inLineIndex,
                                                                           GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                           GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_CALL * object = inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_CALL) ;
  GALGAS_uint var_line_14607 ;
  const GALGAS_baseline_5F_intermediate_5F_CALL temp_0 = object ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_line_14607, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 366)) ;
  GALGAS_baseline_5F_intermediate_5F_instruction var_firstInstruction_14798 ;
  {
  routine_findBaselineFirstInstructionFromAddress (var_line_14607.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 369)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_14798, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 368)) ;
  }
  if (var_firstInstruction_14798.isValid ()) {
    if (var_firstInstruction_14798.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation) {
      GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation cast_14945_literalOp ((cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) var_firstInstruction_14798.ptr ()) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, cast_14945_literalOp.readProperty_mInstruction ().objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 376)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          const GALGAS_baseline_5F_intermediate_5F_CALL temp_2 = object ;
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_2.readProperty_mInstructionLocation (), GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("baseline_optimizations.galgas", 380)), cast_14945_literalOp.readProperty_mLiteralValue ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 378)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 377)) ;
          }
          ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
          const GALGAS_baseline_5F_intermediate_5F_CALL temp_3 = object ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 385)).add_operation (GALGAS_string (": CALL "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 385)).add_operation (temp_3.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 385)).add_operation (GALGAS_string (" to RETLW "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 385)).add_operation (cast_14945_literalOp.readProperty_mLiteralValue ().getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 386)).add_operation (GALGAS_string (" replaced by MOVLW "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 386)).add_operation (cast_14945_literalOp.readProperty_mLiteralValue ().getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 387)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 385)) ;
        }
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_CALL_optimizeCALL (void) {
  enterExtensionMethod_optimizeCALL (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL.mSlotID,
                                     extensionMethod_baseline_5F_intermediate_5F_CALL_optimizeCALL) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_baseline_5F_intermediate_5F_CALL_optimizeCALL (void) {
  gExtensionMethodTable_baseline_5F_intermediate_5F_CALL_optimizeCALL.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_CALL_optimizeCALL (defineExtensionMethod_baseline_5F_intermediate_5F_CALL_optimizeCALL,
                                                                          freeExtensionMethod_baseline_5F_intermediate_5F_CALL_optimizeCALL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_JSR optimizeJSR'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_baseline_5F_intermediate_5F_JSR_optimizeJSR> gExtensionMethodTable_baseline_5F_intermediate_5F_JSR_optimizeJSR ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_optimizeJSR (const int32_t inClassIndex,
                                       extensionMethodSignature_baseline_5F_intermediate_5F_JSR_optimizeJSR inMethod) {
  gExtensionMethodTable_baseline_5F_intermediate_5F_JSR_optimizeJSR.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeJSR (const cPtr_baseline_5F_intermediate_5F_JSR * inObject,
                                      const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                      const GALGAS_uint constin_inLineIndex,
                                      GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                      GALGAS_string & io_ioListFileContents,
                                      GALGAS_bool & io_ioOptimizationsDone,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_JSR) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_baseline_5F_intermediate_5F_JSR_optimizeJSR f = NULL ;
    if (classIndex < gExtensionMethodTable_baseline_5F_intermediate_5F_JSR_optimizeJSR.count ()) {
      f = gExtensionMethodTable_baseline_5F_intermediate_5F_JSR_optimizeJSR (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_baseline_5F_intermediate_5F_JSR_optimizeJSR.count ()) {
           f = gExtensionMethodTable_baseline_5F_intermediate_5F_JSR_optimizeJSR (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_baseline_5F_intermediate_5F_JSR_optimizeJSR.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_JSR_optimizeJSR (const cPtr_baseline_5F_intermediate_5F_JSR * inObject,
                                                                         const GALGAS_baselineSymbolTableForOptimizations constinArgument_inSymbolTable,
                                                                         const GALGAS_uint constinArgument_inLineIndex,
                                                                         GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                         GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_JSR * object = inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JSR) ;
  GALGAS_uint var_line_16014 ;
  const GALGAS_baseline_5F_intermediate_5F_JSR temp_0 = object ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_line_16014, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 402)) ;
  GALGAS_baseline_5F_intermediate_5F_instruction var_firstInstruction_16205 ;
  {
  routine_findBaselineFirstInstructionFromAddress (var_line_16014.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 405)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_16205, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 404)) ;
  }
  if (var_firstInstruction_16205.isValid ()) {
    if (var_firstInstruction_16205.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation) {
      GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation cast_16352_literalOp ((cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) var_firstInstruction_16205.ptr ()) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, cast_16352_literalOp.readProperty_mInstruction ().objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 412)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          const GALGAS_baseline_5F_intermediate_5F_JSR temp_2 = object ;
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_2.readProperty_mInstructionLocation (), GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("baseline_optimizations.galgas", 416)), cast_16352_literalOp.readProperty_mLiteralValue ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 414)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 413)) ;
          }
          ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
          const GALGAS_baseline_5F_intermediate_5F_JSR temp_3 = object ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 421)).add_operation (GALGAS_string (": JSR "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 421)).add_operation (temp_3.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 421)).add_operation (GALGAS_string (" to RETLW "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 421)).add_operation (cast_16352_literalOp.readProperty_mLiteralValue ().getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 422)).add_operation (GALGAS_string (" replaced by MOVLW "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 422)).add_operation (cast_16352_literalOp.readProperty_mLiteralValue ().getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 423)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 423)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 421)) ;
        }
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_JSR_optimizeJSR (void) {
  enterExtensionMethod_optimizeJSR (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR.mSlotID,
                                    extensionMethod_baseline_5F_intermediate_5F_JSR_optimizeJSR) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_baseline_5F_intermediate_5F_JSR_optimizeJSR (void) {
  gExtensionMethodTable_baseline_5F_intermediate_5F_JSR_optimizeJSR.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_JSR_optimizeJSR (defineExtensionMethod_baseline_5F_intermediate_5F_JSR_optimizeJSR,
                                                                        freeExtensionMethod_baseline_5F_intermediate_5F_JSR_optimizeJSR) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_pseudo_BEGIN_ROUTINE optimizeBEGIN_ROUTINE'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE> gExtensionMethodTable_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_optimizeBEGIN_5F_ROUTINE (const int32_t inClassIndex,
                                                    extensionMethodSignature_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE inMethod) {
  gExtensionMethodTable_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeBEGIN_5F_ROUTINE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inObject,
                                                   const GALGAS_uint constin_inLineIndex,
                                                   GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                   GALGAS_string & io_ioListFileContents,
                                                   GALGAS_bool & io_ioOptimizationsDone,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE f = NULL ;
    if (classIndex < gExtensionMethodTable_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE.count ()) {
      f = gExtensionMethodTable_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE.count ()) {
           f = gExtensionMethodTable_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * /* inObject */,
                                                                                                             const GALGAS_uint constinArgument_inLineIndex,
                                                                                                             GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                                                             GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction var_nextInstruction_17494 = ioArgument_ioGeneratedInstructionList.getter_mInstructionAtIndex (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 439)) ;
  GALGAS_bool var_reachable_17619 = GALGAS_bool (false) ;
  if (var_nextInstruction_17494.isValid ()) {
    if (var_nextInstruction_17494.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL) {
      var_reachable_17619 = GALGAS_bool (true) ;
    }
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_reachable_17619.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 448)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 450)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 449)) ;
      }
      ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 454)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 454)).add_operation (GALGAS_string (": dead code is deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 454)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 454)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE (void) {
  enterExtensionMethod_optimizeBEGIN_5F_ROUTINE (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE.mSlotID,
                                                 extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE (void) {
  gExtensionMethodTable_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE,
                                                                                                            freeExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE) ;

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsRegular.objectCompare (p->mProperty_mIsRegular) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (void) :
GALGAS_baseline_5F_assembly_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                   GALGAS_bool::constructor_default (HERE)
                                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::constructor_new (const GALGAS_lstring & inAttribute_mRoutineName,
                                                                                                                                  const GALGAS_bool & inAttribute_mIsRegular
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE result ;
  if (inAttribute_mRoutineName.isValid () && inAttribute_mIsRegular.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (inAttribute_mRoutineName, inAttribute_mIsRegular COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::setter_setMRoutineName (GALGAS_lstring inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
    p->mProperty_mRoutineName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::setter_setMIsRegular (GALGAS_bool inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
    p->mProperty_mIsRegular = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::readProperty_mRoutineName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
    return p->mProperty_mRoutineName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::readProperty_mIsRegular (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
    return p->mProperty_mIsRegular ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_pseudo_BEGINOFROUTINE class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                                                              const GALGAS_bool & in_mIsRegular
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (THERE),
mProperty_mRoutineName (in_mRoutineName),
mProperty_mIsRegular (in_mIsRegular) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE ;
}

void cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_pseudo_BEGINOFROUTINE:" ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsRegular.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (mProperty_mRoutineName, mProperty_mIsRegular COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_assembly_pseudo_BEGINOFROUTINE type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE ("baseline_assembly_pseudo_BEGINOFROUTINE",
                                                                         & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE result ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_BEGINOFROUTINE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak::objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak::GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak (void) :
GALGAS_baseline_5F_assembly_5F_instruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak & GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak::operator = (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak::GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE & inSource) :
GALGAS_baseline_5F_assembly_5F_instruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak::bang_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
      result = GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE ((cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_assembly_pseudo_BEGINOFROUTINE-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak ("baseline_assembly_pseudo_BEGINOFROUTINE-weak",
                                                                                 & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                C_Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak result ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak * p = (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_BEGINOFROUTINE-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPage.objectCompare (p->mProperty_mPage) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (void) :
GALGAS_baseline_5F_assembly_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                 GALGAS_uint::constructor_default (HERE)
                                                                                 COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::constructor_new (const GALGAS_lstring & inAttribute_mRoutineName,
                                                                                                                              const GALGAS_uint & inAttribute_mPage
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE result ;
  if (inAttribute_mRoutineName.isValid () && inAttribute_mPage.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (inAttribute_mRoutineName, inAttribute_mPage COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::setter_setMRoutineName (GALGAS_lstring inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
    p->mProperty_mRoutineName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::setter_setMPage (GALGAS_uint inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
    p->mProperty_mPage = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::readProperty_mRoutineName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
    return p->mProperty_mRoutineName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::readProperty_mPage (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
    return p->mProperty_mPage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_pseudo_ENDOFROUTINE class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                                                          const GALGAS_uint & in_mPage
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (THERE),
mProperty_mRoutineName (in_mRoutineName),
mProperty_mPage (in_mPage) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE ;
}

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_pseudo_ENDOFROUTINE:" ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPage.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (mProperty_mRoutineName, mProperty_mPage COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_assembly_pseudo_ENDOFROUTINE type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE ("baseline_assembly_pseudo_ENDOFROUTINE",
                                                                       & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE result ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_ENDOFROUTINE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak::objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak::GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak (void) :
GALGAS_baseline_5F_assembly_5F_instruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak & GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak::operator = (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak::GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE & inSource) :
GALGAS_baseline_5F_assembly_5F_instruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak::bang_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
      result = GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE ((cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_assembly_pseudo_ENDOFROUTINE-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak ("baseline_assembly_pseudo_ENDOFROUTINE-weak",
                                                                               & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak result ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak * p = (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_ENDOFROUTINE-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_pseudo_5F_LABEL reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
  if (kOperandEqual == result) {
    result = mProperty_mLabel.objectCompare (p->mProperty_mLabel) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL (void) :
GALGAS_baseline_5F_assembly_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL (const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::constructor_new (const GALGAS_lstring & inAttribute_mLabel
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL result ;
  if (inAttribute_mLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (inAttribute_mLabel COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::setter_setMLabel (GALGAS_lstring inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
    p->mProperty_mLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::readProperty_mLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
    return p->mProperty_mLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_pseudo_LABEL class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (const GALGAS_lstring & in_mLabel
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (THERE),
mProperty_mLabel (in_mLabel) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL ;
}

void cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_pseudo_LABEL:" ;
  mProperty_mLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (mProperty_mLabel COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_assembly_pseudo_LABEL type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL ("baseline_assembly_pseudo_LABEL",
                                                                & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL result ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL * p = (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_LABEL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak::objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak::GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak (void) :
GALGAS_baseline_5F_assembly_5F_instruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak & GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak::operator = (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak::GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL & inSource) :
GALGAS_baseline_5F_assembly_5F_instruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak::bang_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
      result = GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL ((cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_assembly_pseudo_LABEL-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak ("baseline_assembly_pseudo_LABEL-weak",
                                                                        & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak result ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak * p = (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_LABEL-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_GOTO reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_assembly_5F_GOTO::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_GOTO * p = (const cPtr_baseline_5F_assembly_5F_GOTO *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_GOTO) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_assembly_5F_GOTO::objectCompare (const GALGAS_baseline_5F_assembly_5F_GOTO & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_GOTO::GALGAS_baseline_5F_assembly_5F_GOTO (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_GOTO GALGAS_baseline_5F_assembly_5F_GOTO::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_assembly_5F_GOTO::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                               GALGAS_lstring::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_GOTO::GALGAS_baseline_5F_assembly_5F_GOTO (const cPtr_baseline_5F_assembly_5F_GOTO * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_GOTO) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_GOTO GALGAS_baseline_5F_assembly_5F_GOTO::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_GOTO result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_GOTO (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_GOTO::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_GOTO * p = (cPtr_baseline_5F_assembly_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_GOTO) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_GOTO::readProperty_mTargetLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_assembly_5F_GOTO * p = (cPtr_baseline_5F_assembly_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_GOTO) ;
    return p->mProperty_mTargetLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_GOTO class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_GOTO::cPtr_baseline_5F_assembly_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mTargetLabel
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_GOTO::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO ;
}

void cPtr_baseline_5F_assembly_5F_GOTO::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_GOTO:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_GOTO::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_GOTO (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_assembly_GOTO type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO ("baseline_assembly_GOTO",
                                                     & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_GOTO::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_GOTO::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_GOTO (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_GOTO GALGAS_baseline_5F_assembly_5F_GOTO::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_GOTO result ;
  const GALGAS_baseline_5F_assembly_5F_GOTO * p = (const GALGAS_baseline_5F_assembly_5F_GOTO *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_GOTO *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_GOTO", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak::objectCompare (const GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak::GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak & GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak::operator = (const GALGAS_baseline_5F_assembly_5F_GOTO & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak::GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak (const GALGAS_baseline_5F_assembly_5F_GOTO & inSource) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_GOTO GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak::bang_baseline_5F_assembly_5F_GOTO_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_GOTO result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_GOTO) ;
      result = GALGAS_baseline_5F_assembly_5F_GOTO ((cPtr_baseline_5F_assembly_5F_GOTO *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_assembly_GOTO-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak ("baseline_assembly_GOTO-weak",
                                                             & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak result ;
  const GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak * p = (const GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_GOTO-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_CALL reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_assembly_5F_CALL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_CALL * p = (const cPtr_baseline_5F_assembly_5F_CALL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_CALL) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_assembly_5F_CALL::objectCompare (const GALGAS_baseline_5F_assembly_5F_CALL & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_CALL::GALGAS_baseline_5F_assembly_5F_CALL (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_CALL GALGAS_baseline_5F_assembly_5F_CALL::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_assembly_5F_CALL::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                               GALGAS_lstring::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_CALL::GALGAS_baseline_5F_assembly_5F_CALL (const cPtr_baseline_5F_assembly_5F_CALL * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_CALL) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_CALL GALGAS_baseline_5F_assembly_5F_CALL::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_CALL result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_CALL (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_CALL::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_CALL * p = (cPtr_baseline_5F_assembly_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_CALL) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_CALL::readProperty_mTargetLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_assembly_5F_CALL * p = (cPtr_baseline_5F_assembly_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_CALL) ;
    return p->mProperty_mTargetLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_CALL class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_CALL::cPtr_baseline_5F_assembly_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mTargetLabel
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_CALL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL ;
}

void cPtr_baseline_5F_assembly_5F_CALL::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_CALL:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_CALL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_CALL (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_assembly_CALL type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL ("baseline_assembly_CALL",
                                                     & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_CALL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_CALL::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_CALL (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_CALL GALGAS_baseline_5F_assembly_5F_CALL::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_CALL result ;
  const GALGAS_baseline_5F_assembly_5F_CALL * p = (const GALGAS_baseline_5F_assembly_5F_CALL *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_CALL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_CALL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_assembly_5F_CALL_2D_weak::objectCompare (const GALGAS_baseline_5F_assembly_5F_CALL_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_CALL_2D_weak::GALGAS_baseline_5F_assembly_5F_CALL_2D_weak (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_CALL_2D_weak & GALGAS_baseline_5F_assembly_5F_CALL_2D_weak::operator = (const GALGAS_baseline_5F_assembly_5F_CALL & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_CALL_2D_weak::GALGAS_baseline_5F_assembly_5F_CALL_2D_weak (const GALGAS_baseline_5F_assembly_5F_CALL & inSource) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_CALL_2D_weak GALGAS_baseline_5F_assembly_5F_CALL_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_CALL_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_CALL GALGAS_baseline_5F_assembly_5F_CALL_2D_weak::bang_baseline_5F_assembly_5F_CALL_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_CALL result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_CALL) ;
      result = GALGAS_baseline_5F_assembly_5F_CALL ((cPtr_baseline_5F_assembly_5F_CALL *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_assembly_CALL-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL_2D_weak ("baseline_assembly_CALL-weak",
                                                             & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_CALL_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_CALL_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_CALL_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_CALL_2D_weak GALGAS_baseline_5F_assembly_5F_CALL_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_CALL_2D_weak result ;
  const GALGAS_baseline_5F_assembly_5F_CALL_2D_weak * p = (const GALGAS_baseline_5F_assembly_5F_CALL_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_CALL_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_CALL-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_TRIS reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_assembly_5F_TRIS::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_TRIS * p = (const cPtr_baseline_5F_assembly_5F_TRIS *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_TRIS) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperand.objectCompare (p->mProperty_mOperand) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOpcode.objectCompare (p->mProperty_mOpcode) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_assembly_5F_TRIS::objectCompare (const GALGAS_baseline_5F_assembly_5F_TRIS & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_TRIS::GALGAS_baseline_5F_assembly_5F_TRIS (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_TRIS GALGAS_baseline_5F_assembly_5F_TRIS::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_assembly_5F_TRIS::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_uint::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_TRIS::GALGAS_baseline_5F_assembly_5F_TRIS (const cPtr_baseline_5F_assembly_5F_TRIS * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_TRIS) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_TRIS GALGAS_baseline_5F_assembly_5F_TRIS::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_lstring & inAttribute_mOperand,
                                                                                          const GALGAS_uint & inAttribute_mOpcode
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_TRIS result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOperand.isValid () && inAttribute_mOpcode.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_TRIS (inAttribute_mInstructionLocation, inAttribute_mOperand, inAttribute_mOpcode COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_TRIS::setter_setMOperand (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_TRIS * p = (cPtr_baseline_5F_assembly_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_TRIS) ;
    p->mProperty_mOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_TRIS::setter_setMOpcode (GALGAS_uint inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_TRIS * p = (cPtr_baseline_5F_assembly_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_TRIS) ;
    p->mProperty_mOpcode = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_TRIS::readProperty_mOperand (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_baseline_5F_assembly_5F_TRIS * p = (cPtr_baseline_5F_assembly_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_TRIS) ;
    return p->mProperty_mOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_assembly_5F_TRIS::readProperty_mOpcode (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_baseline_5F_assembly_5F_TRIS * p = (cPtr_baseline_5F_assembly_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_TRIS) ;
    return p->mProperty_mOpcode ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_TRIS class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_TRIS::cPtr_baseline_5F_assembly_5F_TRIS (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mOperand,
                                                                      const GALGAS_uint & in_mOpcode
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mOperand (in_mOperand),
mProperty_mOpcode (in_mOpcode) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_TRIS::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS ;
}

void cPtr_baseline_5F_assembly_5F_TRIS::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_TRIS:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOpcode.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_TRIS::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_TRIS (mProperty_mInstructionLocation, mProperty_mOperand, mProperty_mOpcode COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_assembly_TRIS type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS ("baseline_assembly_TRIS",
                                                     & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_TRIS::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_TRIS::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_TRIS (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_TRIS GALGAS_baseline_5F_assembly_5F_TRIS::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_TRIS result ;
  const GALGAS_baseline_5F_assembly_5F_TRIS * p = (const GALGAS_baseline_5F_assembly_5F_TRIS *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_TRIS *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_TRIS", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak::objectCompare (const GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak::GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak & GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak::operator = (const GALGAS_baseline_5F_assembly_5F_TRIS & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak::GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak (const GALGAS_baseline_5F_assembly_5F_TRIS & inSource) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_TRIS GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak::bang_baseline_5F_assembly_5F_TRIS_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_TRIS result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_TRIS) ;
      result = GALGAS_baseline_5F_assembly_5F_TRIS ((cPtr_baseline_5F_assembly_5F_TRIS *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_assembly_TRIS-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak ("baseline_assembly_TRIS-weak",
                                                             & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak result ;
  const GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak * p = (const GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_TRIS-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_STATIC_5F_REPEAT reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantName.objectCompare (p->mProperty_mConstantName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLowerBoundExpression.objectCompare (p->mProperty_mLowerBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUpperBoundExpression.objectCompare (p->mProperty_mUpperBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfInstruction.objectCompare (p->mProperty_mEndOfInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::objectCompare (const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (void) :
GALGAS_midrange_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                        const GALGAS_lstring & inAttribute_mConstantName,
                                                                                                                        const GALGAS_immediatExpression & inAttribute_mLowerBoundExpression,
                                                                                                                        const GALGAS_immediatExpression & inAttribute_mUpperBoundExpression,
                                                                                                                        const GALGAS_midrange_5F_instructionList & inAttribute_mInstructionList,
                                                                                                                        const GALGAS_location & inAttribute_mEndOfInstruction
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mConstantName.isValid () && inAttribute_mLowerBoundExpression.isValid () && inAttribute_mUpperBoundExpression.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mEndOfInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (inAttribute_mInstructionLocation, inAttribute_mConstantName, inAttribute_mLowerBoundExpression, inAttribute_mUpperBoundExpression, inAttribute_mInstructionList, inAttribute_mEndOfInstruction COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::setter_setMConstantName (GALGAS_lstring inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mConstantName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::setter_setMLowerBoundExpression (GALGAS_immediatExpression inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mLowerBoundExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::setter_setMUpperBoundExpression (GALGAS_immediatExpression inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mUpperBoundExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::setter_setMInstructionList (GALGAS_midrange_5F_instructionList inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::setter_setMEndOfInstruction (GALGAS_location inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    p->mProperty_mEndOfInstruction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mConstantName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mConstantName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mLowerBoundExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mLowerBoundExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mUpperBoundExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mUpperBoundExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_midrange_5F_instructionList () ;
  }else{
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mEndOfInstruction (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mEndOfInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_STATIC_REPEAT class
//----------------------------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (const GALGAS_location & in_mInstructionLocation,
                                                                                                    const GALGAS_lstring & in_mConstantName,
                                                                                                    const GALGAS_immediatExpression & in_mLowerBoundExpression,
                                                                                                    const GALGAS_immediatExpression & in_mUpperBoundExpression,
                                                                                                    const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                    const GALGAS_location & in_mEndOfInstruction
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mConstantName (in_mConstantName),
mProperty_mLowerBoundExpression (in_mLowerBoundExpression),
mProperty_mUpperBoundExpression (in_mUpperBoundExpression),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mEndOfInstruction (in_mEndOfInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT ;
}

void cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_STATIC_REPEAT:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLowerBoundExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUpperBoundExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (mProperty_mInstructionLocation, mProperty_mConstantName, mProperty_mLowerBoundExpression, mProperty_mUpperBoundExpression, mProperty_mInstructionList, mProperty_mEndOfInstruction COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_instruction_STATIC_REPEAT type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT ("midrange_instruction_STATIC_REPEAT",
                                                                    & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT result ;
  const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_STATIC_REPEAT", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak & GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak (const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::bang_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
      result = GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT ((cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_instruction_STATIC_REPEAT-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak ("midrange_instruction_STATIC_REPEAT-weak",
                                                                            & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_STATIC_REPEAT-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_CALL reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_instruction_5F_CALL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_CALL * p = (const cPtr_midrange_5F_instruction_5F_CALL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_CALL) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_CALL::objectCompare (const GALGAS_midrange_5F_instruction_5F_CALL & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CALL::GALGAS_midrange_5F_instruction_5F_CALL (void) :
GALGAS_midrange_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CALL GALGAS_midrange_5F_instruction_5F_CALL::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_instruction_5F_CALL::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CALL::GALGAS_midrange_5F_instruction_5F_CALL (const cPtr_midrange_5F_instruction_5F_CALL * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_CALL) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CALL GALGAS_midrange_5F_instruction_5F_CALL::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_CALL result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_CALL (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_CALL::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_CALL * p = (cPtr_midrange_5F_instruction_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_CALL) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_midrange_5F_instruction_5F_CALL::readProperty_mTargetLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_midrange_5F_instruction_5F_CALL * p = (cPtr_midrange_5F_instruction_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_CALL) ;
    return p->mProperty_mTargetLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_CALL class
//----------------------------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_CALL::cPtr_midrange_5F_instruction_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_CALL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL ;
}

void cPtr_midrange_5F_instruction_5F_CALL::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_CALL:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_CALL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_CALL (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_instruction_CALL type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL ("midrange_instruction_CALL",
                                                        & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_CALL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_CALL::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_CALL (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CALL GALGAS_midrange_5F_instruction_5F_CALL::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_CALL result ;
  const GALGAS_midrange_5F_instruction_5F_CALL * p = (const GALGAS_midrange_5F_instruction_5F_CALL *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_CALL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_CALL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_midrange_5F_instruction_5F_CALL_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_CALL_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CALL_2D_weak::GALGAS_midrange_5F_instruction_5F_CALL_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CALL_2D_weak & GALGAS_midrange_5F_instruction_5F_CALL_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_CALL & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CALL_2D_weak::GALGAS_midrange_5F_instruction_5F_CALL_2D_weak (const GALGAS_midrange_5F_instruction_5F_CALL & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CALL_2D_weak GALGAS_midrange_5F_instruction_5F_CALL_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_CALL_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CALL GALGAS_midrange_5F_instruction_5F_CALL_2D_weak::bang_midrange_5F_instruction_5F_CALL_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_CALL result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_CALL) ;
      result = GALGAS_midrange_5F_instruction_5F_CALL ((cPtr_midrange_5F_instruction_5F_CALL *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_instruction_CALL-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL_2D_weak ("midrange_instruction_CALL-weak",
                                                                & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_CALL_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_CALL_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_CALL_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CALL_2D_weak GALGAS_midrange_5F_instruction_5F_CALL_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_CALL_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_CALL_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_CALL_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_CALL_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_CALL-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_JSR reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_instruction_5F_JSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_JSR * p = (const cPtr_midrange_5F_instruction_5F_JSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_JSR) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_JSR::objectCompare (const GALGAS_midrange_5F_instruction_5F_JSR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JSR::GALGAS_midrange_5F_instruction_5F_JSR (void) :
GALGAS_midrange_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JSR GALGAS_midrange_5F_instruction_5F_JSR::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_instruction_5F_JSR::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                 GALGAS_lstring::constructor_default (HERE)
                                                                 COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JSR::GALGAS_midrange_5F_instruction_5F_JSR (const cPtr_midrange_5F_instruction_5F_JSR * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_JSR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JSR GALGAS_midrange_5F_instruction_5F_JSR::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                              const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_JSR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_JSR (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_JSR::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_JSR * p = (cPtr_midrange_5F_instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_JSR) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_midrange_5F_instruction_5F_JSR::readProperty_mTargetLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_midrange_5F_instruction_5F_JSR * p = (cPtr_midrange_5F_instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_JSR) ;
    return p->mProperty_mTargetLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_JSR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_JSR::cPtr_midrange_5F_instruction_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_lstring & in_mTargetLabel
                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR ;
}

void cPtr_midrange_5F_instruction_5F_JSR::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_JSR:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_JSR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_JSR (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_instruction_JSR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR ("midrange_instruction_JSR",
                                                       & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_JSR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JSR GALGAS_midrange_5F_instruction_5F_JSR::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_JSR result ;
  const GALGAS_midrange_5F_instruction_5F_JSR * p = (const GALGAS_midrange_5F_instruction_5F_JSR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_JSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_JSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_midrange_5F_instruction_5F_JSR_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_JSR_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JSR_2D_weak::GALGAS_midrange_5F_instruction_5F_JSR_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JSR_2D_weak & GALGAS_midrange_5F_instruction_5F_JSR_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_JSR & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JSR_2D_weak::GALGAS_midrange_5F_instruction_5F_JSR_2D_weak (const GALGAS_midrange_5F_instruction_5F_JSR & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JSR_2D_weak GALGAS_midrange_5F_instruction_5F_JSR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_JSR_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JSR GALGAS_midrange_5F_instruction_5F_JSR_2D_weak::bang_midrange_5F_instruction_5F_JSR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_JSR result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_JSR) ;
      result = GALGAS_midrange_5F_instruction_5F_JSR ((cPtr_midrange_5F_instruction_5F_JSR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_instruction_JSR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR_2D_weak ("midrange_instruction_JSR-weak",
                                                               & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_JSR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_JSR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_JSR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JSR_2D_weak GALGAS_midrange_5F_instruction_5F_JSR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_JSR_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_JSR_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_JSR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_JSR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_JSR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_JUMP reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_instruction_5F_JUMP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_JUMP * p = (const cPtr_midrange_5F_instruction_5F_JUMP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_JUMP) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_JUMP::objectCompare (const GALGAS_midrange_5F_instruction_5F_JUMP & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JUMP::GALGAS_midrange_5F_instruction_5F_JUMP (void) :
GALGAS_midrange_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JUMP GALGAS_midrange_5F_instruction_5F_JUMP::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_instruction_5F_JUMP::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JUMP::GALGAS_midrange_5F_instruction_5F_JUMP (const cPtr_midrange_5F_instruction_5F_JUMP * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_JUMP) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JUMP GALGAS_midrange_5F_instruction_5F_JUMP::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_JUMP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_JUMP (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_JUMP::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_JUMP * p = (cPtr_midrange_5F_instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_JUMP) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_midrange_5F_instruction_5F_JUMP::readProperty_mTargetLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_midrange_5F_instruction_5F_JUMP * p = (cPtr_midrange_5F_instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_JUMP) ;
    return p->mProperty_mTargetLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_JUMP class
//----------------------------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_JUMP::cPtr_midrange_5F_instruction_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_JUMP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP ;
}

void cPtr_midrange_5F_instruction_5F_JUMP::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_JUMP:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_JUMP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_JUMP (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_instruction_JUMP type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP ("midrange_instruction_JUMP",
                                                        & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_JUMP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_JUMP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_JUMP (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JUMP GALGAS_midrange_5F_instruction_5F_JUMP::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_JUMP result ;
  const GALGAS_midrange_5F_instruction_5F_JUMP * p = (const GALGAS_midrange_5F_instruction_5F_JUMP *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_JUMP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_JUMP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak::GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak & GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_JUMP & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak::GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak (const GALGAS_midrange_5F_instruction_5F_JUMP & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JUMP GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak::bang_midrange_5F_instruction_5F_JUMP_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_JUMP result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_JUMP) ;
      result = GALGAS_midrange_5F_instruction_5F_JUMP ((cPtr_midrange_5F_instruction_5F_JUMP *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_instruction_JUMP-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak ("midrange_instruction_JUMP-weak",
                                                                & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_JUMP-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_GOTO reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_instruction_5F_GOTO::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_GOTO * p = (const cPtr_midrange_5F_instruction_5F_GOTO *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_GOTO) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_GOTO::objectCompare (const GALGAS_midrange_5F_instruction_5F_GOTO & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_GOTO::GALGAS_midrange_5F_instruction_5F_GOTO (void) :
GALGAS_midrange_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_GOTO GALGAS_midrange_5F_instruction_5F_GOTO::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_instruction_5F_GOTO::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_GOTO::GALGAS_midrange_5F_instruction_5F_GOTO (const cPtr_midrange_5F_instruction_5F_GOTO * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_GOTO) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_GOTO GALGAS_midrange_5F_instruction_5F_GOTO::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_GOTO result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_GOTO (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_GOTO::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_GOTO * p = (cPtr_midrange_5F_instruction_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_GOTO) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_midrange_5F_instruction_5F_GOTO::readProperty_mTargetLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_midrange_5F_instruction_5F_GOTO * p = (cPtr_midrange_5F_instruction_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_GOTO) ;
    return p->mProperty_mTargetLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_GOTO class
//----------------------------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_GOTO::cPtr_midrange_5F_instruction_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_GOTO::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO ;
}

void cPtr_midrange_5F_instruction_5F_GOTO::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_GOTO:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_GOTO::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_GOTO (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_instruction_GOTO type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO ("midrange_instruction_GOTO",
                                                        & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_GOTO::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_GOTO::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_GOTO (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_GOTO GALGAS_midrange_5F_instruction_5F_GOTO::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_GOTO result ;
  const GALGAS_midrange_5F_instruction_5F_GOTO * p = (const GALGAS_midrange_5F_instruction_5F_GOTO *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_GOTO *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_GOTO", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak::GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak & GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_GOTO & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak::GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak (const GALGAS_midrange_5F_instruction_5F_GOTO & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_GOTO GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak::bang_midrange_5F_instruction_5F_GOTO_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_GOTO result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_GOTO) ;
      result = GALGAS_midrange_5F_instruction_5F_GOTO ((cPtr_midrange_5F_instruction_5F_GOTO *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_instruction_GOTO-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak ("midrange_instruction_GOTO-weak",
                                                                & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_GOTO-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_model::GALGAS_midrange_5F_model (void) :
mProperty_mProgramName (),
mProperty_mDeviceName (),
mProperty_mConfigDefinitionList (),
mProperty_mRamDefinitionList (),
mProperty_mUnusedRegisterList (),
mProperty_mInterruptDefinitionList (),
mProperty_mConstantDefinitionList (),
mProperty_mRoutineDefinitionList (),
mProperty_mUnusedRoutineList (),
mProperty_mNeedsComputedGoto_32_ (),
mProperty_mNeedsComputedGoto_34_ (),
mProperty_mEndOfProgram () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_model::~ GALGAS_midrange_5F_model (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_model::GALGAS_midrange_5F_model (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_lstring & inOperand1,
                                                    const GALGAS_configDefinitionList & inOperand2,
                                                    const GALGAS_ramDefinitionList & inOperand3,
                                                    const GALGAS_lstringlist & inOperand4,
                                                    const GALGAS_midrange_5F_interruptDefinitionList & inOperand5,
                                                    const GALGAS_constantDefinitionList & inOperand6,
                                                    const GALGAS_midrange_5F_routineDefinitionList & inOperand7,
                                                    const GALGAS_lstringlist & inOperand8,
                                                    const GALGAS_bool & inOperand9,
                                                    const GALGAS_bool & inOperand10,
                                                    const GALGAS_location & inOperand11) :
mProperty_mProgramName (inOperand0),
mProperty_mDeviceName (inOperand1),
mProperty_mConfigDefinitionList (inOperand2),
mProperty_mRamDefinitionList (inOperand3),
mProperty_mUnusedRegisterList (inOperand4),
mProperty_mInterruptDefinitionList (inOperand5),
mProperty_mConstantDefinitionList (inOperand6),
mProperty_mRoutineDefinitionList (inOperand7),
mProperty_mUnusedRoutineList (inOperand8),
mProperty_mNeedsComputedGoto_32_ (inOperand9),
mProperty_mNeedsComputedGoto_34_ (inOperand10),
mProperty_mEndOfProgram (inOperand11) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_model GALGAS_midrange_5F_model::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_model (GALGAS_lstring::constructor_default (HERE),
                                   GALGAS_lstring::constructor_default (HERE),
                                   GALGAS_configDefinitionList::constructor_emptyList (HERE),
                                   GALGAS_ramDefinitionList::constructor_emptyList (HERE),
                                   GALGAS_lstringlist::constructor_emptyList (HERE),
                                   GALGAS_midrange_5F_interruptDefinitionList::constructor_emptyList (HERE),
                                   GALGAS_constantDefinitionList::constructor_emptyList (HERE),
                                   GALGAS_midrange_5F_routineDefinitionList::constructor_emptyList (HERE),
                                   GALGAS_lstringlist::constructor_emptyList (HERE),
                                   GALGAS_bool::constructor_default (HERE),
                                   GALGAS_bool::constructor_default (HERE),
                                   GALGAS_location::constructor_nowhere (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_model GALGAS_midrange_5F_model::constructor_new (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstring & inOperand1,
                                                                    const GALGAS_configDefinitionList & inOperand2,
                                                                    const GALGAS_ramDefinitionList & inOperand3,
                                                                    const GALGAS_lstringlist & inOperand4,
                                                                    const GALGAS_midrange_5F_interruptDefinitionList & inOperand5,
                                                                    const GALGAS_constantDefinitionList & inOperand6,
                                                                    const GALGAS_midrange_5F_routineDefinitionList & inOperand7,
                                                                    const GALGAS_lstringlist & inOperand8,
                                                                    const GALGAS_bool & inOperand9,
                                                                    const GALGAS_bool & inOperand10,
                                                                    const GALGAS_location & inOperand11 
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_model result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid ()) {
    result = GALGAS_midrange_5F_model (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_midrange_5F_model::objectCompare (const GALGAS_midrange_5F_model & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProgramName.objectCompare (inOperand.mProperty_mProgramName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDeviceName.objectCompare (inOperand.mProperty_mDeviceName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConfigDefinitionList.objectCompare (inOperand.mProperty_mConfigDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRamDefinitionList.objectCompare (inOperand.mProperty_mRamDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUnusedRegisterList.objectCompare (inOperand.mProperty_mUnusedRegisterList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInterruptDefinitionList.objectCompare (inOperand.mProperty_mInterruptDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConstantDefinitionList.objectCompare (inOperand.mProperty_mConstantDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineDefinitionList.objectCompare (inOperand.mProperty_mRoutineDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUnusedRoutineList.objectCompare (inOperand.mProperty_mUnusedRoutineList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNeedsComputedGoto_32_.objectCompare (inOperand.mProperty_mNeedsComputedGoto_32_) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNeedsComputedGoto_34_.objectCompare (inOperand.mProperty_mNeedsComputedGoto_34_) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfProgram.objectCompare (inOperand.mProperty_mEndOfProgram) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_model::isValid (void) const {
  return mProperty_mProgramName.isValid () && mProperty_mDeviceName.isValid () && mProperty_mConfigDefinitionList.isValid () && mProperty_mRamDefinitionList.isValid () && mProperty_mUnusedRegisterList.isValid () && mProperty_mInterruptDefinitionList.isValid () && mProperty_mConstantDefinitionList.isValid () && mProperty_mRoutineDefinitionList.isValid () && mProperty_mUnusedRoutineList.isValid () && mProperty_mNeedsComputedGoto_32_.isValid () && mProperty_mNeedsComputedGoto_34_.isValid () && mProperty_mEndOfProgram.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_model::drop (void) {
  mProperty_mProgramName.drop () ;
  mProperty_mDeviceName.drop () ;
  mProperty_mConfigDefinitionList.drop () ;
  mProperty_mRamDefinitionList.drop () ;
  mProperty_mUnusedRegisterList.drop () ;
  mProperty_mInterruptDefinitionList.drop () ;
  mProperty_mConstantDefinitionList.drop () ;
  mProperty_mRoutineDefinitionList.drop () ;
  mProperty_mUnusedRoutineList.drop () ;
  mProperty_mNeedsComputedGoto_32_.drop () ;
  mProperty_mNeedsComputedGoto_34_.drop () ;
  mProperty_mEndOfProgram.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_model::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<struct @midrange_model:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mProgramName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDeviceName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mConfigDefinitionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRamDefinitionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUnusedRegisterList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInterruptDefinitionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mConstantDefinitionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineDefinitionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUnusedRoutineList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNeedsComputedGoto_32_.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNeedsComputedGoto_34_.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfProgram.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_model type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_model ("midrange_model",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_model::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_model ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_model::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_model (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_model GALGAS_midrange_5F_model::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_model result ;
  const GALGAS_midrange_5F_model * p = (const GALGAS_midrange_5F_model *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_model *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_model", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_pseudo_5F_LABEL reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  if (kOperandEqual == result) {
    result = mProperty_mLabel.objectCompare (p->mProperty_mLabel) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsDeletable.objectCompare (p->mProperty_mIsDeletable) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::objectCompare (const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (void) :
GALGAS_midrange_5F_intermediate_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                              GALGAS_bool::constructor_default (HERE)
                                                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (const GALGAS_lstring & inAttribute_mLabel,
                                                                                                                        const GALGAS_bool & inAttribute_mIsDeletable
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL result ;
  if (inAttribute_mLabel.isValid () && inAttribute_mIsDeletable.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (inAttribute_mLabel, inAttribute_mIsDeletable COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::setter_setMLabel (GALGAS_lstring inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
    p->mProperty_mLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::setter_setMIsDeletable (GALGAS_bool inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
    p->mProperty_mIsDeletable = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::readProperty_mLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
    return p->mProperty_mLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::readProperty_mIsDeletable (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
    return p->mProperty_mIsDeletable ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_pseudo_LABEL class
//----------------------------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (const GALGAS_lstring & in_mLabel,
                                                                                                    const GALGAS_bool & in_mIsDeletable
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_instruction (THERE),
mProperty_mLabel (in_mLabel),
mProperty_mIsDeletable (in_mIsDeletable) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL ;
}

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@midrange_intermediate_pseudo_LABEL:" ;
  mProperty_mLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsDeletable.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (mProperty_mLabel, mProperty_mIsDeletable COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_intermediate_pseudo_LABEL type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL ("midrange_intermediate_pseudo_LABEL",
                                                                    & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL result ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_pseudo_LABEL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::objectCompare (const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak (void) :
GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak & GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::operator = (const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak (const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL & inSource) :
GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::bang_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
      result = GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL ((cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_intermediate_pseudo_LABEL-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak ("midrange_intermediate_pseudo_LABEL-weak",
                                                                            & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak result ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak * p = (const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_pseudo_LABEL-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_JUMP reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_intermediate_5F_JUMP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_JUMP * p = (const cPtr_midrange_5F_intermediate_5F_JUMP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBit_31__31_.objectCompare (p->mProperty_mBit_31__31_) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBit_31__32_.objectCompare (p->mProperty_mBit_31__32_) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_JUMP::objectCompare (const GALGAS_midrange_5F_intermediate_5F_JUMP & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JUMP::GALGAS_midrange_5F_intermediate_5F_JUMP (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JUMP::GALGAS_midrange_5F_intermediate_5F_JUMP (const cPtr_midrange_5F_intermediate_5F_JUMP * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_JUMP) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JUMP GALGAS_midrange_5F_intermediate_5F_JUMP::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstring & inAttribute_mTargetLabel,
                                                                                                  const GALGAS_midrange_5F_call_5F_goto_5F_bit & inAttribute_mBit_31__31_,
                                                                                                  const GALGAS_midrange_5F_call_5F_goto_5F_bit & inAttribute_mBit_31__32_
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_JUMP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mBit_31__31_.isValid () && inAttribute_mBit_31__32_.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_JUMP (inAttribute_mInstructionLocation, inAttribute_mTargetLabel, inAttribute_mBit_31__31_, inAttribute_mBit_31__32_ COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_JUMP::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_JUMP * p = (cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_JUMP::setter_setMBit_31__31_ (GALGAS_midrange_5F_call_5F_goto_5F_bit inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_JUMP * p = (cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    p->mProperty_mBit_31__31_ = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_JUMP::setter_setMBit_31__32_ (GALGAS_midrange_5F_call_5F_goto_5F_bit inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_JUMP * p = (cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    p->mProperty_mBit_31__32_ = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_midrange_5F_intermediate_5F_JUMP::readProperty_mTargetLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_JUMP * p = (cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    return p->mProperty_mTargetLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_call_5F_goto_5F_bit GALGAS_midrange_5F_intermediate_5F_JUMP::readProperty_mBit_31__31_ (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_midrange_5F_call_5F_goto_5F_bit () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_JUMP * p = (cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    return p->mProperty_mBit_31__31_ ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_call_5F_goto_5F_bit GALGAS_midrange_5F_intermediate_5F_JUMP::readProperty_mBit_31__32_ (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_midrange_5F_call_5F_goto_5F_bit () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_JUMP * p = (cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    return p->mProperty_mBit_31__32_ ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_JUMP class
//----------------------------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_JUMP::cPtr_midrange_5F_intermediate_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel,
                                                                              const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                                              const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_
                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel),
mProperty_mBit_31__31_ (in_mBit_31__31_),
mProperty_mBit_31__32_ (in_mBit_31__32_) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_JUMP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP ;
}

void cPtr_midrange_5F_intermediate_5F_JUMP::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@midrange_intermediate_JUMP:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBit_31__31_.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBit_31__32_.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_intermediate_5F_JUMP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_JUMP (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mBit_31__31_, mProperty_mBit_31__32_ COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_intermediate_JUMP type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP ("midrange_intermediate_JUMP",
                                                         & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_JUMP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_JUMP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_JUMP (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JUMP GALGAS_midrange_5F_intermediate_5F_JUMP::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_JUMP result ;
  const GALGAS_midrange_5F_intermediate_5F_JUMP * p = (const GALGAS_midrange_5F_intermediate_5F_JUMP *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_JUMP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_JUMP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak::objectCompare (const GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak::GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak & GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak::operator = (const GALGAS_midrange_5F_intermediate_5F_JUMP & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak::GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak (const GALGAS_midrange_5F_intermediate_5F_JUMP & inSource) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JUMP GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak::bang_midrange_5F_intermediate_5F_JUMP_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_JUMP result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_JUMP) ;
      result = GALGAS_midrange_5F_intermediate_5F_JUMP ((cPtr_midrange_5F_intermediate_5F_JUMP *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_intermediate_JUMP-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak ("midrange_intermediate_JUMP-weak",
                                                                 & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak result ;
  const GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak * p = (const GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_JUMP-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_GOTO reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_intermediate_5F_GOTO::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_GOTO * p = (const cPtr_midrange_5F_intermediate_5F_GOTO *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_GOTO) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_GOTO::objectCompare (const GALGAS_midrange_5F_intermediate_5F_GOTO & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_GOTO::GALGAS_midrange_5F_intermediate_5F_GOTO (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_GOTO GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                   GALGAS_lstring::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_GOTO::GALGAS_midrange_5F_intermediate_5F_GOTO (const cPtr_midrange_5F_intermediate_5F_GOTO * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_GOTO) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_GOTO GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_GOTO result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_GOTO (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_GOTO::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_GOTO * p = (cPtr_midrange_5F_intermediate_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_GOTO) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_midrange_5F_intermediate_5F_GOTO::readProperty_mTargetLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_GOTO * p = (cPtr_midrange_5F_intermediate_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_GOTO) ;
    return p->mProperty_mTargetLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_GOTO class
//----------------------------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_GOTO::cPtr_midrange_5F_intermediate_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel
                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_GOTO::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO ;
}

void cPtr_midrange_5F_intermediate_5F_GOTO::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@midrange_intermediate_GOTO:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_intermediate_5F_GOTO::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_GOTO (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_intermediate_GOTO type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO ("midrange_intermediate_GOTO",
                                                         & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_GOTO::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_GOTO::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_GOTO (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_GOTO GALGAS_midrange_5F_intermediate_5F_GOTO::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_GOTO result ;
  const GALGAS_midrange_5F_intermediate_5F_GOTO * p = (const GALGAS_midrange_5F_intermediate_5F_GOTO *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_GOTO *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_GOTO", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak::objectCompare (const GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak::GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak & GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak::operator = (const GALGAS_midrange_5F_intermediate_5F_GOTO & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak::GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak (const GALGAS_midrange_5F_intermediate_5F_GOTO & inSource) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_GOTO GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak::bang_midrange_5F_intermediate_5F_GOTO_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_GOTO result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_GOTO) ;
      result = GALGAS_midrange_5F_intermediate_5F_GOTO ((cPtr_midrange_5F_intermediate_5F_GOTO *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_intermediate_GOTO-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak ("midrange_intermediate_GOTO-weak",
                                                                 & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak result ;
  const GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak * p = (const GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_GOTO_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_GOTO-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_CALL reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_intermediate_5F_CALL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_CALL * p = (const cPtr_midrange_5F_intermediate_5F_CALL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_CALL) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_CALL::objectCompare (const GALGAS_midrange_5F_intermediate_5F_CALL & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_CALL::GALGAS_midrange_5F_intermediate_5F_CALL (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_CALL GALGAS_midrange_5F_intermediate_5F_CALL::constructor_default (LOCATION_ARGS) {
  return GALGAS_midrange_5F_intermediate_5F_CALL::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                   GALGAS_lstring::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_CALL::GALGAS_midrange_5F_intermediate_5F_CALL (const cPtr_midrange_5F_intermediate_5F_CALL * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_CALL) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_CALL GALGAS_midrange_5F_intermediate_5F_CALL::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_CALL result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_CALL (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_CALL::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_CALL * p = (cPtr_midrange_5F_intermediate_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_CALL) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_midrange_5F_intermediate_5F_CALL::readProperty_mTargetLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_CALL * p = (cPtr_midrange_5F_intermediate_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_CALL) ;
    return p->mProperty_mTargetLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_CALL class
//----------------------------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_CALL::cPtr_midrange_5F_intermediate_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel
                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_CALL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL ;
}

void cPtr_midrange_5F_intermediate_5F_CALL::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@midrange_intermediate_CALL:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_intermediate_5F_CALL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_CALL (mProperty_mInstructionLocation, mProperty_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_intermediate_CALL type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL ("midrange_intermediate_CALL",
                                                         & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_CALL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_CALL::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_CALL (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_CALL GALGAS_midrange_5F_intermediate_5F_CALL::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_CALL result ;
  const GALGAS_midrange_5F_intermediate_5F_CALL * p = (const GALGAS_midrange_5F_intermediate_5F_CALL *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_CALL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_CALL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak::objectCompare (const GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak::GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak & GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak::operator = (const GALGAS_midrange_5F_intermediate_5F_CALL & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak::GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak (const GALGAS_midrange_5F_intermediate_5F_CALL & inSource) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_CALL GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak::bang_midrange_5F_intermediate_5F_CALL_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_CALL result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_CALL) ;
      result = GALGAS_midrange_5F_intermediate_5F_CALL ((cPtr_midrange_5F_intermediate_5F_CALL *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_intermediate_CALL-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak ("midrange_intermediate_CALL-weak",
                                                                 & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak result ;
  const GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak * p = (const GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_CALL_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_CALL-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_JSR reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_intermediate_5F_JSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_intermediate_5F_JSR * p = (const cPtr_midrange_5F_intermediate_5F_JSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JSR) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBit_31__31_.objectCompare (p->mProperty_mBit_31__31_) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBit_31__32_.objectCompare (p->mProperty_mBit_31__32_) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_intermediate_5F_JSR::objectCompare (const GALGAS_midrange_5F_intermediate_5F_JSR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JSR::GALGAS_midrange_5F_intermediate_5F_JSR (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JSR::GALGAS_midrange_5F_intermediate_5F_JSR (const cPtr_midrange_5F_intermediate_5F_JSR * inSourcePtr) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_JSR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JSR GALGAS_midrange_5F_intermediate_5F_JSR::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mTargetLabel,
                                                                                                const GALGAS_midrange_5F_call_5F_goto_5F_bit & inAttribute_mBit_31__31_,
                                                                                                const GALGAS_midrange_5F_call_5F_goto_5F_bit & inAttribute_mBit_31__32_
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_JSR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mBit_31__31_.isValid () && inAttribute_mBit_31__32_.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_JSR (inAttribute_mInstructionLocation, inAttribute_mTargetLabel, inAttribute_mBit_31__31_, inAttribute_mBit_31__32_ COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_JSR::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_JSR * p = (cPtr_midrange_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JSR) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_JSR::setter_setMBit_31__31_ (GALGAS_midrange_5F_call_5F_goto_5F_bit inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_JSR * p = (cPtr_midrange_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JSR) ;
    p->mProperty_mBit_31__31_ = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_JSR::setter_setMBit_31__32_ (GALGAS_midrange_5F_call_5F_goto_5F_bit inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_intermediate_5F_JSR * p = (cPtr_midrange_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JSR) ;
    p->mProperty_mBit_31__32_ = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_midrange_5F_intermediate_5F_JSR::readProperty_mTargetLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_JSR * p = (cPtr_midrange_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JSR) ;
    return p->mProperty_mTargetLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_call_5F_goto_5F_bit GALGAS_midrange_5F_intermediate_5F_JSR::readProperty_mBit_31__31_ (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_midrange_5F_call_5F_goto_5F_bit () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_JSR * p = (cPtr_midrange_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JSR) ;
    return p->mProperty_mBit_31__31_ ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_call_5F_goto_5F_bit GALGAS_midrange_5F_intermediate_5F_JSR::readProperty_mBit_31__32_ (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_midrange_5F_call_5F_goto_5F_bit () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_JSR * p = (cPtr_midrange_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JSR) ;
    return p->mProperty_mBit_31__32_ ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_JSR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_JSR::cPtr_midrange_5F_intermediate_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel,
                                                                            const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                                            const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel),
mProperty_mBit_31__31_ (in_mBit_31__31_),
mProperty_mBit_31__32_ (in_mBit_31__32_) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR ;
}

void cPtr_midrange_5F_intermediate_5F_JSR::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@midrange_intermediate_JSR:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBit_31__31_.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBit_31__32_.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_intermediate_5F_JSR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_JSR (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mBit_31__31_, mProperty_mBit_31__32_ COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_intermediate_JSR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR ("midrange_intermediate_JSR",
                                                        & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_JSR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JSR GALGAS_midrange_5F_intermediate_5F_JSR::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_JSR result ;
  const GALGAS_midrange_5F_intermediate_5F_JSR * p = (const GALGAS_midrange_5F_intermediate_5F_JSR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_JSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_JSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak::objectCompare (const GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak::GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak (void) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak & GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak::operator = (const GALGAS_midrange_5F_intermediate_5F_JSR & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak::GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak (const GALGAS_midrange_5F_intermediate_5F_JSR & inSource) :
GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JSR GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak::bang_midrange_5F_intermediate_5F_JSR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_JSR result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_JSR) ;
      result = GALGAS_midrange_5F_intermediate_5F_JSR ((cPtr_midrange_5F_intermediate_5F_JSR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_intermediate_JSR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak ("midrange_intermediate_JSR-weak",
                                                                & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak result ;
  const GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak * p = (const GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_JSR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_JSR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_JUMP optimizeJUMP'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_midrange_5F_intermediate_5F_JUMP_optimizeJUMP> gExtensionMethodTable_midrange_5F_intermediate_5F_JUMP_optimizeJUMP ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_optimizeJUMP (const int32_t inClassIndex,
                                        extensionMethodSignature_midrange_5F_intermediate_5F_JUMP_optimizeJUMP inMethod) {
  gExtensionMethodTable_midrange_5F_intermediate_5F_JUMP_optimizeJUMP.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeJUMP (const cPtr_midrange_5F_intermediate_5F_JUMP * inObject,
                                       const GALGAS_symbolTableForOptimizations constin_inSymbolTable,
                                       const GALGAS_uint constin_inLineIndex,
                                       GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GALGAS_string & io_ioListFileContents,
                                       GALGAS_bool & io_ioOptimizationsDone,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_midrange_5F_intermediate_5F_JUMP_optimizeJUMP f = NULL ;
    if (classIndex < gExtensionMethodTable_midrange_5F_intermediate_5F_JUMP_optimizeJUMP.count ()) {
      f = gExtensionMethodTable_midrange_5F_intermediate_5F_JUMP_optimizeJUMP (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_midrange_5F_intermediate_5F_JUMP_optimizeJUMP.count ()) {
           f = gExtensionMethodTable_midrange_5F_intermediate_5F_JUMP_optimizeJUMP (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_midrange_5F_intermediate_5F_JUMP_optimizeJUMP.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_JUMP_optimizeJUMP (const cPtr_midrange_5F_intermediate_5F_JUMP * inObject,
                                                                           const GALGAS_symbolTableForOptimizations constinArgument_inSymbolTable,
                                                                           const GALGAS_uint constinArgument_inLineIndex,
                                                                           GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                           GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JUMP * object = inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  GALGAS_stringset var_reachedLabelSet_9391 ;
  {
  GALGAS_midrange_5F_intermediate_5F_instruction joker_9369 ; // Joker input parameter
  routine_findMidRangeFirstInstructionOrLabelFromAddress (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 228)), ioArgument_ioGeneratedInstructionList, joker_9369, var_reachedLabelSet_9391, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 228)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_JUMP temp_1 = object ;
    test_0 = var_reachedLabelSet_9391.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 230)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 231)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 231)) ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 232)).add_operation (GALGAS_string (": JUMP branching to next instruction deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 232)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_uint var_line_9835 ;
    const GALGAS_midrange_5F_intermediate_5F_JUMP temp_2 = object ;
    GALGAS_bool joker_9837 ; // Joker input parameter
    constinArgument_inSymbolTable.method_searchKey (temp_2.readProperty_mTargetLabel (), var_line_9835, joker_9837, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 235)) ;
    GALGAS_midrange_5F_intermediate_5F_instruction var_firstInstruction_9986 ;
    {
    routine_findMidRangeFirstInstructionFromAddress (var_line_9835.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 237)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_9986, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 237)) ;
    }
    if (var_firstInstruction_9986.isValid ()) {
      if (var_firstInstruction_9986.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN) {
        {
        const GALGAS_midrange_5F_intermediate_5F_JUMP temp_3 = object ;
        ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::constructor_new (temp_3.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 242)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 241)) ;
        }
        ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 246)).add_operation (GALGAS_string (": JUMP branching to RETURN replaced by RETURN\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 246)) ;
      }else if (var_firstInstruction_9986.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation) {
        GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation cast_10513_literalOp ((cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) var_firstInstruction_9986.ptr ()) ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, cast_10513_literalOp.readProperty_mLiteralInstruction ().objectCompare (GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("midrange_optimizations.galgas", 248)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (cast_10513_literalOp, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 249)) ;
            }
            ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 254)).add_operation (GALGAS_string (": JUMP branching to RETLW replaced by RETLW\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 254)) ;
          }
        }
      }else if (var_firstInstruction_9986.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP) {
        GALGAS_midrange_5F_intermediate_5F_JUMP cast_10924_jump ((cPtr_midrange_5F_intermediate_5F_JUMP *) var_firstInstruction_9986.ptr ()) ;
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          const GALGAS_midrange_5F_intermediate_5F_JUMP temp_6 = object ;
          test_5 = GALGAS_bool (kIsNotEqual, temp_6.readProperty_mTargetLabel ().objectCompare (cast_10924_jump.readProperty_mTargetLabel ())).boolEnum () ;
          if (kBoolTrue == test_5) {
            {
            const GALGAS_midrange_5F_intermediate_5F_JUMP temp_7 = object ;
            ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_JUMP::constructor_new (temp_7.readProperty_mInstructionLocation (), cast_10924_jump.readProperty_mTargetLabel (), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_optimizations.galgas", 259)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_optimizations.galgas", 259))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 259)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 258)) ;
            }
            ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 263)).add_operation (GALGAS_string (": JUMP branching to JUMP replaced by JUMP\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 263)) ;
          }
        }
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_optimizeJUMP (void) {
  enterExtensionMethod_optimizeJUMP (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                                     extensionMethod_midrange_5F_intermediate_5F_JUMP_optimizeJUMP) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_midrange_5F_intermediate_5F_JUMP_optimizeJUMP (void) {
  gExtensionMethodTable_midrange_5F_intermediate_5F_JUMP_optimizeJUMP.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JUMP_optimizeJUMP (defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_optimizeJUMP,
                                                                          freeExtensionMethod_midrange_5F_intermediate_5F_JUMP_optimizeJUMP) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_GOTO optimizeGOTO'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_midrange_5F_intermediate_5F_GOTO_optimizeGOTO> gExtensionMethodTable_midrange_5F_intermediate_5F_GOTO_optimizeGOTO ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_optimizeGOTO (const int32_t inClassIndex,
                                        extensionMethodSignature_midrange_5F_intermediate_5F_GOTO_optimizeGOTO inMethod) {
  gExtensionMethodTable_midrange_5F_intermediate_5F_GOTO_optimizeGOTO.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeGOTO (const cPtr_midrange_5F_intermediate_5F_GOTO * inObject,
                                       const GALGAS_symbolTableForOptimizations constin_inSymbolTable,
                                       const GALGAS_uint constin_inLineIndex,
                                       GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GALGAS_string & io_ioListFileContents,
                                       GALGAS_bool & io_ioOptimizationsDone,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_GOTO) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_midrange_5F_intermediate_5F_GOTO_optimizeGOTO f = NULL ;
    if (classIndex < gExtensionMethodTable_midrange_5F_intermediate_5F_GOTO_optimizeGOTO.count ()) {
      f = gExtensionMethodTable_midrange_5F_intermediate_5F_GOTO_optimizeGOTO (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_midrange_5F_intermediate_5F_GOTO_optimizeGOTO.count ()) {
           f = gExtensionMethodTable_midrange_5F_intermediate_5F_GOTO_optimizeGOTO (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_midrange_5F_intermediate_5F_GOTO_optimizeGOTO.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_GOTO_optimizeGOTO (const cPtr_midrange_5F_intermediate_5F_GOTO * inObject,
                                                                           const GALGAS_symbolTableForOptimizations constinArgument_inSymbolTable,
                                                                           const GALGAS_uint constinArgument_inLineIndex,
                                                                           GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                           GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_GOTO * object = inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_GOTO) ;
  GALGAS_stringset var_reachedLabelSet_11999 ;
  {
  GALGAS_midrange_5F_intermediate_5F_instruction joker_11977 ; // Joker input parameter
  routine_findMidRangeFirstInstructionOrLabelFromAddress (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 280)), ioArgument_ioGeneratedInstructionList, joker_11977, var_reachedLabelSet_11999, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 280)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_GOTO temp_1 = object ;
    test_0 = var_reachedLabelSet_11999.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 282)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 283)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 283)) ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 284)).add_operation (GALGAS_string (": GOTO branching to next instruction deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 284)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_uint var_line_12442 ;
    const GALGAS_midrange_5F_intermediate_5F_GOTO temp_2 = object ;
    GALGAS_bool joker_12444 ; // Joker input parameter
    constinArgument_inSymbolTable.method_searchKey (temp_2.readProperty_mTargetLabel (), var_line_12442, joker_12444, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 287)) ;
    GALGAS_midrange_5F_intermediate_5F_instruction var_firstInstruction_12593 ;
    {
    routine_findMidRangeFirstInstructionFromAddress (var_line_12442.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 289)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_12593, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 289)) ;
    }
    if (var_firstInstruction_12593.isValid ()) {
      if (var_firstInstruction_12593.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN) {
        {
        const GALGAS_midrange_5F_intermediate_5F_GOTO temp_3 = object ;
        ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::constructor_new (temp_3.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 295)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 294)) ;
        }
        ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 299)).add_operation (GALGAS_string (": GOTO branching to RETURN replaced by RETURN\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 299)) ;
      }else if (var_firstInstruction_12593.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation) {
        GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation cast_13148_literalOp ((cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) var_firstInstruction_12593.ptr ()) ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, cast_13148_literalOp.readProperty_mLiteralInstruction ().objectCompare (GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("midrange_optimizations.galgas", 301)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (cast_13148_literalOp, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 302)) ;
            }
            ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 307)).add_operation (GALGAS_string (": GOTO branching to RETLW replaced by RETLW\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 307)) ;
          }
        }
      }else if (var_firstInstruction_12593.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP) {
        GALGAS_midrange_5F_intermediate_5F_JUMP cast_13559_jump ((cPtr_midrange_5F_intermediate_5F_JUMP *) var_firstInstruction_12593.ptr ()) ;
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          const GALGAS_midrange_5F_intermediate_5F_GOTO temp_6 = object ;
          test_5 = GALGAS_bool (kIsNotEqual, temp_6.readProperty_mTargetLabel ().objectCompare (cast_13559_jump.readProperty_mTargetLabel ())).boolEnum () ;
          if (kBoolTrue == test_5) {
            {
            const GALGAS_midrange_5F_intermediate_5F_GOTO temp_7 = object ;
            ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_JUMP::constructor_new (temp_7.readProperty_mInstructionLocation (), cast_13559_jump.readProperty_mTargetLabel (), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_optimizations.galgas", 312)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_optimizations.galgas", 312))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 312)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 311)) ;
            }
            ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 316)).add_operation (GALGAS_string (": GOTO branching to JUMP replaced by JUMP\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 316)) ;
          }
        }
      }else if (var_firstInstruction_12593.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO) {
        GALGAS_midrange_5F_intermediate_5F_GOTO cast_14072_goto ((cPtr_midrange_5F_intermediate_5F_GOTO *) var_firstInstruction_12593.ptr ()) ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          const GALGAS_midrange_5F_intermediate_5F_GOTO temp_9 = object ;
          test_8 = GALGAS_bool (kIsNotEqual, temp_9.readProperty_mTargetLabel ().objectCompare (cast_14072_goto.readProperty_mTargetLabel ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            {
            const GALGAS_midrange_5F_intermediate_5F_GOTO temp_10 = object ;
            ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (temp_10.readProperty_mInstructionLocation (), cast_14072_goto.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 321)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 320)) ;
            }
            ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 325)).add_operation (GALGAS_string (": GOTO branching to GOTO replaced by GOTO\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 325)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 325)) ;
          }
        }
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_optimizeGOTO (void) {
  enterExtensionMethod_optimizeGOTO (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO.mSlotID,
                                     extensionMethod_midrange_5F_intermediate_5F_GOTO_optimizeGOTO) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_midrange_5F_intermediate_5F_GOTO_optimizeGOTO (void) {
  gExtensionMethodTable_midrange_5F_intermediate_5F_GOTO_optimizeGOTO.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_GOTO_optimizeGOTO (defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_optimizeGOTO,
                                                                          freeExtensionMethod_midrange_5F_intermediate_5F_GOTO_optimizeGOTO) ;

//----------------------------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_repetitionStatique reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_repetitionStatique::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (const cPtr_pic_31__38_Instruction_5F_repetitionStatique *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantName.objectCompare (p->mProperty_mConstantName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLowerBoundExpression.objectCompare (p->mProperty_mLowerBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUpperBoundExpression.objectCompare (p->mProperty_mUpperBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfInstruction.objectCompare (p->mProperty_mEndOfInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_repetitionStatique::objectCompare (const GALGAS_pic_31__38_Instruction_5F_repetitionStatique & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_repetitionStatique::GALGAS_pic_31__38_Instruction_5F_repetitionStatique (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_repetitionStatique::GALGAS_pic_31__38_Instruction_5F_repetitionStatique (const cPtr_pic_31__38_Instruction_5F_repetitionStatique * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_repetitionStatique GALGAS_pic_31__38_Instruction_5F_repetitionStatique::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                          const GALGAS_lstring & inAttribute_mConstantName,
                                                                                                                          const GALGAS_immediatExpression & inAttribute_mLowerBoundExpression,
                                                                                                                          const GALGAS_immediatExpression & inAttribute_mUpperBoundExpression,
                                                                                                                          const GALGAS_pic_31__38_InstructionList & inAttribute_mInstructionList,
                                                                                                                          const GALGAS_location & inAttribute_mEndOfInstruction
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_repetitionStatique result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mConstantName.isValid () && inAttribute_mLowerBoundExpression.isValid () && inAttribute_mUpperBoundExpression.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mEndOfInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_repetitionStatique (inAttribute_mInstructionLocation, inAttribute_mConstantName, inAttribute_mLowerBoundExpression, inAttribute_mUpperBoundExpression, inAttribute_mInstructionList, inAttribute_mEndOfInstruction COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_repetitionStatique::setter_setMConstantName (GALGAS_lstring inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    p->mProperty_mConstantName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_repetitionStatique::setter_setMLowerBoundExpression (GALGAS_immediatExpression inValue
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    p->mProperty_mLowerBoundExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_repetitionStatique::setter_setMUpperBoundExpression (GALGAS_immediatExpression inValue
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    p->mProperty_mUpperBoundExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_repetitionStatique::setter_setMInstructionList (GALGAS_pic_31__38_InstructionList inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_repetitionStatique::setter_setMEndOfInstruction (GALGAS_location inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    p->mProperty_mEndOfInstruction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_repetitionStatique::readProperty_mConstantName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    return p->mProperty_mConstantName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_repetitionStatique::readProperty_mLowerBoundExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    return p->mProperty_mLowerBoundExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_repetitionStatique::readProperty_mUpperBoundExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    return p->mProperty_mUpperBoundExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_repetitionStatique::readProperty_mInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_pic_31__38_InstructionList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    return p->mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_Instruction_5F_repetitionStatique::readProperty_mEndOfInstruction (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    return p->mProperty_mEndOfInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_repetitionStatique class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_repetitionStatique::cPtr_pic_31__38_Instruction_5F_repetitionStatique (const GALGAS_location & in_mInstructionLocation,
                                                                                                      const GALGAS_lstring & in_mConstantName,
                                                                                                      const GALGAS_immediatExpression & in_mLowerBoundExpression,
                                                                                                      const GALGAS_immediatExpression & in_mUpperBoundExpression,
                                                                                                      const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                      const GALGAS_location & in_mEndOfInstruction
                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mConstantName (in_mConstantName),
mProperty_mLowerBoundExpression (in_mLowerBoundExpression),
mProperty_mUpperBoundExpression (in_mUpperBoundExpression),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mEndOfInstruction (in_mEndOfInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_repetitionStatique::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique ;
}

void cPtr_pic_31__38_Instruction_5F_repetitionStatique::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_repetitionStatique:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLowerBoundExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUpperBoundExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_repetitionStatique::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_repetitionStatique (mProperty_mInstructionLocation, mProperty_mConstantName, mProperty_mLowerBoundExpression, mProperty_mUpperBoundExpression, mProperty_mInstructionList, mProperty_mEndOfInstruction COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_repetitionStatique type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique ("pic18Instruction_repetitionStatique",
                                                                     & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_repetitionStatique::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_repetitionStatique::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_repetitionStatique (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_repetitionStatique GALGAS_pic_31__38_Instruction_5F_repetitionStatique::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_repetitionStatique result ;
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique * p = (const GALGAS_pic_31__38_Instruction_5F_repetitionStatique *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_repetitionStatique *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_repetitionStatique", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak::GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak & GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_repetitionStatique & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak::GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak (const GALGAS_pic_31__38_Instruction_5F_repetitionStatique & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_repetitionStatique GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak::bang_pic_31__38_Instruction_5F_repetitionStatique_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_repetitionStatique result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
      result = GALGAS_pic_31__38_Instruction_5F_repetitionStatique ((cPtr_pic_31__38_Instruction_5F_repetitionStatique *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_repetitionStatique-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak ("pic18Instruction_repetitionStatique-weak",
                                                                             & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_repetitionStatique-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @gotoTerminationForBlockInstruction reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_gotoTerminationForBlockInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gotoTerminationForBlockInstruction * p = (const cPtr_gotoTerminationForBlockInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gotoTerminationForBlockInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mNextBlock.objectCompare (p->mProperty_mNextBlock) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_gotoTerminationForBlockInstruction::objectCompare (const GALGAS_gotoTerminationForBlockInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gotoTerminationForBlockInstruction::GALGAS_gotoTerminationForBlockInstruction (void) :
GALGAS_abstractBlockTerminationForBlockInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gotoTerminationForBlockInstruction GALGAS_gotoTerminationForBlockInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gotoTerminationForBlockInstruction::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gotoTerminationForBlockInstruction::GALGAS_gotoTerminationForBlockInstruction (const cPtr_gotoTerminationForBlockInstruction * inSourcePtr) :
GALGAS_abstractBlockTerminationForBlockInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gotoTerminationForBlockInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gotoTerminationForBlockInstruction GALGAS_gotoTerminationForBlockInstruction::constructor_new (const GALGAS_lstring & inAttribute_mNextBlock
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gotoTerminationForBlockInstruction result ;
  if (inAttribute_mNextBlock.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gotoTerminationForBlockInstruction (inAttribute_mNextBlock COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gotoTerminationForBlockInstruction::setter_setMNextBlock (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_gotoTerminationForBlockInstruction * p = (cPtr_gotoTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gotoTerminationForBlockInstruction) ;
    p->mProperty_mNextBlock = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_gotoTerminationForBlockInstruction::readProperty_mNextBlock (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_gotoTerminationForBlockInstruction * p = (cPtr_gotoTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gotoTerminationForBlockInstruction) ;
    return p->mProperty_mNextBlock ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gotoTerminationForBlockInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gotoTerminationForBlockInstruction::cPtr_gotoTerminationForBlockInstruction (const GALGAS_lstring & in_mNextBlock
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractBlockTerminationForBlockInstruction (THERE),
mProperty_mNextBlock (in_mNextBlock) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_gotoTerminationForBlockInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction ;
}

void cPtr_gotoTerminationForBlockInstruction::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@gotoTerminationForBlockInstruction:" ;
  mProperty_mNextBlock.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gotoTerminationForBlockInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gotoTerminationForBlockInstruction (mProperty_mNextBlock COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@gotoTerminationForBlockInstruction type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction ("gotoTerminationForBlockInstruction",
                                                           & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gotoTerminationForBlockInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gotoTerminationForBlockInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gotoTerminationForBlockInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gotoTerminationForBlockInstruction GALGAS_gotoTerminationForBlockInstruction::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gotoTerminationForBlockInstruction result ;
  const GALGAS_gotoTerminationForBlockInstruction * p = (const GALGAS_gotoTerminationForBlockInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gotoTerminationForBlockInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gotoTerminationForBlockInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_gotoTerminationForBlockInstruction_2D_weak::objectCompare (const GALGAS_gotoTerminationForBlockInstruction_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gotoTerminationForBlockInstruction_2D_weak::GALGAS_gotoTerminationForBlockInstruction_2D_weak (void) :
GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gotoTerminationForBlockInstruction_2D_weak & GALGAS_gotoTerminationForBlockInstruction_2D_weak::operator = (const GALGAS_gotoTerminationForBlockInstruction & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gotoTerminationForBlockInstruction_2D_weak::GALGAS_gotoTerminationForBlockInstruction_2D_weak (const GALGAS_gotoTerminationForBlockInstruction & inSource) :
GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gotoTerminationForBlockInstruction_2D_weak GALGAS_gotoTerminationForBlockInstruction_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_gotoTerminationForBlockInstruction_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gotoTerminationForBlockInstruction GALGAS_gotoTerminationForBlockInstruction_2D_weak::bang_gotoTerminationForBlockInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_gotoTerminationForBlockInstruction result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_gotoTerminationForBlockInstruction) ;
      result = GALGAS_gotoTerminationForBlockInstruction ((cPtr_gotoTerminationForBlockInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@gotoTerminationForBlockInstruction-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction_2D_weak ("gotoTerminationForBlockInstruction-weak",
                                                                   & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gotoTerminationForBlockInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gotoTerminationForBlockInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gotoTerminationForBlockInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gotoTerminationForBlockInstruction_2D_weak GALGAS_gotoTerminationForBlockInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gotoTerminationForBlockInstruction_2D_weak result ;
  const GALGAS_gotoTerminationForBlockInstruction_2D_weak * p = (const GALGAS_gotoTerminationForBlockInstruction_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gotoTerminationForBlockInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gotoTerminationForBlockInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @testTerminationForBlockInstruction reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_testTerminationForBlockInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_testTerminationForBlockInstruction * p = (const cPtr_testTerminationForBlockInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mCondition.objectCompare (p->mProperty_mCondition) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTrueTermination.objectCompare (p->mProperty_mTrueTermination) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFalseTermination.objectCompare (p->mProperty_mFalseTermination) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_testTerminationForBlockInstruction::objectCompare (const GALGAS_testTerminationForBlockInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testTerminationForBlockInstruction::GALGAS_testTerminationForBlockInstruction (void) :
GALGAS_abstractBlockTerminationForBlockInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testTerminationForBlockInstruction::GALGAS_testTerminationForBlockInstruction (const cPtr_testTerminationForBlockInstruction * inSourcePtr) :
GALGAS_abstractBlockTerminationForBlockInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_testTerminationForBlockInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_testTerminationForBlockInstruction GALGAS_testTerminationForBlockInstruction::constructor_new (const GALGAS_pic_31__38_ConditionExpression & inAttribute_mCondition,
                                                                                                      const GALGAS_abstractBlockTerminationForBlockInstruction & inAttribute_mTrueTermination,
                                                                                                      const GALGAS_abstractBlockTerminationForBlockInstruction & inAttribute_mFalseTermination,
                                                                                                      const GALGAS_location & inAttribute_mLocation
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_testTerminationForBlockInstruction result ;
  if (inAttribute_mCondition.isValid () && inAttribute_mTrueTermination.isValid () && inAttribute_mFalseTermination.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_testTerminationForBlockInstruction (inAttribute_mCondition, inAttribute_mTrueTermination, inAttribute_mFalseTermination, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_testTerminationForBlockInstruction::setter_setMCondition (GALGAS_pic_31__38_ConditionExpression inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    p->mProperty_mCondition = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_testTerminationForBlockInstruction::setter_setMTrueTermination (GALGAS_abstractBlockTerminationForBlockInstruction inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    p->mProperty_mTrueTermination = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_testTerminationForBlockInstruction::setter_setMFalseTermination (GALGAS_abstractBlockTerminationForBlockInstruction inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    p->mProperty_mFalseTermination = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_testTerminationForBlockInstruction::setter_setMLocation (GALGAS_location inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    p->mProperty_mLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_ConditionExpression GALGAS_testTerminationForBlockInstruction::readProperty_mCondition (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_pic_31__38_ConditionExpression () ;
  }else{
    cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    return p->mProperty_mCondition ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBlockTerminationForBlockInstruction GALGAS_testTerminationForBlockInstruction::readProperty_mTrueTermination (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_abstractBlockTerminationForBlockInstruction () ;
  }else{
    cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    return p->mProperty_mTrueTermination ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBlockTerminationForBlockInstruction GALGAS_testTerminationForBlockInstruction::readProperty_mFalseTermination (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_abstractBlockTerminationForBlockInstruction () ;
  }else{
    cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    return p->mProperty_mFalseTermination ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_testTerminationForBlockInstruction::readProperty_mLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    return p->mProperty_mLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @testTerminationForBlockInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_testTerminationForBlockInstruction::cPtr_testTerminationForBlockInstruction (const GALGAS_pic_31__38_ConditionExpression & in_mCondition,
                                                                                  const GALGAS_abstractBlockTerminationForBlockInstruction & in_mTrueTermination,
                                                                                  const GALGAS_abstractBlockTerminationForBlockInstruction & in_mFalseTermination,
                                                                                  const GALGAS_location & in_mLocation
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractBlockTerminationForBlockInstruction (THERE),
mProperty_mCondition (in_mCondition),
mProperty_mTrueTermination (in_mTrueTermination),
mProperty_mFalseTermination (in_mFalseTermination),
mProperty_mLocation (in_mLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_testTerminationForBlockInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testTerminationForBlockInstruction ;
}

void cPtr_testTerminationForBlockInstruction::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@testTerminationForBlockInstruction:" ;
  mProperty_mCondition.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTrueTermination.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFalseTermination.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_testTerminationForBlockInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_testTerminationForBlockInstruction (mProperty_mCondition, mProperty_mTrueTermination, mProperty_mFalseTermination, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@testTerminationForBlockInstruction type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_testTerminationForBlockInstruction ("testTerminationForBlockInstruction",
                                                           & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_testTerminationForBlockInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testTerminationForBlockInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_testTerminationForBlockInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_testTerminationForBlockInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testTerminationForBlockInstruction GALGAS_testTerminationForBlockInstruction::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_testTerminationForBlockInstruction result ;
  const GALGAS_testTerminationForBlockInstruction * p = (const GALGAS_testTerminationForBlockInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_testTerminationForBlockInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testTerminationForBlockInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_testTerminationForBlockInstruction_2D_weak::objectCompare (const GALGAS_testTerminationForBlockInstruction_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testTerminationForBlockInstruction_2D_weak::GALGAS_testTerminationForBlockInstruction_2D_weak (void) :
GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testTerminationForBlockInstruction_2D_weak & GALGAS_testTerminationForBlockInstruction_2D_weak::operator = (const GALGAS_testTerminationForBlockInstruction & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testTerminationForBlockInstruction_2D_weak::GALGAS_testTerminationForBlockInstruction_2D_weak (const GALGAS_testTerminationForBlockInstruction & inSource) :
GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testTerminationForBlockInstruction_2D_weak GALGAS_testTerminationForBlockInstruction_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_testTerminationForBlockInstruction_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testTerminationForBlockInstruction GALGAS_testTerminationForBlockInstruction_2D_weak::bang_testTerminationForBlockInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_testTerminationForBlockInstruction result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_testTerminationForBlockInstruction) ;
      result = GALGAS_testTerminationForBlockInstruction ((cPtr_testTerminationForBlockInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@testTerminationForBlockInstruction-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_testTerminationForBlockInstruction_2D_weak ("testTerminationForBlockInstruction-weak",
                                                                   & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_testTerminationForBlockInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testTerminationForBlockInstruction_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_testTerminationForBlockInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_testTerminationForBlockInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testTerminationForBlockInstruction_2D_weak GALGAS_testTerminationForBlockInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_testTerminationForBlockInstruction_2D_weak result ;
  const GALGAS_testTerminationForBlockInstruction_2D_weak * p = (const GALGAS_testTerminationForBlockInstruction_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_testTerminationForBlockInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testTerminationForBlockInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_block reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_block::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_block * p = (const cPtr_pic_31__38_Instruction_5F_block *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_block) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStartBlockName.objectCompare (p->mProperty_mStartBlockName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBlockList.objectCompare (p->mProperty_mBlockList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfBlockInstruction.objectCompare (p->mProperty_mEndOfBlockInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_block::objectCompare (const GALGAS_pic_31__38_Instruction_5F_block & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_block::GALGAS_pic_31__38_Instruction_5F_block (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_block GALGAS_pic_31__38_Instruction_5F_block::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_block::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_pic_31__38_BlockInstructionBlockList::constructor_emptyList (HERE),
                                                                  GALGAS_location::constructor_nowhere (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_block::GALGAS_pic_31__38_Instruction_5F_block (const cPtr_pic_31__38_Instruction_5F_block * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_block) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_block GALGAS_pic_31__38_Instruction_5F_block::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mStartBlockName,
                                                                                                const GALGAS_pic_31__38_BlockInstructionBlockList & inAttribute_mBlockList,
                                                                                                const GALGAS_location & inAttribute_mEndOfBlockInstruction
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_block result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mStartBlockName.isValid () && inAttribute_mBlockList.isValid () && inAttribute_mEndOfBlockInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_block (inAttribute_mInstructionLocation, inAttribute_mStartBlockName, inAttribute_mBlockList, inAttribute_mEndOfBlockInstruction COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_block::setter_setMStartBlockName (GALGAS_lstring inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_block * p = (cPtr_pic_31__38_Instruction_5F_block *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_block) ;
    p->mProperty_mStartBlockName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_block::setter_setMBlockList (GALGAS_pic_31__38_BlockInstructionBlockList inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_block * p = (cPtr_pic_31__38_Instruction_5F_block *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_block) ;
    p->mProperty_mBlockList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_block::setter_setMEndOfBlockInstruction (GALGAS_location inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_block * p = (cPtr_pic_31__38_Instruction_5F_block *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_block) ;
    p->mProperty_mEndOfBlockInstruction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_block::readProperty_mStartBlockName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_block * p = (cPtr_pic_31__38_Instruction_5F_block *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_block) ;
    return p->mProperty_mStartBlockName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BlockInstructionBlockList GALGAS_pic_31__38_Instruction_5F_block::readProperty_mBlockList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_pic_31__38_BlockInstructionBlockList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_block * p = (cPtr_pic_31__38_Instruction_5F_block *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_block) ;
    return p->mProperty_mBlockList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_Instruction_5F_block::readProperty_mEndOfBlockInstruction (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_block * p = (cPtr_pic_31__38_Instruction_5F_block *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_block) ;
    return p->mProperty_mEndOfBlockInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_block class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_block::cPtr_pic_31__38_Instruction_5F_block (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mStartBlockName,
                                                                            const GALGAS_pic_31__38_BlockInstructionBlockList & in_mBlockList,
                                                                            const GALGAS_location & in_mEndOfBlockInstruction
                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mStartBlockName (in_mStartBlockName),
mProperty_mBlockList (in_mBlockList),
mProperty_mEndOfBlockInstruction (in_mEndOfBlockInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_block::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block ;
}

void cPtr_pic_31__38_Instruction_5F_block::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_block:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStartBlockName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBlockList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfBlockInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_block::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_block (mProperty_mInstructionLocation, mProperty_mStartBlockName, mProperty_mBlockList, mProperty_mEndOfBlockInstruction COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_block type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block ("pic18Instruction_block",
                                                        & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_block::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_block::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_block (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_block GALGAS_pic_31__38_Instruction_5F_block::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_block result ;
  const GALGAS_pic_31__38_Instruction_5F_block * p = (const GALGAS_pic_31__38_Instruction_5F_block *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_block *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_block", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_Instruction_5F_block_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_block_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_block_2D_weak::GALGAS_pic_31__38_Instruction_5F_block_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_block_2D_weak & GALGAS_pic_31__38_Instruction_5F_block_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_block & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_block_2D_weak::GALGAS_pic_31__38_Instruction_5F_block_2D_weak (const GALGAS_pic_31__38_Instruction_5F_block & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_block_2D_weak GALGAS_pic_31__38_Instruction_5F_block_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_block_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_block GALGAS_pic_31__38_Instruction_5F_block_2D_weak::bang_pic_31__38_Instruction_5F_block_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_block result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_block) ;
      result = GALGAS_pic_31__38_Instruction_5F_block ((cPtr_pic_31__38_Instruction_5F_block *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_block-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block_2D_weak ("pic18Instruction_block-weak",
                                                                & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_block_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_block_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_block_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_block_2D_weak GALGAS_pic_31__38_Instruction_5F_block_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_block_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_block_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_block_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_block_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_block-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_JSR reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_JSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_JSR * p = (const cPtr_pic_31__38_Instruction_5F_JSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JSR) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_JSR::objectCompare (const GALGAS_pic_31__38_Instruction_5F_JSR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JSR::GALGAS_pic_31__38_Instruction_5F_JSR (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JSR::GALGAS_pic_31__38_Instruction_5F_JSR (const cPtr_pic_31__38_Instruction_5F_JSR * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_JSR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JSR GALGAS_pic_31__38_Instruction_5F_JSR::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_lstring & inAttribute_mTargetLabel,
                                                                                            const GALGAS_jumpInstructionKind & inAttribute_mKind
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JSR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_JSR (inAttribute_mInstructionLocation, inAttribute_mTargetLabel, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_JSR::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_JSR * p = (cPtr_pic_31__38_Instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JSR) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_JSR::setter_setMKind (GALGAS_jumpInstructionKind inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_JSR * p = (cPtr_pic_31__38_Instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JSR) ;
    p->mProperty_mKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_JSR::readProperty_mTargetLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_JSR * p = (cPtr_pic_31__38_Instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JSR) ;
    return p->mProperty_mTargetLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_jumpInstructionKind GALGAS_pic_31__38_Instruction_5F_JSR::readProperty_mKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_jumpInstructionKind () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_JSR * p = (cPtr_pic_31__38_Instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JSR) ;
    return p->mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_JSR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_JSR::cPtr_pic_31__38_Instruction_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_lstring & in_mTargetLabel,
                                                                        const GALGAS_jumpInstructionKind & in_mKind
                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel),
mProperty_mKind (in_mKind) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR ;
}

void cPtr_pic_31__38_Instruction_5F_JSR::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_JSR:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_JSR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_JSR (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_JSR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR ("pic18Instruction_JSR",
                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_JSR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JSR GALGAS_pic_31__38_Instruction_5F_JSR::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JSR result ;
  const GALGAS_pic_31__38_Instruction_5F_JSR * p = (const GALGAS_pic_31__38_Instruction_5F_JSR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_JSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_JSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak::GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak & GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_JSR & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak::GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak (const GALGAS_pic_31__38_Instruction_5F_JSR & inSource) :
GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JSR GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak::bang_pic_31__38_Instruction_5F_JSR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_JSR result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_JSR) ;
      result = GALGAS_pic_31__38_Instruction_5F_JSR ((cPtr_pic_31__38_Instruction_5F_JSR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_JSR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak ("pic18Instruction_JSR-weak",
                                                              & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_JSR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_JSR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_macro reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_macro::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_macro * p = (const cPtr_pic_31__38_Instruction_5F_macro *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_macro) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMacroName.objectCompare (p->mProperty_mMacroName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressionList.objectCompare (p->mProperty_mExpressionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_macro::objectCompare (const GALGAS_pic_31__38_Instruction_5F_macro & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_macro::GALGAS_pic_31__38_Instruction_5F_macro (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_macro GALGAS_pic_31__38_Instruction_5F_macro::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_macro::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_immediatExpressionList::constructor_emptyList (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_macro::GALGAS_pic_31__38_Instruction_5F_macro (const cPtr_pic_31__38_Instruction_5F_macro * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_macro) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_macro GALGAS_pic_31__38_Instruction_5F_macro::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mMacroName,
                                                                                                const GALGAS_immediatExpressionList & inAttribute_mExpressionList
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_macro result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mMacroName.isValid () && inAttribute_mExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_macro (inAttribute_mInstructionLocation, inAttribute_mMacroName, inAttribute_mExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_macro::setter_setMMacroName (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_macro * p = (cPtr_pic_31__38_Instruction_5F_macro *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_macro) ;
    p->mProperty_mMacroName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_macro::setter_setMExpressionList (GALGAS_immediatExpressionList inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_macro * p = (cPtr_pic_31__38_Instruction_5F_macro *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_macro) ;
    p->mProperty_mExpressionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_macro::readProperty_mMacroName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_macro * p = (cPtr_pic_31__38_Instruction_5F_macro *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_macro) ;
    return p->mProperty_mMacroName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList GALGAS_pic_31__38_Instruction_5F_macro::readProperty_mExpressionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_immediatExpressionList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_macro * p = (cPtr_pic_31__38_Instruction_5F_macro *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_macro) ;
    return p->mProperty_mExpressionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_macro class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_macro::cPtr_pic_31__38_Instruction_5F_macro (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mMacroName,
                                                                            const GALGAS_immediatExpressionList & in_mExpressionList
                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mMacroName (in_mMacroName),
mProperty_mExpressionList (in_mExpressionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_macro::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro ;
}

void cPtr_pic_31__38_Instruction_5F_macro::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_macro:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMacroName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_macro::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_macro (mProperty_mInstructionLocation, mProperty_mMacroName, mProperty_mExpressionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_macro type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro ("pic18Instruction_macro",
                                                        & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_macro::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_macro::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_macro (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_macro GALGAS_pic_31__38_Instruction_5F_macro::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_macro result ;
  const GALGAS_pic_31__38_Instruction_5F_macro * p = (const GALGAS_pic_31__38_Instruction_5F_macro *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_macro *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_macro", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_Instruction_5F_macro_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_macro_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_macro_2D_weak::GALGAS_pic_31__38_Instruction_5F_macro_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_macro_2D_weak & GALGAS_pic_31__38_Instruction_5F_macro_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_macro & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_macro_2D_weak::GALGAS_pic_31__38_Instruction_5F_macro_2D_weak (const GALGAS_pic_31__38_Instruction_5F_macro & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_macro_2D_weak GALGAS_pic_31__38_Instruction_5F_macro_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_macro_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_macro GALGAS_pic_31__38_Instruction_5F_macro_2D_weak::bang_pic_31__38_Instruction_5F_macro_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_macro result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_macro) ;
      result = GALGAS_pic_31__38_Instruction_5F_macro ((cPtr_pic_31__38_Instruction_5F_macro *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_macro-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro_2D_weak ("pic18Instruction_macro-weak",
                                                                & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_macro_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_macro_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_macro_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_macro_2D_weak GALGAS_pic_31__38_Instruction_5F_macro_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_macro_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_macro_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_macro_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_macro_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_macro-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_JUMP reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_JUMP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_JUMP * p = (const cPtr_pic_31__38_Instruction_5F_JUMP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMP) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_JUMP::objectCompare (const GALGAS_pic_31__38_Instruction_5F_JUMP & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMP::GALGAS_pic_31__38_Instruction_5F_JUMP (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMP::GALGAS_pic_31__38_Instruction_5F_JUMP (const cPtr_pic_31__38_Instruction_5F_JUMP * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_JUMP) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMP GALGAS_pic_31__38_Instruction_5F_JUMP::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                              const GALGAS_lstring & inAttribute_mTargetLabel,
                                                                                              const GALGAS_jumpInstructionKind & inAttribute_mKind
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JUMP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_JUMP (inAttribute_mInstructionLocation, inAttribute_mTargetLabel, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_JUMP::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_JUMP * p = (cPtr_pic_31__38_Instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMP) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_JUMP::setter_setMKind (GALGAS_jumpInstructionKind inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_JUMP * p = (cPtr_pic_31__38_Instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMP) ;
    p->mProperty_mKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_JUMP::readProperty_mTargetLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_JUMP * p = (cPtr_pic_31__38_Instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMP) ;
    return p->mProperty_mTargetLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_jumpInstructionKind GALGAS_pic_31__38_Instruction_5F_JUMP::readProperty_mKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_jumpInstructionKind () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_JUMP * p = (cPtr_pic_31__38_Instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMP) ;
    return p->mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_JUMP class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_JUMP::cPtr_pic_31__38_Instruction_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_lstring & in_mTargetLabel,
                                                                          const GALGAS_jumpInstructionKind & in_mKind
                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel),
mProperty_mKind (in_mKind) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_JUMP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP ;
}

void cPtr_pic_31__38_Instruction_5F_JUMP::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_JUMP:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_JUMP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_JUMP (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_JUMP type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP ("pic18Instruction_JUMP",
                                                       & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_JUMP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_JUMP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_JUMP (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMP GALGAS_pic_31__38_Instruction_5F_JUMP::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JUMP result ;
  const GALGAS_pic_31__38_Instruction_5F_JUMP * p = (const GALGAS_pic_31__38_Instruction_5F_JUMP *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_JUMP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_JUMP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak::GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak & GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_JUMP & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak::GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak (const GALGAS_pic_31__38_Instruction_5F_JUMP & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMP GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak::bang_pic_31__38_Instruction_5F_JUMP_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_JUMP result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_JUMP) ;
      result = GALGAS_pic_31__38_Instruction_5F_JUMP ((cPtr_pic_31__38_Instruction_5F_JUMP *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_JUMP-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak ("pic18Instruction_JUMP-weak",
                                                               & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_JUMP_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_JUMP-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_JUMPCC reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_JUMPCC::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (const cPtr_pic_31__38_Instruction_5F_JUMPCC *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConditionalBranch.objectCompare (p->mProperty_mConditionalBranch) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsBcc.objectCompare (p->mProperty_mIsBcc) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_JUMPCC::objectCompare (const GALGAS_pic_31__38_Instruction_5F_JUMPCC & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMPCC::GALGAS_pic_31__38_Instruction_5F_JUMPCC (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMPCC::GALGAS_pic_31__38_Instruction_5F_JUMPCC (const cPtr_pic_31__38_Instruction_5F_JUMPCC * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMPCC GALGAS_pic_31__38_Instruction_5F_JUMPCC::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstring & inAttribute_mTargetLabel,
                                                                                                  const GALGAS_conditional_5F_branch & inAttribute_mConditionalBranch,
                                                                                                  const GALGAS_bool & inAttribute_mIsBcc
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JUMPCC result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mConditionalBranch.isValid () && inAttribute_mIsBcc.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_JUMPCC (inAttribute_mInstructionLocation, inAttribute_mTargetLabel, inAttribute_mConditionalBranch, inAttribute_mIsBcc COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_JUMPCC::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (cPtr_pic_31__38_Instruction_5F_JUMPCC *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_JUMPCC::setter_setMConditionalBranch (GALGAS_conditional_5F_branch inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (cPtr_pic_31__38_Instruction_5F_JUMPCC *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
    p->mProperty_mConditionalBranch = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_JUMPCC::setter_setMIsBcc (GALGAS_bool inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (cPtr_pic_31__38_Instruction_5F_JUMPCC *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
    p->mProperty_mIsBcc = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_JUMPCC::readProperty_mTargetLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (cPtr_pic_31__38_Instruction_5F_JUMPCC *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
    return p->mProperty_mTargetLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_conditional_5F_branch GALGAS_pic_31__38_Instruction_5F_JUMPCC::readProperty_mConditionalBranch (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_conditional_5F_branch () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (cPtr_pic_31__38_Instruction_5F_JUMPCC *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
    return p->mProperty_mConditionalBranch ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_JUMPCC::readProperty_mIsBcc (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (cPtr_pic_31__38_Instruction_5F_JUMPCC *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
    return p->mProperty_mIsBcc ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_JUMPCC class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_JUMPCC::cPtr_pic_31__38_Instruction_5F_JUMPCC (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel,
                                                                              const GALGAS_conditional_5F_branch & in_mConditionalBranch,
                                                                              const GALGAS_bool & in_mIsBcc
                                                                              COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel),
mProperty_mConditionalBranch (in_mConditionalBranch),
mProperty_mIsBcc (in_mIsBcc) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_JUMPCC::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC ;
}

void cPtr_pic_31__38_Instruction_5F_JUMPCC::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_JUMPCC:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConditionalBranch.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsBcc.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_JUMPCC::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_JUMPCC (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mConditionalBranch, mProperty_mIsBcc COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_JUMPCC type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC ("pic18Instruction_JUMPCC",
                                                         & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_JUMPCC::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_JUMPCC::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_JUMPCC (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMPCC GALGAS_pic_31__38_Instruction_5F_JUMPCC::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JUMPCC result ;
  const GALGAS_pic_31__38_Instruction_5F_JUMPCC * p = (const GALGAS_pic_31__38_Instruction_5F_JUMPCC *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_JUMPCC *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_JUMPCC", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak::GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak & GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_JUMPCC & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak::GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak (const GALGAS_pic_31__38_Instruction_5F_JUMPCC & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMPCC GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak::bang_pic_31__38_Instruction_5F_JUMPCC_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_JUMPCC result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
      result = GALGAS_pic_31__38_Instruction_5F_JUMPCC ((cPtr_pic_31__38_Instruction_5F_JUMPCC *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_JUMPCC-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak ("pic18Instruction_JUMPCC-weak",
                                                                 & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_JUMPCC_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_JUMPCC-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_LDATA_38_PTR reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR * p = (const cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDataName.objectCompare (p->mProperty_mDataName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDataIndex.objectCompare (p->mProperty_mDataIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::objectCompare (const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                         GALGAS_lstring::constructor_default (HERE),
                                                                         GALGAS_luint::constructor_default (HERE)
                                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR (const cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                              const GALGAS_lstring & inAttribute_mDataName,
                                                                                                              const GALGAS_luint & inAttribute_mDataIndex
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mDataName.isValid () && inAttribute_mDataIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR (inAttribute_mInstructionLocation, inAttribute_mDataName, inAttribute_mDataIndex COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::setter_setMDataName (GALGAS_lstring inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR * p = (cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR) ;
    p->mProperty_mDataName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::setter_setMDataIndex (GALGAS_luint inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR * p = (cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR) ;
    p->mProperty_mDataIndex = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::readProperty_mDataName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR * p = (cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR) ;
    return p->mProperty_mDataName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::readProperty_mDataIndex (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR * p = (cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR) ;
    return p->mProperty_mDataIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_LDATA8PTR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR (const GALGAS_location & in_mInstructionLocation,
                                                                                          const GALGAS_lstring & in_mDataName,
                                                                                          const GALGAS_luint & in_mDataIndex
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mDataName (in_mDataName),
mProperty_mDataIndex (in_mDataIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR ;
}

void cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_LDATA8PTR:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDataName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDataIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR (mProperty_mInstructionLocation, mProperty_mDataName, mProperty_mDataIndex COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_LDATA8PTR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR ("pic18Instruction_LDATA8PTR",
                                                               & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR result ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR * p = (const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_LDATA8PTR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

