#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSkipIfSet.objectCompare (p->mProperty_mSkipIfSet) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest (void) :
GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inSourcePtr) :
GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                  const GALGAS_midrange_5F_instruction & inAttribute_mInstruction,
                                                                                                                  const GALGAS_bool & inAttribute_mSkipIfSet,
                                                                                                                  const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                  const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mSkipIfSet.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mSkipIfSet, inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::getter_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    result = p->mProperty_mSkipIfSet ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::getter_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSkipIfSet ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_bitNumberExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    result = p->mProperty_mBitNumber ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitNumber ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::setter_setMSkipIfSet (GALGAS_bool inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mSkipIfSet = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::setter_setMSkipIfSet (GALGAS_bool inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSkipIfSet = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisterExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::setter_setMBitNumber (GALGAS_bitNumberExpression inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::setter_setMBitNumber (GALGAS_bitNumberExpression inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBitNumber = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_IF_BitTest class
//----------------------------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (const GALGAS_location & in_mInstructionLocation,
                                                                                              const GALGAS_midrange_5F_instruction & in_mInstruction,
                                                                                              const GALGAS_bool & in_mSkipIfSet,
                                                                                              const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                              const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction COMMA_THERE),
mProperty_mSkipIfSet (in_mSkipIfSet),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mBitNumber (in_mBitNumber) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest ;
}

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_IF_BitTest:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mSkipIfSet, mProperty_mRegisterExpression, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_instruction_IF_BitTest type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest ("midrange_instruction_IF_BitTest",
                                                                 & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest result ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest * p = (const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_IF_BitTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_instruction_IF_BitTest getBaseCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode> gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_getBaseCode (const int32_t inClassIndex,
                                       extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode inMethod) {
  gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getBaseCode (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_uint & out_outBaseCode,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_outBaseCode.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode f = NULL ;
    if (classIndex < gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode.count ()) {
      f = gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode.count ()) {
           f = gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, out_outBaseCode, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                                                                  GALGAS_uint & outArgument_outBaseCode,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * object = inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_1 = object ;
    test_0 = temp_1.getter_mSkipIfSet (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outBaseCode = GALGAS_uint ((uint32_t) 7168U) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outBaseCode = GALGAS_uint ((uint32_t) 6144U) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode (void) {
  enterExtensionMethod_getBaseCode (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                    extensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode (void) {
  gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode (defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode,
                                                                                 freeExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_instruction_IF_BitTest getMnemonic'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic> gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_getMnemonic (const int32_t inClassIndex,
                                       extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic inMethod) {
  gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getMnemonic (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_string & out_outMnemonic,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_outMnemonic.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic f = NULL ;
    if (classIndex < gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic.count ()) {
      f = gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic.count ()) {
           f = gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, out_outMnemonic, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                                                                  GALGAS_string & outArgument_outMnemonic,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * object = inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_1 = object ;
    test_0 = temp_1.getter_mSkipIfSet (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outMnemonic = GALGAS_string ("BTFSS") ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outMnemonic = GALGAS_string ("BTFSC") ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic (void) {
  enterExtensionMethod_getMnemonic (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                    extensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic (void) {
  gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic (defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic,
                                                                                 freeExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic) ;

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIncrement.objectCompare (p->mProperty_mIncrement) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec (void) :
GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * inSourcePtr) :
GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                const GALGAS_midrange_5F_instruction & inAttribute_mInstruction,
                                                                                                                const GALGAS_bool & inAttribute_mIncrement,
                                                                                                                const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mIncrement.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mIncrement, inAttribute_mRegisterExpression, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    result = p->mProperty_mIncrement ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIncrement ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    result = p->mProperty_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_W_5F_isDestination ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::setter_setMIncrement (GALGAS_bool inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    p->mProperty_mIncrement = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::setter_setMIncrement (GALGAS_bool inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIncrement = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisterExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_m_5F_W_5F_isDestination = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_IF_IncDec class
//----------------------------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_midrange_5F_instruction & in_mInstruction,
                                                                                            const GALGAS_bool & in_mIncrement,
                                                                                            const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                            const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction COMMA_THERE),
mProperty_mIncrement (in_mIncrement),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ;
}

void cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_IF_IncDec:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mIncrement, mProperty_mRegisterExpression, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_instruction_IF_IncDec type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ("midrange_instruction_IF_IncDec",
                                                                & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec result ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec * p = (const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_IF_IncDec", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_incDecRegisterInCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_incDecRegisterInCondition * p = (const cPtr_midrange_5F_incDecRegisterInCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIncrement.objectCompare (p->mProperty_mIncrement) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBranchIfZero.objectCompare (p->mProperty_mBranchIfZero) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_incDecRegisterInCondition::objectCompare (const GALGAS_midrange_5F_incDecRegisterInCondition & inOperand) const {
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

GALGAS_midrange_5F_incDecRegisterInCondition::GALGAS_midrange_5F_incDecRegisterInCondition (void) :
GALGAS_midrange_5F_conditionExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_incDecRegisterInCondition::GALGAS_midrange_5F_incDecRegisterInCondition (const cPtr_midrange_5F_incDecRegisterInCondition * inSourcePtr) :
GALGAS_midrange_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_incDecRegisterInCondition) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_incDecRegisterInCondition GALGAS_midrange_5F_incDecRegisterInCondition::constructor_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                            const GALGAS_bool & inAttribute_mIncrement,
                                                                                                            const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination,
                                                                                                            const GALGAS_bool & inAttribute_mBranchIfZero
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_incDecRegisterInCondition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mIncrement.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid () && inAttribute_mBranchIfZero.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_incDecRegisterInCondition (inAttribute_mRegisterExpression, inAttribute_mIncrement, inAttribute_m_5F_W_5F_isDestination, inAttribute_mBranchIfZero COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_midrange_5F_incDecRegisterInCondition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_incDecRegisterInCondition * p = (const cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression cPtr_midrange_5F_incDecRegisterInCondition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_incDecRegisterInCondition::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_incDecRegisterInCondition * p = (const cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    result = p->mProperty_mIncrement ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_incDecRegisterInCondition::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIncrement ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_incDecRegisterInCondition::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_incDecRegisterInCondition * p = (const cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    result = p->mProperty_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_incDecRegisterInCondition::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_W_5F_isDestination ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_incDecRegisterInCondition::getter_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_incDecRegisterInCondition * p = (const cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    result = p->mProperty_mBranchIfZero ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_incDecRegisterInCondition::getter_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBranchIfZero ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_incDecRegisterInCondition::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_incDecRegisterInCondition::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisterExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_incDecRegisterInCondition::setter_setMIncrement (GALGAS_bool inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    p->mProperty_mIncrement = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_incDecRegisterInCondition::setter_setMIncrement (GALGAS_bool inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIncrement = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_incDecRegisterInCondition::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_incDecRegisterInCondition::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_m_5F_W_5F_isDestination = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_incDecRegisterInCondition::setter_setMBranchIfZero (GALGAS_bool inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    p->mProperty_mBranchIfZero = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_incDecRegisterInCondition::setter_setMBranchIfZero (GALGAS_bool inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBranchIfZero = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @midrange_incDecRegisterInCondition class
//----------------------------------------------------------------------------------------------------------------------

cPtr_midrange_5F_incDecRegisterInCondition::cPtr_midrange_5F_incDecRegisterInCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                        const GALGAS_bool & in_mIncrement,
                                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                                        const GALGAS_bool & in_mBranchIfZero
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (THERE),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mIncrement (in_mIncrement),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination),
mProperty_mBranchIfZero (in_mBranchIfZero) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_incDecRegisterInCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition ;
}

void cPtr_midrange_5F_incDecRegisterInCondition::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@midrange_incDecRegisterInCondition:" ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBranchIfZero.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_incDecRegisterInCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_incDecRegisterInCondition (mProperty_mRegisterExpression, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination, mProperty_mBranchIfZero COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_incDecRegisterInCondition type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition ("midrange_incDecRegisterInCondition",
                                                              & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_incDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_incDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_incDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_incDecRegisterInCondition GALGAS_midrange_5F_incDecRegisterInCondition::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_incDecRegisterInCondition result ;
  const GALGAS_midrange_5F_incDecRegisterInCondition * p = (const GALGAS_midrange_5F_incDecRegisterInCondition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_incDecRegisterInCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_incDecRegisterInCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::objectCompare (const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inOperand) const {
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

GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (void) :
GALGAS_midrange_5F_conditionExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * inSourcePtr) :
GALGAS_midrange_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::constructor_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                                                      const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_bitNumberExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    result = p->mProperty_mBitNumber ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitNumber ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisterExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::setter_setMBitNumber (GALGAS_bitNumberExpression inValue
                                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::setter_setMBitNumber (GALGAS_bitNumberExpression inValue
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBitNumber = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @midrange_bitTest_in_structured_if_condition class
//----------------------------------------------------------------------------------------------------------------------

cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                                                  const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (THERE),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mBitNumber (in_mBitNumber) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;
}

void cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::description (C_String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString << "[@midrange_bitTest_in_structured_if_condition:" ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (mProperty_mRegisterExpression, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_bitTest_in_structured_if_condition type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ("midrange_bitTest_in_structured_if_condition",
                                                                                   & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_bitTest_in_structured_if_condition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression resolveMidrangeAccess'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_registerExpression_resolveMidrangeAccess> gExtensionMethodTable_registerExpression_resolveMidrangeAccess ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_resolveMidrangeAccess (const int32_t inClassIndex,
                                                 extensionMethodSignature_registerExpression_resolveMidrangeAccess inMethod) {
  gExtensionMethodTable_registerExpression_resolveMidrangeAccess.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_resolveMidrangeAccess (const cPtr_registerExpression * inObject,
                                                const GALGAS_uint constin_inTotalBankCount,
                                                const GALGAS_uint constin_inCurrentBank,
                                                const GALGAS_registerTable constin_inRegisterTable,
                                                const GALGAS_constantMap constin_inConstantMap,
                                                GALGAS_midrange_5F_intermediate_5F_registerExpression & out_outIPICregisterDescription,
                                                GALGAS_bitSliceTable & out_outBitSliceTable,
                                                GALGAS_stringset & io_ioUsedRegisters,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  out_outIPICregisterDescription.drop () ;
  out_outBitSliceTable.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_registerExpression_resolveMidrangeAccess f = NULL ;
    if (classIndex < gExtensionMethodTable_registerExpression_resolveMidrangeAccess.count ()) {
      f = gExtensionMethodTable_registerExpression_resolveMidrangeAccess (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_registerExpression_resolveMidrangeAccess.count ()) {
           f = gExtensionMethodTable_registerExpression_resolveMidrangeAccess (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_registerExpression_resolveMidrangeAccess.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inTotalBankCount, constin_inCurrentBank, constin_inRegisterTable, constin_inConstantMap, out_outIPICregisterDescription, out_outBitSliceTable, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_registerExpression_resolveMidrangeAccess (const cPtr_registerExpression * inObject,
                                                                      const GALGAS_uint constinArgument_inTotalBankCount,
                                                                      const GALGAS_uint constinArgument_inCurrentBank,
                                                                      const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                      const GALGAS_constantMap constinArgument_inConstantMap,
                                                                      GALGAS_midrange_5F_intermediate_5F_registerExpression & outArgument_outIPICregisterDescription,
                                                                      GALGAS_bitSliceTable & outArgument_outBitSliceTable,
                                                                      GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerExpression * object = inObject ;
  macroValidSharedObject (object, cPtr_registerExpression) ;
  GALGAS_sint_36__34_ var_offset_631 ;
  const GALGAS_registerExpression temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mOffset (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_631, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 21)) ;
  const GALGAS_registerExpression temp_1 = object ;
  ioArgument_ioUsedRegisters.addAssign_operation (temp_1.getter_mRegisterName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 22)) ;
  const GALGAS_registerExpression temp_2 = object ;
  GALGAS_string var_assemblyString_750 = temp_2.getter_mRegisterName (HERE).getter_string (HERE) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsStrictSup, var_offset_631.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_assemblyString_750.plusAssign_operation(GALGAS_string (" + ").add_operation (var_offset_631.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 26)).getter_hexString (SOURCE_FILE ("midrange_intermediate_classes.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 26)) ;
    }
  }
  GALGAS_uintlist var_registerAddressList_961 ;
  GALGAS_uint var_size_981 ;
  GALGAS_registerProtection var_protection_1030 ;
  const GALGAS_registerExpression temp_4 = object ;
  GALGAS_string joker_1009 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_4.getter_mRegisterName (HERE), var_registerAddressList_961, var_size_981, outArgument_outBitSliceTable, joker_1009, var_protection_1030, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 29)) ;
  const GALGAS_registerExpression temp_5 = object ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_5.getter_mRegisterName (HERE), GALGAS_bool (true), var_protection_1030, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 37)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsSupOrEqual, var_offset_631.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 39)).objectCompare (var_size_981)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_registerExpression temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.getter_mEndOfOffsetExpression (HERE), GALGAS_string ("maximum index value is ").add_operation (var_size_981.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 40)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 40)), fixItArray8  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 40)) ;
    }
  }
  GALGAS_uintlist var_acceptableBanks_1295 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("midrange_intermediate_classes.galgas", 43)) ;
  cEnumerator_uintlist enumerator_1351 (var_registerAddressList_961, kENUMERATION_UP) ;
  while (enumerator_1351.hasCurrentObject ()) {
    var_acceptableBanks_1295.addAssign_operation (enumerator_1351.current_mValue (HERE).right_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 45))  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 45)) ;
    enumerator_1351.gotoNextObject () ;
  }
  GALGAS_uint var_registerAddress_1425 = GALGAS_uint ((uint32_t) 0U) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsEqual, constinArgument_inCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_intermediate_classes.galgas", 49)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_uint var_bank_1548 = GALGAS_uint ((uint32_t) 0U) ;
      GALGAS_bool var_ok_1565 = GALGAS_bool (true) ;
      if (constinArgument_inTotalBankCount.isValid ()) {
        uint32_t variant_1581 = constinArgument_inTotalBankCount.uintValue () ;
        bool loop_1581 = true ;
        while (loop_1581) {
          loop_1581 = GALGAS_bool (kIsStrictInf, var_bank_1548.objectCompare (constinArgument_inTotalBankCount)).operator_and (var_ok_1565 COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 53)).isValid () ;
          if (loop_1581) {
            loop_1581 = GALGAS_bool (kIsStrictInf, var_bank_1548.objectCompare (constinArgument_inTotalBankCount)).operator_and (var_ok_1565 COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 53)).boolValue () ;
          }
          if (loop_1581 && (0 == variant_1581)) {
            loop_1581 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_intermediate_classes.galgas", 53)) ;
          }
          if (loop_1581) {
            variant_1581 -- ;
            var_ok_1565 = GALGAS_bool (false) ;
            cEnumerator_uintlist enumerator_1694 (var_registerAddressList_961, kENUMERATION_UP) ;
            bool bool_10 = var_ok_1565.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 55)).isValidAndTrue () ;
            if (enumerator_1694.hasCurrentObject () && bool_10) {
              while (enumerator_1694.hasCurrentObject () && bool_10) {
                var_ok_1565 = GALGAS_bool (kIsSupOrEqual, enumerator_1694.current_mValue (HERE).objectCompare (var_bank_1548.multiply_operation (GALGAS_uint ((uint32_t) 128U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 56)))).operator_and (GALGAS_bool (kIsStrictInf, enumerator_1694.current_mValue (HERE).objectCompare (var_bank_1548.multiply_operation (GALGAS_uint ((uint32_t) 128U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 56)).add_operation (GALGAS_uint ((uint32_t) 128U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 56)))) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 56)) ;
                var_registerAddress_1425 = enumerator_1694.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 57)) ;
                enumerator_1694.gotoNextObject () ;
                if (enumerator_1694.hasCurrentObject ()) {
                  bool_10 = var_ok_1565.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 55)).isValidAndTrue () ;
                }
              }
            }
            var_bank_1548.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 59)) ;
          }
        }
      }
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = var_ok_1565.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 61)).boolEnum () ;
        if (kBoolTrue == test_11) {
          GALGAS_string var_acceptableBankMessage_1907 = GALGAS_string::makeEmptyString () ;
          cEnumerator_uintlist enumerator_1949 (var_registerAddressList_961, kENUMERATION_UP) ;
          while (enumerator_1949.hasCurrentObject ()) {
            var_acceptableBankMessage_1907.plusAssign_operation(enumerator_1949.current_mValue (HERE).right_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 64)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 64)) ;
            if (enumerator_1949.hasNextObject ()) {
              var_acceptableBankMessage_1907.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 65)) ;
            }
            enumerator_1949.gotoNextObject () ;
          }
          const GALGAS_registerExpression temp_12 = object ;
          const GALGAS_registerExpression temp_13 = object ;
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_12.getter_mRegisterName (HERE).getter_location (SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)), GALGAS_string ("as no bank is currently known, the '").add_operation (temp_13.getter_mRegisterName (HERE).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)).add_operation (GALGAS_string ("' register accessible from bank "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)).add_operation (var_acceptableBankMessage_1907, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)).add_operation (GALGAS_string (", but should be able to be accessed from any bank setting"), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)), fixItArray14  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_bool var_found_2303 = GALGAS_bool (false) ;
    cEnumerator_uintlist enumerator_2346 (var_registerAddressList_961, kENUMERATION_UP) ;
    bool bool_15 = var_found_2303.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 71)).isValidAndTrue () ;
    if (enumerator_2346.hasCurrentObject () && bool_15) {
      while (enumerator_2346.hasCurrentObject () && bool_15) {
        var_found_2303 = GALGAS_bool (kIsSupOrEqual, enumerator_2346.current_mValue (HERE).objectCompare (constinArgument_inCurrentBank.multiply_operation (GALGAS_uint ((uint32_t) 128U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 72)))).operator_and (GALGAS_bool (kIsStrictInf, enumerator_2346.current_mValue (HERE).objectCompare (constinArgument_inCurrentBank.multiply_operation (GALGAS_uint ((uint32_t) 128U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 72)).add_operation (GALGAS_uint ((uint32_t) 128U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 72)))) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 72)) ;
        var_registerAddress_1425 = enumerator_2346.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 73)) ;
        enumerator_2346.gotoNextObject () ;
        if (enumerator_2346.hasCurrentObject ()) {
          bool_15 = var_found_2303.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 71)).isValidAndTrue () ;
        }
      }
    }
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      test_16 = var_found_2303.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 75)).boolEnum () ;
      if (kBoolTrue == test_16) {
        GALGAS_string var_acceptableBankMessage_2558 = GALGAS_string::makeEmptyString () ;
        cEnumerator_uintlist enumerator_2600 (var_registerAddressList_961, kENUMERATION_UP) ;
        while (enumerator_2600.hasCurrentObject ()) {
          var_acceptableBankMessage_2558.plusAssign_operation(enumerator_2600.current_mValue (HERE).right_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 78)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 78)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 78)) ;
          if (enumerator_2600.hasNextObject ()) {
            var_acceptableBankMessage_2558.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 79)) ;
          }
          enumerator_2600.gotoNextObject () ;
        }
        const GALGAS_registerExpression temp_17 = object ;
        const GALGAS_registerExpression temp_18 = object ;
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_17.getter_mRegisterName (HERE).getter_location (SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)), GALGAS_string ("the '").add_operation (temp_18.getter_mRegisterName (HERE).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (GALGAS_string ("' register cannot be accessed from bank "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (constinArgument_inCurrentBank.getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (GALGAS_string (" (valid bank setting: "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (var_acceptableBankMessage_2558, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)), fixItArray19  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)) ;
      }
    }
  }
  outArgument_outIPICregisterDescription = GALGAS_midrange_5F_intermediate_5F_registerExpression::constructor_new (var_assemblyString_750, var_registerAddress_1425.add_operation (var_offset_631.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 87))  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 85)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_registerExpression_resolveMidrangeAccess (void) {
  enterExtensionMethod_resolveMidrangeAccess (kTypeDescriptor_GALGAS_registerExpression.mSlotID,
                                              extensionMethod_registerExpression_resolveMidrangeAccess) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_registerExpression_resolveMidrangeAccess (void) {
  gExtensionMethodTable_registerExpression_resolveMidrangeAccess.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_registerExpression_resolveMidrangeAccess (defineExtensionMethod_registerExpression_resolveMidrangeAccess,
                                                                     freeExtensionMethod_registerExpression_resolveMidrangeAccess) ;

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_banksel_5F_register::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWarningOnUselessBanksel.objectCompare (p->mProperty_mWarningOnUselessBanksel) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::objectCompare (const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                            const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                            const GALGAS_bool & inAttribute_mWarningOnUselessBanksel
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_banksel_5F_register result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_mWarningOnUselessBanksel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_banksel_5F_register (inAttribute_mInstructionLocation, inAttribute_mRegisterExpression, inAttribute_mWarningOnUselessBanksel COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_banksel_5F_register::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::getter_mWarningOnUselessBanksel (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
    result = p->mProperty_mWarningOnUselessBanksel ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_pic_31__38_Instruction_5F_banksel_5F_register::getter_mWarningOnUselessBanksel (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWarningOnUselessBanksel ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_banksel_5F_register::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisterExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::setter_setMWarningOnUselessBanksel (GALGAS_bool inValue
                                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
    p->mProperty_mWarningOnUselessBanksel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_banksel_5F_register::setter_setMWarningOnUselessBanksel (GALGAS_bool inValue
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mWarningOnUselessBanksel = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_banksel_register class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_banksel_5F_register::cPtr_pic_31__38_Instruction_5F_banksel_5F_register (const GALGAS_location & in_mInstructionLocation,
                                                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                        const GALGAS_bool & in_mWarningOnUselessBanksel
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mWarningOnUselessBanksel (in_mWarningOnUselessBanksel) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_banksel_5F_register::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ;
}

void cPtr_pic_31__38_Instruction_5F_banksel_5F_register::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_banksel_register:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWarningOnUselessBanksel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_banksel_5F_register::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_banksel_5F_register (mProperty_mInstructionLocation, mProperty_mRegisterExpression, mProperty_mWarningOnUselessBanksel COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_banksel_register type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ("pic18Instruction_banksel_register",
                                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_banksel_5F_register result ;
  const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register * p = (const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_banksel_register", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_savebank::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_savebank * p = (const cPtr_pic_31__38_Instruction_5F_savebank *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegister.objectCompare (p->mProperty_mRegister) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfSaveBankInstruction.objectCompare (p->mProperty_mEndOfSaveBankInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_savebank::objectCompare (const GALGAS_pic_31__38_Instruction_5F_savebank & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_savebank::GALGAS_pic_31__38_Instruction_5F_savebank (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_savebank::GALGAS_pic_31__38_Instruction_5F_savebank (const cPtr_pic_31__38_Instruction_5F_savebank * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_savebank) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_savebank GALGAS_pic_31__38_Instruction_5F_savebank::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                      const GALGAS_registerExpression & inAttribute_mRegister,
                                                                                                      const GALGAS_pic_31__38_InstructionList & inAttribute_mInstructionList,
                                                                                                      const GALGAS_location & inAttribute_mEndOfSaveBankInstruction
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_savebank result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRegister.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mEndOfSaveBankInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_savebank (inAttribute_mInstructionLocation, inAttribute_mRegister, inAttribute_mInstructionList, inAttribute_mEndOfSaveBankInstruction COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_savebank::getter_mRegister (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_savebank * p = (const cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    result = p->mProperty_mRegister ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_savebank::getter_mRegister (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegister ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_savebank::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_savebank * p = (const cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList cPtr_pic_31__38_Instruction_5F_savebank::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_Instruction_5F_savebank::getter_mEndOfSaveBankInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_savebank * p = (const cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    result = p->mProperty_mEndOfSaveBankInstruction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_pic_31__38_Instruction_5F_savebank::getter_mEndOfSaveBankInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfSaveBankInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_savebank::setter_setMRegister (GALGAS_registerExpression inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_savebank * p = (cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    p->mProperty_mRegister = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_savebank::setter_setMRegister (GALGAS_registerExpression inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegister = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_savebank::setter_setMInstructionList (GALGAS_pic_31__38_InstructionList inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_savebank * p = (cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_savebank::setter_setMInstructionList (GALGAS_pic_31__38_InstructionList inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_savebank::setter_setMEndOfSaveBankInstruction (GALGAS_location inValue
                                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_savebank * p = (cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    p->mProperty_mEndOfSaveBankInstruction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_savebank::setter_setMEndOfSaveBankInstruction (GALGAS_location inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfSaveBankInstruction = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_savebank class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_savebank::cPtr_pic_31__38_Instruction_5F_savebank (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_registerExpression & in_mRegister,
                                                                                  const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                  const GALGAS_location & in_mEndOfSaveBankInstruction
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mRegister (in_mRegister),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mEndOfSaveBankInstruction (in_mEndOfSaveBankInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_savebank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ;
}

void cPtr_pic_31__38_Instruction_5F_savebank::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_savebank:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegister.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfSaveBankInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_savebank::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_savebank (mProperty_mInstructionLocation, mProperty_mRegister, mProperty_mInstructionList, mProperty_mEndOfSaveBankInstruction COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_savebank type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ("pic18Instruction_savebank",
                                                           & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_savebank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_savebank::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_savebank (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_savebank GALGAS_pic_31__38_Instruction_5F_savebank::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_savebank result ;
  const GALGAS_pic_31__38_Instruction_5F_savebank * p = (const GALGAS_pic_31__38_Instruction_5F_savebank *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_savebank *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_savebank", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_FDA::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_FDA * p = (const cPtr_pic_31__38_Instruction_5F_FDA *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction_5F_FDA_5F_base_5F_code.objectCompare (p->mProperty_mInstruction_5F_FDA_5F_base_5F_code) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_FDA::objectCompare (const GALGAS_pic_31__38_Instruction_5F_FDA & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_FDA::GALGAS_pic_31__38_Instruction_5F_FDA (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA::GALGAS_pic_31__38_Instruction_5F_FDA (const cPtr_pic_31__38_Instruction_5F_FDA * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_FDA) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA GALGAS_pic_31__38_Instruction_5F_FDA::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inAttribute_mInstruction_5F_FDA_5F_base_5F_code,
                                                                                            const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                            const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction_5F_FDA_5F_base_5F_code.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_FDA (inAttribute_mInstructionLocation, inAttribute_mInstruction_5F_FDA_5F_base_5F_code, inAttribute_mRegisterExpression, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GALGAS_pic_31__38_Instruction_5F_FDA::getter_mInstruction_5F_FDA_5F_base_5F_code (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FDA * p = (const cPtr_pic_31__38_Instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
    result = p->mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST cPtr_pic_31__38_Instruction_5F_FDA::getter_mInstruction_5F_FDA_5F_base_5F_code (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_FDA::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FDA * p = (const cPtr_pic_31__38_Instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_FDA::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_FDA::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FDA * p = (const cPtr_pic_31__38_Instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
    result = p->mProperty_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_pic_31__38_Instruction_5F_FDA::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_W_5F_isDestination ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_FDA::setter_setMInstruction_5F_FDA_5F_base_5F_code (GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST inValue
                                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_FDA * p = (cPtr_pic_31__38_Instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
    p->mProperty_mInstruction_5F_FDA_5F_base_5F_code = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FDA::setter_setMInstruction_5F_FDA_5F_base_5F_code (GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstruction_5F_FDA_5F_base_5F_code = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_FDA::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_FDA * p = (cPtr_pic_31__38_Instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FDA::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisterExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_FDA::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_FDA * p = (cPtr_pic_31__38_Instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FDA::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_m_5F_W_5F_isDestination = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_FDA class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_FDA::cPtr_pic_31__38_Instruction_5F_FDA (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction_5F_FDA_5F_base_5F_code (in_mInstruction_5F_FDA_5F_base_5F_code),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_FDA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA ;
}

void cPtr_pic_31__38_Instruction_5F_FDA::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_FDA:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstruction_5F_FDA_5F_base_5F_code.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_FDA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_FDA (mProperty_mInstructionLocation, mProperty_mInstruction_5F_FDA_5F_base_5F_code, mProperty_mRegisterExpression, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_FDA type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA ("pic18Instruction_FDA",
                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_FDA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_FDA::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_FDA (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA GALGAS_pic_31__38_Instruction_5F_FDA::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA result ;
  const GALGAS_pic_31__38_Instruction_5F_FDA * p = (const GALGAS_pic_31__38_Instruction_5F_FDA *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_FDA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_FDA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_FA::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_FA * p = (const cPtr_pic_31__38_Instruction_5F_FA *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FA) ;
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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_FA::objectCompare (const GALGAS_pic_31__38_Instruction_5F_FA & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_FA::GALGAS_pic_31__38_Instruction_5F_FA (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FA::GALGAS_pic_31__38_Instruction_5F_FA (const cPtr_pic_31__38_Instruction_5F_FA * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_FA) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FA GALGAS_pic_31__38_Instruction_5F_FA::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_FA_5F_instruction_5F_base_5F_code & inAttribute_mFAinstruction,
                                                                                          const GALGAS_registerExpression & inAttribute_mRegisterExpression
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FA result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mFAinstruction.isValid () && inAttribute_mRegisterExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_FA (inAttribute_mInstructionLocation, inAttribute_mFAinstruction, inAttribute_mRegisterExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_FA_5F_instruction_5F_base_5F_code GALGAS_pic_31__38_Instruction_5F_FA::getter_mFAinstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_FA_5F_instruction_5F_base_5F_code result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FA * p = (const cPtr_pic_31__38_Instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FA) ;
    result = p->mProperty_mFAinstruction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_FA_5F_instruction_5F_base_5F_code cPtr_pic_31__38_Instruction_5F_FA::getter_mFAinstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFAinstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_FA::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FA * p = (const cPtr_pic_31__38_Instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FA) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_FA::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_FA::setter_setMFAinstruction (GALGAS_FA_5F_instruction_5F_base_5F_code inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_FA * p = (cPtr_pic_31__38_Instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FA) ;
    p->mProperty_mFAinstruction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FA::setter_setMFAinstruction (GALGAS_FA_5F_instruction_5F_base_5F_code inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFAinstruction = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_FA::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_FA * p = (cPtr_pic_31__38_Instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FA) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FA::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisterExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_FA class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_FA::cPtr_pic_31__38_Instruction_5F_FA (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_FA_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                      const GALGAS_registerExpression & in_mRegisterExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mFAinstruction (in_mFAinstruction),
mProperty_mRegisterExpression (in_mRegisterExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_FA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA ;
}

void cPtr_pic_31__38_Instruction_5F_FA::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_FA:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFAinstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_FA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_FA (mProperty_mInstructionLocation, mProperty_mFAinstruction, mProperty_mRegisterExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_FA type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA ("pic18Instruction_FA",
                                                     & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_FA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_FA::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_FA (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FA GALGAS_pic_31__38_Instruction_5F_FA::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FA result ;
  const GALGAS_pic_31__38_Instruction_5F_FA * p = (const GALGAS_pic_31__38_Instruction_5F_FA *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_FA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_FA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_MOVFF::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_MOVFF * p = (const cPtr_pic_31__38_Instruction_5F_MOVFF *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceRegisterName.objectCompare (p->mProperty_mSourceRegisterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDestinationRegisterName.objectCompare (p->mProperty_mDestinationRegisterName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_MOVFF::objectCompare (const GALGAS_pic_31__38_Instruction_5F_MOVFF & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_MOVFF::GALGAS_pic_31__38_Instruction_5F_MOVFF (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_MOVFF::GALGAS_pic_31__38_Instruction_5F_MOVFF (const cPtr_pic_31__38_Instruction_5F_MOVFF * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_MOVFF GALGAS_pic_31__38_Instruction_5F_MOVFF::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_registerExpression & inAttribute_mSourceRegisterName,
                                                                                                const GALGAS_registerExpression & inAttribute_mDestinationRegisterName
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_MOVFF result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSourceRegisterName.isValid () && inAttribute_mDestinationRegisterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_MOVFF (inAttribute_mInstructionLocation, inAttribute_mSourceRegisterName, inAttribute_mDestinationRegisterName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_MOVFF::getter_mSourceRegisterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_MOVFF * p = (const cPtr_pic_31__38_Instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
    result = p->mProperty_mSourceRegisterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_MOVFF::getter_mSourceRegisterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceRegisterName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_MOVFF::getter_mDestinationRegisterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_MOVFF * p = (const cPtr_pic_31__38_Instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
    result = p->mProperty_mDestinationRegisterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_MOVFF::getter_mDestinationRegisterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDestinationRegisterName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_MOVFF::setter_setMSourceRegisterName (GALGAS_registerExpression inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_MOVFF * p = (cPtr_pic_31__38_Instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
    p->mProperty_mSourceRegisterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_MOVFF::setter_setMSourceRegisterName (GALGAS_registerExpression inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSourceRegisterName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_MOVFF::setter_setMDestinationRegisterName (GALGAS_registerExpression inValue
                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_MOVFF * p = (cPtr_pic_31__38_Instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
    p->mProperty_mDestinationRegisterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_MOVFF::setter_setMDestinationRegisterName (GALGAS_registerExpression inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDestinationRegisterName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_MOVFF class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_MOVFF::cPtr_pic_31__38_Instruction_5F_MOVFF (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_registerExpression & in_mSourceRegisterName,
                                                                            const GALGAS_registerExpression & in_mDestinationRegisterName
                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mSourceRegisterName (in_mSourceRegisterName),
mProperty_mDestinationRegisterName (in_mDestinationRegisterName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_MOVFF::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF ;
}

void cPtr_pic_31__38_Instruction_5F_MOVFF::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_MOVFF:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceRegisterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDestinationRegisterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_MOVFF::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_MOVFF (mProperty_mInstructionLocation, mProperty_mSourceRegisterName, mProperty_mDestinationRegisterName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_MOVFF type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF ("pic18Instruction_MOVFF",
                                                        & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_MOVFF::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_MOVFF::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_MOVFF (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_MOVFF GALGAS_pic_31__38_Instruction_5F_MOVFF::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_MOVFF result ;
  const GALGAS_pic_31__38_Instruction_5F_MOVFF * p = (const GALGAS_pic_31__38_Instruction_5F_MOVFF *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_MOVFF *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_MOVFF", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_FBA::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_FBA * p = (const cPtr_pic_31__38_Instruction_5F_FBA *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_FBA::objectCompare (const GALGAS_pic_31__38_Instruction_5F_FBA & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_FBA::GALGAS_pic_31__38_Instruction_5F_FBA (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FBA::GALGAS_pic_31__38_Instruction_5F_FBA (const cPtr_pic_31__38_Instruction_5F_FBA * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_FBA) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FBA GALGAS_pic_31__38_Instruction_5F_FBA::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_bit_5F_oriented_5F_op & inAttribute_mBitOrientedOp,
                                                                                            const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                            const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FBA result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBitOrientedOp.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_FBA (inAttribute_mInstructionLocation, inAttribute_mBitOrientedOp, inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bit_5F_oriented_5F_op GALGAS_pic_31__38_Instruction_5F_FBA::getter_mBitOrientedOp (UNUSED_LOCATION_ARGS) const {
  GALGAS_bit_5F_oriented_5F_op result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FBA * p = (const cPtr_pic_31__38_Instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
    result = p->mProperty_mBitOrientedOp ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bit_5F_oriented_5F_op cPtr_pic_31__38_Instruction_5F_FBA::getter_mBitOrientedOp (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitOrientedOp ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_FBA::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FBA * p = (const cPtr_pic_31__38_Instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_FBA::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression GALGAS_pic_31__38_Instruction_5F_FBA::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_bitNumberExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FBA * p = (const cPtr_pic_31__38_Instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
    result = p->mProperty_mBitNumber ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression cPtr_pic_31__38_Instruction_5F_FBA::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitNumber ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_FBA::setter_setMBitOrientedOp (GALGAS_bit_5F_oriented_5F_op inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_FBA * p = (cPtr_pic_31__38_Instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
    p->mProperty_mBitOrientedOp = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FBA::setter_setMBitOrientedOp (GALGAS_bit_5F_oriented_5F_op inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBitOrientedOp = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_FBA::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_FBA * p = (cPtr_pic_31__38_Instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FBA::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisterExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_FBA::setter_setMBitNumber (GALGAS_bitNumberExpression inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_FBA * p = (cPtr_pic_31__38_Instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FBA::setter_setMBitNumber (GALGAS_bitNumberExpression inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBitNumber = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_FBA class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_FBA::cPtr_pic_31__38_Instruction_5F_FBA (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bitNumberExpression & in_mBitNumber
                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mBitOrientedOp (in_mBitOrientedOp),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mBitNumber (in_mBitNumber) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_FBA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA ;
}

void cPtr_pic_31__38_Instruction_5F_FBA::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_FBA:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitOrientedOp.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_FBA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_FBA (mProperty_mInstructionLocation, mProperty_mBitOrientedOp, mProperty_mRegisterExpression, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_FBA type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA ("pic18Instruction_FBA",
                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_FBA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_FBA::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_FBA (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FBA GALGAS_pic_31__38_Instruction_5F_FBA::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FBA result ;
  const GALGAS_pic_31__38_Instruction_5F_FBA * p = (const GALGAS_pic_31__38_Instruction_5F_FBA *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_FBA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_FBA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEmbeddedInstruction.objectCompare (p->mProperty_mEmbeddedInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOpCode.objectCompare (p->mProperty_mOpCode) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (void) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * inSourcePtr) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                        const GALGAS_pic_31__38_PiccoloSimpleInstruction & inAttribute_mEmbeddedInstruction,
                                                                                                                                        const GALGAS_if_5F_semi_5F_colon_5F_op & inAttribute_mOpCode,
                                                                                                                                        const GALGAS_registerExpression & inAttribute_mRegisterExpression
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mEmbeddedInstruction.isValid () && inAttribute_mOpCode.isValid () && inAttribute_mRegisterExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (inAttribute_mInstructionLocation, inAttribute_mEmbeddedInstruction, inAttribute_mOpCode, inAttribute_mRegisterExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_if_5F_semi_5F_colon_5F_op GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::getter_mOpCode (UNUSED_LOCATION_ARGS) const {
  GALGAS_if_5F_semi_5F_colon_5F_op result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
    result = p->mProperty_mOpCode ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_if_5F_semi_5F_colon_5F_op cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::getter_mOpCode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOpCode ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::setter_setMOpCode (GALGAS_if_5F_semi_5F_colon_5F_op inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
    p->mProperty_mOpCode = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::setter_setMOpCode (GALGAS_if_5F_semi_5F_colon_5F_op inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOpCode = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisterExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_IF_FA_SEMI_COLON class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (const GALGAS_location & in_mInstructionLocation,
                                                                                                                    const GALGAS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                                                                                    const GALGAS_if_5F_semi_5F_colon_5F_op & in_mOpCode,
                                                                                                                    const GALGAS_registerExpression & in_mRegisterExpression
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mEmbeddedInstruction COMMA_THERE),
mProperty_mOpCode (in_mOpCode),
mProperty_mRegisterExpression (in_mRegisterExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON ;
}

void cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_IF_FA_SEMI_COLON:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEmbeddedInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOpCode.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (mProperty_mInstructionLocation, mProperty_mEmbeddedInstruction, mProperty_mOpCode, mProperty_mRegisterExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_IF_FA_SEMI_COLON type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON ("pic18Instruction_IF_FA_SEMI_COLON",
                                                                            & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON result ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * p = (const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_IF_FA_SEMI_COLON", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
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
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest (void) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * inSourcePtr) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                const GALGAS_pic_31__38_PiccoloSimpleInstruction & inAttribute_mEmbeddedInstruction,
                                                                                                                const GALGAS_bool & inAttribute_mSkipIfSet,
                                                                                                                const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mEmbeddedInstruction.isValid () && inAttribute_mSkipIfSet.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest (inAttribute_mInstructionLocation, inAttribute_mEmbeddedInstruction, inAttribute_mSkipIfSet, inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::getter_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
    result = p->mProperty_mSkipIfSet ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::getter_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSkipIfSet ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_bitNumberExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
    result = p->mProperty_mBitNumber ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitNumber ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::setter_setMSkipIfSet (GALGAS_bool inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mSkipIfSet = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::setter_setMSkipIfSet (GALGAS_bool inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSkipIfSet = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisterExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::setter_setMBitNumber (GALGAS_bitNumberExpression inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::setter_setMBitNumber (GALGAS_bitNumberExpression inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBitNumber = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_IF_BitTest class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                                                            const GALGAS_bool & in_mSkipIfSet,
                                                                                            const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                            const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mEmbeddedInstruction COMMA_THERE),
mProperty_mSkipIfSet (in_mSkipIfSet),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mBitNumber (in_mBitNumber) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest ;
}

void cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_IF_BitTest:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEmbeddedInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest (mProperty_mInstructionLocation, mProperty_mEmbeddedInstruction, mProperty_mSkipIfSet, mProperty_mRegisterExpression, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_IF_BitTest type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest ("pic18Instruction_IF_BitTest",
                                                                & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest result ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_IF_BitTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEmbeddedInstruction.objectCompare (p->mProperty_mEmbeddedInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIncrement.objectCompare (p->mProperty_mIncrement) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSkipIfZero.objectCompare (p->mProperty_mSkipIfZero) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec & inOperand) const {
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

GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec (void) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * inSourcePtr) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                              const GALGAS_pic_31__38_PiccoloSimpleInstruction & inAttribute_mEmbeddedInstruction,
                                                                                                              const GALGAS_bool & inAttribute_mIncrement,
                                                                                                              const GALGAS_bool & inAttribute_mSkipIfZero,
                                                                                                              const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                              const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mEmbeddedInstruction.isValid () && inAttribute_mIncrement.isValid () && inAttribute_mSkipIfZero.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec (inAttribute_mInstructionLocation, inAttribute_mEmbeddedInstruction, inAttribute_mIncrement, inAttribute_mSkipIfZero, inAttribute_mRegisterExpression, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    result = p->mProperty_mIncrement ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIncrement ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::getter_mSkipIfZero (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    result = p->mProperty_mSkipIfZero ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::getter_mSkipIfZero (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSkipIfZero ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    result = p->mProperty_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_W_5F_isDestination ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::setter_setMIncrement (GALGAS_bool inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    p->mProperty_mIncrement = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::setter_setMIncrement (GALGAS_bool inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIncrement = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::setter_setMSkipIfZero (GALGAS_bool inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    p->mProperty_mSkipIfZero = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::setter_setMSkipIfZero (GALGAS_bool inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSkipIfZero = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisterExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_m_5F_W_5F_isDestination = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_IF_IncDec class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec (const GALGAS_location & in_mInstructionLocation,
                                                                                          const GALGAS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                                                          const GALGAS_bool & in_mIncrement,
                                                                                          const GALGAS_bool & in_mSkipIfZero,
                                                                                          const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                          const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mEmbeddedInstruction COMMA_THERE),
mProperty_mIncrement (in_mIncrement),
mProperty_mSkipIfZero (in_mSkipIfZero),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec ;
}

void cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_IF_IncDec:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEmbeddedInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSkipIfZero.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec (mProperty_mInstructionLocation, mProperty_mEmbeddedInstruction, mProperty_mIncrement, mProperty_mSkipIfZero, mProperty_mRegisterExpression, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_IF_IncDec type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec ("pic18Instruction_IF_IncDec",
                                                               & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec result ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_IF_IncDec", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_RegisterTestCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_RegisterTestCondition * p = (const cPtr_pic_31__38_RegisterTestCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_RegisterTestCondition) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBranchIfZero.objectCompare (p->mProperty_mBranchIfZero) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_RegisterTestCondition::objectCompare (const GALGAS_pic_31__38_RegisterTestCondition & inOperand) const {
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

GALGAS_pic_31__38_RegisterTestCondition::GALGAS_pic_31__38_RegisterTestCondition (void) :
GALGAS_pic_31__38_ConditionExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterTestCondition::GALGAS_pic_31__38_RegisterTestCondition (const cPtr_pic_31__38_RegisterTestCondition * inSourcePtr) :
GALGAS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_RegisterTestCondition) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterTestCondition GALGAS_pic_31__38_RegisterTestCondition::constructor_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                  const GALGAS_bool & inAttribute_mBranchIfZero
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterTestCondition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mBranchIfZero.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_RegisterTestCondition (inAttribute_mRegisterExpression, inAttribute_mBranchIfZero COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_RegisterTestCondition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_RegisterTestCondition * p = (const cPtr_pic_31__38_RegisterTestCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterTestCondition) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression cPtr_pic_31__38_RegisterTestCondition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_RegisterTestCondition::getter_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_RegisterTestCondition * p = (const cPtr_pic_31__38_RegisterTestCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterTestCondition) ;
    result = p->mProperty_mBranchIfZero ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_pic_31__38_RegisterTestCondition::getter_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBranchIfZero ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RegisterTestCondition::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_RegisterTestCondition * p = (cPtr_pic_31__38_RegisterTestCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterTestCondition) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterTestCondition::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisterExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RegisterTestCondition::setter_setMBranchIfZero (GALGAS_bool inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_RegisterTestCondition * p = (cPtr_pic_31__38_RegisterTestCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterTestCondition) ;
    p->mProperty_mBranchIfZero = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterTestCondition::setter_setMBranchIfZero (GALGAS_bool inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBranchIfZero = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18RegisterTestCondition class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_RegisterTestCondition::cPtr_pic_31__38_RegisterTestCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                              const GALGAS_bool & in_mBranchIfZero
                                                                              COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (THERE),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mBranchIfZero (in_mBranchIfZero) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_RegisterTestCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition ;
}

void cPtr_pic_31__38_RegisterTestCondition::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@pic18RegisterTestCondition:" ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBranchIfZero.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_RegisterTestCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_RegisterTestCondition (mProperty_mRegisterExpression, mProperty_mBranchIfZero COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18RegisterTestCondition type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition ("pic18RegisterTestCondition",
                                                         & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_RegisterTestCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_RegisterTestCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_RegisterTestCondition (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterTestCondition GALGAS_pic_31__38_RegisterTestCondition::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterTestCondition result ;
  const GALGAS_pic_31__38_RegisterTestCondition * p = (const GALGAS_pic_31__38_RegisterTestCondition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_RegisterTestCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RegisterTestCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_RegisterComparisonCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_RegisterComparisonCondition * p = (const cPtr_pic_31__38_RegisterComparisonCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonCondition) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mComparison.objectCompare (p->mProperty_mComparison) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_RegisterComparisonCondition::objectCompare (const GALGAS_pic_31__38_RegisterComparisonCondition & inOperand) const {
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

GALGAS_pic_31__38_RegisterComparisonCondition::GALGAS_pic_31__38_RegisterComparisonCondition (void) :
GALGAS_pic_31__38_ConditionExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparisonCondition::GALGAS_pic_31__38_RegisterComparisonCondition (const cPtr_pic_31__38_RegisterComparisonCondition * inSourcePtr) :
GALGAS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_RegisterComparisonCondition) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparisonCondition GALGAS_pic_31__38_RegisterComparisonCondition::constructor_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                              const GALGAS_pic_31__38_RegisterComparison & inAttribute_mComparison
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterComparisonCondition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mComparison.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_RegisterComparisonCondition (inAttribute_mRegisterExpression, inAttribute_mComparison COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_RegisterComparisonCondition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_RegisterComparisonCondition * p = (const cPtr_pic_31__38_RegisterComparisonCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonCondition) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression cPtr_pic_31__38_RegisterComparisonCondition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparison GALGAS_pic_31__38_RegisterComparisonCondition::getter_mComparison (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_RegisterComparison result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_RegisterComparisonCondition * p = (const cPtr_pic_31__38_RegisterComparisonCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonCondition) ;
    result = p->mProperty_mComparison ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparison cPtr_pic_31__38_RegisterComparisonCondition::getter_mComparison (UNUSED_LOCATION_ARGS) const {
  return mProperty_mComparison ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RegisterComparisonCondition::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_RegisterComparisonCondition * p = (cPtr_pic_31__38_RegisterComparisonCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonCondition) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonCondition::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisterExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RegisterComparisonCondition::setter_setMComparison (GALGAS_pic_31__38_RegisterComparison inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_RegisterComparisonCondition * p = (cPtr_pic_31__38_RegisterComparisonCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonCondition) ;
    p->mProperty_mComparison = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonCondition::setter_setMComparison (GALGAS_pic_31__38_RegisterComparison inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mComparison = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18RegisterComparisonCondition class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_RegisterComparisonCondition::cPtr_pic_31__38_RegisterComparisonCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                          const GALGAS_pic_31__38_RegisterComparison & in_mComparison
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (THERE),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mComparison (in_mComparison) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_RegisterComparisonCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition ;
}

void cPtr_pic_31__38_RegisterComparisonCondition::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@pic18RegisterComparisonCondition:" ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mComparison.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_RegisterComparisonCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_RegisterComparisonCondition (mProperty_mRegisterExpression, mProperty_mComparison COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18RegisterComparisonCondition type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition ("pic18RegisterComparisonCondition",
                                                               & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_RegisterComparisonCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_RegisterComparisonCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_RegisterComparisonCondition (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparisonCondition GALGAS_pic_31__38_RegisterComparisonCondition::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterComparisonCondition result ;
  const GALGAS_pic_31__38_RegisterComparisonCondition * p = (const GALGAS_pic_31__38_RegisterComparisonCondition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_RegisterComparisonCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RegisterComparisonCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_IncDecRegisterInCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_IncDecRegisterInCondition * p = (const cPtr_pic_31__38_IncDecRegisterInCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_IncDecRegisterInCondition) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIncrement.objectCompare (p->mProperty_mIncrement) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBranchIfZero.objectCompare (p->mProperty_mBranchIfZero) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_IncDecRegisterInCondition::objectCompare (const GALGAS_pic_31__38_IncDecRegisterInCondition & inOperand) const {
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

GALGAS_pic_31__38_IncDecRegisterInCondition::GALGAS_pic_31__38_IncDecRegisterInCondition (void) :
GALGAS_pic_31__38_ConditionExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_IncDecRegisterInCondition::GALGAS_pic_31__38_IncDecRegisterInCondition (const cPtr_pic_31__38_IncDecRegisterInCondition * inSourcePtr) :
GALGAS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_IncDecRegisterInCondition) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_IncDecRegisterInCondition GALGAS_pic_31__38_IncDecRegisterInCondition::constructor_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                          const GALGAS_bool & inAttribute_mIncrement,
                                                                                                          const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination,
                                                                                                          const GALGAS_bool & inAttribute_mBranchIfZero
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_IncDecRegisterInCondition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mIncrement.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid () && inAttribute_mBranchIfZero.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_IncDecRegisterInCondition (inAttribute_mRegisterExpression, inAttribute_mIncrement, inAttribute_m_5F_W_5F_isDestination, inAttribute_mBranchIfZero COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_IncDecRegisterInCondition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_IncDecRegisterInCondition * p = (const cPtr_pic_31__38_IncDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IncDecRegisterInCondition) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression cPtr_pic_31__38_IncDecRegisterInCondition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_IncDecRegisterInCondition::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_IncDecRegisterInCondition * p = (const cPtr_pic_31__38_IncDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IncDecRegisterInCondition) ;
    result = p->mProperty_mIncrement ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_pic_31__38_IncDecRegisterInCondition::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIncrement ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_IncDecRegisterInCondition::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_IncDecRegisterInCondition * p = (const cPtr_pic_31__38_IncDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IncDecRegisterInCondition) ;
    result = p->mProperty_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_pic_31__38_IncDecRegisterInCondition::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_W_5F_isDestination ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_IncDecRegisterInCondition::getter_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_IncDecRegisterInCondition * p = (const cPtr_pic_31__38_IncDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IncDecRegisterInCondition) ;
    result = p->mProperty_mBranchIfZero ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_pic_31__38_IncDecRegisterInCondition::getter_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBranchIfZero ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_IncDecRegisterInCondition::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_IncDecRegisterInCondition * p = (cPtr_pic_31__38_IncDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IncDecRegisterInCondition) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_IncDecRegisterInCondition::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisterExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_IncDecRegisterInCondition::setter_setMIncrement (GALGAS_bool inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_IncDecRegisterInCondition * p = (cPtr_pic_31__38_IncDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IncDecRegisterInCondition) ;
    p->mProperty_mIncrement = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_IncDecRegisterInCondition::setter_setMIncrement (GALGAS_bool inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIncrement = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_IncDecRegisterInCondition::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_IncDecRegisterInCondition * p = (cPtr_pic_31__38_IncDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IncDecRegisterInCondition) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_IncDecRegisterInCondition::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_m_5F_W_5F_isDestination = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_IncDecRegisterInCondition::setter_setMBranchIfZero (GALGAS_bool inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_IncDecRegisterInCondition * p = (cPtr_pic_31__38_IncDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IncDecRegisterInCondition) ;
    p->mProperty_mBranchIfZero = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_IncDecRegisterInCondition::setter_setMBranchIfZero (GALGAS_bool inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBranchIfZero = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18IncDecRegisterInCondition class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_IncDecRegisterInCondition::cPtr_pic_31__38_IncDecRegisterInCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                      const GALGAS_bool & in_mIncrement,
                                                                                      const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                                      const GALGAS_bool & in_mBranchIfZero
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (THERE),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mIncrement (in_mIncrement),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination),
mProperty_mBranchIfZero (in_mBranchIfZero) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_IncDecRegisterInCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition ;
}

void cPtr_pic_31__38_IncDecRegisterInCondition::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@pic18IncDecRegisterInCondition:" ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBranchIfZero.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_IncDecRegisterInCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_IncDecRegisterInCondition (mProperty_mRegisterExpression, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination, mProperty_mBranchIfZero COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18IncDecRegisterInCondition type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition ("pic18IncDecRegisterInCondition",
                                                             & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_IncDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_IncDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_IncDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_IncDecRegisterInCondition GALGAS_pic_31__38_IncDecRegisterInCondition::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_IncDecRegisterInCondition result ;
  const GALGAS_pic_31__38_IncDecRegisterInCondition * p = (const GALGAS_pic_31__38_IncDecRegisterInCondition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_IncDecRegisterInCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18IncDecRegisterInCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_BitTestInStructuredCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_BitTestInStructuredCondition * p = (const cPtr_pic_31__38_BitTestInStructuredCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_BitTestInStructuredCondition) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_BitTestInStructuredCondition::objectCompare (const GALGAS_pic_31__38_BitTestInStructuredCondition & inOperand) const {
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

GALGAS_pic_31__38_BitTestInStructuredCondition::GALGAS_pic_31__38_BitTestInStructuredCondition (void) :
GALGAS_pic_31__38_ConditionExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BitTestInStructuredCondition::GALGAS_pic_31__38_BitTestInStructuredCondition (const cPtr_pic_31__38_BitTestInStructuredCondition * inSourcePtr) :
GALGAS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_BitTestInStructuredCondition) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BitTestInStructuredCondition GALGAS_pic_31__38_BitTestInStructuredCondition::constructor_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_BitTestInStructuredCondition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_BitTestInStructuredCondition (inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_BitTestInStructuredCondition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_BitTestInStructuredCondition * p = (const cPtr_pic_31__38_BitTestInStructuredCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BitTestInStructuredCondition) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression cPtr_pic_31__38_BitTestInStructuredCondition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression GALGAS_pic_31__38_BitTestInStructuredCondition::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_bitNumberExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_BitTestInStructuredCondition * p = (const cPtr_pic_31__38_BitTestInStructuredCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BitTestInStructuredCondition) ;
    result = p->mProperty_mBitNumber ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression cPtr_pic_31__38_BitTestInStructuredCondition::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitNumber ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BitTestInStructuredCondition::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_BitTestInStructuredCondition * p = (cPtr_pic_31__38_BitTestInStructuredCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BitTestInStructuredCondition) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestInStructuredCondition::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegisterExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BitTestInStructuredCondition::setter_setMBitNumber (GALGAS_bitNumberExpression inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_pic_31__38_BitTestInStructuredCondition * p = (cPtr_pic_31__38_BitTestInStructuredCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BitTestInStructuredCondition) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestInStructuredCondition::setter_setMBitNumber (GALGAS_bitNumberExpression inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBitNumber = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18BitTestInStructuredCondition class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_BitTestInStructuredCondition::cPtr_pic_31__38_BitTestInStructuredCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                            const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (THERE),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mBitNumber (in_mBitNumber) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_BitTestInStructuredCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition ;
}

void cPtr_pic_31__38_BitTestInStructuredCondition::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@pic18BitTestInStructuredCondition:" ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_BitTestInStructuredCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_BitTestInStructuredCondition (mProperty_mRegisterExpression, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18BitTestInStructuredCondition type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition ("pic18BitTestInStructuredCondition",
                                                                & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_BitTestInStructuredCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_BitTestInStructuredCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_BitTestInStructuredCondition (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BitTestInStructuredCondition GALGAS_pic_31__38_BitTestInStructuredCondition::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_BitTestInStructuredCondition result ;
  const GALGAS_pic_31__38_BitTestInStructuredCondition * p = (const GALGAS_pic_31__38_BitTestInStructuredCondition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_BitTestInStructuredCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18BitTestInStructuredCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression analyzeRegisterExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_registerExpression_analyzeRegisterExpression> gExtensionMethodTable_registerExpression_analyzeRegisterExpression ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeRegisterExpression (const int32_t inClassIndex,
                                                     extensionMethodSignature_registerExpression_analyzeRegisterExpression inMethod) {
  gExtensionMethodTable_registerExpression_analyzeRegisterExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeRegisterExpression (const cPtr_registerExpression * inObject,
                                                    const GALGAS_uint constin_inAccessBankSplitOffset,
                                                    const GALGAS_uint constin_inCurrentBank,
                                                    const GALGAS_registerTable constin_inRegisterTable,
                                                    const GALGAS_constantMap constin_inConstantMap,
                                                    const GALGAS_bool constin_inWriteAccess,
                                                    GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & out_outIPICregisterDescription,
                                                    GALGAS_bitSliceTable & out_outBitSliceTable,
                                                    GALGAS_stringset & io_ioUsedRegisters,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  out_outIPICregisterDescription.drop () ;
  out_outBitSliceTable.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_registerExpression_analyzeRegisterExpression f = NULL ;
    if (classIndex < gExtensionMethodTable_registerExpression_analyzeRegisterExpression.count ()) {
      f = gExtensionMethodTable_registerExpression_analyzeRegisterExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_registerExpression_analyzeRegisterExpression.count ()) {
           f = gExtensionMethodTable_registerExpression_analyzeRegisterExpression (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_registerExpression_analyzeRegisterExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAccessBankSplitOffset, constin_inCurrentBank, constin_inRegisterTable, constin_inConstantMap, constin_inWriteAccess, out_outIPICregisterDescription, out_outBitSliceTable, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_registerExpression_analyzeRegisterExpression (const cPtr_registerExpression * inObject,
                                                                          const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                          const GALGAS_uint constinArgument_inCurrentBank,
                                                                          const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                          const GALGAS_constantMap constinArgument_inConstantMap,
                                                                          const GALGAS_bool constinArgument_inWriteAccess,
                                                                          GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & outArgument_outIPICregisterDescription,
                                                                          GALGAS_bitSliceTable & outArgument_outBitSliceTable,
                                                                          GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerExpression * object = inObject ;
  macroValidSharedObject (object, cPtr_registerExpression) ;
  GALGAS_sint_36__34_ var_offset_620 ;
  const GALGAS_registerExpression temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mOffset (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_620, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 19)) ;
  const GALGAS_registerExpression temp_1 = object ;
  ioArgument_ioUsedRegisters.addAssign_operation (temp_1.getter_mRegisterName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 20)) ;
  const GALGAS_registerExpression temp_2 = object ;
  GALGAS_string var_assemblyString_739 = temp_2.getter_mRegisterName (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 22)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsStrictSup, var_offset_620.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_assemblyString_739.plusAssign_operation(GALGAS_string (" + ").add_operation (var_offset_620.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 24)).getter_hexString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 24)) ;
    }
  }
  GALGAS_uint var_registerAddress_884 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_uintlist var_registerAddressList_970 ;
  GALGAS_uint var_size_986 ;
  GALGAS_registerProtection var_protection_1035 ;
  const GALGAS_registerExpression temp_4 = object ;
  GALGAS_string joker_1014 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_4.getter_mRegisterName (HERE), var_registerAddressList_970, var_size_986, outArgument_outBitSliceTable, joker_1014, var_protection_1035, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 28)) ;
  const GALGAS_registerExpression temp_5 = object ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_5.getter_mRegisterName (HERE), constinArgument_inWriteAccess, var_protection_1035, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 36)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsStrictInf, var_offset_620.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_registerExpression temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.getter_mEndOfOffsetExpression (HERE), GALGAS_string ("offset (").add_operation (var_offset_620.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 39)).add_operation (GALGAS_string (") should be >= 0"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 39)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 39)) ;
    }
  }
  if (kBoolFalse == test_6) {
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      test_9 = GALGAS_bool (kIsSupOrEqual, var_offset_620.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 40)).objectCompare (var_size_986)).boolEnum () ;
      if (kBoolTrue == test_9) {
        const GALGAS_registerExpression temp_10 = object ;
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (temp_10.getter_mEndOfOffsetExpression (HERE), GALGAS_string ("this offset is too large: should be lower than ").add_operation (var_size_986.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 41)), fixItArray11  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 41)) ;
      }
    }
  }
  GALGAS_bool var_found_1404 = GALGAS_bool (false) ;
  cEnumerator_uintlist enumerator_1445 (var_registerAddressList_970, kENUMERATION_UP) ;
  bool bool_12 = var_found_1404.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 45)).isValidAndTrue () ;
  if (enumerator_1445.hasCurrentObject () && bool_12) {
    while (enumerator_1445.hasCurrentObject () && bool_12) {
      var_found_1404 = GALGAS_bool (kIsStrictInf, enumerator_1445.current_mValue (HERE).objectCompare (constinArgument_inAccessBankSplitOffset)).operator_or (GALGAS_bool (kIsSupOrEqual, enumerator_1445.current_mValue (HERE).objectCompare (GALGAS_uint ((uint32_t) 3840U).add_operation (constinArgument_inAccessBankSplitOffset, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 46)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 46)) ;
      var_registerAddress_884 = enumerator_1445.current_mValue (HERE) ;
      enumerator_1445.gotoNextObject () ;
      if (enumerator_1445.hasCurrentObject ()) {
        bool_12 = var_found_1404.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 45)).isValidAndTrue () ;
      }
    }
  }
  GALGAS_bool var_needsBSRaccess_1618 = GALGAS_bool (false) ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = var_found_1404.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 50)).boolEnum () ;
    if (kBoolTrue == test_13) {
      var_needsBSRaccess_1618 = GALGAS_bool (true) ;
      var_registerAddressList_970.method_first (var_registerAddress_884, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 52)) ;
      GALGAS_uint var_neededBank_1742 = var_registerAddress_884.right_shift_operation (GALGAS_uint ((uint32_t) 8U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 53)) ;
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = GALGAS_bool (kIsNotEqual, var_neededBank_1742.objectCompare (constinArgument_inCurrentBank)).boolEnum () ;
        if (kBoolTrue == test_14) {
          const GALGAS_registerExpression temp_15 = object ;
          GALGAS_string var_errorMessage_1834 = GALGAS_string ("Accessing the '").add_operation (temp_15.getter_mRegisterName (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 55)).add_operation (GALGAS_string ("' needs the bank selection set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 55)).add_operation (var_neededBank_1742.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 55)) ;
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = GALGAS_bool (kIsEqual, constinArgument_inCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 56)))).boolEnum () ;
            if (kBoolTrue == test_16) {
              var_errorMessage_1834.plusAssign_operation(GALGAS_string (", but current bank selection cannot be known"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 57)) ;
            }
          }
          if (kBoolFalse == test_16) {
            var_errorMessage_1834.plusAssign_operation(GALGAS_string (", but current bank selection is set to ").add_operation (constinArgument_inCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 59)) ;
          }
          const GALGAS_registerExpression temp_17 = object ;
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (temp_17.getter_mRegisterName (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 61)), var_errorMessage_1834, fixItArray18  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 61)) ;
        }
      }
    }
  }
  outArgument_outIPICregisterDescription = GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::constructor_new (var_assemblyString_739, var_registerAddress_884.add_operation (var_offset_620.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 67)), var_needsBSRaccess_1618  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 65)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_registerExpression_analyzeRegisterExpression (void) {
  enterExtensionMethod_analyzeRegisterExpression (kTypeDescriptor_GALGAS_registerExpression.mSlotID,
                                                  extensionMethod_registerExpression_analyzeRegisterExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_registerExpression_analyzeRegisterExpression (void) {
  gExtensionMethodTable_registerExpression_analyzeRegisterExpression.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_registerExpression_analyzeRegisterExpression (defineExtensionMethod_registerExpression_analyzeRegisterExpression,
                                                                         freeExtensionMethod_registerExpression_analyzeRegisterExpression) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression analyzeRegisterExpressionWithoutCheckingBank'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_registerExpression_analyzeRegisterExpressionWithoutCheckingBank> gExtensionMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank (const int32_t inClassIndex,
                                                                        extensionMethodSignature_registerExpression_analyzeRegisterExpressionWithoutCheckingBank inMethod) {
  gExtensionMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank (const cPtr_registerExpression * inObject,
                                                                       const GALGAS_registerTable constin_inRegisterTable,
                                                                       const GALGAS_constantMap constin_inConstantMap,
                                                                       const GALGAS_bool constin_inWriteAccess,
                                                                       GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & out_outIPICregisterDescription,
                                                                       GALGAS_stringset & io_ioUsedRegisters,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  out_outIPICregisterDescription.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_registerExpression_analyzeRegisterExpressionWithoutCheckingBank f = NULL ;
    if (classIndex < gExtensionMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank.count ()) {
      f = gExtensionMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank.count ()) {
           f = gExtensionMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inRegisterTable, constin_inConstantMap, constin_inWriteAccess, out_outIPICregisterDescription, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank (const cPtr_registerExpression * inObject,
                                                                                             const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                             const GALGAS_bool constinArgument_inWriteAccess,
                                                                                             GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & outArgument_outIPICregisterDescription,
                                                                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerExpression * object = inObject ;
  macroValidSharedObject (object, cPtr_registerExpression) ;
  const GALGAS_registerExpression temp_0 = object ;
  ioArgument_ioUsedRegisters.addAssign_operation (temp_0.getter_mRegisterName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 81)) ;
  const GALGAS_registerExpression temp_1 = object ;
  GALGAS_string var_assemblyString_2873 = temp_1.getter_mRegisterName (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 83)) ;
  GALGAS_sint_36__34_ var_offset_2976 ;
  const GALGAS_registerExpression temp_2 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_2.getter_mOffset (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_2976, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 84)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsStrictSup, var_offset_2976.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_assemblyString_2873.plusAssign_operation(GALGAS_string (" + ").add_operation (var_offset_2976.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 86)).getter_hexString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 86)) ;
    }
  }
  GALGAS_uintlist var_registerAddressList_3170 ;
  GALGAS_uint var_size_3186 ;
  GALGAS_registerProtection var_protection_3206 ;
  const GALGAS_registerExpression temp_4 = object ;
  GALGAS_bitSliceTable joker_3188_2 ; // Joker input parameter
  GALGAS_string joker_3188_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_4.getter_mRegisterName (HERE), var_registerAddressList_3170, var_size_3186, joker_3188_2, joker_3188_1, var_protection_3206, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 89)) ;
  const GALGAS_registerExpression temp_5 = object ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_5.getter_mRegisterName (HERE), constinArgument_inWriteAccess, var_protection_3206, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 90)) ;
  GALGAS_uint var_registerAddress_3355 ;
  var_registerAddressList_3170.method_first (var_registerAddress_3355, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 91)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsSupOrEqual, var_offset_2976.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 93)).objectCompare (var_size_3186)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_registerExpression temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.getter_mEndOfOffsetExpression (HERE), GALGAS_string ("this offset is too large: should be lower than ").add_operation (var_size_3186.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 94)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 94)) ;
    }
  }
  outArgument_outIPICregisterDescription = GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::constructor_new (var_assemblyString_2873, var_registerAddress_3355.add_operation (var_offset_2976.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 99))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 97)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank (void) {
  enterExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank (kTypeDescriptor_GALGAS_registerExpression.mSlotID,
                                                                     extensionMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank (void) {
  gExtensionMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank (defineExtensionMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank,
                                                                                            freeExtensionMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression getRegisterAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_registerExpression_getRegisterAddress> gExtensionMethodTable_registerExpression_getRegisterAddress ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_getRegisterAddress (const int32_t inClassIndex,
                                              extensionMethodSignature_registerExpression_getRegisterAddress inMethod) {
  gExtensionMethodTable_registerExpression_getRegisterAddress.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getRegisterAddress (const cPtr_registerExpression * inObject,
                                             const GALGAS_registerTable constin_inRegisterTable,
                                             const GALGAS_constantMap constin_inConstantMap,
                                             const GALGAS_bool constin_inWriteAccess,
                                             GALGAS_stringset & io_ioUsedRegisters,
                                             GALGAS_uint & out_outRegisterAddress,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  out_outRegisterAddress.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_registerExpression_getRegisterAddress f = NULL ;
    if (classIndex < gExtensionMethodTable_registerExpression_getRegisterAddress.count ()) {
      f = gExtensionMethodTable_registerExpression_getRegisterAddress (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_registerExpression_getRegisterAddress.count ()) {
           f = gExtensionMethodTable_registerExpression_getRegisterAddress (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_registerExpression_getRegisterAddress.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inRegisterTable, constin_inConstantMap, constin_inWriteAccess, io_ioUsedRegisters, out_outRegisterAddress, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_registerExpression_getRegisterAddress (const cPtr_registerExpression * inObject,
                                                                   const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                   const GALGAS_constantMap constinArgument_inConstantMap,
                                                                   const GALGAS_bool constinArgument_inWriteAccess,
                                                                   GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                   GALGAS_uint & outArgument_outRegisterAddress,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerExpression * object = inObject ;
  macroValidSharedObject (object, cPtr_registerExpression) ;
  GALGAS_uintlist var_registerAddressList_4052 ;
  GALGAS_uint var_size_4068 ;
  GALGAS_registerProtection var_protection_4088 ;
  const GALGAS_registerExpression temp_0 = object ;
  GALGAS_bitSliceTable joker_4070_2 ; // Joker input parameter
  GALGAS_string joker_4070_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_0.getter_mRegisterName (HERE), var_registerAddressList_4052, var_size_4068, joker_4070_2, joker_4070_1, var_protection_4088, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 112)) ;
  const GALGAS_registerExpression temp_1 = object ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_1.getter_mRegisterName (HERE), constinArgument_inWriteAccess, var_protection_4088, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 113)) ;
  GALGAS_sint_36__34_ var_offset_4259 ;
  const GALGAS_registerExpression temp_2 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_2.getter_mOffset (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_4259, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 115)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsStrictInf, var_offset_4259.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_registerExpression temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mEndOfOffsetExpression (HERE), GALGAS_string ("offset (").add_operation (var_offset_4259.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 117)).add_operation (GALGAS_string (") should be >= 0"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 117)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 117)) ;
      outArgument_outRegisterAddress.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsSupOrEqual, var_offset_4259.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 118)).objectCompare (var_size_4068)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_registerExpression temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.getter_mEndOfOffsetExpression (HERE), GALGAS_string ("this offset is too large: should be lower than ").add_operation (var_size_4068.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 119)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 119)) ;
        outArgument_outRegisterAddress.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_6) {
      var_registerAddressList_4052.method_first (outArgument_outRegisterAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 121)) ;
      outArgument_outRegisterAddress = outArgument_outRegisterAddress.add_operation (var_offset_4259.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 122)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_registerExpression_getRegisterAddress (void) {
  enterExtensionMethod_getRegisterAddress (kTypeDescriptor_GALGAS_registerExpression.mSlotID,
                                           extensionMethod_registerExpression_getRegisterAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_registerExpression_getRegisterAddress (void) {
  gExtensionMethodTable_registerExpression_getRegisterAddress.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_registerExpression_getRegisterAddress (defineExtensionMethod_registerExpression_getRegisterAddress,
                                                                  freeExtensionMethod_registerExpression_getRegisterAddress) ;

//----------------------------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

C_BoolCommandLineOption gOption_piccolo_5F_options_doNotReorderCluster ("piccolo_options",
                                         "doNotReorderCluster",
                                         78,
                                         "no-relative-resolution",
                                         "Do not try to re order blocks for using relatives branches (PIC18 compiler only)") ;

C_BoolCommandLineOption gOption_piccolo_5F_options_doNotWarnRecursive ("piccolo_options",
                                         "doNotWarnRecursive",
                                         82,
                                         "no-warning-on-recursive-routines",
                                         "Do not warn when there are recursive routines (PIC18 compiler only)") ;

C_BoolCommandLineOption gOption_piccolo_5F_options_generateAssembly ("piccolo_options",
                                         "generateAssembly",
                                         83,
                                         "asm",
                                         "Generate also an assembly language text file (with .asm extension)") ;

C_BoolCommandLineOption gOption_piccolo_5F_options_generateGraphvizFiles ("piccolo_options",
                                         "generateGraphvizFiles",
                                         71,
                                         "generate-graphviz-files",
                                         "Generate Graphviz files  containing block invocation, block sorting constraints, ...") ;

C_BoolCommandLineOption gOption_piccolo_5F_options_ouputListingFile ("piccolo_options",
                                         "ouputListingFile",
                                         76,
                                         "list",
                                         "Output a list file") ;

C_BoolCommandLineOption gOption_piccolo_5F_options_output_5F_C_5F_Array ("piccolo_options",
                                         "output_C_Array",
                                         67,
                                         "output-c-files",
                                         "Generate output code in a C header file and C source file") ;

C_BoolCommandLineOption gOption_piccolo_5F_options_performOptimizations ("piccolo_options",
                                         "performOptimizations",
                                         79,
                                         "optimize",
                                         "Perform code optimizations") ;

//----------------------------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//----------------------------------------------------------------------------------------------------------------------

C_StringCommandLineOption gOption_piccolo_5F_options_optimizationFlags ("piccolo_options",
                                         "optimizationFlags",
                                         0,
                                         "optimization-flags",
                                         "Fine tuning of optimizations (PIC18 compiler only)",
                                         "") ;

//----------------------------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

C_BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputBaselineDeviceList ("piccolo_options_not_in_cocoa",
                                         "outputBaselineDeviceList",
                                         0,
                                         "baseline",
                                         "Output the list of supported baseline devices") ;

C_BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList ("piccolo_options_not_in_cocoa",
                                         "outputDeviceList",
                                         68,
                                         "device-list",
                                         "Output the list of supported devices") ;

C_BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputMidrangeDeviceList ("piccolo_options_not_in_cocoa",
                                         "outputMidrangeDeviceList",
                                         0,
                                         "midrange",
                                         "Output the list of supported mid-range devices") ;

C_BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputPic_31__38_DeviceList ("piccolo_options_not_in_cocoa",
                                         "outputPic18DeviceList",
                                         0,
                                         "pic18",
                                         "Output the list of supported pic18 devices") ;

//----------------------------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//----------------------------------------------------------------------------------------------------------------------

C_StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_configDescription ("piccolo_options_not_in_cocoa",
                                         "configDescription",
                                         70,
                                         "configuration",
                                         "Output the configuration register description of the device named by string",
                                         "") ;

C_StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_exportDeviceFiles ("piccolo_options_not_in_cocoa",
                                         "exportDeviceFiles",
                                         69,
                                         "export",
                                         "Export device definition files to the directory named by string",
                                         "") ;

C_StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_memoryDescription ("piccolo_options_not_in_cocoa",
                                         "memoryDescription",
                                         77,
                                         "memory",
                                         "Output the RAM, ROM and EEPROM description of the device named by string",
                                         "") ;

C_StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_registerDescription ("piccolo_options_not_in_cocoa",
                                         "registerDescription",
                                         82,
                                         "registers",
                                         "Output the special register description of the device named by string",
                                         "") ;

//----------------------------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkCurrentEmitAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkCurrentEmitAddress (const GALGAS_uint constinArgument_inCurrentAddress,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_addr_1329 ;
  {
  routine_currentEmitAddress (var_addr_1329, inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 41)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("intermediate_generic.galgas", 42)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsNotEqual, var_addr_1329.objectCompare (constinArgument_inCurrentAddress)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 42)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)), GALGAS_string ("internal error: current emit address is ").add_operation (var_addr_1329.getter_hexString (SOURCE_FILE ("intermediate_generic.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)).add_operation (GALGAS_string ("; it should be "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)).add_operation (constinArgument_inCurrentAddress.getter_hexString (SOURCE_FILE ("intermediate_generic.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 44)), fixItArray1  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatInteger eval'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_immediatInteger_eval (const cPtr_immediatExpression * inObject,
                                                  const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                  const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                  GALGAS_sint_36__34_ & outArgument_outResult,
                                                  GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatInteger * object = (const cPtr_immediatInteger *) inObject ;
  macroValidSharedObject (object, cPtr_immediatInteger) ;
  const GALGAS_immediatInteger temp_0 = object ;
  outArgument_outResult = temp_0.getter_mValue (HERE).getter_uint (SOURCE_FILE ("intermediate_generic.galgas", 97)).getter_sint_36__34_ (SOURCE_FILE ("intermediate_generic.galgas", 97)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_immediatInteger_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatInteger.mSlotID,
                             extensionMethod_immediatInteger_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_immediatInteger_eval (defineExtensionMethod_immediatInteger_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatRegister eval'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_immediatRegister_eval (const cPtr_immediatExpression * inObject,
                                                   const GALGAS_registerTable constinArgument_inRegisterTable,
                                                   const GALGAS_constantMap constinArgument_inConstantMap,
                                                   GALGAS_sint_36__34_ & outArgument_outResult,
                                                   GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatRegister * object = (const cPtr_immediatRegister *) inObject ;
  macroValidSharedObject (object, cPtr_immediatRegister) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_immediatRegister temp_1 = object ;
    test_0 = constinArgument_inRegisterTable.getter_hasKey (temp_1.getter_mRegister (HERE).getter_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 108)).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 108)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 108)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_immediatRegister temp_2 = object ;
      ioArgument_ioUsedRegisters.addAssign_operation (temp_2.getter_mRegister (HERE).getter_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 109)).getter_string (HERE)  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 109)) ;
      GALGAS_uintlist var_registerAddressList_4004 ;
      GALGAS_uint var_size_4014 ;
      GALGAS_registerProtection var_protection_4034 ;
      const GALGAS_immediatRegister temp_3 = object ;
      GALGAS_bitSliceTable joker_4016_2 ; // Joker input parameter
      GALGAS_string joker_4016_1 ; // Joker input parameter
      constinArgument_inRegisterTable.method_searchKey (temp_3.getter_mRegister (HERE).getter_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 110)), var_registerAddressList_4004, var_size_4014, joker_4016_2, joker_4016_1, var_protection_4034, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 110)) ;
      const GALGAS_immediatRegister temp_4 = object ;
      extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_4.getter_mRegister (HERE).getter_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 111)), GALGAS_bool (false), var_protection_4034, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 111)) ;
      GALGAS_uint var_registerAddress_4187 ;
      var_registerAddressList_4004.method_first (var_registerAddress_4187, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 112)) ;
      GALGAS_sint_36__34_ var_offset_4275 ;
      const GALGAS_immediatRegister temp_5 = object ;
      callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_5.getter_mRegister (HERE).getter_mOffset (SOURCE_FILE ("intermediate_generic.galgas", 113)).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_4275, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 113)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsStrictInf, var_offset_4275.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_immediatRegister temp_7 = object ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.getter_mRegister (HERE).getter_mEndOfOffsetExpression (SOURCE_FILE ("intermediate_generic.galgas", 115)), GALGAS_string ("index (").add_operation (var_offset_4275.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 116)).add_operation (GALGAS_string (") should be >= 0"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 116)), fixItArray8  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 115)) ;
        }
      }
      if (kBoolFalse == test_6) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = GALGAS_bool (kIsSupOrEqual, var_offset_4275.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 117)).objectCompare (var_size_4014)).boolEnum () ;
          if (kBoolTrue == test_9) {
            const GALGAS_immediatRegister temp_10 = object ;
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (temp_10.getter_mRegister (HERE).getter_mEndOfOffsetExpression (SOURCE_FILE ("intermediate_generic.galgas", 118)), GALGAS_string ("index (").add_operation (var_offset_4275.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 119)).add_operation (GALGAS_string (") should be lower than size ("), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 119)).add_operation (var_size_4014.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 119)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 119)), fixItArray11  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 118)) ;
          }
        }
      }
      outArgument_outResult = var_registerAddress_4187.getter_sint_36__34_ (SOURCE_FILE ("intermediate_generic.galgas", 121)).add_operation (var_offset_4275, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 121)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      const GALGAS_immediatRegister temp_13 = object ;
      test_12 = constinArgument_inConstantMap.getter_hasKey (temp_13.getter_mRegister (HERE).getter_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 122)).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 122)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 122)).boolEnum () ;
      if (kBoolTrue == test_12) {
        const GALGAS_immediatRegister temp_14 = object ;
        constinArgument_inConstantMap.method_searchKey (temp_14.getter_mRegister (HERE).getter_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 123)), outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 123)) ;
        GALGAS_sint_36__34_ var_offset_4884 ;
        const GALGAS_immediatRegister temp_15 = object ;
        callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_15.getter_mRegister (HERE).getter_mOffset (SOURCE_FILE ("intermediate_generic.galgas", 124)).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_4884, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 124)) ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = GALGAS_bool (kIsNotEqual, var_offset_4884.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
          if (kBoolTrue == test_16) {
            const GALGAS_immediatRegister temp_17 = object ;
            TC_Array <C_FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (temp_17.getter_mRegister (HERE).getter_mEndOfOffsetExpression (SOURCE_FILE ("intermediate_generic.galgas", 126)), GALGAS_string ("index notation (").add_operation (var_offset_4884.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 127)).add_operation (GALGAS_string (") cannot be used with a constant"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 127)), fixItArray18  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 126)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_12) {
      const GALGAS_immediatRegister temp_19 = object ;
      const GALGAS_immediatRegister temp_20 = object ;
      TC_Array <C_FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_19.getter_mRegister (HERE).getter_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 130)).getter_location (SOURCE_FILE ("intermediate_generic.galgas", 130)), GALGAS_string ("'").add_operation (temp_20.getter_mRegister (HERE).getter_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 130)).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 130)).add_operation (GALGAS_string ("' should be declared as ram register or as constant"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 130)), fixItArray21  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 130)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_immediatRegister_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatRegister.mSlotID,
                             extensionMethod_immediatRegister_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_immediatRegister_eval (defineExtensionMethod_immediatRegister_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatAdd eval'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_immediatAdd_eval (const cPtr_immediatExpression * inObject,
                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                              GALGAS_sint_36__34_ & outArgument_outResult,
                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatAdd * object = (const cPtr_immediatAdd *) inObject ;
  macroValidSharedObject (object, cPtr_immediatAdd) ;
  GALGAS_sint_36__34_ var_leftResult_5549 ;
  const GALGAS_immediatAdd temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_5549, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 141)) ;
  GALGAS_sint_36__34_ var_rightResult_5655 ;
  const GALGAS_immediatAdd temp_1 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_5655, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 142)) ;
  outArgument_outResult = var_leftResult_5549.add_operation (var_rightResult_5655, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 143)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_immediatAdd_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatAdd.mSlotID,
                             extensionMethod_immediatAdd_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_immediatAdd_eval (defineExtensionMethod_immediatAdd_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatSub eval'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_immediatSub_eval (const cPtr_immediatExpression * inObject,
                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                              GALGAS_sint_36__34_ & outArgument_outResult,
                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatSub * object = (const cPtr_immediatSub *) inObject ;
  macroValidSharedObject (object, cPtr_immediatSub) ;
  GALGAS_sint_36__34_ var_leftResult_6041 ;
  const GALGAS_immediatSub temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_6041, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 153)) ;
  GALGAS_sint_36__34_ var_rightResult_6147 ;
  const GALGAS_immediatSub temp_1 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_6147, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 154)) ;
  outArgument_outResult = var_leftResult_6041.substract_operation (var_rightResult_6147, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 155)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_immediatSub_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatSub.mSlotID,
                             extensionMethod_immediatSub_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_immediatSub_eval (defineExtensionMethod_immediatSub_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatMul eval'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_immediatMul_eval (const cPtr_immediatExpression * inObject,
                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                              GALGAS_sint_36__34_ & outArgument_outResult,
                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatMul * object = (const cPtr_immediatMul *) inObject ;
  macroValidSharedObject (object, cPtr_immediatMul) ;
  GALGAS_sint_36__34_ var_leftResult_6533 ;
  const GALGAS_immediatMul temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_6533, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 165)) ;
  GALGAS_sint_36__34_ var_rightResult_6639 ;
  const GALGAS_immediatMul temp_1 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_6639, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 166)) ;
  outArgument_outResult = var_leftResult_6533.multiply_operation (var_rightResult_6639, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 167)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_immediatMul_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatMul.mSlotID,
                             extensionMethod_immediatMul_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_immediatMul_eval (defineExtensionMethod_immediatMul_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatDiv eval'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_immediatDiv_eval (const cPtr_immediatExpression * inObject,
                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                              GALGAS_sint_36__34_ & outArgument_outResult,
                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatDiv * object = (const cPtr_immediatDiv *) inObject ;
  macroValidSharedObject (object, cPtr_immediatDiv) ;
  GALGAS_sint_36__34_ var_leftResult_7025 ;
  const GALGAS_immediatDiv temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_7025, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 177)) ;
  GALGAS_sint_36__34_ var_rightResult_7131 ;
  const GALGAS_immediatDiv temp_1 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_7131, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 178)) ;
  outArgument_outResult = var_leftResult_7025.divide_operation (var_rightResult_7131, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 179)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_immediatDiv_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatDiv.mSlotID,
                             extensionMethod_immediatDiv_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_immediatDiv_eval (defineExtensionMethod_immediatDiv_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatMod eval'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_immediatMod_eval (const cPtr_immediatExpression * inObject,
                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                              GALGAS_sint_36__34_ & outArgument_outResult,
                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatMod * object = (const cPtr_immediatMod *) inObject ;
  macroValidSharedObject (object, cPtr_immediatMod) ;
  GALGAS_sint_36__34_ var_leftResult_7517 ;
  const GALGAS_immediatMod temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_7517, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 189)) ;
  GALGAS_sint_36__34_ var_rightResult_7623 ;
  const GALGAS_immediatMod temp_1 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_7623, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 190)) ;
  outArgument_outResult = var_leftResult_7517.modulo_operation (var_rightResult_7623, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 191)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_immediatMod_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatMod.mSlotID,
                             extensionMethod_immediatMod_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_immediatMod_eval (defineExtensionMethod_immediatMod_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatAnd eval'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_immediatAnd_eval (const cPtr_immediatExpression * inObject,
                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                              GALGAS_sint_36__34_ & outArgument_outResult,
                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatAnd * object = (const cPtr_immediatAnd *) inObject ;
  macroValidSharedObject (object, cPtr_immediatAnd) ;
  GALGAS_sint_36__34_ var_leftResult_8011 ;
  const GALGAS_immediatAnd temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_8011, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 201)) ;
  GALGAS_sint_36__34_ var_rightResult_8117 ;
  const GALGAS_immediatAnd temp_1 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_8117, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 202)) ;
  outArgument_outResult = var_leftResult_8011.operator_and (var_rightResult_8117 COMMA_SOURCE_FILE ("intermediate_generic.galgas", 203)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_immediatAnd_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatAnd.mSlotID,
                             extensionMethod_immediatAnd_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_immediatAnd_eval (defineExtensionMethod_immediatAnd_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatOr eval'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_immediatOr_eval (const cPtr_immediatExpression * inObject,
                                             const GALGAS_registerTable constinArgument_inRegisterTable,
                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                             GALGAS_sint_36__34_ & outArgument_outResult,
                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatOr * object = (const cPtr_immediatOr *) inObject ;
  macroValidSharedObject (object, cPtr_immediatOr) ;
  GALGAS_sint_36__34_ var_leftResult_8502 ;
  const GALGAS_immediatOr temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_8502, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 213)) ;
  GALGAS_sint_36__34_ var_rightResult_8608 ;
  const GALGAS_immediatOr temp_1 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_8608, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 214)) ;
  outArgument_outResult = var_leftResult_8502.operator_or (var_rightResult_8608 COMMA_SOURCE_FILE ("intermediate_generic.galgas", 215)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_immediatOr_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatOr.mSlotID,
                             extensionMethod_immediatOr_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_immediatOr_eval (defineExtensionMethod_immediatOr_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatXor eval'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_immediatXor_eval (const cPtr_immediatExpression * inObject,
                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                              GALGAS_sint_36__34_ & outArgument_outResult,
                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatXor * object = (const cPtr_immediatXor *) inObject ;
  macroValidSharedObject (object, cPtr_immediatXor) ;
  GALGAS_sint_36__34_ var_leftResult_8994 ;
  const GALGAS_immediatXor temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_8994, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 225)) ;
  GALGAS_sint_36__34_ var_rightResult_9100 ;
  const GALGAS_immediatXor temp_1 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_9100, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 226)) ;
  outArgument_outResult = var_leftResult_8994.operator_xor (var_rightResult_9100 COMMA_SOURCE_FILE ("intermediate_generic.galgas", 227)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_immediatXor_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatXor.mSlotID,
                             extensionMethod_immediatXor_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_immediatXor_eval (defineExtensionMethod_immediatXor_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatLeftShift eval'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_immediatLeftShift_eval (const cPtr_immediatExpression * inObject,
                                                    const GALGAS_registerTable constinArgument_inRegisterTable,
                                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                                    GALGAS_sint_36__34_ & outArgument_outResult,
                                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatLeftShift * object = (const cPtr_immediatLeftShift *) inObject ;
  macroValidSharedObject (object, cPtr_immediatLeftShift) ;
  GALGAS_sint_36__34_ var_leftResult_9492 ;
  const GALGAS_immediatLeftShift temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_9492, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 237)) ;
  GALGAS_sint_36__34_ var_rightResult_9598 ;
  const GALGAS_immediatLeftShift temp_1 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_9598, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 238)) ;
  outArgument_outResult = var_leftResult_9492.left_shift_operation (var_rightResult_9598.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 239)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_immediatLeftShift_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatLeftShift.mSlotID,
                             extensionMethod_immediatLeftShift_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_immediatLeftShift_eval (defineExtensionMethod_immediatLeftShift_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatRightShift eval'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_immediatRightShift_eval (const cPtr_immediatExpression * inObject,
                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                     GALGAS_sint_36__34_ & outArgument_outResult,
                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatRightShift * object = (const cPtr_immediatRightShift *) inObject ;
  macroValidSharedObject (object, cPtr_immediatRightShift) ;
  GALGAS_sint_36__34_ var_leftResult_9999 ;
  const GALGAS_immediatRightShift temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_9999, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 249)) ;
  GALGAS_sint_36__34_ var_rightResult_10105 ;
  const GALGAS_immediatRightShift temp_1 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_10105, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 250)) ;
  outArgument_outResult = var_leftResult_9999.right_shift_operation (var_rightResult_10105.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 251)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_immediatRightShift_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatRightShift.mSlotID,
                             extensionMethod_immediatRightShift_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_immediatRightShift_eval (defineExtensionMethod_immediatRightShift_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatEqualTest eval'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_immediatEqualTest_eval (const cPtr_immediatExpression * inObject,
                                                    const GALGAS_registerTable constinArgument_inRegisterTable,
                                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                                    GALGAS_sint_36__34_ & outArgument_outResult,
                                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatEqualTest * object = (const cPtr_immediatEqualTest *) inObject ;
  macroValidSharedObject (object, cPtr_immediatEqualTest) ;
  GALGAS_sint_36__34_ var_leftResult_10505 ;
  const GALGAS_immediatEqualTest temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_10505, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 261)) ;
  GALGAS_sint_36__34_ var_rightResult_10611 ;
  const GALGAS_immediatEqualTest temp_1 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_10611, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 262)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_leftResult_10505.objectCompare (var_rightResult_10611)).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_immediatEqualTest_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatEqualTest.mSlotID,
                             extensionMethod_immediatEqualTest_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_immediatEqualTest_eval (defineExtensionMethod_immediatEqualTest_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatNotEqualTest eval'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_immediatNotEqualTest_eval (const cPtr_immediatExpression * inObject,
                                                       const GALGAS_registerTable constinArgument_inRegisterTable,
                                                       const GALGAS_constantMap constinArgument_inConstantMap,
                                                       GALGAS_sint_36__34_ & outArgument_outResult,
                                                       GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatNotEqualTest * object = (const cPtr_immediatNotEqualTest *) inObject ;
  macroValidSharedObject (object, cPtr_immediatNotEqualTest) ;
  GALGAS_sint_36__34_ var_leftResult_11056 ;
  const GALGAS_immediatNotEqualTest temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_11056, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 277)) ;
  GALGAS_sint_36__34_ var_rightResult_11162 ;
  const GALGAS_immediatNotEqualTest temp_1 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_11162, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 278)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_leftResult_11056.objectCompare (var_rightResult_11162)).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_immediatNotEqualTest_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatNotEqualTest.mSlotID,
                             extensionMethod_immediatNotEqualTest_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_immediatNotEqualTest_eval (defineExtensionMethod_immediatNotEqualTest_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatGreaterOrEqualTest eval'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_immediatGreaterOrEqualTest_eval (const cPtr_immediatExpression * inObject,
                                                             const GALGAS_registerTable constinArgument_inRegisterTable,
                                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                                             GALGAS_sint_36__34_ & outArgument_outResult,
                                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatGreaterOrEqualTest * object = (const cPtr_immediatGreaterOrEqualTest *) inObject ;
  macroValidSharedObject (object, cPtr_immediatGreaterOrEqualTest) ;
  GALGAS_sint_36__34_ var_leftResult_11613 ;
  const GALGAS_immediatGreaterOrEqualTest temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_11613, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 293)) ;
  GALGAS_sint_36__34_ var_rightResult_11719 ;
  const GALGAS_immediatGreaterOrEqualTest temp_1 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_11719, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 294)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsSupOrEqual, var_leftResult_11613.objectCompare (var_rightResult_11719)).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_immediatGreaterOrEqualTest_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest.mSlotID,
                             extensionMethod_immediatGreaterOrEqualTest_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_immediatGreaterOrEqualTest_eval (defineExtensionMethod_immediatGreaterOrEqualTest_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatLowerOrEqualTest eval'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_immediatLowerOrEqualTest_eval (const cPtr_immediatExpression * inObject,
                                                           const GALGAS_registerTable constinArgument_inRegisterTable,
                                                           const GALGAS_constantMap constinArgument_inConstantMap,
                                                           GALGAS_sint_36__34_ & outArgument_outResult,
                                                           GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatLowerOrEqualTest * object = (const cPtr_immediatLowerOrEqualTest *) inObject ;
  macroValidSharedObject (object, cPtr_immediatLowerOrEqualTest) ;
  GALGAS_sint_36__34_ var_leftResult_12168 ;
  const GALGAS_immediatLowerOrEqualTest temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_12168, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 309)) ;
  GALGAS_sint_36__34_ var_rightResult_12274 ;
  const GALGAS_immediatLowerOrEqualTest temp_1 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_12274, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 310)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsInfOrEqual, var_leftResult_12168.objectCompare (var_rightResult_12274)).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_immediatLowerOrEqualTest_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatLowerOrEqualTest.mSlotID,
                             extensionMethod_immediatLowerOrEqualTest_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_immediatLowerOrEqualTest_eval (defineExtensionMethod_immediatLowerOrEqualTest_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatGreaterTest eval'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_immediatGreaterTest_eval (const cPtr_immediatExpression * inObject,
                                                      const GALGAS_registerTable constinArgument_inRegisterTable,
                                                      const GALGAS_constantMap constinArgument_inConstantMap,
                                                      GALGAS_sint_36__34_ & outArgument_outResult,
                                                      GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatGreaterTest * object = (const cPtr_immediatGreaterTest *) inObject ;
  macroValidSharedObject (object, cPtr_immediatGreaterTest) ;
  GALGAS_sint_36__34_ var_leftResult_12718 ;
  const GALGAS_immediatGreaterTest temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_12718, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 325)) ;
  GALGAS_sint_36__34_ var_rightResult_12824 ;
  const GALGAS_immediatGreaterTest temp_1 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_12824, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 326)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsStrictSup, var_leftResult_12718.objectCompare (var_rightResult_12824)).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_immediatGreaterTest_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatGreaterTest.mSlotID,
                             extensionMethod_immediatGreaterTest_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_immediatGreaterTest_eval (defineExtensionMethod_immediatGreaterTest_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatLowerTest eval'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_immediatLowerTest_eval (const cPtr_immediatExpression * inObject,
                                                    const GALGAS_registerTable constinArgument_inRegisterTable,
                                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                                    GALGAS_sint_36__34_ & outArgument_outResult,
                                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatLowerTest * object = (const cPtr_immediatLowerTest *) inObject ;
  macroValidSharedObject (object, cPtr_immediatLowerTest) ;
  GALGAS_sint_36__34_ var_leftResult_13265 ;
  const GALGAS_immediatLowerTest temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_13265, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 341)) ;
  GALGAS_sint_36__34_ var_rightResult_13371 ;
  const GALGAS_immediatLowerTest temp_1 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_13371, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 342)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsStrictInf, var_leftResult_13265.objectCompare (var_rightResult_13371)).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_immediatLowerTest_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatLowerTest.mSlotID,
                             extensionMethod_immediatLowerTest_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_immediatLowerTest_eval (defineExtensionMethod_immediatLowerTest_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatNegate eval'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_immediatNegate_eval (const cPtr_immediatExpression * inObject,
                                                 const GALGAS_registerTable constinArgument_inRegisterTable,
                                                 const GALGAS_constantMap constinArgument_inConstantMap,
                                                 GALGAS_sint_36__34_ & outArgument_outResult,
                                                 GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatNegate * object = (const cPtr_immediatNegate *) inObject ;
  macroValidSharedObject (object, cPtr_immediatNegate) ;
  GALGAS_sint_36__34_ var_result_13801 ;
  const GALGAS_immediatNegate temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_13801, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 357)) ;
  outArgument_outResult = var_result_13801.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 358)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_immediatNegate_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatNegate.mSlotID,
                             extensionMethod_immediatNegate_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_immediatNegate_eval (defineExtensionMethod_immediatNegate_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatComplement eval'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_immediatComplement_eval (const cPtr_immediatExpression * inObject,
                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                     GALGAS_sint_36__34_ & outArgument_outResult,
                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatComplement * object = (const cPtr_immediatComplement *) inObject ;
  macroValidSharedObject (object, cPtr_immediatComplement) ;
  GALGAS_sint_36__34_ var_result_14170 ;
  const GALGAS_immediatComplement temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_14170, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 368)) ;
  outArgument_outResult = var_result_14170.operator_tilde (SOURCE_FILE ("intermediate_generic.galgas", 369)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_immediatComplement_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatComplement.mSlotID,
                             extensionMethod_immediatComplement_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_immediatComplement_eval (defineExtensionMethod_immediatComplement_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatSlice eval'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_immediatSlice_eval (const cPtr_immediatExpression * inObject,
                                                const GALGAS_registerTable constinArgument_inRegisterTable,
                                                const GALGAS_constantMap constinArgument_inConstantMap,
                                                GALGAS_sint_36__34_ & outArgument_outResult,
                                                GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatSlice * object = (const cPtr_immediatSlice *) inObject ;
  macroValidSharedObject (object, cPtr_immediatSlice) ;
  GALGAS_bitSliceTable var_bitSliceTable_14488 ;
  outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  const GALGAS_immediatSlice temp_0 = object ;
  ioArgument_ioUsedRegisters.addAssign_operation (temp_0.getter_mRegisterName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 382)) ;
  GALGAS_registerProtection var_protection_14644 ;
  const GALGAS_immediatSlice temp_1 = object ;
  GALGAS_uintlist joker_14605 ; // Joker input parameter
  GALGAS_uint joker_14608 ; // Joker input parameter
  GALGAS_string joker_14627 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_1.getter_mRegisterName (HERE), joker_14605, joker_14608, var_bitSliceTable_14488, joker_14627, var_protection_14644, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 383)) ;
  const GALGAS_immediatSlice temp_2 = object ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_2.getter_mRegisterName (HERE), GALGAS_bool (false), var_protection_14644, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 384)) ;
  GALGAS_stringset var_sliceNameSet_14748 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("intermediate_generic.galgas", 385)) ;
  const GALGAS_immediatSlice temp_3 = object ;
  cEnumerator_immediatSliceExpressionList enumerator_14810 (temp_3.getter_mSliceExpressionList (HERE), kENUMERATION_UP) ;
  while (enumerator_14810.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_sliceNameSet_14748.getter_hasKey (enumerator_14810.current_mSliceName (HERE).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 387)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 387)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_14810.current_mSliceName (HERE).getter_location (SOURCE_FILE ("intermediate_generic.galgas", 388)), GALGAS_string ("the '").add_operation (enumerator_14810.current_mSliceName (HERE).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 388)).add_operation (GALGAS_string ("' bit field has been already defined"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 388)), fixItArray5  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 388)) ;
      }
    }
    if (kBoolFalse == test_4) {
      var_sliceNameSet_14748.addAssign_operation (enumerator_14810.current_mSliceName (HERE).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 390))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 390)) ;
      GALGAS_uint var_sliceIndex_15028 ;
      GALGAS_uint var_sliceSize_15050 ;
      var_bitSliceTable_14488.method_searchKey (enumerator_14810.current_mSliceName (HERE), var_sliceIndex_15028, var_sliceSize_15050, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 393)) ;
      GALGAS_sint_36__34_ var_result_15193 ;
      callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_14810.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_15193, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 394)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsStrictInf, var_result_15193.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).operator_or (GALGAS_bool (kIsStrictSup, var_result_15193.objectCompare (GALGAS_sint_36__34_ ((int64_t) 1LL).left_shift_operation (var_sliceSize_15050, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 395)).substract_operation (GALGAS_sint_36__34_ ((int64_t) 1LL), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 395)))) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 395)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_14810.current_mSliceName (HERE).getter_location (SOURCE_FILE ("intermediate_generic.galgas", 396)), GALGAS_string ("invalid immediat value associated to the '").add_operation (enumerator_14810.current_mSliceName (HERE).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 396)).add_operation (GALGAS_string ("' bit field, evaluated as "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 396)).add_operation (var_result_15193.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 396)).add_operation (GALGAS_string (" (should be between 0 and "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 396)).add_operation (GALGAS_uint ((uint32_t) 1U).left_shift_operation (var_sliceSize_15050, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 397)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 397)).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 397)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 397)), fixItArray7  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 396)) ;
        }
      }
      outArgument_outResult = outArgument_outResult.operator_or (var_result_15193.left_shift_operation (var_sliceIndex_15028, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 399)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 399)) ;
    }
    enumerator_14810.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_immediatSlice_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatSlice.mSlotID,
                             extensionMethod_immediatSlice_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_immediatSlice_eval (defineExtensionMethod_immediatSlice_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bitNumberLiteralValue getBitNumber'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_bitNumberLiteralValue_getBitNumber (const cPtr_bitNumberExpression * inObject,
                                                                const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                const GALGAS_bitSliceTable /* constinArgument_inBitSliceTable */,
                                                                GALGAS_uint & outArgument_outBitNumber,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bitNumberLiteralValue * object = (const cPtr_bitNumberLiteralValue *) inObject ;
  macroValidSharedObject (object, cPtr_bitNumberLiteralValue) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_bitNumberLiteralValue temp_1 = object ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.getter_mBitNumberLiteralValue (HERE).getter_uint (SOURCE_FILE ("intermediate_generic.galgas", 426)).objectCompare (GALGAS_uint ((uint32_t) 7U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_bitNumberLiteralValue temp_2 = object ;
      const GALGAS_bitNumberLiteralValue temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.getter_mBitNumberLiteralValue (HERE).getter_location (SOURCE_FILE ("intermediate_generic.galgas", 427)), GALGAS_string ("The bit number is ").add_operation (temp_3.getter_mBitNumberLiteralValue (HERE).getter_uint (SOURCE_FILE ("intermediate_generic.galgas", 427)).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 427)).add_operation (GALGAS_string (" (should be <= 7)"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 427)), fixItArray4  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 427)) ;
    }
  }
  const GALGAS_bitNumberLiteralValue temp_5 = object ;
  outArgument_outBitNumber = temp_5.getter_mBitNumberLiteralValue (HERE).getter_uint (SOURCE_FILE ("intermediate_generic.galgas", 429)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bitNumberLiteralValue_getBitNumber (void) {
  enterExtensionMethod_getBitNumber (kTypeDescriptor_GALGAS_bitNumberLiteralValue.mSlotID,
                                     extensionMethod_bitNumberLiteralValue_getBitNumber) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bitNumberLiteralValue_getBitNumber (defineExtensionMethod_bitNumberLiteralValue_getBitNumber, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bitNumberLabelValue getBitNumber'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_bitNumberLabelValue_getBitNumber (const cPtr_bitNumberExpression * inObject,
                                                              const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                              const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                              GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                              const GALGAS_bitSliceTable constinArgument_inBitSliceTable,
                                                              GALGAS_uint & outArgument_outBitNumber,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bitNumberLabelValue * object = (const cPtr_bitNumberLabelValue *) inObject ;
  macroValidSharedObject (object, cPtr_bitNumberLabelValue) ;
  GALGAS_uint var_sliceIndex_17132 ;
  GALGAS_uint var_sliceSize_17147 ;
  const GALGAS_bitNumberLabelValue temp_0 = object ;
  constinArgument_inBitSliceTable.method_searchKey (temp_0.getter_mBitNumberLabelValue (HERE), var_sliceIndex_17132, var_sliceSize_17147, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 441)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_bitNumberLabelValue temp_2 = object ;
    test_1 = GALGAS_bool (kIsStrictSup, temp_2.getter_mBitNumberIndexValue (HERE).getter_uint (SOURCE_FILE ("intermediate_generic.galgas", 442)).objectCompare (var_sliceSize_17147)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_bitNumberLabelValue temp_3 = object ;
      const GALGAS_bitNumberLabelValue temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_3.getter_mBitNumberIndexValue (HERE).getter_location (SOURCE_FILE ("intermediate_generic.galgas", 443)), GALGAS_string ("The ").add_operation (temp_4.getter_mBitNumberIndexValue (HERE).getter_uint (SOURCE_FILE ("intermediate_generic.galgas", 443)).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 443)).add_operation (GALGAS_string (" index is too large (should be < "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 443)).add_operation (var_sliceSize_17147.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 444)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 444)), fixItArray5  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 443)) ;
    }
  }
  const GALGAS_bitNumberLabelValue temp_6 = object ;
  outArgument_outBitNumber = var_sliceIndex_17132.add_operation (temp_6.getter_mBitNumberIndexValue (HERE).getter_uint (SOURCE_FILE ("intermediate_generic.galgas", 446)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 446)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bitNumberLabelValue_getBitNumber (void) {
  enterExtensionMethod_getBitNumber (kTypeDescriptor_GALGAS_bitNumberLabelValue.mSlotID,
                                     extensionMethod_bitNumberLabelValue_getBitNumber) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bitNumberLabelValue_getBitNumber (defineExtensionMethod_bitNumberLabelValue_getBitNumber, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bitNumberLiteralExpression getBitNumber'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_bitNumberLiteralExpression_getBitNumber (const cPtr_bitNumberExpression * inObject,
                                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                     const GALGAS_bitSliceTable /* constinArgument_inBitSliceTable */,
                                                                     GALGAS_uint & outArgument_outBitNumber,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bitNumberLiteralExpression * object = (const cPtr_bitNumberLiteralExpression *) inObject ;
  macroValidSharedObject (object, cPtr_bitNumberLiteralExpression) ;
  GALGAS_sint_36__34_ var_result_17834 ;
  const GALGAS_bitNumberLiteralExpression temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mBitNumberLiteralExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_17834, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 458)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictInf, var_result_17834.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_bitNumberLiteralExpression temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mEndOfExpression (HERE), GALGAS_string ("bit index is ").add_operation (var_result_17834.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 460)).add_operation (GALGAS_string (", but should be >= 0"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 460)), fixItArray3  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 460)) ;
      outArgument_outBitNumber.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, var_result_17834.objectCompare (GALGAS_sint_36__34_ ((int64_t) 7LL))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_bitNumberLiteralExpression temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.getter_mEndOfExpression (HERE), GALGAS_string ("bit index is ").add_operation (var_result_17834.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 462)).add_operation (GALGAS_string (", but should be <= 7"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 462)), fixItArray6  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 462)) ;
        outArgument_outBitNumber.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_4) {
      outArgument_outBitNumber = var_result_17834.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 464)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bitNumberLiteralExpression_getBitNumber (void) {
  enterExtensionMethod_getBitNumber (kTypeDescriptor_GALGAS_bitNumberLiteralExpression.mSlotID,
                                     extensionMethod_bitNumberLiteralExpression_getBitNumber) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bitNumberLiteralExpression_getBitNumber (defineExtensionMethod_bitNumberLiteralExpression_getBitNumber, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'print_constant_definition'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_print_5F_constant_5F_definition (const GALGAS_constantMap constinArgument_inConstantMap,
                                              GALGAS_string & ioArgument_ioListFileContents,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inConstantMap.getter_count (SOURCE_FILE ("intermediate_generic.galgas", 487)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 488)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 488)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 488)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("CONSTANTS").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 490)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 490)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Constant").getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 40U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 491)).add_operation (GALGAS_string (" Value\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 491)) ;
      cEnumerator_constantMap enumerator_19410 (constinArgument_inConstantMap, kENUMERATION_UP) ;
      while (enumerator_19410.hasCurrentObject ()) {
        ioArgument_ioListFileContents.plusAssign_operation(enumerator_19410.current_lkey (HERE).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 493)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 40U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 493)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 493)).add_operation (enumerator_19410.current_mValue (HERE).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 493)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 493)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 493)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 493)) ;
        enumerator_19410.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 495)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'actualBuildConfig'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_actualBuildConfig (const GALGAS_configRegisterMap constinArgument_inConfigRegisterMap,
                                const GALGAS_configDefinitionList constinArgument_inConfigDefinitionList,
                                GALGAS_string & ioArgument_ioListFileContents,
                                GALGAS_actualConfigurationMap & outArgument_outActualConfigurationMap,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outActualConfigurationMap.drop () ; // Release 'out' argument
  outArgument_outActualConfigurationMap = GALGAS_actualConfigurationMap::constructor_emptyMap (SOURCE_FILE ("piccolo_config.galgas", 24)) ;
  GALGAS_configFieldMap var_configFieldMap_927 = GALGAS_configFieldMap::constructor_emptyMap (SOURCE_FILE ("piccolo_config.galgas", 25)) ;
  cEnumerator_configRegisterMap enumerator_988 (constinArgument_inConfigRegisterMap, kENUMERATION_UP) ;
  while (enumerator_988.hasCurrentObject ()) {
    GALGAS_uint var_defaultValue_1014 = GALGAS_uint ((uint32_t) 1U).left_shift_operation (enumerator_988.current_mRegisterWidth (HERE).getter_uint (SOURCE_FILE ("piccolo_config.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 27)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 27)) ;
    {
    outArgument_outActualConfigurationMap.setter_insertKey (enumerator_988.current_lkey (HERE), enumerator_988.current_mRegisterAddress (HERE).getter_uint (SOURCE_FILE ("piccolo_config.galgas", 28)), var_defaultValue_1014, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 28)) ;
    }
    GALGAS_lstring var_registerName_1165 = enumerator_988.current_lkey (HERE) ;
    cEnumerator_configRegisterMaskMap enumerator_1217 (enumerator_988.current_mConfigRegisterMaskMap (HERE), kENUMERATION_UP) ;
    while (enumerator_1217.hasCurrentObject ()) {
      {
      var_configFieldMap_927.setter_insertKey (enumerator_1217.current_lkey (HERE), var_registerName_1165, enumerator_1217.current_mMaskValue (HERE), enumerator_1217.current_mDescription (HERE), enumerator_1217.current_mFieldSettingMap (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 31)) ;
      }
      enumerator_1217.gotoNextObject () ;
    }
    enumerator_988.gotoNextObject () ;
  }
  GALGAS_stringset var_actualSettingNameSet_1410 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("piccolo_config.galgas", 35)) ;
  cEnumerator_configDefinitionList enumerator_1469 (constinArgument_inConfigDefinitionList, kENUMERATION_UP) ;
  while (enumerator_1469.hasCurrentObject ()) {
    cEnumerator_configSettingList enumerator_1500 (enumerator_1469.current_mSettingList (HERE), kENUMERATION_UP) ;
    while (enumerator_1500.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = var_actualSettingNameSet_1410.getter_hasKey (enumerator_1500.current_mSettingName (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 38)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 38)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_1500.current_mSettingName (HERE).getter_location (SOURCE_FILE ("piccolo_config.galgas", 39)), GALGAS_string ("the '").add_operation (enumerator_1500.current_mSettingName (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 39)).add_operation (GALGAS_string ("' setting is already defined"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 39)), fixItArray1  COMMA_SOURCE_FILE ("piccolo_config.galgas", 39)) ;
        }
      }
      var_actualSettingNameSet_1410.addAssign_operation (enumerator_1500.current_mSettingName (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 41))  COMMA_SOURCE_FILE ("piccolo_config.galgas", 41)) ;
      GALGAS_lstring var_registerName_1745 ;
      GALGAS_luint var_maskValue_1768 ;
      GALGAS_lstring var_settingDescription_1802 ;
      GALGAS_fieldSettingMap var_fieldSettingMap_1841 ;
      var_configFieldMap_927.method_searchKey (enumerator_1500.current_mSettingName (HERE), var_registerName_1745, var_maskValue_1768, var_settingDescription_1802, var_fieldSettingMap_1841, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 46)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_fieldSettingMap_1841.getter_hasKey (enumerator_1500.current_mSettingValue (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 47)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 47)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_uint var_settingValue_2040 ;
          GALGAS_uint var_settingMask_2066 ;
          var_fieldSettingMap_1841.method_searchKey (enumerator_1500.current_mSettingValue (HERE), var_settingValue_2040, var_settingMask_2066, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 50)) ;
          GALGAS_uint var_registerValue_2172 ;
          GALGAS_uint joker_2233 ; // Joker input parameter
          outArgument_outActualConfigurationMap.method_searchKey (var_registerName_1745, joker_2233, var_registerValue_2172, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 52)) ;
          var_registerValue_2172 = var_registerValue_2172.operator_and (var_settingMask_2066.operator_tilde (SOURCE_FILE ("piccolo_config.galgas", 53)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 53)).operator_or (var_settingValue_2040 COMMA_SOURCE_FILE ("piccolo_config.galgas", 53)) ;
          {
          outArgument_outActualConfigurationMap.setter_setMRegisterValueForKey (var_registerValue_2172, var_registerName_1745.getter_string (SOURCE_FILE ("piccolo_config.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 54)) ;
          }
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsStrictSup, var_fieldSettingMap_1841.getter_count (SOURCE_FILE ("piccolo_config.galgas", 55)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_string var_errorMessage_2491 = GALGAS_string ("the '").add_operation (enumerator_1500.current_mSettingValue (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 56)).add_operation (GALGAS_string ("' value is not defined for configuration setting '"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 56)).add_operation (enumerator_1500.current_mSettingName (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 56)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 57)) ;
            GALGAS_stringlist var_replacementSuggestions_2644 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("piccolo_config.galgas", 58)) ;
            cEnumerator_fieldSettingMap enumerator_2684 (var_fieldSettingMap_1841, kENUMERATION_UP) ;
            while (enumerator_2684.hasCurrentObject ()) {
              var_replacementSuggestions_2644.addAssign_operation (GALGAS_string ("\"").add_operation (enumerator_2684.current_lkey (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 60)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 60))  COMMA_SOURCE_FILE ("piccolo_config.galgas", 60)) ;
              enumerator_2684.gotoNextObject () ;
            }
            TC_Array <C_FixItDescription> fixItArray4 ;
            appendFixItActions (fixItArray4, kFixItReplace, var_replacementSuggestions_2644) ;
            inCompiler->emitSemanticError (enumerator_1500.current_mSettingValue (HERE).getter_location (SOURCE_FILE ("piccolo_config.galgas", 62)), var_errorMessage_2491, fixItArray4  COMMA_SOURCE_FILE ("piccolo_config.galgas", 62)) ;
          }
        }
      }
      enumerator_1500.gotoNextObject () ;
    }
    enumerator_1469.gotoNextObject () ;
  }
  GALGAS_stringset var_notDefinedSetting_2945 = var_configFieldMap_927.getter_keySet (SOURCE_FILE ("piccolo_config.galgas", 67)).substract_operation (var_actualSettingNameSet_1410, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 67)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsStrictSup, var_notDefinedSetting_2945.getter_count (SOURCE_FILE ("piccolo_config.galgas", 68)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_string var_errorMessage_3059 = GALGAS_string ("the following configuration settings are not defined:") ;
      cEnumerator_stringset enumerator_3150 (var_notDefinedSetting_2945, kENUMERATION_UP) ;
      while (enumerator_3150.hasCurrentObject ()) {
        var_errorMessage_3059.plusAssign_operation(GALGAS_string ("\n"
          "-  ").add_operation (enumerator_3150.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 71)) ;
        enumerator_3150.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 73)), var_errorMessage_3059, fixItArray6  COMMA_SOURCE_FILE ("piccolo_config.galgas", 73)) ;
    }
  }
  cEnumerator_actualConfigurationMap enumerator_3331 (outArgument_outActualConfigurationMap, kENUMERATION_UP) ;
  while (enumerator_3331.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Register '").add_operation (enumerator_3331.current_lkey (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)).add_operation (GALGAS_string ("' at "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)).add_operation (enumerator_3331.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("piccolo_config.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)).add_operation (GALGAS_string (" set to "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)).add_operation (enumerator_3331.current_mRegisterValue (HERE).getter_hexString (SOURCE_FILE ("piccolo_config.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)) ;
    GALGAS_configRegisterMaskMap var_configRegisterMaskMap_3519 ;
    GALGAS_luint joker_3562 ; // Joker input parameter
    GALGAS_luint joker_3565 ; // Joker input parameter
    GALGAS_illegalMaskList joker_3591 ; // Joker input parameter
    constinArgument_inConfigRegisterMap.method_searchKey (enumerator_3331.current_lkey (HERE), joker_3562, joker_3565, var_configRegisterMaskMap_3519, joker_3591, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 79)) ;
    cEnumerator_configRegisterMaskMap enumerator_3638 (var_configRegisterMaskMap_3519, kENUMERATION_UP) ;
    while (enumerator_3638.hasCurrentObject ()) {
      GALGAS_lstring var_settingName_3668 = enumerator_3638.current_lkey (HERE) ;
      cEnumerator_fieldSettingMap enumerator_3731 (enumerator_3638.current_mFieldSettingMap (HERE), kENUMERATION_UP) ;
      while (enumerator_3731.hasCurrentObject ()) {
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = GALGAS_bool (kIsEqual, enumerator_3331.current_mRegisterValue (HERE).operator_and (enumerator_3638.current_mMaskValue (HERE).getter_uint (SOURCE_FILE ("piccolo_config.galgas", 83)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 83)).objectCompare (enumerator_3731.current_mValue (HERE))).boolEnum () ;
          if (kBoolTrue == test_7) {
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  setting '").add_operation (var_settingName_3668.getter_string (SOURCE_FILE ("piccolo_config.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 84)).add_operation (GALGAS_string ("' set to "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 84)).add_operation (enumerator_3731.current_mValue (HERE).getter_hexString (SOURCE_FILE ("piccolo_config.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 84)).add_operation (GALGAS_string (" (\""), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 84)).add_operation (enumerator_3731.current_lkey (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 84)).add_operation (GALGAS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 84)) ;
          }
        }
        enumerator_3731.gotoNextObject () ;
      }
      enumerator_3638.gotoNextObject () ;
    }
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 88)) ;
    enumerator_3331.gotoNextObject () ;
  }
  cEnumerator_actualConfigurationMap enumerator_4087 (outArgument_outActualConfigurationMap, kENUMERATION_UP) ;
  while (enumerator_4087.hasCurrentObject ()) {
    GALGAS_illegalMaskList var_illegalMaskList_4127 ;
    GALGAS_luint joker_4170 ; // Joker input parameter
    GALGAS_luint joker_4173 ; // Joker input parameter
    GALGAS_configRegisterMaskMap joker_4176 ; // Joker input parameter
    constinArgument_inConfigRegisterMap.method_searchKey (enumerator_4087.current_lkey (HERE), joker_4170, joker_4173, joker_4176, var_illegalMaskList_4127, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 93)) ;
    cEnumerator_illegalMaskList enumerator_4227 (var_illegalMaskList_4127, kENUMERATION_UP) ;
    while (enumerator_4227.hasCurrentObject ()) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsEqual, enumerator_4087.current_mRegisterValue (HERE).operator_and (enumerator_4227.current_mIllegalMask (HERE).getter_uint (SOURCE_FILE ("piccolo_config.galgas", 95)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 95)).objectCompare (enumerator_4227.current_mIllegalValue (HERE).getter_uint (SOURCE_FILE ("piccolo_config.galgas", 95)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 96)), GALGAS_string ("illegal setting for '").add_operation (enumerator_4087.current_lkey (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 96)).add_operation (GALGAS_string ("' register: "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 96)).add_operation (enumerator_4227.current_mDescription (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 96)), fixItArray9  COMMA_SOURCE_FILE ("piccolo_config.galgas", 96)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*** ILLEGAL SETTING for register '").add_operation (enumerator_4087.current_lkey (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 97)).add_operation (GALGAS_string ("' ***\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 97)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  message: ").add_operation (enumerator_4227.current_mDescription (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 98)).add_operation (GALGAS_string ("\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 98)) ;
        }
      }
      enumerator_4227.gotoNextObject () ;
    }
    enumerator_4087.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildConfig'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildConfig (const GALGAS_configRegisterMap constinArgument_inConfigRegisterMap,
                          const GALGAS_configDefinitionList constinArgument_inConfigDefinitionList,
                          GALGAS_string & ioArgument_ioListFileContents,
                          GALGAS_actualConfigurationMap & outArgument_outActualConfigurationMap,
                          C_Compiler * inCompiler
                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outActualConfigurationMap.drop () ; // Release 'out' argument
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 112)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 112)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("MICROCONTROLLER CONFIGURATION").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 113)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 113)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 114)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 114)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inConfigDefinitionList.getter_length (SOURCE_FILE ("piccolo_config.galgas", 116)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_actualBuildConfig (constinArgument_inConfigRegisterMap, constinArgument_inConfigDefinitionList, ioArgument_ioListFileContents, outArgument_outActualConfigurationMap, inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 117)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outActualConfigurationMap = GALGAS_actualConfigurationMap::constructor_emptyMap (SOURCE_FILE ("piccolo_config.galgas", 124)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("No configuration.\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 125)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_IF_BitTest addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                      GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * object = (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
  const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest temp_0 = object ;
  callExtensionMethod_addUsedRoutines ((const cPtr_baseline_5F_instruction *) temp_0.getter_mInstruction (HERE).ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 12)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_IF_SEMI_COLON addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON * object = (const cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
  const GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON temp_0 = object ;
  callExtensionMethod_addUsedRoutines ((const cPtr_baseline_5F_instruction *) temp_0.getter_mInstruction (HERE).ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 19)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_IF_IncDec addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                     GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * object = (const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
  const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec temp_0 = object ;
  callExtensionMethod_addUsedRoutines ((const cPtr_baseline_5F_instruction *) temp_0.getter_mInstruction (HERE).ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 26)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_JUMP addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_JUMP_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_JUMP * object = (const cPtr_baseline_5F_instruction_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_JUMP) ;
  const GALGAS_baseline_5F_instruction_5F_JUMP temp_0 = object ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.getter_mTargetLabel (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 33)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_JUMP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_JUMP_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_JUMP_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_JUMP_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_GOTO addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_GOTO_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_GOTO * object = (const cPtr_baseline_5F_instruction_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_GOTO) ;
  const GALGAS_baseline_5F_instruction_5F_GOTO temp_0 = object ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.getter_mTargetLabel (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 40)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_GOTO_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_GOTO_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_GOTO_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_GOTO_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_CALL addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_CALL_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_CALL * object = (const cPtr_baseline_5F_instruction_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_CALL) ;
  const GALGAS_baseline_5F_instruction_5F_CALL temp_0 = object ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.getter_mTargetLabel (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 47)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_CALL_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_CALL_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_CALL_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_CALL_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_FOREVER addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_FOREVER_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_FOREVER * object = (const cPtr_baseline_5F_instruction_5F_FOREVER *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_FOREVER) ;
  {
  const GALGAS_baseline_5F_instruction_5F_FOREVER temp_0 = object ;
  routine_addBaselineUsedRoutinesFromInstructionList (temp_0.getter_mInstructionList (HERE), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 54)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_FOREVER_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_FOREVER_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FOREVER_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_FOREVER_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_STATIC_REPEAT addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * object = (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
  {
  const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_0 = object ;
  routine_addBaselineUsedRoutinesFromInstructionList (temp_0.getter_mInstructionList (HERE), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 61)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_MNOP addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_MNOP_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                             GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_MNOP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_MNOP_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_MNOP_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_MNOP_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_TRIS addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_TRIS_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                             GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_TRIS_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_TRIS_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_TRIS_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_TRIS_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_WO_OPERAND addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                                      GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_F addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_F_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                          GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_F_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_F_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_F_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_F_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_FB addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_FB_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_FB_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_FB_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FB_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_FB_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_do_while addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_do_5F_while_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                    GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_do_5F_while * object = (const cPtr_baseline_5F_instruction_5F_do_5F_while *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
  {
  const GALGAS_baseline_5F_instruction_5F_do_5F_while temp_0 = object ;
  routine_addBaselineUsedRoutinesFromInstructionList (temp_0.getter_mRepeatedInstructionList (HERE), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 98)) ;
  }
  const GALGAS_baseline_5F_instruction_5F_do_5F_while temp_1 = object ;
  cEnumerator_baseline_5F_partList enumerator_3266 (temp_1.getter_mWhilePartList (HERE), kENUMERATION_UP) ;
  while (enumerator_3266.hasCurrentObject ()) {
    {
    routine_addBaselineUsedRoutinesFromInstructionList (enumerator_3266.current_mInstructionList (HERE), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 100)) ;
    }
    enumerator_3266.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_do_5F_while_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_do_5F_while_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_do_5F_while_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_do_5F_while_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_structured_if addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_structured_5F_if_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_structured_5F_if * object = (const cPtr_baseline_5F_instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
  {
  const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_0 = object ;
  routine_addBaselineUsedRoutinesFromInstructionList (temp_0.getter_mThenInstructionList (HERE), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 108)) ;
  }
  {
  const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_1 = object ;
  routine_addBaselineUsedRoutinesFromInstructionList (temp_1.getter_mElseInstructionList (HERE), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 109)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_structured_5F_if_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_structured_5F_if_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_structured_5F_if_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_structured_5F_if_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_FD addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_FD_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_FD_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_FD_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FD_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_FD_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_JSR addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_JSR_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_JSR * object = (const cPtr_baseline_5F_instruction_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_JSR) ;
  const GALGAS_baseline_5F_instruction_5F_JSR temp_0 = object ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.getter_mTargetLabel (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 122)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_JSR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_JSR_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_JSR_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_JSR_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_literalOperation addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_literalOperation_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                                         GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_literalOperation_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_literalOperation_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_literalOperation_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_literalOperation_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'addBaselineUsedRoutinesFromInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_addBaselineUsedRoutinesFromInstructionList (const GALGAS_baseline_5F_instructionList constinArgument_inInstructionList,
                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_baseline_5F_instructionList enumerator_4561 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_4561.hasCurrentObject ()) {
    callExtensionMethod_addUsedRoutines ((const cPtr_baseline_5F_instruction *) enumerator_4561.current_mInstruction (HERE).ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 137)) ;
    enumerator_4561.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Function 'baseline_computeUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset function_baseline_5F_computeUsedRoutines (const GALGAS_baseline_5F_routineDefinitionList & constinArgument_inRoutineDefinitionList,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outUsedRoutineSet ; // Returned variable
  result_outUsedRoutineSet = GALGAS_stringset::constructor_setWithString (GALGAS_string ("main")  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 147)) ;
  GALGAS_stringset var_s_4971 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_used_routines.galgas", 149)) ;
  if (constinArgument_inRoutineDefinitionList.getter_length (SOURCE_FILE ("baseline_used_routines.galgas", 150)).isValid ()) {
    uint32_t variant_5001 = constinArgument_inRoutineDefinitionList.getter_length (SOURCE_FILE ("baseline_used_routines.galgas", 150)).uintValue () ;
    bool loop_5001 = true ;
    while (loop_5001) {
      loop_5001 = GALGAS_bool (kIsNotEqual, var_s_4971.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_5001) {
        loop_5001 = GALGAS_bool (kIsNotEqual, var_s_4971.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_5001 && (0 == variant_5001)) {
        loop_5001 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_used_routines.galgas", 150)) ;
      }
      if (loop_5001) {
        variant_5001 -- ;
        var_s_4971 = result_outUsedRoutineSet ;
        cEnumerator_baseline_5F_routineDefinitionList enumerator_5135 (constinArgument_inRoutineDefinitionList, kENUMERATION_UP) ;
        while (enumerator_5135.hasCurrentObject ()) {
          enumGalgasBool test_0 = kBoolTrue ;
          if (kBoolTrue == test_0) {
            test_0 = result_outUsedRoutineSet.getter_hasKey (enumerator_5135.current_mRoutineName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 154)).boolEnum () ;
            if (kBoolTrue == test_0) {
              {
              routine_addBaselineUsedRoutinesFromInstructionList (enumerator_5135.current_mInstructionList (HERE), result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 155)) ;
              }
            }
          }
          enumerator_5135.gotoNextObject () ;
        }
      }
    }
  }
//---
  return result_outUsedRoutineSet ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_baseline_5F_computeUsedRoutines [2] = {
  & kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_baseline_5F_computeUsedRoutines (C_Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GALGAS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_baseline_5F_routineDefinitionList operand0 = GALGAS_baseline_5F_routineDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                     inCompiler
                                                                                                                     COMMA_THERE) ;
  return function_baseline_5F_computeUsedRoutines (operand0,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_baseline_5F_computeUsedRoutines ("baseline_computeUsedRoutines",
                                                                                 functionWithGenericHeader_baseline_5F_computeUsedRoutines,
                                                                                 & kTypeDescriptor_GALGAS_stringset,
                                                                                 1,
                                                                                 functionArgs_baseline_5F_computeUsedRoutines) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_literalOperation shouldTerminateWithMOVLW'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_literalOperation_shouldTerminateWithMOVLW (const cPtr_baseline_5F_instruction * inObject,
                                                                                                  const GALGAS_string constinArgument_inErrorMessage,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_literalOperation * object = (const cPtr_baseline_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_literalOperation) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_instruction_5F_literalOperation temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.getter_mLiteralInstruction (HERE).objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("baseline_compilation.galgas", 25)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_baseline_5F_instruction_5F_literalOperation temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), constinArgument_inErrorMessage, fixItArray3  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 26)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_literalOperation_shouldTerminateWithMOVLW (void) {
  enterExtensionMethod_shouldTerminateWithMOVLW (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation.mSlotID,
                                                 extensionMethod_baseline_5F_instruction_5F_literalOperation_shouldTerminateWithMOVLW) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_literalOperation_shouldTerminateWithMOVLW (defineExtensionMethod_baseline_5F_instruction_5F_literalOperation_shouldTerminateWithMOVLW, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_CALL shouldTerminateWithMOVLW'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_CALL_shouldTerminateWithMOVLW (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                                      const GALGAS_string /* constinArgument_inErrorMessage */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_CALL_shouldTerminateWithMOVLW (void) {
  enterExtensionMethod_shouldTerminateWithMOVLW (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL.mSlotID,
                                                 extensionMethod_baseline_5F_instruction_5F_CALL_shouldTerminateWithMOVLW) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_CALL_shouldTerminateWithMOVLW (defineExtensionMethod_baseline_5F_instruction_5F_CALL_shouldTerminateWithMOVLW, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_structured_if shouldTerminateWithMOVLW'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_structured_5F_if_shouldTerminateWithMOVLW (const cPtr_baseline_5F_instruction * inObject,
                                                                                                  const GALGAS_string /* constinArgument_inErrorMessage */,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_structured_5F_if * object = (const cPtr_baseline_5F_instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_mThenInstructionList (HERE).getter_length (SOURCE_FILE ("baseline_compilation.galgas", 41)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), GALGAS_string ("the 'then' branch of this 'if' instruction does not have any instruction; it must terminate with a MOVLW instruction"), fixItArray3  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 42)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_baseline_5F_instruction var_lastInstruction_1827 ;
    const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_4 = object ;
    temp_4.getter_mThenInstructionList (HERE).method_last (var_lastInstruction_1827, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 44)) ;
    callExtensionMethod_shouldTerminateWithMOVLW ((const cPtr_baseline_5F_instruction *) var_lastInstruction_1827.ptr (), GALGAS_string ("the 'then' branch of this 'if' instruction must terminate with a MOVLW instruction"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 45)) ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_6 = object ;
    test_5 = GALGAS_bool (kIsEqual, temp_6.getter_mElseInstructionList (HERE).getter_length (SOURCE_FILE ("baseline_compilation.galgas", 48)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.getter_mInstructionLocation (HERE), GALGAS_string ("the 'else' branch of this 'if' instruction does not have any instruction; it must terminate with a MOVLW instruction"), fixItArray8  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 49)) ;
    }
  }
  if (kBoolFalse == test_5) {
    GALGAS_baseline_5F_instruction var_lastInstruction_2275 ;
    const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_9 = object ;
    temp_9.getter_mElseInstructionList (HERE).method_last (var_lastInstruction_2275, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 51)) ;
    callExtensionMethod_shouldTerminateWithMOVLW ((const cPtr_baseline_5F_instruction *) var_lastInstruction_2275.ptr (), GALGAS_string ("the 'else' branch of this 'if' instruction must terminate with a MOVLW instruction"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 52)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_structured_5F_if_shouldTerminateWithMOVLW (void) {
  enterExtensionMethod_shouldTerminateWithMOVLW (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if.mSlotID,
                                                 extensionMethod_baseline_5F_instruction_5F_structured_5F_if_shouldTerminateWithMOVLW) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_structured_5F_if_shouldTerminateWithMOVLW (defineExtensionMethod_baseline_5F_instruction_5F_structured_5F_if_shouldTerminateWithMOVLW, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_GOTO shouldNotContinueInSequence'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_GOTO_shouldNotContinueInSequence (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                                         const GALGAS_string /* constinArgument_inErrorMessage */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_GOTO_shouldNotContinueInSequence (void) {
  enterExtensionMethod_shouldNotContinueInSequence (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO.mSlotID,
                                                    extensionMethod_baseline_5F_instruction_5F_GOTO_shouldNotContinueInSequence) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_GOTO_shouldNotContinueInSequence (defineExtensionMethod_baseline_5F_instruction_5F_GOTO_shouldNotContinueInSequence, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_JUMP shouldNotContinueInSequence'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_JUMP_shouldNotContinueInSequence (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                                         const GALGAS_string /* constinArgument_inErrorMessage */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_JUMP_shouldNotContinueInSequence (void) {
  enterExtensionMethod_shouldNotContinueInSequence (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP.mSlotID,
                                                    extensionMethod_baseline_5F_instruction_5F_JUMP_shouldNotContinueInSequence) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_JUMP_shouldNotContinueInSequence (defineExtensionMethod_baseline_5F_instruction_5F_JUMP_shouldNotContinueInSequence, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_FOREVER shouldNotContinueInSequence'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_FOREVER_shouldNotContinueInSequence (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                                            const GALGAS_string /* constinArgument_inErrorMessage */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_FOREVER_shouldNotContinueInSequence (void) {
  enterExtensionMethod_shouldNotContinueInSequence (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER.mSlotID,
                                                    extensionMethod_baseline_5F_instruction_5F_FOREVER_shouldNotContinueInSequence) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FOREVER_shouldNotContinueInSequence (defineExtensionMethod_baseline_5F_instruction_5F_FOREVER_shouldNotContinueInSequence, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'baseline_analysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_baseline_5F_analysis (const GALGAS_baseline_5F_model constinArgument_inPiccoloModel,
                                   const GALGAS_string constinArgument_inSourceFileName,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_sourceFileBaseName_4057 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("baseline_compilation.galgas", 94)).getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 94)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_sourceFileBaseName_4057.objectCompare (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("baseline_compilation.galgas", 95)).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 95)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("baseline_compilation.galgas", 96)).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 96)), GALGAS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("baseline_compilation.galgas", 96)).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 96)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 96)).add_operation (var_sourceFileBaseName_4057, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 97)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 97)), fixItArray1  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 96)) ;
    }
  }
  GALGAS_string var_listFileContents_4409 = GALGAS_string::makeEmptyString () ;
  GALGAS_piccoloDeviceModel var_piccoloDeviceModel_4504 ;
  {
  routine_parseDeviceDefinition (constinArgument_inPiccoloModel.getter_mDeviceName (HERE), var_piccoloDeviceModel_4504, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 102)) ;
  }
  switch (var_piccoloDeviceModel_4504.getter_mProcessorType (SOURCE_FILE ("baseline_compilation.galgas", 103)).enumValue ()) {
  case GALGAS_processorType::kNotBuilt:
    break ;
  case GALGAS_processorType::kEnum_baseline:
    {
    }
    break ;
  case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
  case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mDeviceName (SOURCE_FILE ("baseline_compilation.galgas", 105)).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 105)), GALGAS_string ("a pic18 device is not accepted here : only a baseline device"), fixItArray2  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 105)) ;
    }
    break ;
  case GALGAS_processorType::kEnum_midrange:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mDeviceName (SOURCE_FILE ("baseline_compilation.galgas", 106)).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 106)), GALGAS_string ("a mid-ranfe device is not accepted here : only a baseline device"), fixItArray3  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 106)) ;
    }
    break ;
  }
  GALGAS_actualConfigurationMap var_actualConfigurationMap_5004 ;
  {
  routine_buildConfig (var_piccoloDeviceModel_4504.getter_mConfigRegisterMap (SOURCE_FILE ("baseline_compilation.galgas", 111)), constinArgument_inPiccoloModel.getter_mConfigDefinitionList (SOURCE_FILE ("baseline_compilation.galgas", 112)), var_listFileContents_4409, var_actualConfigurationMap_5004, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 110)) ;
  }
  GALGAS_constantMap var_constantMap_5244 = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("baseline_compilation.galgas", 117)) ;
  GALGAS_registerTable var_registerTable_5280 = var_piccoloDeviceModel_4504.getter_mRegisterTable (SOURCE_FILE ("baseline_compilation.galgas", 118)) ;
  GALGAS_stringset var_usedRegisters_5537 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_compilation.galgas", 123)) ;
  cEnumerator_constantDefinitionList enumerator_5596 (constinArgument_inPiccoloModel.getter_mConstantDefinitionList (SOURCE_FILE ("baseline_compilation.galgas", 124)), kENUMERATION_UP) ;
  while (enumerator_5596.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_result_5669 ;
    callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_5596.current_mExpression (HERE).ptr (), var_registerTable_5280, var_constantMap_5244, var_result_5669, var_usedRegisters_5537, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 125)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_registerTable_5280.getter_hasKey (enumerator_5596.current_mConstantName (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 126)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 126)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_5596.current_mConstantName (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 127)), GALGAS_string ("'").add_operation (enumerator_5596.current_mConstantName (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 127)).add_operation (GALGAS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 127)), fixItArray5  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 127)) ;
      }
    }
    if (kBoolFalse == test_4) {
      {
      var_constantMap_5244.setter_insertKey (enumerator_5596.current_mConstantName (HERE), var_result_5669, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 129)) ;
      }
    }
    enumerator_5596.gotoNextObject () ;
  }
  GALGAS_ramBankTable var_ramBank_6005 = var_piccoloDeviceModel_4504.getter_mRamBankTable (SOURCE_FILE ("baseline_compilation.galgas", 133)) ;
  GALGAS_declaredByteMap var_declaredByteMap_6309 ;
  {
  routine_analyze_5F_ram_5F_sections (GALGAS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.getter_mRamDefinitionList (HERE), var_constantMap_5244, var_usedRegisters_5537, var_ramBank_6005, var_piccoloDeviceModel_4504.getter_mRegisterTable (SOURCE_FILE ("baseline_compilation.galgas", 140)), var_listFileContents_4409, var_registerTable_5280, var_declaredByteMap_6309, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 134)) ;
  }
  GALGAS_baselineRoutineMap var_routineMap_6382 = GALGAS_baselineRoutineMap::constructor_emptyMap (SOURCE_FILE ("baseline_compilation.galgas", 146)) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_6465 (constinArgument_inPiccoloModel.getter_mRoutineDefinitionList (HERE), kENUMERATION_UP) ;
  while (enumerator_6465.hasCurrentObject ()) {
    {
    var_routineMap_6382.setter_insertKey (enumerator_6465.current_mRoutineName (HERE), enumerator_6465.current_mIsNoReturn (HERE), enumerator_6465.current_mPage (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 148)) ;
    }
    enumerator_6465.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      routine_print_5F_constant_5F_definition (var_constantMap_5244, var_listFileContents_4409, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 152)) ;
      }
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_routineMap_6382.getter_hasKey (GALGAS_string ("main") COMMA_SOURCE_FILE ("baseline_compilation.galgas", 158)).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_bool var_isNoReturn_6935 ;
      GALGAS_luint var_page_6952 ;
      var_routineMap_6382.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("main"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 159))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 159)), var_isNoReturn_6935, var_page_6952, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 159)) ;
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = var_isNoReturn_6935.operator_not (SOURCE_FILE ("baseline_compilation.galgas", 160)).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_routineMap_6382.getter_locationForKey (GALGAS_string ("main"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 161)), GALGAS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main page 0\""), fixItArray9  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 161)) ;
        }
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (kIsNotEqual, var_page_6952.getter_uint (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (var_page_6952.getter_location (SOURCE_FILE ("baseline_compilation.galgas", 164)), GALGAS_string ("the \"main\" should be declared in page 0: \"noreturn main page 0\""), fixItArray11  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 164)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_7) {
    TC_Array <C_FixItDescription> fixItArray12 ;
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mEndOfProgram (SOURCE_FILE ("baseline_compilation.galgas", 167)), GALGAS_string ("the program should declare the \"main\" routine"), fixItArray12  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 167)) ;
  }
  GALGAS_bool var_needsToSavePCLATH_7472 = GALGAS_bool (false) ;
  GALGAS_uint var_totalPageCount_7507 = var_piccoloDeviceModel_4504.getter_mRomSize (HERE).getter_uint (SOURCE_FILE ("baseline_compilation.galgas", 171)).add_operation (GALGAS_uint ((uint32_t) 511U), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 171)).divide_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 171)) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_7611 (constinArgument_inPiccoloModel.getter_mRoutineDefinitionList (SOURCE_FILE ("baseline_compilation.galgas", 172)), kENUMERATION_UP) ;
  while (enumerator_7611.hasCurrentObject ()) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = GALGAS_bool (kIsStrictSup, enumerator_7611.current_mPage (HERE).getter_uint (SOURCE_FILE ("baseline_compilation.galgas", 173)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_13) {
        var_needsToSavePCLATH_7472 = GALGAS_bool (true) ;
      }
    }
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = GALGAS_bool (kIsSupOrEqual, enumerator_7611.current_mPage (HERE).getter_uint (SOURCE_FILE ("baseline_compilation.galgas", 176)).objectCompare (var_totalPageCount_7507)).boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_7611.current_mPage (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 177)), GALGAS_string ("invalid value (").add_operation (enumerator_7611.current_mPage (HERE).getter_uint (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 177)).add_operation (GALGAS_string ("); the device has "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 177)).add_operation (var_totalPageCount_7507.getter_string (SOURCE_FILE ("baseline_compilation.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 177)).add_operation (GALGAS_string (" 512 word page(s) on rom"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 177)), fixItArray15  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 177)) ;
      }
    }
    enumerator_7611.gotoNextObject () ;
  }
  GALGAS_baseline_5F_routineDefinitionList var_sortedRoutineDefinitionList_7969 = GALGAS_baseline_5F_routineDefinitionList::constructor_emptyList (SOURCE_FILE ("baseline_compilation.galgas", 181)) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_8065 (constinArgument_inPiccoloModel.getter_mRoutineDefinitionList (HERE), kENUMERATION_UP) ;
  while (enumerator_8065.hasCurrentObject ()) {
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      test_16 = GALGAS_bool (kIsEqual, enumerator_8065.current_mRoutineName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("main"))).boolEnum () ;
      if (kBoolTrue == test_16) {
        {
        var_sortedRoutineDefinitionList_7969.setter_insertAtIndex (enumerator_8065.current_mRoutineName (HERE), enumerator_8065.current_mPage (HERE), enumerator_8065.current_mIsNoReturn (HERE), enumerator_8065.current_mInstructionList (HERE), enumerator_8065.current_mEndOfRoutineLocation (HERE), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 184)) ;
        }
      }
    }
    if (kBoolFalse == test_16) {
      var_sortedRoutineDefinitionList_7969.addAssign_operation (enumerator_8065.current_mRoutineName (HERE), enumerator_8065.current_mPage (HERE), enumerator_8065.current_mIsNoReturn (HERE), enumerator_8065.current_mInstructionList (HERE), enumerator_8065.current_mEndOfRoutineLocation (HERE)  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 193)) ;
    }
    enumerator_8065.gotoNextObject () ;
  }
  GALGAS_baseline_5F_intermediate_5F_instructionList var_intermediateInstructionList_8569 = GALGAS_baseline_5F_intermediate_5F_instructionList::constructor_emptyList (SOURCE_FILE ("baseline_compilation.galgas", 202)) ;
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    test_17 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 203)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_17) {
      GALGAS_uint var_currentPage_8676 = GALGAS_uint ((uint32_t) 0U) ;
      GALGAS_uint var_localLabelIndex_8706 = GALGAS_uint ((uint32_t) 0U) ;
      if (var_totalPageCount_7507.isValid ()) {
        uint32_t variant_8719 = var_totalPageCount_7507.uintValue () ;
        bool loop_8719 = true ;
        while (loop_8719) {
          loop_8719 = GALGAS_bool (kIsStrictInf, var_currentPage_8676.objectCompare (var_totalPageCount_7507)).isValid () ;
          if (loop_8719) {
            loop_8719 = GALGAS_bool (kIsStrictInf, var_currentPage_8676.objectCompare (var_totalPageCount_7507)).boolValue () ;
          }
          if (loop_8719 && (0 == variant_8719)) {
            loop_8719 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_compilation.galgas", 206)) ;
          }
          if (loop_8719) {
            variant_8719 -- ;
            GALGAS_bool var_pseudo_5F_PAGE_5F_generated_8808 = GALGAS_bool (false) ;
            cEnumerator_baseline_5F_routineDefinitionList enumerator_8861 (var_sortedRoutineDefinitionList_7969, kENUMERATION_UP) ;
            while (enumerator_8861.hasCurrentObject ()) {
              enumGalgasBool test_18 = kBoolTrue ;
              if (kBoolTrue == test_18) {
                test_18 = GALGAS_bool (kIsEqual, enumerator_8861.current_mPage (HERE).getter_uint (SOURCE_FILE ("baseline_compilation.galgas", 209)).objectCompare (var_currentPage_8676)).boolEnum () ;
                if (kBoolTrue == test_18) {
                  enumGalgasBool test_19 = kBoolTrue ;
                  if (kBoolTrue == test_19) {
                    test_19 = var_pseudo_5F_PAGE_5F_generated_8808.operator_not (SOURCE_FILE ("baseline_compilation.galgas", 211)).boolEnum () ;
                    if (kBoolTrue == test_19) {
                      var_pseudo_5F_PAGE_5F_generated_8808 = GALGAS_bool (true) ;
                      var_intermediateInstructionList_8569.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::constructor_new (var_currentPage_8676  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 213))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 213)) ;
                    }
                  }
                  GALGAS_routineKind var_routineKind_9168 ;
                  enumGalgasBool test_20 = kBoolTrue ;
                  if (kBoolTrue == test_20) {
                    test_20 = enumerator_8861.current_mIsNoReturn (HERE).boolEnum () ;
                    if (kBoolTrue == test_20) {
                      var_routineKind_9168 = GALGAS_routineKind::constructor_noReturnRoutine (SOURCE_FILE ("baseline_compilation.galgas", 218)) ;
                      enumGalgasBool test_21 = kBoolTrue ;
                      if (kBoolTrue == test_21) {
                        test_21 = GALGAS_bool (kIsEqual, enumerator_8861.current_mInstructionList (HERE).getter_length (SOURCE_FILE ("baseline_compilation.galgas", 220)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                        if (kBoolTrue == test_21) {
                          TC_Array <C_FixItDescription> fixItArray22 ;
                          inCompiler->emitSemanticError (enumerator_8861.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 221)), GALGAS_string ("a noreturn routine should terminate by a GOTO or a FOREVER loop"), fixItArray22  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 221)) ;
                        }
                      }
                      if (kBoolFalse == test_21) {
                        GALGAS_baseline_5F_instruction var_lastInstruction_9553 ;
                        enumerator_8861.current_mInstructionList (HERE).method_last (var_lastInstruction_9553, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 223)) ;
                        callExtensionMethod_shouldNotContinueInSequence ((const cPtr_baseline_5F_instruction *) var_lastInstruction_9553.ptr (), GALGAS_string ("a noreturn routine should terminate by a GOTO or a FOREVER loop"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 224)) ;
                      }
                    }
                  }
                  if (kBoolFalse == test_20) {
                    var_routineKind_9168 = GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("baseline_compilation.galgas", 227)) ;
                    enumGalgasBool test_23 = kBoolTrue ;
                    if (kBoolTrue == test_23) {
                      test_23 = GALGAS_bool (kIsEqual, enumerator_8861.current_mInstructionList (HERE).getter_length (SOURCE_FILE ("baseline_compilation.galgas", 229)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                      if (kBoolTrue == test_23) {
                        TC_Array <C_FixItDescription> fixItArray24 ;
                        inCompiler->emitSemanticError (enumerator_8861.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 230)), GALGAS_string ("a baseline routine must end with a MOVLW instruction"), fixItArray24  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 230)) ;
                      }
                    }
                    if (kBoolFalse == test_23) {
                      GALGAS_baseline_5F_instruction var_lastInstruction_10075 ;
                      enumerator_8861.current_mInstructionList (HERE).method_last (var_lastInstruction_10075, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 232)) ;
                      callExtensionMethod_shouldTerminateWithMOVLW ((const cPtr_baseline_5F_instruction *) var_lastInstruction_10075.ptr (), GALGAS_string ("the last routine instruction should be MOVLW"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 233)) ;
                    }
                  }
                  enumGalgasBool test_25 = kBoolTrue ;
                  if (kBoolTrue == test_25) {
                    test_25 = GALGAS_bool (kIsNotEqual, enumerator_8861.current_mRoutineName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("main"))).boolEnum () ;
                    if (kBoolTrue == test_25) {
                      var_intermediateInstructionList_8569.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::constructor_new (enumerator_8861.current_mRoutineName (HERE), enumerator_8861.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 238))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 238))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 238)) ;
                      var_intermediateInstructionList_8569.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (enumerator_8861.current_mRoutineName (HERE)  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 239))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 239)) ;
                    }
                  }
                  GALGAS_bool var_continuesInSequence_10866 ;
                  {
                  routine_handleBaselineInstructionList (var_currentPage_8676, enumerator_8861.current_mInstructionList (HERE), var_routineMap_6382, var_registerTable_5280, var_constantMap_5244, var_localLabelIndex_8706, var_intermediateInstructionList_8569, var_listFileContents_4409, var_continuesInSequence_10866, var_routineKind_9168, enumerator_8861.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 252)), var_usedRegisters_5537, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 241)) ;
                  }
                  var_intermediateInstructionList_8569.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::constructor_new (enumerator_8861.current_mRoutineName (HERE), var_currentPage_8676  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 255))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 255)) ;
                  enumGalgasBool test_26 = kBoolTrue ;
                  if (kBoolTrue == test_26) {
                    test_26 = enumerator_8861.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_10866 COMMA_SOURCE_FILE ("baseline_compilation.galgas", 256)).boolEnum () ;
                    if (kBoolTrue == test_26) {
                      TC_Array <C_FixItDescription> fixItArray27 ;
                      inCompiler->emitSemanticError (enumerator_8861.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 257)), GALGAS_string ("execution should not reach the end of a \"noreturn\" routine"), fixItArray27  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 257)) ;
                    }
                  }
                }
              }
              enumerator_8861.gotoNextObject () ;
            }
            var_currentPage_8676.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 261)) ;
          }
        }
      }
    }
  }
  GALGAS_stringset var_usedRoutineSet_11424 = function_baseline_5F_computeUsedRoutines (constinArgument_inPiccoloModel.getter_mRoutineDefinitionList (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 265)) ;
  GALGAS_baseline_5F_declaredRoutineMap var_declaredRoutineMap_11529 = GALGAS_baseline_5F_declaredRoutineMap::constructor_emptyMap (SOURCE_FILE ("baseline_compilation.galgas", 268)) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_11621 (constinArgument_inPiccoloModel.getter_mRoutineDefinitionList (HERE), kENUMERATION_UP) ;
  while (enumerator_11621.hasCurrentObject ()) {
    {
    var_declaredRoutineMap_11529.setter_insertKey (enumerator_11621.current_mRoutineName (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 270)) ;
    }
    enumerator_11621.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedRoutineDeclarationUnicity_11773 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_compilation.galgas", 273)) ;
  cEnumerator_lstringlist enumerator_11843 (constinArgument_inPiccoloModel.getter_mUnusedRoutineList (HERE), kENUMERATION_UP) ;
  while (enumerator_11843.hasCurrentObject ()) {
    enumGalgasBool test_28 = kBoolTrue ;
    if (kBoolTrue == test_28) {
      test_28 = var_declaredRoutineMap_11529.getter_hasKey (enumerator_11843.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 275)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 275)).boolEnum () ;
      if (kBoolTrue == test_28) {
        TC_Array <C_FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (enumerator_11843.current_mValue (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 276)), GALGAS_string ("the '").add_operation (enumerator_11843.current_mValue (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 276)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 276)), fixItArray29  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 276)) ;
      }
    }
    if (kBoolFalse == test_28) {
      enumGalgasBool test_30 = kBoolTrue ;
      if (kBoolTrue == test_30) {
        test_30 = var_unusedRoutineDeclarationUnicity_11773.getter_hasKey (enumerator_11843.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 277)).boolEnum () ;
        if (kBoolTrue == test_30) {
          TC_Array <C_FixItDescription> fixItArray31 ;
          inCompiler->emitSemanticWarning (enumerator_11843.current_mValue (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 278)), GALGAS_string ("the '").add_operation (enumerator_11843.current_mValue (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 278)).add_operation (GALGAS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 278)), fixItArray31  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 278)) ;
        }
      }
      if (kBoolFalse == test_30) {
        enumGalgasBool test_32 = kBoolTrue ;
        if (kBoolTrue == test_32) {
          test_32 = var_usedRoutineSet_11424.getter_hasKey (enumerator_11843.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 279)).boolEnum () ;
          if (kBoolTrue == test_32) {
            TC_Array <C_FixItDescription> fixItArray33 ;
            inCompiler->emitSemanticWarning (enumerator_11843.current_mValue (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 280)), GALGAS_string ("the '").add_operation (enumerator_11843.current_mValue (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 280)).add_operation (GALGAS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 280)), fixItArray33  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 280)) ;
          }
        }
      }
    }
    var_unusedRoutineDeclarationUnicity_11773.addAssign_operation (enumerator_11843.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 282)) ;
    enumerator_11843.gotoNextObject () ;
  }
  cEnumerator_baseline_5F_declaredRoutineMap enumerator_12371 (var_declaredRoutineMap_11529, kENUMERATION_UP) ;
  while (enumerator_12371.hasCurrentObject ()) {
    enumGalgasBool test_34 = kBoolTrue ;
    if (kBoolTrue == test_34) {
      test_34 = var_usedRoutineSet_11424.getter_hasKey (enumerator_12371.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 285)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 285)).operator_and (var_unusedRoutineDeclarationUnicity_11773.getter_hasKey (enumerator_12371.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 285)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 285)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 285)).boolEnum () ;
      if (kBoolTrue == test_34) {
        TC_Array <C_FixItDescription> fixItArray35 ;
        inCompiler->emitSemanticWarning (enumerator_12371.current_lkey (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 286)), GALGAS_string ("the '").add_operation (enumerator_12371.current_lkey (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 286)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 286)), fixItArray35  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 286)) ;
      }
    }
    enumerator_12371.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedDeclarationUnicity_12687 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_compilation.galgas", 290)) ;
  cEnumerator_lstringlist enumerator_12758 (constinArgument_inPiccoloModel.getter_mUnusedRegisterList (HERE), kENUMERATION_UP) ;
  while (enumerator_12758.hasCurrentObject ()) {
    enumGalgasBool test_36 = kBoolTrue ;
    if (kBoolTrue == test_36) {
      test_36 = var_registerTable_5280.getter_hasKey (enumerator_12758.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 292)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 292)).boolEnum () ;
      if (kBoolTrue == test_36) {
        TC_Array <C_FixItDescription> fixItArray37 ;
        inCompiler->emitSemanticError (enumerator_12758.current_mValue (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 293)), GALGAS_string ("the '").add_operation (enumerator_12758.current_mValue (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 293)).add_operation (GALGAS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 293)), fixItArray37  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 293)) ;
      }
    }
    if (kBoolFalse == test_36) {
      enumGalgasBool test_38 = kBoolTrue ;
      if (kBoolTrue == test_38) {
        test_38 = var_unusedDeclarationUnicity_12687.getter_hasKey (enumerator_12758.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 294)).boolEnum () ;
        if (kBoolTrue == test_38) {
          TC_Array <C_FixItDescription> fixItArray39 ;
          inCompiler->emitSemanticWarning (enumerator_12758.current_mValue (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 295)), GALGAS_string ("the '").add_operation (enumerator_12758.current_mValue (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 295)).add_operation (GALGAS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 295)), fixItArray39  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 295)) ;
        }
      }
      if (kBoolFalse == test_38) {
        enumGalgasBool test_40 = kBoolTrue ;
        if (kBoolTrue == test_40) {
          test_40 = var_usedRegisters_5537.getter_hasKey (enumerator_12758.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 296)).boolEnum () ;
          if (kBoolTrue == test_40) {
            TC_Array <C_FixItDescription> fixItArray41 ;
            inCompiler->emitSemanticWarning (enumerator_12758.current_mValue (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 297)), GALGAS_string ("the '").add_operation (enumerator_12758.current_mValue (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 297)).add_operation (GALGAS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 297)), fixItArray41  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 297)) ;
          }
        }
      }
    }
    var_unusedDeclarationUnicity_12687.addAssign_operation (enumerator_12758.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 299)) ;
    enumerator_12758.gotoNextObject () ;
  }
  cEnumerator_declaredByteMap enumerator_13254 (var_declaredByteMap_6309, kENUMERATION_UP) ;
  while (enumerator_13254.hasCurrentObject ()) {
    enumGalgasBool test_42 = kBoolTrue ;
    if (kBoolTrue == test_42) {
      test_42 = var_usedRegisters_5537.getter_hasKey (enumerator_13254.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 302)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 302)).operator_and (var_unusedDeclarationUnicity_12687.getter_hasKey (enumerator_13254.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 302)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 302)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 302)).boolEnum () ;
      if (kBoolTrue == test_42) {
        TC_Array <C_FixItDescription> fixItArray43 ;
        inCompiler->emitSemanticWarning (enumerator_13254.current_lkey (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 303)), GALGAS_string ("the '").add_operation (enumerator_13254.current_lkey (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 303)).add_operation (GALGAS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 303)), fixItArray43  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 303)) ;
      }
    }
    enumerator_13254.gotoNextObject () ;
  }
  enumGalgasBool test_44 = kBoolTrue ;
  if (kBoolTrue == test_44) {
    test_44 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 307)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.getter_value ()) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 307)).boolEnum () ;
    if (kBoolTrue == test_44) {
      var_listFileContents_4409.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 308)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 308)) ;
      var_listFileContents_4409.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("INTERMEDIATE INSTRUCTION LIST").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 309)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 309)) ;
      var_listFileContents_4409.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 310)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 310)) ;
      var_listFileContents_4409.plusAssign_operation(GALGAS_string ("Generated intermediate code:\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 311)) ;
      var_listFileContents_4409.plusAssign_operation(GALGAS_string (" Line Length Mnemonic\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 312)) ;
      GALGAS_uint var_currentAddress_13984 = GALGAS_uint ((uint32_t) 0U) ;
      cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_14031 (var_intermediateInstructionList_8569, kENUMERATION_UP) ;
      GALGAS_uint index_13996 ((uint32_t) 0) ;
      while (enumerator_14031.hasCurrentObject ()) {
        var_listFileContents_4409.plusAssign_operation(index_13996.getter_string (SOURCE_FILE ("baseline_compilation.galgas", 315)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 5U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 315)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 315)) ;
        var_listFileContents_4409.plusAssign_operation(callExtensionGetter_length ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_14031.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 316)).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 316)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 6U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 316)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 316)) ;
        callExtensionMethod_print ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_14031.current_mInstruction (HERE).ptr (), var_listFileContents_4409, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 317)) ;
        var_listFileContents_4409.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 318)) ;
        callExtensionMethod_setCurrentAddress ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_14031.current_mInstruction (HERE).ptr (), var_currentAddress_13984, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 319)) ;
        enumerator_14031.gotoNextObject () ;
        index_13996.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 314)) ;
      }
      var_listFileContents_4409.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 321)) ;
      var_listFileContents_4409.plusAssign_operation(GALGAS_string ("Code size without optimization: ").add_operation (var_currentAddress_13984.getter_string (SOURCE_FILE ("baseline_compilation.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 322)).add_operation (GALGAS_string (" words.\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 322)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 322)) ;
    }
  }
  enumGalgasBool test_45 = kBoolTrue ;
  if (kBoolTrue == test_45) {
    test_45 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 325)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.getter_value ()) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 325)).boolEnum () ;
    if (kBoolTrue == test_45) {
      {
      routine_perform_5F_baseline_5F_optimizations (var_intermediateInstructionList_8569, var_listFileContents_4409, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 326)) ;
      }
    }
  }
  {
  routine_initCodeGenerator (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 329)) ;
  }
  GALGAS_registerExpression var_sr_14825 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 331))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 331)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 332))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 332))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 332)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 333))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 330)) ;
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_statusRegister_15073 ;
  GALGAS_bitSliceTable var_statusRegisterBitSliceTable_15125 ;
  callExtensionMethod_resolveBaselineAccess ((const cPtr_registerExpression *) var_sr_14825.ptr (), var_registerTable_5280, var_constantMap_5244, var_statusRegister_15073, var_statusRegisterBitSliceTable_15125, var_usedRegisters_5537, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 335)) ;
  GALGAS_baseline_5F_assembly_5F_instructionList var_assemblyInstructionList_15179 = GALGAS_baseline_5F_assembly_5F_instructionList::constructor_emptyList (SOURCE_FILE ("baseline_compilation.galgas", 342)) ;
  enumGalgasBool test_46 = kBoolTrue ;
  if (kBoolTrue == test_46) {
    test_46 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 343)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_46) {
      {
      routine_build_5F_baseline_5F_assembly_5F_code (var_intermediateInstructionList_8569, var_actualConfigurationMap_5004, var_statusRegister_15073, var_statusRegisterBitSliceTable_15125, var_assemblyInstructionList_15179, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 344)) ;
      }
    }
  }
  enumGalgasBool test_47 = kBoolTrue ;
  if (kBoolTrue == test_47) {
    test_47 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 353)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_47) {
      var_listFileContents_4409.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 354)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 354)) ;
      var_listFileContents_4409.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("GENERATED CODE").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 355)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 355)) ;
      var_listFileContents_4409.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 356)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 356)) ;
      var_listFileContents_4409.plusAssign_operation(GALGAS_string ("Address Code Mnemonic\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 357)) ;
      GALGAS_uint var_usedROMsize_16000 ;
      {
      routine_build_5F_baseline_5F_binary_5F_code (var_assemblyInstructionList_15179, var_piccoloDeviceModel_4504.getter_mRomSize (HERE).getter_uint (SOURCE_FILE ("baseline_compilation.galgas", 360)), var_listFileContents_4409, var_usedROMsize_16000, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 358)) ;
      }
    }
  }
  enumGalgasBool test_48 = kBoolTrue ;
  if (kBoolTrue == test_48) {
    test_48 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_48) {
      GALGAS_string var_listFile_16138 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 367)).add_operation (GALGAS_string (".list"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 367)) ;
      GALGAS_bool joker_16266 ; // Joker input parameter
      var_listFileContents_4409.method_writeToFileWhenDifferentContents (var_listFile_16138, joker_16266, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 368)) ;
    }
  }
  enumGalgasBool test_49 = kBoolTrue ;
  if (kBoolTrue == test_49) {
    test_49 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 372)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_49) {
      GALGAS_string var_contents_16749 ;
      {
      routine_getGeneratedContents (var_contents_16749, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 383)) ;
      }
      GALGAS_string var_destinationFile_16779 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 384)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 384)) ;
      GALGAS_bool joker_16905 ; // Joker input parameter
      var_contents_16749.method_writeToFileWhenDifferentContents (var_destinationFile_16779, joker_16905, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 385)) ;
      enumGalgasBool test_50 = kBoolTrue ;
      if (kBoolTrue == test_50) {
        test_50 = GALGAS_bool (gOption_piccolo_5F_options_output_5F_C_5F_Array.getter_value ()).boolEnum () ;
        if (kBoolTrue == test_50) {
          GALGAS_string var_baseName_16992 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("baseline_compilation.galgas", 387)).getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 387)) ;
          {
          routine_get_5F_C_5F_ArrayImplementation (var_baseName_16992, var_contents_16749, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 388)) ;
          }
          var_destinationFile_16779 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 389)).add_operation (GALGAS_string (".c"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 389)) ;
          GALGAS_bool joker_17267 ; // Joker input parameter
          var_contents_16749.method_writeToFileWhenDifferentContents (var_destinationFile_16779, joker_17267, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 390)) ;
          {
          routine_get_5F_C_5F_ArrayHeader (var_baseName_16992, var_contents_16749, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 391)) ;
          }
          var_destinationFile_16779 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 392)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 392)) ;
          GALGAS_bool joker_17465 ; // Joker input parameter
          var_contents_16749.method_writeToFileWhenDifferentContents (var_destinationFile_16779, joker_17465, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 393)) ;
        }
      }
      enumGalgasBool test_51 = kBoolTrue ;
      if (kBoolTrue == test_51) {
        test_51 = GALGAS_bool (gOption_piccolo_5F_options_generateAssembly.getter_value ()).boolEnum () ;
        if (kBoolTrue == test_51) {
          GALGAS_string var_assemblyCode_18470 = GALGAS_string ("  processor ").add_operation (constinArgument_inPiccoloModel.getter_mDeviceName (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 412)).add_operation (GALGAS_string ("\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 412)) ;
          cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_18566 (var_assemblyInstructionList_15179, kENUMERATION_UP) ;
          while (enumerator_18566.hasCurrentObject ()) {
            callExtensionMethod_print ((const cPtr_baseline_5F_assembly_5F_instruction *) enumerator_18566.current_mInstruction (HERE).ptr (), var_assemblyCode_18470, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 414)) ;
            var_assemblyCode_18470.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 415)) ;
            enumerator_18566.gotoNextObject () ;
          }
          var_assemblyCode_18470.plusAssign_operation(GALGAS_string ("\n"
            ";--- Registers\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 417)) ;
          cEnumerator_registerTable enumerator_18726 (var_registerTable_5280, kENUMERATION_UP) ;
          while (enumerator_18726.hasCurrentObject ()) {
            GALGAS_uint var_address_18784 ;
            enumerator_18726.current_mRegisterAddressList (HERE).method_first (var_address_18784, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 419)) ;
            var_assemblyCode_18470.plusAssign_operation(enumerator_18726.current_lkey (HERE).getter_string (HERE).add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 420)).add_operation (var_address_18784.getter_hexString (SOURCE_FILE ("baseline_compilation.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 420)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 420)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 420)) ;
            enumerator_18726.gotoNextObject () ;
          }
          var_assemblyCode_18470.plusAssign_operation(GALGAS_string ("W EQU 0\n"
            "\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 422)) ;
          var_assemblyCode_18470.plusAssign_operation(GALGAS_string (";--- Configuration\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 423)) ;
          cEnumerator_actualConfigurationMap enumerator_18991 (var_actualConfigurationMap_5004, kENUMERATION_UP) ;
          while (enumerator_18991.hasCurrentObject ()) {
            var_assemblyCode_18470.plusAssign_operation(GALGAS_string ("  __config ").add_operation (enumerator_18991.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("baseline_compilation.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 425)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 425)).add_operation (enumerator_18991.current_mRegisterValue (HERE).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 425)).getter_hexString (SOURCE_FILE ("baseline_compilation.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 425)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 425)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 425)) ;
            enumerator_18991.gotoNextObject () ;
          }
          var_assemblyCode_18470.plusAssign_operation(GALGAS_string ("\n"
            "  END\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 427)) ;
          GALGAS_string var_asmDestinationFile_19189 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 428)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 428)) ;
          GALGAS_bool joker_19324 ; // Joker input parameter
          var_assemblyCode_18470.method_writeToFileWhenDifferentContents (var_asmDestinationFile_19189, joker_19324, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 429)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_49) {
    GALGAS_string var_hexDestinationFile_19418 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 432)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 432)) ;
    enumGalgasBool test_52 = kBoolTrue ;
    if (kBoolTrue == test_52) {
      test_52 = var_hexDestinationFile_19418.getter_fileExists (SOURCE_FILE ("baseline_compilation.galgas", 433)).boolEnum () ;
      if (kBoolTrue == test_52) {
        {
        GALGAS_string::class_method_deleteFile (var_hexDestinationFile_19418, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 434)) ;
        }
      }
    }
    GALGAS_string var_asmDestinationFile_19608 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 436)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 436)) ;
    enumGalgasBool test_53 = kBoolTrue ;
    if (kBoolTrue == test_53) {
      test_53 = var_asmDestinationFile_19608.getter_fileExists (SOURCE_FILE ("baseline_compilation.galgas", 437)).boolEnum () ;
      if (kBoolTrue == test_53) {
        {
        GALGAS_string::class_method_deleteFile (var_asmDestinationFile_19608, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 438)) ;
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleBaselineInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleBaselineInstructionList (const GALGAS_uint constinArgument_inCurrentPage,
                                            const GALGAS_baseline_5F_instructionList constinArgument_inInstructionList,
                                            const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                            const GALGAS_registerTable constinArgument_inRegisterTable,
                                            const GALGAS_constantMap constinArgument_inConstantMap,
                                            GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                            GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                            GALGAS_string & ioArgument_ioListFileContents,
                                            GALGAS_bool & outArgument_outContinuesInSequence,
                                            const GALGAS_routineKind constinArgument_inRoutineKind,
                                            const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outContinuesInSequence.drop () ; // Release 'out' argument
  outArgument_outContinuesInSequence = GALGAS_bool (true) ;
  cEnumerator_baseline_5F_instructionList enumerator_2386 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  GALGAS_uint index_2361 ((uint32_t) 0) ;
  while (enumerator_2386.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = outArgument_outContinuesInSequence.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 74)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_2386.current_mInstruction (HERE).getter_mInstructionLocation (SOURCE_FILE ("baseline_semantic_analysis.galgas", 75)), GALGAS_string ("Unreachable code"), fixItArray1  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 75)) ;
        outArgument_outContinuesInSequence = GALGAS_bool (true) ;
      }
    }
    GALGAS_bool temp_2 ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, index_2361.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 88)).objectCompare (constinArgument_inInstructionList.getter_length (SOURCE_FILE ("baseline_semantic_analysis.galgas", 88)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      temp_2 = constinArgument_inLastInstructionShouldReturn ;
    }else if (kBoolFalse == test_3) {
      temp_2 = GALGAS_bool (false) ;
    }
    callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList ((const cPtr_baseline_5F_instruction *) enumerator_2386.current_mInstruction (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, outArgument_outContinuesInSequence, constinArgument_inRoutineKind, temp_2, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 78)) ;
    enumerator_2386.gotoNextObject () ;
    index_2361.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 73)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_WO_OPERAND build_baseline_intermediate_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                           const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                                           const GALGAS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                                           const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                                           const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                           GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                           GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                           GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                           GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                           const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                           const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                           GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND * object = (const cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("the last routine instruction should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 124)) ;
    }
  }
  const GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND temp_3 = object ;
  const GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND temp_4 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::constructor_new (temp_3.getter_mInstructionLocation (HERE), temp_4.getter_mInstruction (HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 126))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 126)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'acceptableTRISoperand'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_acceptableTRISoperand (C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_set ; // Returned variable
  result_set = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_semantic_analysis.galgas", 132)) ;
  result_set.addAssign_operation (GALGAS_string ("GPIO")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 133)) ;
  result_set.addAssign_operation (GALGAS_string ("PORTA")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 134)) ;
  result_set.addAssign_operation (GALGAS_string ("PORTB")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 135)) ;
  result_set.addAssign_operation (GALGAS_string ("PORTC")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 136)) ;
  result_set.addAssign_operation (GALGAS_string ("PORTD")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 137)) ;
  result_set.addAssign_operation (GALGAS_string ("PORTE")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 138)) ;
//---
  return result_set ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_acceptableTRISoperand = false ;
static GALGAS_stringset gOnceFunctionResult_acceptableTRISoperand ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset function_acceptableTRISoperand (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_acceptableTRISoperand) {
    gOnceFunctionResult_acceptableTRISoperand = onceFunction_acceptableTRISoperand (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_acceptableTRISoperand = true ;
  }
  return gOnceFunctionResult_acceptableTRISoperand ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_acceptableTRISoperand (void) {
  gOnceFunctionResult_acceptableTRISoperand.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_acceptableTRISoperand (NULL,
                                                                   releaseOnceFunctionResult_acceptableTRISoperand) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_acceptableTRISoperand [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_acceptableTRISoperand (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_acceptableTRISoperand (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_acceptableTRISoperand ("acceptableTRISoperand",
                                                                       functionWithGenericHeader_acceptableTRISoperand,
                                                                       & kTypeDescriptor_GALGAS_stringset,
                                                                       0,
                                                                       functionArgs_acceptableTRISoperand) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_TRIS build_baseline_intermediate_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_TRIS_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                  const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                                  const GALGAS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                                  const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                  const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                  GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                  GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                  GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                  GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                  const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                  const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                  GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_TRIS * object = (const cPtr_baseline_5F_instruction_5F_TRIS *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_TRIS) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_baseline_5F_instruction_5F_TRIS temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("this instruction is the last routine instruction but should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 156)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_baseline_5F_instruction_5F_TRIS temp_4 = object ;
    test_3 = function_acceptableTRISoperand (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 159)).getter_hasKey (temp_4.getter_mOperand (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 159)).operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 159)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_string var_s_5628 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_5673 (function_acceptableTRISoperand (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 161)), kENUMERATION_UP) ;
      while (enumerator_5673.hasCurrentObject ()) {
        var_s_5628.plusAssign_operation(enumerator_5673.current_key (HERE), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 162)) ;
        if (enumerator_5673.hasNextObject ()) {
          var_s_5628.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 163)) ;
        }
        enumerator_5673.gotoNextObject () ;
      }
      const GALGAS_baseline_5F_instruction_5F_TRIS temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.getter_mInstructionLocation (HERE), GALGAS_string ("invalid TRIS operand; accepted operand are: ").add_operation (var_s_5628, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 165)), fixItArray6  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 165)) ;
    }
  }
  GALGAS_uintlist var_registerAddressList_5902 ;
  GALGAS_registerProtection var_protection_5922 ;
  const GALGAS_baseline_5F_instruction_5F_TRIS temp_7 = object ;
  GALGAS_uint joker_5904_3 ; // Joker input parameter
  GALGAS_bitSliceTable joker_5904_2 ; // Joker input parameter
  GALGAS_string joker_5904_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_7.getter_mOperand (HERE), var_registerAddressList_5902, joker_5904_3, joker_5904_2, joker_5904_1, var_protection_5922, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 168)) ;
  const GALGAS_baseline_5F_instruction_5F_TRIS temp_8 = object ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_8.getter_mOperand (HERE), GALGAS_bool (true), var_protection_5922, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 169)) ;
  GALGAS_uint var_opcode_6048 ;
  var_registerAddressList_5902.method_first (var_opcode_6048, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 170)) ;
  const GALGAS_baseline_5F_instruction_5F_TRIS temp_9 = object ;
  const GALGAS_baseline_5F_instruction_5F_TRIS temp_10 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_TRIS::constructor_new (temp_9.getter_mInstructionLocation (HERE), temp_10.getter_mOperand (HERE), var_opcode_6048  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 172))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 172)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_TRIS_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_TRIS_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_TRIS_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_TRIS_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_MNOP build_baseline_intermediate_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_MNOP_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                  const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                                  const GALGAS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                                  const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                                  const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                  GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                  GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                  GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                  GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                  const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                  const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                  GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_MNOP * object = (const cPtr_baseline_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_MNOP) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_baseline_5F_instruction_5F_MNOP temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 190)) ;
    }
  }
  const GALGAS_baseline_5F_instruction_5F_MNOP temp_3 = object ;
  const GALGAS_baseline_5F_instruction_5F_MNOP temp_4 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::constructor_new (temp_3.getter_mInstructionLocation (HERE), temp_4.getter_mOccurrenceFactor (HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 192))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 192)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_MNOP_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_MNOP_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_MNOP_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_MNOP_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_literalOperation build_baseline_intermediate_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_literalOperation_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                              const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                                              const GALGAS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                              GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                              GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                              GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                              GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                              const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                              const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_literalOperation * object = (const cPtr_baseline_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_literalOperation) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_instruction_5F_literalOperation temp_1 = object ;
    test_0 = constinArgument_inLastInstructionShouldReturn.operator_and (GALGAS_bool (kIsNotEqual, temp_1.getter_mLiteralInstruction (HERE).objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("baseline_semantic_analysis.galgas", 209)))) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 209)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_baseline_5F_instruction_5F_literalOperation temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), GALGAS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray3  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 210)) ;
    }
  }
  GALGAS_sint_36__34_ var_immediatValue_8060 ;
  const GALGAS_baseline_5F_instruction_5F_literalOperation temp_4 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_4.getter_mImmediatExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_immediatValue_8060, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 212)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsStrictSup, var_immediatValue_8060.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_immediatValue_8060.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 214)))) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 214)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_baseline_5F_instruction_5F_literalOperation temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.getter_mInstructionLocation (HERE), GALGAS_string ("immediate value is evaluated as ").add_operation (var_immediatValue_8060.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 215)).add_operation (GALGAS_string (" (should be betwween -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 215)), fixItArray7  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 215)) ;
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_baseline_5F_instruction_5F_literalOperation temp_9 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_9.getter_mInstructionLocation (HERE), GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("baseline_semantic_analysis.galgas", 221)), var_immediatValue_8060.operator_and (GALGAS_sint ((int32_t) 255L).getter_sint_36__34_ (SOURCE_FILE ("baseline_semantic_analysis.galgas", 222)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 222)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 222))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 219))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 219)) ;
    }
  }
  if (kBoolFalse == test_8) {
    const GALGAS_baseline_5F_instruction_5F_literalOperation temp_10 = object ;
    const GALGAS_baseline_5F_instruction_5F_literalOperation temp_11 = object ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_10.getter_mInstructionLocation (HERE), temp_11.getter_mLiteralInstruction (HERE), var_immediatValue_8060.operator_and (GALGAS_sint ((int32_t) 255L).getter_sint_36__34_ (SOURCE_FILE ("baseline_semantic_analysis.galgas", 227)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 227)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 227))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 224))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 224)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_literalOperation_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_literalOperation_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_literalOperation_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_literalOperation_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_FD build_baseline_intermediate_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_FD_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                                const GALGAS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                                const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_FD * object = (const cPtr_baseline_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_FD) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_baseline_5F_instruction_5F_FD temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 247)) ;
    }
  }
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_9712 ;
  GALGAS_bitSliceTable var_bitSliceTable_9750 ;
  const GALGAS_baseline_5F_instruction_5F_FD temp_3 = object ;
  callExtensionMethod_resolveBaselineAccess ((const cPtr_registerExpression *) temp_3.getter_mRegisterExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_9712, var_bitSliceTable_9750, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 249)) ;
  const GALGAS_baseline_5F_instruction_5F_FD temp_4 = object ;
  const GALGAS_baseline_5F_instruction_5F_FD temp_5 = object ;
  const GALGAS_baseline_5F_instruction_5F_FD temp_6 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::constructor_new (temp_4.getter_mInstructionLocation (HERE), temp_5.getter_mInstruction_5F_FD_5F_base_5F_code (HERE), var_intermediateRegisterDescription_9712, temp_6.getter_m_5F_W_5F_isDestination (HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 256))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 256)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_FD_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_FD_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FD_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_FD_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_CALL build_baseline_intermediate_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_CALL_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                  const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                  const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                  const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                                  const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                  GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                  GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                  GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                  GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                  const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                  const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                  GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_CALL * object = (const cPtr_baseline_5F_instruction_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_CALL) ;
  GALGAS_bool var_isNoReturn_10706 ;
  GALGAS_luint var_targetPage_10729 ;
  const GALGAS_baseline_5F_instruction_5F_CALL temp_0 = object ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.getter_mTargetLabel (HERE), var_isNoReturn_10706, var_targetPage_10729, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 278)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_isNoReturn_10706.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_baseline_5F_instruction_5F_CALL temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mTargetLabel (HERE).getter_location (SOURCE_FILE ("baseline_semantic_analysis.galgas", 280)), GALGAS_string ("a \"noreturn\" routine should be called with a GOTO or a JUMP instruction"), fixItArray3  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 280)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inCurrentPage.objectCompare (var_targetPage_10729.getter_uint (HERE))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_baseline_5F_instruction_5F_CALL temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.getter_mTargetLabel (HERE).getter_location (SOURCE_FILE ("baseline_semantic_analysis.galgas", 283)), GALGAS_string ("for an inter-page regular routine call, use a JSR instruction"), fixItArray6  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 283)) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_baseline_5F_instruction_5F_CALL temp_8 = object ;
      const GALGAS_baseline_5F_instruction_5F_CALL temp_9 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (temp_8.getter_mInstructionLocation (HERE), temp_9.getter_mTargetLabel (HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 287))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 287)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_baseline_5F_instruction_5F_CALL temp_10 = object ;
    const GALGAS_baseline_5F_instruction_5F_CALL temp_11 = object ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_CALL::constructor_new (temp_10.getter_mInstructionLocation (HERE), temp_11.getter_mTargetLabel (HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 291))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 291)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_CALL_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_CALL_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_CALL_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_CALL_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_JSR build_baseline_intermediate_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_JSR_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                 const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                 const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                 const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                                 const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                 GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                 GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                 GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                 const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                 const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                 GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_JSR * object = (const cPtr_baseline_5F_instruction_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_JSR) ;
  GALGAS_bool var_isNoReturn_12036 ;
  GALGAS_luint var_targetPage_12059 ;
  const GALGAS_baseline_5F_instruction_5F_JSR temp_0 = object ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.getter_mTargetLabel (HERE), var_isNoReturn_12036, var_targetPage_12059, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 312)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_isNoReturn_12036.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_baseline_5F_instruction_5F_JSR temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mTargetLabel (HERE).getter_location (SOURCE_FILE ("baseline_semantic_analysis.galgas", 314)), GALGAS_string ("a \"noreturn\" routine should be called with a GOTO or a JUMP instruction"), fixItArray3  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 314)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_baseline_5F_instruction_5F_JSR temp_5 = object ;
      const GALGAS_baseline_5F_instruction_5F_JSR temp_6 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_JUMP::constructor_new (temp_5.getter_mInstructionLocation (HERE), temp_6.getter_mTargetLabel (HERE), constinArgument_inCurrentPage, var_targetPage_12059.getter_uint (HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 318))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 318)) ;
    }
  }
  if (kBoolFalse == test_4) {
    const GALGAS_baseline_5F_instruction_5F_JSR temp_7 = object ;
    const GALGAS_baseline_5F_instruction_5F_JSR temp_8 = object ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_JSR::constructor_new (temp_7.getter_mInstructionLocation (HERE), temp_8.getter_mTargetLabel (HERE), constinArgument_inCurrentPage, var_targetPage_12059.getter_uint (HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 324))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 324)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_JSR_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_JSR_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_JSR_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_JSR_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_F build_baseline_intermediate_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_F_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                               const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                               const GALGAS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                               const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                               const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                               GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                               GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                               GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                               const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                               const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                               GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_F * object = (const cPtr_baseline_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_F) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_baseline_5F_instruction_5F_F temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 347)) ;
    }
  }
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_13541 ;
  const GALGAS_baseline_5F_instruction_5F_F temp_3 = object ;
  GALGAS_bitSliceTable joker_13547 ; // Joker input parameter
  callExtensionMethod_resolveBaselineAccess ((const cPtr_registerExpression *) temp_3.getter_mRegisterExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_13541, joker_13547, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 349)) ;
  const GALGAS_baseline_5F_instruction_5F_F temp_4 = object ;
  const GALGAS_baseline_5F_instruction_5F_F temp_5 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::constructor_new (temp_4.getter_mInstructionLocation (HERE), temp_5.getter_mFAinstruction (HERE), var_intermediateRegisterDescription_13541  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 356))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 356)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_F_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_F_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_F_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_F_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_FB build_baseline_intermediate_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_FB_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                                const GALGAS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                                const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_FB * object = (const cPtr_baseline_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_FB) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_baseline_5F_instruction_5F_FB temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 377)) ;
    }
  }
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_14693 ;
  GALGAS_bitSliceTable var_bitSliceTable_14731 ;
  const GALGAS_baseline_5F_instruction_5F_FB temp_3 = object ;
  callExtensionMethod_resolveBaselineAccess ((const cPtr_registerExpression *) temp_3.getter_mRegisterExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_14693, var_bitSliceTable_14731, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 379)) ;
  GALGAS_uint var_bitNumber_14895 ;
  const GALGAS_baseline_5F_instruction_5F_FB temp_4 = object ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) temp_4.getter_mBitNumber (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_14731, var_bitNumber_14895, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 386)) ;
  const GALGAS_baseline_5F_instruction_5F_FB temp_5 = object ;
  const GALGAS_baseline_5F_instruction_5F_FB temp_6 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::constructor_new (temp_5.getter_mInstructionLocation (HERE), temp_6.getter_mBitOrientedOp (HERE), var_intermediateRegisterDescription_14693, var_bitNumber_14895  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 393))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 393)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_FB_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_FB_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FB_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_FB_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_GOTO build_baseline_intermediate_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_GOTO_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                  const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                  const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                  const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                                  const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                  GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                  GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                  GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                  GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                                  const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                  const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                  GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_GOTO * object = (const cPtr_baseline_5F_instruction_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_GOTO) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_baseline_5F_instruction_5F_GOTO temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 416)) ;
    }
  }
  GALGAS_bool var_isNoReturn_15933 ;
  GALGAS_luint var_targetPage_15956 ;
  const GALGAS_baseline_5F_instruction_5F_GOTO temp_3 = object ;
  constinArgument_inRoutineMap.method_searchKey (temp_3.getter_mTargetLabel (HERE), var_isNoReturn_15933, var_targetPage_15956, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 418)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_isNoReturn_15933.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 419)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_baseline_5F_instruction_5F_GOTO temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.getter_mTargetLabel (HERE).getter_location (SOURCE_FILE ("baseline_semantic_analysis.galgas", 420)), GALGAS_string ("a regular routine should be called with a CALL or a JSR instruction"), fixItArray6  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 420)) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, constinArgument_inCurrentPage.objectCompare (var_targetPage_15956.getter_uint (HERE))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_baseline_5F_instruction_5F_GOTO temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.getter_mTargetLabel (HERE).getter_location (SOURCE_FILE ("baseline_semantic_analysis.galgas", 423)), GALGAS_string ("for an inter-page noreturn routine call, use a JUMP instruction"), fixItArray9  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 423)) ;
    }
  }
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
  const GALGAS_baseline_5F_instruction_5F_GOTO temp_10 = object ;
  const GALGAS_baseline_5F_instruction_5F_GOTO temp_11 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (temp_10.getter_mInstructionLocation (HERE), temp_11.getter_mTargetLabel (HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 427))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 427)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_GOTO_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_GOTO_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_GOTO_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_GOTO_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_JUMP build_baseline_intermediate_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_JUMP_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                  const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                  const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                  const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                                  const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                  GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                  GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                  GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                  GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                                  const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                  const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                  GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_JUMP * object = (const cPtr_baseline_5F_instruction_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_JUMP) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_baseline_5F_instruction_5F_JUMP temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 447)) ;
    }
  }
  GALGAS_bool var_isNoReturn_17233 ;
  GALGAS_luint var_targetPage_17256 ;
  const GALGAS_baseline_5F_instruction_5F_JUMP temp_3 = object ;
  constinArgument_inRoutineMap.method_searchKey (temp_3.getter_mTargetLabel (HERE), var_isNoReturn_17233, var_targetPage_17256, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 449)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_isNoReturn_17233.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 450)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_baseline_5F_instruction_5F_JUMP temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.getter_mTargetLabel (HERE).getter_location (SOURCE_FILE ("baseline_semantic_analysis.galgas", 451)), GALGAS_string ("a regular routine should be called with a CALL or a JSR instruction"), fixItArray6  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 451)) ;
    }
  }
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
  const GALGAS_baseline_5F_instruction_5F_JUMP temp_7 = object ;
  const GALGAS_baseline_5F_instruction_5F_JUMP temp_8 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_JUMP::constructor_new (temp_7.getter_mInstructionLocation (HERE), temp_8.getter_mTargetLabel (HERE), constinArgument_inCurrentPage, var_targetPage_17256.getter_uint (HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 455))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 455)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_JUMP_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_JUMP_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_JUMP_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_JUMP_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_IF_BitTest build_baseline_intermediate_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                           const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                           const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                           const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                           const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                           GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                           GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                           GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                           const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                                           const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                           GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * object = (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_18352 ;
  GALGAS_bitSliceTable var_bitSliceTable_18390 ;
  const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest temp_0 = object ;
  callExtensionMethod_resolveBaselineAccess ((const cPtr_registerExpression *) temp_0.getter_mRegisterExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_18352, var_bitSliceTable_18390, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 476)) ;
  GALGAS_uint var_bitNumber_18434 ;
  const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest temp_1 = object ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) temp_1.getter_mBitNumber (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_18390, var_bitNumber_18434, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 484)) ;
  const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest temp_2 = object ;
  const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest temp_3 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_new (temp_2.getter_mInstructionLocation (HERE), temp_3.getter_mSkipIfSet (HERE), var_intermediateRegisterDescription_18352, var_bitNumber_18434  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 491))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 491)) ;
  GALGAS_bool var_unusedContinuesInSequence_18816 = GALGAS_bool (true) ;
  const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest temp_4 = object ;
  callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList ((const cPtr_baseline_5F_instruction *) temp_4.getter_mInstruction (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_unusedContinuesInSequence_18816, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 498)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_IF_5F_BitTest_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_IF_IncDec build_baseline_intermediate_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_IF_5F_IncDec_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                          const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                          const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                          const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                          const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                          GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                          GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                          GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                          const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                                          const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                          GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * object = (const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code var_baseCode_19802 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec temp_1 = object ;
    test_0 = temp_1.getter_mIncrement (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_baseCode_19802 = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_INCFSZ (SOURCE_FILE ("baseline_semantic_analysis.galgas", 530)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_baseCode_19802 = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_DECFSZ (SOURCE_FILE ("baseline_semantic_analysis.galgas", 532)) ;
  }
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_20135 ;
  GALGAS_bitSliceTable var_bitSliceTable_20173 ;
  const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec temp_2 = object ;
  callExtensionMethod_resolveBaselineAccess ((const cPtr_registerExpression *) temp_2.getter_mRegisterExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_20135, var_bitSliceTable_20173, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 535)) ;
  const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec temp_3 = object ;
  const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec temp_4 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::constructor_new (temp_3.getter_mInstructionLocation (HERE), var_baseCode_19802, var_intermediateRegisterDescription_20135, temp_4.getter_m_5F_W_5F_isDestination (HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 543))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 543)) ;
  GALGAS_bool var_unusedContinuesInSequence_20432 = GALGAS_bool (true) ;
  const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec temp_5 = object ;
  callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList ((const cPtr_baseline_5F_instruction *) temp_5.getter_mInstruction (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_unusedContinuesInSequence_20432, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 550)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_IncDec_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_IF_5F_IncDec_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_IF_5F_IncDec_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_IncDec_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_FOREVER build_baseline_intermediate_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_FOREVER_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                     const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                     const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                     GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                     GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                     GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                                     const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                                     const GALGAS_bool /* constinArgument_inLastInstructionShouldReturn */,
                                                                                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_FOREVER * object = (const cPtr_baseline_5F_instruction_5F_FOREVER *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_FOREVER) ;
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_regularRoutine:
    {
      const GALGAS_baseline_5F_instruction_5F_FOREVER temp_0 = object ;
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (temp_0.getter_mInstructionLocation (HERE), GALGAS_string ("a regular routine does not accept the \"forever\" instruction"), fixItArray1  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 581)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_noReturnRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      const GALGAS_baseline_5F_instruction_5F_FOREVER temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), GALGAS_string ("an interrupt routine does not accept the \"forever\" instruction"), fixItArray3  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 584)) ;
    }
    break ;
  }
  GALGAS_string var_label_30__21744 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 587)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 588)) ;
  const GALGAS_baseline_5F_instruction_5F_FOREVER temp_4 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_30__21744, temp_4.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 589))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 589))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 589)) ;
  {
  const GALGAS_baseline_5F_instruction_5F_FOREVER temp_5 = object ;
  routine_handleBaselineInstructionList (constinArgument_inCurrentPage, temp_5.getter_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, GALGAS_bool (false), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 590)) ;
  }
  const GALGAS_baseline_5F_instruction_5F_FOREVER temp_6 = object ;
  const GALGAS_baseline_5F_instruction_5F_FOREVER temp_7 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (temp_6.getter_mInstructionLocation (HERE), GALGAS_lstring::constructor_new (var_label_30__21744, temp_7.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 607))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 605))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 605)) ;
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_FOREVER_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_FOREVER_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FOREVER_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_FOREVER_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_STATIC_REPEAT build_baseline_intermediate_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                              const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                              const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                              GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                              GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                              GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                              GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                                              const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                                              const GALGAS_bool /* constinArgument_inLastInstructionShouldReturn */,
                                                                                                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * object = (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
  GALGAS_sint_36__34_ var_lowerBound_23250 ;
  const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.getter_mLowerBoundExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_23250, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 628)) ;
  GALGAS_sint_36__34_ var_upperBound_23360 ;
  const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_1 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_1.getter_mUpperBoundExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_23360, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 629)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsStrictSup, var_lowerBound_23250.objectCompare (var_upperBound_23360)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.getter_mInstructionLocation (HERE), GALGAS_string ("lower bound (").add_operation (var_lowerBound_23250.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 632)).add_operation (GALGAS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 632)).add_operation (var_upperBound_23360.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 632)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 632)), fixItArray4  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 632)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsStrictSup, var_upperBound_23360.substract_operation (var_lowerBound_23250, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 633)).objectCompare (GALGAS_sint_36__34_ ((int64_t) 65535LL))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.getter_mInstructionLocation (HERE), GALGAS_string ("repeat count (").add_operation (var_upperBound_23360.substract_operation (var_lowerBound_23250, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 634)).getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 634)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 634)).add_operation (GALGAS_string (") too large (should be <= 0xFFFF)"), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 634)), fixItArray7  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 634)) ;
      }
    }
  }
  GALGAS_constantMap var_tempConstantMap_23750 = constinArgument_inConstantMap ;
  {
  const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_8 = object ;
  var_tempConstantMap_23750.setter_insertKey (temp_8.getter_mConstantName (HERE), var_lowerBound_23250, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 638)) ;
  }
  {
  const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_9 = object ;
  routine_handleBaselineInstructionList (constinArgument_inCurrentPage, temp_9.getter_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_tempConstantMap_23750, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, GALGAS_bool (false), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 639)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = ioArgument_ioContinuesInSequence.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 653)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_11 = object ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.getter_mEndOfInstruction (HERE), GALGAS_string ("enclosed instruction list contains an endless loop"), fixItArray12  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 654)) ;
    }
  }
  GALGAS_sint_36__34_ var_idx_24343 = var_lowerBound_23250.add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("baseline_semantic_analysis.galgas", 657)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 657)) ;
  if (var_upperBound_23360.substract_operation (var_lowerBound_23250, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 658)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("baseline_semantic_analysis.galgas", 658)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 658)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 658)).isValid ()) {
    uint32_t variant_24367 = var_upperBound_23360.substract_operation (var_lowerBound_23250, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 658)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("baseline_semantic_analysis.galgas", 658)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 658)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 658)).uintValue () ;
    bool loop_24367 = true ;
    while (loop_24367) {
      GALGAS_bool test_13 = GALGAS_bool (kIsInfOrEqual, var_idx_24343.objectCompare (var_upperBound_23360)) ;
      if (kBoolTrue == test_13.boolEnum ()) {
        test_13 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_semantic_analysis.galgas", 658)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      }
      loop_24367 = test_13.isValid () ;
      if (loop_24367) {
        loop_24367 = test_13.boolValue () ;
      }
      if (loop_24367 && (0 == variant_24367)) {
        loop_24367 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_semantic_analysis.galgas", 658)) ;
      }
      if (loop_24367) {
        variant_24367 -- ;
        GALGAS_constantMap var_constantMap_24480 = constinArgument_inConstantMap ;
        {
        const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_14 = object ;
        var_constantMap_24480.setter_insertKey (temp_14.getter_mConstantName (HERE), var_idx_24343, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 660)) ;
        }
        {
        const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_15 = object ;
        routine_handleBaselineInstructionList (constinArgument_inCurrentPage, temp_15.getter_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_constantMap_24480, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, GALGAS_bool (false), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 661)) ;
        }
        var_idx_24343.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 675)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_do_while build_baseline_intermediate_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_do_5F_while_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                         const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                         const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                         GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                         GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                         GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                                         const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                                         const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_do_5F_while * object = (const cPtr_baseline_5F_instruction_5F_do_5F_while *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
  GALGAS_string var_labelInstructionBegin_25585 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 694)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 694)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 694)) ;
  const GALGAS_baseline_5F_instruction_5F_do_5F_while temp_0 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_labelInstructionBegin_25585, temp_0.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 696))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 696))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 696)) ;
  {
  const GALGAS_baseline_5F_instruction_5F_do_5F_while temp_1 = object ;
  routine_handleBaselineInstructionList (constinArgument_inCurrentPage, temp_1.getter_mRepeatedInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 698)) ;
  }
  const GALGAS_baseline_5F_instruction_5F_do_5F_while temp_2 = object ;
  cEnumerator_baseline_5F_partList enumerator_26217 (temp_2.getter_mWhilePartList (HERE), kENUMERATION_UP) ;
  while (enumerator_26217.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsEqual, enumerator_26217.current_mInstructionList (HERE).getter_length (SOURCE_FILE ("baseline_semantic_analysis.galgas", 714)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_baseline_5F_instruction_5F_do_5F_while temp_4 = object ;
        callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((const cPtr_baseline_5F_conditionExpression *) enumerator_26217.current_mCondition (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), temp_4.getter_mInstructionLocation (HERE), var_labelInstructionBegin_25585, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 715)) ;
      }
    }
    if (kBoolFalse == test_3) {
      GALGAS_string var_nextBranchLabel_26613 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 727)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 727)) ;
      ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 727)) ;
      const GALGAS_baseline_5F_instruction_5F_do_5F_while temp_5 = object ;
      callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((const cPtr_baseline_5F_conditionExpression *) enumerator_26217.current_mCondition (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), temp_5.getter_mInstructionLocation (HERE), var_nextBranchLabel_26613, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 728)) ;
      {
      routine_handleBaselineInstructionList (constinArgument_inCurrentPage, enumerator_26217.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 739)) ;
      }
      const GALGAS_baseline_5F_instruction_5F_do_5F_while temp_6 = object ;
      const GALGAS_baseline_5F_instruction_5F_do_5F_while temp_7 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (temp_6.getter_mInstructionLocation (HERE), GALGAS_lstring::constructor_new (var_labelInstructionBegin_25585, temp_7.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 755))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 753))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 753)) ;
      const GALGAS_baseline_5F_instruction_5F_do_5F_while temp_8 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_nextBranchLabel_26613, temp_8.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 756))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 756))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 756)) ;
    }
    enumerator_26217.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_do_5F_while_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_do_5F_while_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_do_5F_while_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_do_5F_while_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_structured_if build_baseline_intermediate_instructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_instruction_5F_structured_5F_if_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                              const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                              const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                              GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                              GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                              GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                              GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                                              const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                                              const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_structured_5F_if * object = (const cPtr_baseline_5F_instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
  GALGAS_string var_label_5F_nextCondition_28320 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 776)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 776)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 776)) ;
  GALGAS_string var_label_5F_endOfIfinstruction_28412 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 777)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 777)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 777)) ;
  const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_0 = object ;
  const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_1 = object ;
  callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((const cPtr_baseline_5F_conditionExpression *) temp_0.getter_mIfCondition (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), temp_1.getter_mInstructionLocation (HERE), var_label_5F_nextCondition_28320, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 779)) ;
  GALGAS_bool var_thenContinuesInSequence_29053 ;
  {
  const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_2 = object ;
  routine_handleBaselineInstructionList (constinArgument_inCurrentPage, temp_2.getter_mThenInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_thenContinuesInSequence_29053, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 791)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_4 = object ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.getter_mElseInstructionList (HERE).getter_length (SOURCE_FILE ("baseline_semantic_analysis.galgas", 806)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (constinArgument_inLastInstructionShouldReturn.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 806)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 806)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_5 = object ;
      const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_6 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (temp_5.getter_mInstructionLocation (HERE), GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_28412, temp_6.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 809))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 807))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 807)) ;
    }
  }
  const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_7 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_nextCondition_28320, temp_7.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 811))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 811))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 811)) ;
  GALGAS_bool var_elseContinuesInSequence_29838 ;
  {
  const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_8 = object ;
  routine_handleBaselineInstructionList (constinArgument_inCurrentPage, temp_8.getter_mElseInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_elseContinuesInSequence_29838, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 812)) ;
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_10 = object ;
    test_9 = GALGAS_bool (kIsStrictSup, temp_10.getter_mElseInstructionList (HERE).getter_length (SOURCE_FILE ("baseline_semantic_analysis.galgas", 826)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (constinArgument_inLastInstructionShouldReturn.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 826)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 826)).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_11 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_28412, temp_11.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 827))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 827))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 827)) ;
    }
  }
  ioArgument_ioContinuesInSequence = var_thenContinuesInSequence_29053.operator_or (var_elseContinuesInSequence_29838 COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 830)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_instruction_5F_structured_5F_if_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_structured_5F_if_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_structured_5F_if_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_structured_5F_if_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_incDecRegisterInCondition build_intermediate_condition_instructions'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_incDecRegisterInCondition_build_5F_intermediate_5F_condition_5F_instructions (const cPtr_baseline_5F_conditionExpression * inObject,
                                                                                                                      const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                                      const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                      const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                      GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                      const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                                                      const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                      const GALGAS_string constinArgument_inTargetLabel,
                                                                                                                      GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                      GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_incDecRegisterInCondition * object = (const cPtr_baseline_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_incDecRegisterInCondition) ;
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_31746 ;
  GALGAS_bitSliceTable var_bitSliceTable_31784 ;
  const GALGAS_baseline_5F_incDecRegisterInCondition temp_0 = object ;
  callExtensionMethod_resolveBaselineAccess ((const cPtr_registerExpression *) temp_0.getter_mRegisterExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_31746, var_bitSliceTable_31784, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 862)) ;
  const GALGAS_baseline_5F_incDecRegisterInCondition temp_1 = object ;
  const GALGAS_baseline_5F_incDecRegisterInCondition temp_2 = object ;
  const GALGAS_baseline_5F_incDecRegisterInCondition temp_3 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::constructor_new (constinArgument_inInstructionLocation, var_intermediateRegisterDescription_31746, constinArgument_inTargetLabel, temp_1.getter_mIncrement (HERE), temp_2.getter_m_5F_W_5F_isDestination (HERE), temp_3.getter_mBranchIfZero (HERE).operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 876))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 870))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 870)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_incDecRegisterInCondition_build_5F_intermediate_5F_condition_5F_instructions (void) {
  enterExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions (kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition.mSlotID,
                                                                           extensionMethod_baseline_5F_incDecRegisterInCondition_build_5F_intermediate_5F_condition_5F_instructions) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_incDecRegisterInCondition_build_5F_intermediate_5F_condition_5F_instructions (defineExtensionMethod_baseline_5F_incDecRegisterInCondition_build_5F_intermediate_5F_condition_5F_instructions, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_negateCondition build_intermediate_condition_instructions'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_negateCondition_build_5F_intermediate_5F_condition_5F_instructions (const cPtr_baseline_5F_conditionExpression * inObject,
                                                                                                            const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                            const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                            const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                            GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                            const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                                            const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                            const GALGAS_string constinArgument_inTargetLabel,
                                                                                                            GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_negateCondition * object = (const cPtr_baseline_5F_negateCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_negateCondition) ;
  const GALGAS_baseline_5F_negateCondition temp_0 = object ;
  callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((const cPtr_baseline_5F_conditionExpression *) temp_0.getter_mCondition (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, constinArgument_inComplementaryBranch.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 896)), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 891)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_negateCondition_build_5F_intermediate_5F_condition_5F_instructions (void) {
  enterExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions (kTypeDescriptor_GALGAS_baseline_5F_negateCondition.mSlotID,
                                                                           extensionMethod_baseline_5F_negateCondition_build_5F_intermediate_5F_condition_5F_instructions) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_negateCondition_build_5F_intermediate_5F_condition_5F_instructions (defineExtensionMethod_baseline_5F_negateCondition_build_5F_intermediate_5F_condition_5F_instructions, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_andCondition build_intermediate_condition_instructions'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_andCondition_build_5F_intermediate_5F_condition_5F_instructions (const cPtr_baseline_5F_conditionExpression * inObject,
                                                                                                         const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                         GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                         const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                                         const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                         const GALGAS_string constinArgument_inTargetLabel,
                                                                                                         GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_andCondition * object = (const cPtr_baseline_5F_andCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_andCondition) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inComplementaryBranch.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_baseline_5F_andCondition temp_1 = object ;
      callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((const cPtr_baseline_5F_conditionExpression *) temp_1.getter_mLeftExpression (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 917)) ;
      const GALGAS_baseline_5F_andCondition temp_2 = object ;
      callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((const cPtr_baseline_5F_conditionExpression *) temp_2.getter_mRightExpression (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 928)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_string var_label_30__33949 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 940)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 940)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 940)) ;
    const GALGAS_baseline_5F_andCondition temp_3 = object ;
    callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((const cPtr_baseline_5F_conditionExpression *) temp_3.getter_mLeftExpression (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, var_label_30__33949, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 941)) ;
    const GALGAS_baseline_5F_andCondition temp_4 = object ;
    callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((const cPtr_baseline_5F_conditionExpression *) temp_4.getter_mRightExpression (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 952)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_30__33949, constinArgument_inInstructionLocation  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 963))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 963))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 963)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_andCondition_build_5F_intermediate_5F_condition_5F_instructions (void) {
  enterExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions (kTypeDescriptor_GALGAS_baseline_5F_andCondition.mSlotID,
                                                                           extensionMethod_baseline_5F_andCondition_build_5F_intermediate_5F_condition_5F_instructions) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_andCondition_build_5F_intermediate_5F_condition_5F_instructions (defineExtensionMethod_baseline_5F_andCondition_build_5F_intermediate_5F_condition_5F_instructions, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_bitTest_in_structured_if_condition build_intermediate_condition_instructions'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_build_5F_intermediate_5F_condition_5F_instructions (const cPtr_baseline_5F_conditionExpression * inObject,
                                                                                                                                           const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                                                           const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                                           const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                                           GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                                           const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                                                                           const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                                           const GALGAS_string constinArgument_inTargetLabel,
                                                                                                                                           GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                                           GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                                           C_Compiler * inCompiler
                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * object = (const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_35389 ;
  GALGAS_bitSliceTable var_bitSliceTable_35427 ;
  const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_0 = object ;
  callExtensionMethod_resolveBaselineAccess ((const cPtr_registerExpression *) temp_0.getter_mRegisterExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_35389, var_bitSliceTable_35427, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 980)) ;
  GALGAS_uint var_bitNumber_35471 ;
  const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_1 = object ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) temp_1.getter_mBitNumber (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_35427, var_bitNumber_35471, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 988)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_new (constinArgument_inInstructionLocation, constinArgument_inComplementaryBranch, var_intermediateRegisterDescription_35389, var_bitNumber_35471  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 995))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 995)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (constinArgument_inInstructionLocation, GALGAS_lstring::constructor_new (constinArgument_inTargetLabel, constinArgument_inInstructionLocation  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 1003))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 1001))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 1001)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_build_5F_intermediate_5F_condition_5F_instructions (void) {
  enterExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions (kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition.mSlotID,
                                                                           extensionMethod_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_build_5F_intermediate_5F_condition_5F_instructions) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_build_5F_intermediate_5F_condition_5F_instructions (defineExtensionMethod_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_build_5F_intermediate_5F_condition_5F_instructions, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_NULL print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_NULL_print (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 10)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_NULL_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_NULL_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_NULL_print (defineExtensionMethod_baseline_5F_intermediate_5F_NULL_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_PAGE print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                              GALGAS_string & ioArgument_ioListFileContents,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("ORG ").add_operation (temp_0.getter_mPage (HERE).multiply_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 16)).getter_hexString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 16)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 16)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 16)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_print (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_BEGIN_ROUTINE print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("BEGIN OF ROUTINE ").add_operation (temp_0.getter_mRoutineName (HERE).getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 22)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 22)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_print (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_END_ROUTINE print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE temp_0 = object ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE temp_1 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("END OF ROUTINE ").add_operation (temp_0.getter_mRoutineName (HERE).getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)).add_operation (GALGAS_string (" IN PAGE "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)).add_operation (temp_1.getter_mPage (HERE).getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_print (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_LABEL print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("LABEL ").add_operation (temp_0.getter_mLabel (HERE).getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 34)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_print (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_FD print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_FD_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD temp_0 = object ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD temp_1 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.getter_mInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 40)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 40)).add_operation (temp_1.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 40)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD temp_3 = object ;
    test_2 = temp_3.getter_m_5F_W_5F_isDestination (HERE).boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 42)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_FD_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_instruction_5F_FD_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_FD_print (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_FD_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_F print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_F_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_F * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F temp_0 = object ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F temp_1 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.getter_mInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 49)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 49)).add_operation (temp_1.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 49)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_F_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_instruction_5F_F_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_F_print (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_F_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_FB print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_FB_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB temp_0 = object ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB temp_1 = object ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB temp_2 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.getter_mInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)).add_operation (temp_1.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)).add_operation (temp_2.getter_mBitNumber (HERE).getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_FB_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_instruction_5F_FB_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_FB_print (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_FB_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_BitTestSkip print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = object ;
    test_0 = temp_1.getter_mSkipIfSet (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 62)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 64)) ;
  }
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = object ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (temp_2.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)).add_operation (temp_3.getter_mBitNumber (HERE).getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_print (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_GOTO print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_GOTO_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_GOTO * object = (const cPtr_baseline_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_GOTO) ;
  const GALGAS_baseline_5F_intermediate_5F_GOTO temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("GOTO ").add_operation (temp_0.getter_mTargetLabel (HERE).getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 72)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 72)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_GOTO_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_GOTO_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_GOTO_print (defineExtensionMethod_baseline_5F_intermediate_5F_GOTO_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_JUMP print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_JUMP_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_JUMP * object = (const cPtr_baseline_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JUMP) ;
  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JUMP ").add_operation (temp_0.getter_mTargetLabel (HERE).getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 78)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 78)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_JUMP_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_JUMP_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_JUMP_print (defineExtensionMethod_baseline_5F_intermediate_5F_JUMP_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_CALL print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_CALL_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_CALL * object = (const cPtr_baseline_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_CALL) ;
  const GALGAS_baseline_5F_intermediate_5F_CALL temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("CALL ").add_operation (temp_0.getter_mTargetLabel (HERE).getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 85)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 85)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_CALL_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_CALL_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_CALL_print (defineExtensionMethod_baseline_5F_intermediate_5F_CALL_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_JSR print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_JSR_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_JSR * object = (const cPtr_baseline_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JSR) ;
  const GALGAS_baseline_5F_intermediate_5F_JSR temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JSR ").add_operation (temp_0.getter_mTargetLabel (HERE).getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 92)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_JSR_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_JSR_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_JSR_print (defineExtensionMethod_baseline_5F_intermediate_5F_JSR_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_literalOperation print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = object ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.getter_mInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 98)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 98)).add_operation (temp_1.getter_mLiteralValue (HERE).getter_hexString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 98)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_print (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_MNOP print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("MNOP ").add_operation (temp_0.getter_mOccurrenceFactor (HERE).getter_uint (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 104)).getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 104)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_print (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_incDecRegisterInCondition print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JUMP "), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 110)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_1 = object ;
    test_0 = temp_1.getter_mIncrement (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("INCF "), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 112)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("DECF "), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 114)) ;
  }
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_2 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(temp_2.getter_mRegisterDescription (HERE).getter_mAssemblyString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 116)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_4 = object ;
    test_3 = temp_4.getter_m_5F_W_5F_isDestination (HERE).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 118)) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_6 = object ;
    test_5 = temp_6.getter_mBranchIfZero (HERE).boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" Z"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 121)) ;
    }
  }
  if (kBoolFalse == test_5) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" NZ"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 123)) ;
  }
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_7 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (temp_7.getter_mTargetLabel (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 125)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_print (defineExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_WO_OPERAND print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * object = (const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
  const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.getter_mInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 131)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_print (defineExtensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_TRIS print'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_TRIS_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_TRIS * object = (const cPtr_baseline_5F_intermediate_5F_TRIS *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_TRIS) ;
  const GALGAS_baseline_5F_intermediate_5F_TRIS temp_0 = object ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("TRIS ").add_operation (temp_0.getter_mOperand (HERE).getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 137)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 137)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_TRIS_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_TRIS_print) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_TRIS_print (defineExtensionMethod_baseline_5F_intermediate_5F_TRIS_print, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_NULL length'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_NULL_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_NULL_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_NULL_length) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_NULL_length (defineExtensionGetter_baseline_5F_intermediate_5F_NULL_length, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_PAGE length'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_length) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_length (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_length, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_BEGIN_ROUTINE length'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_length) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_length (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_length, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_END_ROUTINE length'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_length) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_length (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_length, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_LABEL length'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_length) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_length (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_length, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_actualInstruction length'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_actualInstruction_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 1U) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_actualInstruction_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_actualInstruction_length) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_actualInstruction_length (defineExtensionGetter_baseline_5F_intermediate_5F_actualInstruction_length, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_JUMP length'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_JUMP_length (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_baseline_5F_intermediate_5F_JUMP * object = (const cPtr_baseline_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JUMP) ;
  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_0 = object ;
  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_1 = object ;
  result_outLength = GALGAS_uint ((uint32_t) 1U).add_operation (temp_0.getter_mCurrentPage (HERE).operator_xor (temp_1.getter_mTargetPage (HERE) COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 46)).getter_oneBitCount (SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 46)) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_JUMP_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_JUMP_length) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_JUMP_length (defineExtensionGetter_baseline_5F_intermediate_5F_JUMP_length, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_JSR length'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_JSR_length (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_baseline_5F_intermediate_5F_JSR * object = (const cPtr_baseline_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JSR) ;
  const GALGAS_baseline_5F_intermediate_5F_JSR temp_0 = object ;
  const GALGAS_baseline_5F_intermediate_5F_JSR temp_1 = object ;
  result_outLength = GALGAS_uint ((uint32_t) 1U).add_operation (GALGAS_uint ((uint32_t) 2U).multiply_operation (temp_0.getter_mCurrentPage (HERE).operator_xor (temp_1.getter_mTargetPage (HERE) COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)).getter_oneBitCount (SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_JSR_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_JSR_length) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_JSR_length (defineExtensionGetter_baseline_5F_intermediate_5F_JSR_length, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_instruction_MNOP length'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_instruction_5F_MNOP_length (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_0 = object ;
  result_outLength = temp_0.getter_mOccurrenceFactor (HERE).getter_uint (SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 59)) ;
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_instruction_5F_MNOP_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_instruction_5F_MNOP_length) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_instruction_5F_MNOP_length (defineExtensionGetter_baseline_5F_intermediate_5F_instruction_5F_MNOP_length, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_incDecRegisterInCondition length'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_incDecRegisterInCondition_length (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_1 = object ;
    test_0 = temp_1.getter_mBranchIfZero (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outLength = GALGAS_uint ((uint32_t) 3U) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outLength = GALGAS_uint ((uint32_t) 2U) ;
  }
//---
  return result_outLength ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_incDecRegisterInCondition_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_incDecRegisterInCondition_length) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_incDecRegisterInCondition_length (defineExtensionGetter_baseline_5F_intermediate_5F_incDecRegisterInCondition_length, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_PAGE setCurrentAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_setCurrentAddress (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                          GALGAS_uint & ioArgument_ioCurrentWordAdress,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE temp_0 = object ;
  ioArgument_ioCurrentWordAdress = temp_0.getter_mPage (HERE).multiply_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 27)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_setCurrentAddress (void) {
  enterExtensionMethod_setCurrentAddress (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE.mSlotID,
                                          extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_setCurrentAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_setCurrentAddress (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_setCurrentAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_LABEL isLABEL'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GALGAS_bool (true) ;
//---
  return result_outIsLABEL ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_isLABEL (void) {
  enterExtensionGetter_isLABEL (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_isLABEL) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_isLABEL (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_isLABEL, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_PAGE isLABEL'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GALGAS_bool (true) ;
//---
  return result_outIsLABEL ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_isLABEL (void) {
  enterExtensionGetter_isLABEL (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE.mSlotID,
                                extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_isLABEL) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_isLABEL (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_isLABEL, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_END_ROUTINE isLABEL'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GALGAS_bool (true) ;
//---
  return result_outIsLABEL ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_isLABEL (void) {
  enterExtensionGetter_isLABEL (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE.mSlotID,
                                extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_isLABEL) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_isLABEL (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_isLABEL, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_NULL isNULL'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_NULL_isNULL (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GALGAS_bool (true) ;
//---
  return result_outIsNULL ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_NULL_isNULL (void) {
  enterExtensionGetter_isNULL (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_NULL_isNULL) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_NULL_isNULL (defineExtensionGetter_baseline_5F_intermediate_5F_NULL_isNULL, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_instruction_BitTestSkip isSkippingInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                                 C_Compiler * /* inCompiler */
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GALGAS_bool (true) ;
//---
  return result_outIsSkipping ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction (void) {
  enterExtensionGetter_isSkippingInstruction (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip.mSlotID,
                                              extensionGetter_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction (defineExtensionGetter_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_GOTO nextInstructionIsReachable'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_GOTO_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_GOTO_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO.mSlotID,
                                                   extensionGetter_baseline_5F_intermediate_5F_GOTO_nextInstructionIsReachable) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_GOTO_nextInstructionIsReachable (defineExtensionGetter_baseline_5F_intermediate_5F_GOTO_nextInstructionIsReachable, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_JUMP nextInstructionIsReachable'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_JUMP_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_JUMP_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP.mSlotID,
                                                   extensionGetter_baseline_5F_intermediate_5F_JUMP_nextInstructionIsReachable) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_JUMP_nextInstructionIsReachable (defineExtensionGetter_baseline_5F_intermediate_5F_JUMP_nextInstructionIsReachable, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_END_ROUTINE nextInstructionIsReachable'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                                    C_Compiler * /* inCompiler */
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE.mSlotID,
                                                   extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_nextInstructionIsReachable) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_nextInstructionIsReachable (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_nextInstructionIsReachable, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_instruction_literalOperation nextInstructionIsReachable'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                                           C_Compiler * /* inCompiler */
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = object ;
  result_outIsReachable = GALGAS_bool (kIsNotEqual, temp_0.getter_mInstruction (HERE).objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 126)))) ;
//---
  return result_outIsReachable ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_baseline_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                                   extensionGetter_baseline_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable (defineExtensionGetter_baseline_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_GOTO enterReferencedLabel'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_GOTO_enterReferencedLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_GOTO * object = (const cPtr_baseline_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_GOTO) ;
  const GALGAS_baseline_5F_intermediate_5F_GOTO temp_0 = object ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.getter_mTargetLabel (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 143)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_GOTO_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_GOTO_enterReferencedLabel) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_GOTO_enterReferencedLabel (defineExtensionMethod_baseline_5F_intermediate_5F_GOTO_enterReferencedLabel, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_JUMP enterReferencedLabel'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_JUMP_enterReferencedLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_JUMP * object = (const cPtr_baseline_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JUMP) ;
  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_0 = object ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.getter_mTargetLabel (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 150)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_JUMP_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_JUMP_enterReferencedLabel) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_JUMP_enterReferencedLabel (defineExtensionMethod_baseline_5F_intermediate_5F_JUMP_enterReferencedLabel, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_CALL enterReferencedLabel'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_CALL_enterReferencedLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_CALL * object = (const cPtr_baseline_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_CALL) ;
  const GALGAS_baseline_5F_intermediate_5F_CALL temp_0 = object ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.getter_mTargetLabel (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 157)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_CALL_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_CALL_enterReferencedLabel) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_CALL_enterReferencedLabel (defineExtensionMethod_baseline_5F_intermediate_5F_CALL_enterReferencedLabel, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_JSR enterReferencedLabel'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_JSR_enterReferencedLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_JSR * object = (const cPtr_baseline_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JSR) ;
  const GALGAS_baseline_5F_intermediate_5F_JSR temp_0 = object ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.getter_mTargetLabel (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 164)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_JSR_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_JSR_enterReferencedLabel) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_JSR_enterReferencedLabel (defineExtensionMethod_baseline_5F_intermediate_5F_JSR_enterReferencedLabel, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_incDecRegisterInCondition enterReferencedLabel'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                        GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_0 = object ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.getter_mTargetLabel (HERE)  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 171)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel (defineExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_LABEL defineLabel'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                     GALGAS_baselineSymbolTableForOptimizations & ioArgument_ioRoutineSymbolTable,
                                                                                     const GALGAS_uint constinArgument_inLineIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
  {
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = object ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.getter_mLabel (HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 191)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel (void) {
  enterExtensionMethod_defineLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                    extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'findBaselineFirstInstructionFromAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_findBaselineFirstInstructionFromAddress (const GALGAS_uint constinArgument_inLineIndex,
                                                      const GALGAS_baseline_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                      GALGAS_baseline_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  GALGAS_uint var_currentAddress_7914 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 203)) ;
  GALGAS_bool var_found_8067 = GALGAS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 205)).isValid ()) {
    uint32_t variant_8082 = constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 205)).uintValue () ;
    bool loop_8082 = true ;
    while (loop_8082) {
      loop_8082 = GALGAS_bool (kIsStrictInf, var_currentAddress_7914.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 206)))).operator_and (var_found_8067.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 206)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 206)).isValid () ;
      if (loop_8082) {
        loop_8082 = GALGAS_bool (kIsStrictInf, var_currentAddress_7914.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 206)))).operator_and (var_found_8067.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 206)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 206)).boolValue () ;
      }
      if (loop_8082 && (0 == variant_8082)) {
        loop_8082 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 205)) ;
      }
      if (loop_8082) {
        variant_8082 -- ;
        if (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7914, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 208)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_baseline_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7914, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 208)).ptr ())) {
            GALGAS_baseline_5F_intermediate_5F_actualInstruction cast_8333_instr ((cPtr_baseline_5F_intermediate_5F_actualInstruction *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7914, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 208)).ptr ()) ;
            outArgument_outFirstInstruction = cast_8333_instr ;
            var_found_8067 = GALGAS_bool (true) ;
          }else{
            var_currentAddress_7914.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 213)) ;
          }
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'findBaselineFirstInstructionOrLabelFromAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_findBaselineFirstInstructionOrLabelFromAddress (const GALGAS_uint constinArgument_inLineIndex,
                                                             const GALGAS_baseline_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                             GALGAS_baseline_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                             GALGAS_stringset & outArgument_outReachedLabelSet,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_optimizations.galgas", 225)) ;
  GALGAS_uint var_currentAddress_8844 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 229)) ;
  GALGAS_bool var_found_8997 = GALGAS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 231)).isValid ()) {
    uint32_t variant_9012 = constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 231)).uintValue () ;
    bool loop_9012 = true ;
    while (loop_9012) {
      loop_9012 = GALGAS_bool (kIsStrictInf, var_currentAddress_8844.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 232)))).operator_and (var_found_8997.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 232)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 232)).isValid () ;
      if (loop_9012) {
        loop_9012 = GALGAS_bool (kIsStrictInf, var_currentAddress_8844.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 232)))).operator_and (var_found_8997.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 232)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 232)).boolValue () ;
      }
      if (loop_9012 && (0 == variant_9012)) {
        loop_9012 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 231)) ;
      }
      if (loop_9012) {
        variant_9012 -- ;
        if (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8844, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_baseline_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8844, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).ptr ())) {
            GALGAS_baseline_5F_intermediate_5F_actualInstruction cast_9263_instr ((cPtr_baseline_5F_intermediate_5F_actualInstruction *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8844, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).ptr ()) ;
            outArgument_outFirstInstruction = cast_9263_instr ;
            var_found_8997 = GALGAS_bool (true) ;
          }else if (NULL != dynamic_cast <const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8844, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).ptr ())) {
            GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE cast_9371_instr ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8844, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).ptr ()) ;
            outArgument_outFirstInstruction = cast_9371_instr ;
            var_found_8997 = GALGAS_bool (true) ;
          }else if (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8844, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL) {
            GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL cast_9480_instr ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8844, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).ptr ()) ;
            outArgument_outFirstInstruction = cast_9480_instr ;
            outArgument_outReachedLabelSet.addAssign_operation (cast_9480_instr.getter_mLabel (SOURCE_FILE ("baseline_optimizations.galgas", 243)).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 243))  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 243)) ;
            var_currentAddress_8844.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 244)) ;
          }else{
            var_currentAddress_8844.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 246)) ;
          }
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'perform_baseline_optimizations'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_perform_5F_baseline_5F_optimizations (GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 521)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 521)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 521)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("CODE OPTIMIZATION").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 522)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 522)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 522)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 523)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 523)) ;
  GALGAS_baselineSymbolTableForOptimizations var_symbolTable_20776 = GALGAS_baselineSymbolTableForOptimizations::constructor_emptyMap (SOURCE_FILE ("baseline_optimizations.galgas", 525)) ;
  cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_20865 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
  GALGAS_uint index_20831 ((uint32_t) 0) ;
  while (enumerator_20865.hasCurrentObject ()) {
    callExtensionMethod_defineLabel ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_20865.current_mInstruction (HERE).ptr (), var_symbolTable_20776, index_20831, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 527)) ;
    enumerator_20865.gotoNextObject () ;
    index_20831.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 526)) ;
  }
  GALGAS_bool var_optimizationsDone_21025 = GALGAS_bool (true) ;
  GALGAS_uint var_iteration_21050 = GALGAS_uint ((uint32_t) 0U) ;
  if (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 532)).isValid ()) {
    uint32_t variant_21061 = ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 532)).uintValue () ;
    bool loop_21061 = true ;
    while (loop_21061) {
      loop_21061 = var_optimizationsDone_21025.isValid () ;
      if (loop_21061) {
        loop_21061 = var_optimizationsDone_21025.boolValue () ;
      }
      if (loop_21061 && (0 == variant_21061)) {
        loop_21061 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 532)) ;
      }
      if (loop_21061) {
        variant_21061 -- ;
        var_optimizationsDone_21025 = GALGAS_bool (false) ;
        var_iteration_21050.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 536)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Pass ").add_operation (var_iteration_21050.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 537)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 537)) ;
        cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_21307 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        GALGAS_uint index_21273 ((uint32_t) 0) ;
        while (enumerator_21307.hasCurrentObject ()) {
          if (enumerator_21307.current_mInstruction (HERE).isValid ()) {
            if (enumerator_21307.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) {
              GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE cast_21402_inst ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) enumerator_21307.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeBEGIN_5F_ROUTINE ((const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) cast_21402_inst.ptr (), index_21273, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_21025, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 542)) ;
            }else if (enumerator_21307.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO) {
              GALGAS_baseline_5F_intermediate_5F_GOTO cast_21563_inst ((cPtr_baseline_5F_intermediate_5F_GOTO *) enumerator_21307.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeGOTO ((const cPtr_baseline_5F_intermediate_5F_GOTO *) cast_21563_inst.ptr (), var_symbolTable_20776, index_21273, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_21025, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 544)) ;
            }else if (enumerator_21307.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP) {
              GALGAS_baseline_5F_intermediate_5F_JUMP cast_21728_inst ((cPtr_baseline_5F_intermediate_5F_JUMP *) enumerator_21307.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeJUMP ((const cPtr_baseline_5F_intermediate_5F_JUMP *) cast_21728_inst.ptr (), var_symbolTable_20776, index_21273, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_21025, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 546)) ;
            }else if (enumerator_21307.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL) {
              GALGAS_baseline_5F_intermediate_5F_CALL cast_21893_inst ((cPtr_baseline_5F_intermediate_5F_CALL *) enumerator_21307.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeCALL ((const cPtr_baseline_5F_intermediate_5F_CALL *) cast_21893_inst.ptr (), var_symbolTable_20776, index_21273, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_21025, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 548)) ;
            }else if (enumerator_21307.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR) {
              GALGAS_baseline_5F_intermediate_5F_JSR cast_22057_inst ((cPtr_baseline_5F_intermediate_5F_JSR *) enumerator_21307.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeJSR ((const cPtr_baseline_5F_intermediate_5F_JSR *) cast_22057_inst.ptr (), var_symbolTable_20776, index_21273, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_21025, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 550)) ;
            }else if (enumerator_21307.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition) {
              GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition cast_22242_inst ((cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) enumerator_21307.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeTestDecInc ((const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) cast_22242_inst.ptr (), var_symbolTable_20776, index_21273, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_21025, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 552)) ;
            }
          }
          enumerator_21307.gotoNextObject () ;
          index_21273.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 539)) ;
        }
        GALGAS_stringset var_referencedLabels_22456 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_optimizations.galgas", 557)) ;
        cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_22521 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        while (enumerator_22521.hasCurrentObject ()) {
          callExtensionMethod_enterReferencedLabel ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_22521.current_mInstruction (HERE).ptr (), var_referencedLabels_22456, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 559)) ;
          enumerator_22521.gotoNextObject () ;
        }
        cEnumerator_baselineSymbolTableForOptimizations enumerator_22620 (var_symbolTable_20776, kENUMERATION_UP) ;
        while (enumerator_22620.hasCurrentObject ()) {
          enumGalgasBool test_0 = kBoolTrue ;
          if (kBoolTrue == test_0) {
            test_0 = var_referencedLabels_22456.getter_hasKey (enumerator_22620.current_lkey (HERE).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 562)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 562)).operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 562)).boolEnum () ;
            if (kBoolTrue == test_0) {
              GALGAS_uint var_definitionLine_22745 ;
              var_symbolTable_20776.method_searchKey (enumerator_22620.current_lkey (HERE), var_definitionLine_22745, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 563)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (var_definitionLine_22745.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)).add_operation (GALGAS_string (": unreferenced label '"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)).add_operation (enumerator_22620.current_lkey (HERE).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)).add_operation (GALGAS_string ("' is deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)) ;
              {
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 565)), var_definitionLine_22745, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 565)) ;
              }
              {
              GALGAS_uint joker_23019 ; // Joker input parameter
              var_symbolTable_20776.setter_removeKey (enumerator_22620.current_lkey (HERE), joker_23019, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 566)) ;
              }
            }
          }
          enumerator_22620.gotoNextObject () ;
        }
        GALGAS_bool var_reachable_23088 = GALGAS_bool (true) ;
        GALGAS_bool var_skippingInstruction_23125 = GALGAS_bool (false) ;
        GALGAS_bool var_previousWasSkippingInstruction_23174 = GALGAS_bool (false) ;
        cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_23224 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        GALGAS_uint index_23190 ((uint32_t) 0) ;
        while (enumerator_23224.hasCurrentObject ()) {
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = var_reachable_23088.operator_or (var_previousWasSkippingInstruction_23174 COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 574)).boolEnum () ;
            if (kBoolTrue == test_1) {
              var_reachable_23088 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23224.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 575)) ;
              var_previousWasSkippingInstruction_23174 = var_skippingInstruction_23125 ;
              var_skippingInstruction_23125 = callExtensionGetter_isSkippingInstruction ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23224.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 577)) ;
            }
          }
          if (kBoolFalse == test_1) {
            GALGAS_bool var_isLABEL_23522 = callExtensionGetter_isLABEL ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23224.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 579)) ;
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = var_isLABEL_23522.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 580)).operator_and (callExtensionGetter_isNULL ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23224.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 580)).operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 580)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 580)).boolEnum () ;
              if (kBoolTrue == test_2) {
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (index_23190.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 581)).add_operation (GALGAS_string (": dead code is deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 581)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 581)) ;
                {
                ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 582)), index_23190, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 582)) ;
                }
              }
            }
            if (kBoolFalse == test_2) {
              enumGalgasBool test_3 = kBoolTrue ;
              if (kBoolTrue == test_3) {
                test_3 = var_isLABEL_23522.boolEnum () ;
                if (kBoolTrue == test_3) {
                  var_reachable_23088 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23224.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 584)) ;
                  var_previousWasSkippingInstruction_23174 = GALGAS_bool (false) ;
                  var_skippingInstruction_23125 = GALGAS_bool (false) ;
                }
              }
            }
          }
          enumerator_23224.gotoNextObject () ;
          index_23190.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 573)) ;
        }
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = var_optimizationsDone_21025.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 590)).boolEnum () ;
          if (kBoolTrue == test_4) {
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No optimization\n"
              "\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 591)) ;
            GALGAS_uint var_currentAddress_24144 = GALGAS_uint ((uint32_t) 0U) ;
            cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_24192 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
            while (enumerator_24192.hasCurrentObject ()) {
              callExtensionMethod_setCurrentAddress ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24192.current_mInstruction (HERE).ptr (), var_currentAddress_24144, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 595)) ;
              enumerator_24192.gotoNextObject () ;
            }
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Minimum code size: ").add_operation (var_currentAddress_24144.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 597)).add_operation (GALGAS_string (" words\n"
              "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 597)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 597)) ;
          }
        }
      }
    }
  }
}


