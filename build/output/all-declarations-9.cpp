#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-9.h"


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_incDecRegisterInCondition::GALGAS_midrange_5F_incDecRegisterInCondition (void) :
GALGAS_midrange_5F_conditionExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_incDecRegisterInCondition::GALGAS_midrange_5F_incDecRegisterInCondition (const cPtr_midrange_5F_incDecRegisterInCondition * inSourcePtr) :
GALGAS_midrange_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_incDecRegisterInCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_midrange_5F_incDecRegisterInCondition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_incDecRegisterInCondition * p = (const cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_midrange_5F_incDecRegisterInCondition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_incDecRegisterInCondition::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_incDecRegisterInCondition * p = (const cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    result = p->mProperty_mIncrement ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_midrange_5F_incDecRegisterInCondition::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIncrement ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_incDecRegisterInCondition::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_incDecRegisterInCondition * p = (const cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    result = p->mProperty_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_midrange_5F_incDecRegisterInCondition::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_incDecRegisterInCondition::getter_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_incDecRegisterInCondition * p = (const cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    result = p->mProperty_mBranchIfZero ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_midrange_5F_incDecRegisterInCondition::getter_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBranchIfZero ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @midrange_incDecRegisterInCondition class                             *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_incDecRegisterInCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_incDecRegisterInCondition (mProperty_mRegisterExpression, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination, mProperty_mBranchIfZero COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @midrange_incDecRegisterInCondition type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition ("midrange_incDecRegisterInCondition",
                                                              & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_incDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_incDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_incDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (void) :
GALGAS_midrange_5F_conditionExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * inSourcePtr) :
GALGAS_midrange_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::constructor_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                                                      const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_bitNumberExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    result = p->mProperty_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                        Pointer class for @midrange_bitTest_in_structured_if_condition class                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                                                  const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (THERE),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mBitNumber (in_mBitNumber) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (mProperty_mRegisterExpression, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @midrange_bitTest_in_structured_if_condition type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ("midrange_bitTest_in_structured_if_condition",
                                                                                   & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@registerExpression resolveMidrangeAccess'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_registerExpression_resolveMidrangeAccess> gExtensionMethodTable_registerExpression_resolveMidrangeAccess ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_resolveMidrangeAccess (const int32_t inClassIndex,
                                                 extensionMethodSignature_registerExpression_resolveMidrangeAccess inMethod) {
  gExtensionMethodTable_registerExpression_resolveMidrangeAccess.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_sint_36__34_ var_offset_626 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mOffset.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_626, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 21)) ;
  ioArgument_ioUsedRegisters.addAssign_operation (object->mProperty_mRegisterName.mProperty_string  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 22)) ;
  GALGAS_string var_assemblyString_740 = object->mProperty_mRegisterName.mProperty_string ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_offset_626.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_assemblyString_740.plusAssign_operation(GALGAS_string (" + ").add_operation (var_offset_626.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 26)).getter_hexString (SOURCE_FILE ("midrange_intermediate_classes.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 26)) ;
  }
  GALGAS_uintlist var_registerAddressList_941 ;
  GALGAS_uint var_size_961 ;
  GALGAS_registerProtection var_protection_1010 ;
  GALGAS_string joker_989 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (object->mProperty_mRegisterName, var_registerAddressList_941, var_size_961, outArgument_outBitSliceTable, joker_989, var_protection_1010, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 29)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, object->mProperty_mRegisterName, GALGAS_bool (true), var_protection_1010, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 37)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsSupOrEqual, var_offset_626.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 39)).objectCompare (var_size_961)).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfOffsetExpression, GALGAS_string ("maximum index value is ").add_operation (var_size_961.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 40)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 40)), fixItArray2  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 40)) ;
  }
  GALGAS_uintlist var_acceptableBanks_1265 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("midrange_intermediate_classes.galgas", 43)) ;
  cEnumerator_uintlist enumerator_1321 (var_registerAddressList_941, kENUMERATION_UP) ;
  while (enumerator_1321.hasCurrentObject ()) {
    var_acceptableBanks_1265.addAssign_operation (enumerator_1321.current_mValue (HERE).right_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 45))  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 45)) ;
    enumerator_1321.gotoNextObject () ;
  }
  GALGAS_uint var_registerAddress_1395 = GALGAS_uint ((uint32_t) 0U) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_intermediate_classes.galgas", 49)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_uint var_bank_1518 = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_bool var_ok_1535 = GALGAS_bool (true) ;
    if (constinArgument_inTotalBankCount.isValid ()) {
      uint32_t variant_1551 = constinArgument_inTotalBankCount.uintValue () ;
      bool loop_1551 = true ;
      while (loop_1551) {
        loop_1551 = GALGAS_bool (kIsStrictInf, var_bank_1518.objectCompare (constinArgument_inTotalBankCount)).operator_and (var_ok_1535 COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 53)).isValid () ;
        if (loop_1551) {
          loop_1551 = GALGAS_bool (kIsStrictInf, var_bank_1518.objectCompare (constinArgument_inTotalBankCount)).operator_and (var_ok_1535 COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 53)).boolValue () ;
        }
        if (loop_1551 && (0 == variant_1551)) {
          loop_1551 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_intermediate_classes.galgas", 53)) ;
        }
        if (loop_1551) {
          variant_1551 -- ;
          var_ok_1535 = GALGAS_bool (false) ;
          cEnumerator_uintlist enumerator_1664 (var_registerAddressList_941, kENUMERATION_UP) ;
          bool bool_4 = var_ok_1535.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 55)).isValidAndTrue () ;
          if (enumerator_1664.hasCurrentObject () && bool_4) {
            while (enumerator_1664.hasCurrentObject () && bool_4) {
              var_ok_1535 = GALGAS_bool (kIsSupOrEqual, enumerator_1664.current_mValue (HERE).objectCompare (var_bank_1518.multiply_operation (GALGAS_uint ((uint32_t) 128U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 56)))).operator_and (GALGAS_bool (kIsStrictInf, enumerator_1664.current_mValue (HERE).objectCompare (var_bank_1518.multiply_operation (GALGAS_uint ((uint32_t) 128U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 56)).add_operation (GALGAS_uint ((uint32_t) 128U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 56)))) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 56)) ;
              var_registerAddress_1395 = enumerator_1664.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 57)) ;
              enumerator_1664.gotoNextObject () ;
              if (enumerator_1664.hasCurrentObject ()) {
                bool_4 = var_ok_1535.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 55)).isValidAndTrue () ;
              }
            }
          }
          var_bank_1518.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 59)) ;
        }
      }
    }
    const enumGalgasBool test_5 = var_ok_1535.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 61)).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_string var_acceptableBankMessage_1877 = GALGAS_string::makeEmptyString () ;
      cEnumerator_uintlist enumerator_1919 (var_registerAddressList_941, kENUMERATION_UP) ;
      while (enumerator_1919.hasCurrentObject ()) {
        var_acceptableBankMessage_1877.plusAssign_operation(enumerator_1919.current_mValue (HERE).right_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 64)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 64)) ;
        if (enumerator_1919.hasNextObject ()) {
          var_acceptableBankMessage_1877.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 65)) ;
        }
        enumerator_1919.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mRegisterName.getter_location (SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)), GALGAS_string ("as no bank is currently known, the '").add_operation (object->mProperty_mRegisterName.getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)).add_operation (GALGAS_string ("' register accessible from bank "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)).add_operation (var_acceptableBankMessage_1877, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)).add_operation (GALGAS_string (", but should be able to be accessed from any bank setting"), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)), fixItArray6  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)) ;
    }
  }else if (kBoolFalse == test_3) {
    GALGAS_bool var_found_2263 = GALGAS_bool (false) ;
    cEnumerator_uintlist enumerator_2306 (var_registerAddressList_941, kENUMERATION_UP) ;
    bool bool_7 = var_found_2263.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 71)).isValidAndTrue () ;
    if (enumerator_2306.hasCurrentObject () && bool_7) {
      while (enumerator_2306.hasCurrentObject () && bool_7) {
        var_found_2263 = GALGAS_bool (kIsSupOrEqual, enumerator_2306.current_mValue (HERE).objectCompare (constinArgument_inCurrentBank.multiply_operation (GALGAS_uint ((uint32_t) 128U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 72)))).operator_and (GALGAS_bool (kIsStrictInf, enumerator_2306.current_mValue (HERE).objectCompare (constinArgument_inCurrentBank.multiply_operation (GALGAS_uint ((uint32_t) 128U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 72)).add_operation (GALGAS_uint ((uint32_t) 128U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 72)))) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 72)) ;
        var_registerAddress_1395 = enumerator_2306.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 73)) ;
        enumerator_2306.gotoNextObject () ;
        if (enumerator_2306.hasCurrentObject ()) {
          bool_7 = var_found_2263.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 71)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_8 = var_found_2263.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 75)).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_string var_acceptableBankMessage_2518 = GALGAS_string::makeEmptyString () ;
      cEnumerator_uintlist enumerator_2560 (var_registerAddressList_941, kENUMERATION_UP) ;
      while (enumerator_2560.hasCurrentObject ()) {
        var_acceptableBankMessage_2518.plusAssign_operation(enumerator_2560.current_mValue (HERE).right_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 78)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 78)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 78)) ;
        if (enumerator_2560.hasNextObject ()) {
          var_acceptableBankMessage_2518.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 79)) ;
        }
        enumerator_2560.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (object->mProperty_mRegisterName.getter_location (SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)), GALGAS_string ("the '").add_operation (object->mProperty_mRegisterName.getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (GALGAS_string ("' register cannot be accessed from bank "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (constinArgument_inCurrentBank.getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (GALGAS_string (" (valid bank setting: "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (var_acceptableBankMessage_2518, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)), fixItArray9  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)) ;
    }
  }
  outArgument_outIPICregisterDescription = GALGAS_midrange_5F_intermediate_5F_registerExpression::constructor_new (var_assemblyString_740, var_registerAddress_1395.add_operation (var_offset_626.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 87))  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 85)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerExpression_resolveMidrangeAccess (void) {
  enterExtensionMethod_resolveMidrangeAccess (kTypeDescriptor_GALGAS_registerExpression.mSlotID,
                                              extensionMethod_registerExpression_resolveMidrangeAccess) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_registerExpression_resolveMidrangeAccess (void) {
  gExtensionMethodTable_registerExpression_resolveMidrangeAccess.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerExpression_resolveMidrangeAccess (defineExtensionMethod_registerExpression_resolveMidrangeAccess,
                                                                     freeExtensionMethod_registerExpression_resolveMidrangeAccess) ;

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_banksel_5F_register::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::getter_mWarningOnUselessBanksel (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
    result = p->mProperty_mWarningOnUselessBanksel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_banksel_5F_register::getter_mWarningOnUselessBanksel (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWarningOnUselessBanksel ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @pic18Instruction_banksel_register class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_banksel_5F_register::cPtr_pic_31__38_Instruction_5F_banksel_5F_register (const GALGAS_location & in_mInstructionLocation,
                                                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                        const GALGAS_bool & in_mWarningOnUselessBanksel
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mWarningOnUselessBanksel (in_mWarningOnUselessBanksel) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_banksel_5F_register::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_banksel_5F_register (mProperty_mInstructionLocation, mProperty_mRegisterExpression, mProperty_mWarningOnUselessBanksel COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @pic18Instruction_banksel_register type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ("pic18Instruction_banksel_register",
                                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_savebank::GALGAS_pic_31__38_Instruction_5F_savebank (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_savebank::GALGAS_pic_31__38_Instruction_5F_savebank (const cPtr_pic_31__38_Instruction_5F_savebank * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_savebank) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_savebank::getter_mRegister (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_savebank * p = (const cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    result = p->mProperty_mRegister ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_savebank::getter_mRegister (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegister ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_savebank::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_savebank * p = (const cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList cPtr_pic_31__38_Instruction_5F_savebank::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_Instruction_5F_savebank::getter_mEndOfSaveBankInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_savebank * p = (const cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    result = p->mProperty_mEndOfSaveBankInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_pic_31__38_Instruction_5F_savebank::getter_mEndOfSaveBankInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfSaveBankInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @pic18Instruction_savebank class                                  *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_savebank::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_savebank (mProperty_mInstructionLocation, mProperty_mRegister, mProperty_mInstructionList, mProperty_mEndOfSaveBankInstruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @pic18Instruction_savebank type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ("pic18Instruction_savebank",
                                                           & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_savebank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_savebank::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_savebank (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FDA::GALGAS_pic_31__38_Instruction_5F_FDA (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FDA::GALGAS_pic_31__38_Instruction_5F_FDA (const cPtr_pic_31__38_Instruction_5F_FDA * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_FDA) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GALGAS_pic_31__38_Instruction_5F_FDA::getter_mInstruction_5F_FDA_5F_base_5F_code (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FDA * p = (const cPtr_pic_31__38_Instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
    result = p->mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST cPtr_pic_31__38_Instruction_5F_FDA::getter_mInstruction_5F_FDA_5F_base_5F_code (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_FDA::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FDA * p = (const cPtr_pic_31__38_Instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_FDA::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_FDA::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FDA * p = (const cPtr_pic_31__38_Instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
    result = p->mProperty_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_FDA::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @pic18Instruction_FDA class                                    *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_FDA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_FDA (mProperty_mInstructionLocation, mProperty_mInstruction_5F_FDA_5F_base_5F_code, mProperty_mRegisterExpression, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @pic18Instruction_FDA type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA ("pic18Instruction_FDA",
                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_FDA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_FDA::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_FDA (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FA::GALGAS_pic_31__38_Instruction_5F_FA (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FA::GALGAS_pic_31__38_Instruction_5F_FA (const cPtr_pic_31__38_Instruction_5F_FA * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_FA) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_FA_5F_instruction_5F_base_5F_code GALGAS_pic_31__38_Instruction_5F_FA::getter_mFAinstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_FA_5F_instruction_5F_base_5F_code result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FA * p = (const cPtr_pic_31__38_Instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FA) ;
    result = p->mProperty_mFAinstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_FA_5F_instruction_5F_base_5F_code cPtr_pic_31__38_Instruction_5F_FA::getter_mFAinstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFAinstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_FA::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FA * p = (const cPtr_pic_31__38_Instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FA) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_FA::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @pic18Instruction_FA class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_FA::cPtr_pic_31__38_Instruction_5F_FA (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_FA_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                      const GALGAS_registerExpression & in_mRegisterExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mFAinstruction (in_mFAinstruction),
mProperty_mRegisterExpression (in_mRegisterExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_FA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_FA (mProperty_mInstructionLocation, mProperty_mFAinstruction, mProperty_mRegisterExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @pic18Instruction_FA type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA ("pic18Instruction_FA",
                                                     & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_FA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_FA::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_FA (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_MOVFF::GALGAS_pic_31__38_Instruction_5F_MOVFF (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_MOVFF::GALGAS_pic_31__38_Instruction_5F_MOVFF (const cPtr_pic_31__38_Instruction_5F_MOVFF * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_MOVFF::getter_mSourceRegisterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_MOVFF * p = (const cPtr_pic_31__38_Instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
    result = p->mProperty_mSourceRegisterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_MOVFF::getter_mSourceRegisterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_MOVFF::getter_mDestinationRegisterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_MOVFF * p = (const cPtr_pic_31__38_Instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
    result = p->mProperty_mDestinationRegisterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_MOVFF::getter_mDestinationRegisterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDestinationRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @pic18Instruction_MOVFF class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_MOVFF::cPtr_pic_31__38_Instruction_5F_MOVFF (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_registerExpression & in_mSourceRegisterName,
                                                                            const GALGAS_registerExpression & in_mDestinationRegisterName
                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mSourceRegisterName (in_mSourceRegisterName),
mProperty_mDestinationRegisterName (in_mDestinationRegisterName) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_MOVFF::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_MOVFF (mProperty_mInstructionLocation, mProperty_mSourceRegisterName, mProperty_mDestinationRegisterName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @pic18Instruction_MOVFF type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF ("pic18Instruction_MOVFF",
                                                        & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_MOVFF::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_MOVFF::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_MOVFF (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FBA::GALGAS_pic_31__38_Instruction_5F_FBA (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FBA::GALGAS_pic_31__38_Instruction_5F_FBA (const cPtr_pic_31__38_Instruction_5F_FBA * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_FBA) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bit_5F_oriented_5F_op GALGAS_pic_31__38_Instruction_5F_FBA::getter_mBitOrientedOp (UNUSED_LOCATION_ARGS) const {
  GALGAS_bit_5F_oriented_5F_op result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FBA * p = (const cPtr_pic_31__38_Instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
    result = p->mProperty_mBitOrientedOp ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bit_5F_oriented_5F_op cPtr_pic_31__38_Instruction_5F_FBA::getter_mBitOrientedOp (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitOrientedOp ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_FBA::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FBA * p = (const cPtr_pic_31__38_Instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_FBA::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression GALGAS_pic_31__38_Instruction_5F_FBA::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_bitNumberExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FBA * p = (const cPtr_pic_31__38_Instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
    result = p->mProperty_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression cPtr_pic_31__38_Instruction_5F_FBA::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @pic18Instruction_FBA class                                    *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_FBA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_FBA (mProperty_mInstructionLocation, mProperty_mBitOrientedOp, mProperty_mRegisterExpression, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @pic18Instruction_FBA type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA ("pic18Instruction_FBA",
                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_FBA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_FBA::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_FBA (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (void) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * inSourcePtr) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_if_5F_semi_5F_colon_5F_op GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::getter_mOpCode (UNUSED_LOCATION_ARGS) const {
  GALGAS_if_5F_semi_5F_colon_5F_op result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
    result = p->mProperty_mOpCode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_if_5F_semi_5F_colon_5F_op cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::getter_mOpCode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOpCode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @pic18Instruction_IF_FA_SEMI_COLON class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (const GALGAS_location & in_mInstructionLocation,
                                                                                                                    const GALGAS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                                                                                    const GALGAS_if_5F_semi_5F_colon_5F_op & in_mOpCode,
                                                                                                                    const GALGAS_registerExpression & in_mRegisterExpression
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mEmbeddedInstruction COMMA_THERE),
mProperty_mOpCode (in_mOpCode),
mProperty_mRegisterExpression (in_mRegisterExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (mProperty_mInstructionLocation, mProperty_mEmbeddedInstruction, mProperty_mOpCode, mProperty_mRegisterExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @pic18Instruction_IF_FA_SEMI_COLON type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON ("pic18Instruction_IF_FA_SEMI_COLON",
                                                                            & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest (void) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * inSourcePtr) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::getter_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
    result = p->mProperty_mSkipIfSet ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::getter_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSkipIfSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_bitNumberExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
    result = p->mProperty_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @pic18Instruction_IF_BitTest class                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest (mProperty_mInstructionLocation, mProperty_mEmbeddedInstruction, mProperty_mSkipIfSet, mProperty_mRegisterExpression, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @pic18Instruction_IF_BitTest type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest ("pic18Instruction_IF_BitTest",
                                                                & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec (void) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * inSourcePtr) :
GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    result = p->mProperty_mIncrement ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIncrement ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::getter_mSkipIfZero (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    result = p->mProperty_mSkipIfZero ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::getter_mSkipIfZero (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSkipIfZero ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    result = p->mProperty_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @pic18Instruction_IF_IncDec class                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec (mProperty_mInstructionLocation, mProperty_mEmbeddedInstruction, mProperty_mIncrement, mProperty_mSkipIfZero, mProperty_mRegisterExpression, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @pic18Instruction_IF_IncDec type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec ("pic18Instruction_IF_IncDec",
                                                               & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RegisterTestCondition::GALGAS_pic_31__38_RegisterTestCondition (void) :
GALGAS_pic_31__38_ConditionExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RegisterTestCondition::GALGAS_pic_31__38_RegisterTestCondition (const cPtr_pic_31__38_RegisterTestCondition * inSourcePtr) :
GALGAS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_RegisterTestCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RegisterTestCondition GALGAS_pic_31__38_RegisterTestCondition::constructor_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                  const GALGAS_bool & inAttribute_mBranchIfZero
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterTestCondition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mBranchIfZero.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_RegisterTestCondition (inAttribute_mRegisterExpression, inAttribute_mBranchIfZero COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_RegisterTestCondition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_RegisterTestCondition * p = (const cPtr_pic_31__38_RegisterTestCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterTestCondition) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_RegisterTestCondition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_RegisterTestCondition::getter_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_RegisterTestCondition * p = (const cPtr_pic_31__38_RegisterTestCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterTestCondition) ;
    result = p->mProperty_mBranchIfZero ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_RegisterTestCondition::getter_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBranchIfZero ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @pic18RegisterTestCondition class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_RegisterTestCondition::cPtr_pic_31__38_RegisterTestCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                              const GALGAS_bool & in_mBranchIfZero
                                                                              COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (THERE),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mBranchIfZero (in_mBranchIfZero) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_RegisterTestCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_RegisterTestCondition (mProperty_mRegisterExpression, mProperty_mBranchIfZero COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @pic18RegisterTestCondition type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition ("pic18RegisterTestCondition",
                                                         & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_RegisterTestCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_RegisterTestCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_RegisterTestCondition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RegisterComparisonCondition::GALGAS_pic_31__38_RegisterComparisonCondition (void) :
GALGAS_pic_31__38_ConditionExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RegisterComparisonCondition::GALGAS_pic_31__38_RegisterComparisonCondition (const cPtr_pic_31__38_RegisterComparisonCondition * inSourcePtr) :
GALGAS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_RegisterComparisonCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RegisterComparisonCondition GALGAS_pic_31__38_RegisterComparisonCondition::constructor_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                              const GALGAS_pic_31__38_RegisterComparison & inAttribute_mComparison
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterComparisonCondition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mComparison.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_RegisterComparisonCondition (inAttribute_mRegisterExpression, inAttribute_mComparison COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_RegisterComparisonCondition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_RegisterComparisonCondition * p = (const cPtr_pic_31__38_RegisterComparisonCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonCondition) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_RegisterComparisonCondition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RegisterComparison GALGAS_pic_31__38_RegisterComparisonCondition::getter_mComparison (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_RegisterComparison result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_RegisterComparisonCondition * p = (const cPtr_pic_31__38_RegisterComparisonCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonCondition) ;
    result = p->mProperty_mComparison ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RegisterComparison cPtr_pic_31__38_RegisterComparisonCondition::getter_mComparison (UNUSED_LOCATION_ARGS) const {
  return mProperty_mComparison ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @pic18RegisterComparisonCondition class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_RegisterComparisonCondition::cPtr_pic_31__38_RegisterComparisonCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                          const GALGAS_pic_31__38_RegisterComparison & in_mComparison
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (THERE),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mComparison (in_mComparison) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_RegisterComparisonCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_RegisterComparisonCondition (mProperty_mRegisterExpression, mProperty_mComparison COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @pic18RegisterComparisonCondition type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition ("pic18RegisterComparisonCondition",
                                                               & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_RegisterComparisonCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_RegisterComparisonCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_RegisterComparisonCondition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_IncDecRegisterInCondition::GALGAS_pic_31__38_IncDecRegisterInCondition (void) :
GALGAS_pic_31__38_ConditionExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_IncDecRegisterInCondition::GALGAS_pic_31__38_IncDecRegisterInCondition (const cPtr_pic_31__38_IncDecRegisterInCondition * inSourcePtr) :
GALGAS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_IncDecRegisterInCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_IncDecRegisterInCondition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_IncDecRegisterInCondition * p = (const cPtr_pic_31__38_IncDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IncDecRegisterInCondition) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_IncDecRegisterInCondition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_IncDecRegisterInCondition::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_IncDecRegisterInCondition * p = (const cPtr_pic_31__38_IncDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IncDecRegisterInCondition) ;
    result = p->mProperty_mIncrement ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_IncDecRegisterInCondition::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIncrement ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_IncDecRegisterInCondition::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_IncDecRegisterInCondition * p = (const cPtr_pic_31__38_IncDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IncDecRegisterInCondition) ;
    result = p->mProperty_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_IncDecRegisterInCondition::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_IncDecRegisterInCondition::getter_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_IncDecRegisterInCondition * p = (const cPtr_pic_31__38_IncDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IncDecRegisterInCondition) ;
    result = p->mProperty_mBranchIfZero ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_IncDecRegisterInCondition::getter_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBranchIfZero ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @pic18IncDecRegisterInCondition class                               *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_IncDecRegisterInCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_IncDecRegisterInCondition (mProperty_mRegisterExpression, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination, mProperty_mBranchIfZero COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic18IncDecRegisterInCondition type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition ("pic18IncDecRegisterInCondition",
                                                             & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_IncDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_IncDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_IncDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_BitTestInStructuredCondition::GALGAS_pic_31__38_BitTestInStructuredCondition (void) :
GALGAS_pic_31__38_ConditionExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_BitTestInStructuredCondition::GALGAS_pic_31__38_BitTestInStructuredCondition (const cPtr_pic_31__38_BitTestInStructuredCondition * inSourcePtr) :
GALGAS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_BitTestInStructuredCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_BitTestInStructuredCondition GALGAS_pic_31__38_BitTestInStructuredCondition::constructor_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_BitTestInStructuredCondition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_BitTestInStructuredCondition (inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_BitTestInStructuredCondition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_BitTestInStructuredCondition * p = (const cPtr_pic_31__38_BitTestInStructuredCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BitTestInStructuredCondition) ;
    result = p->mProperty_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_BitTestInStructuredCondition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression GALGAS_pic_31__38_BitTestInStructuredCondition::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_bitNumberExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_BitTestInStructuredCondition * p = (const cPtr_pic_31__38_BitTestInStructuredCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BitTestInStructuredCondition) ;
    result = p->mProperty_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression cPtr_pic_31__38_BitTestInStructuredCondition::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @pic18BitTestInStructuredCondition class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_BitTestInStructuredCondition::cPtr_pic_31__38_BitTestInStructuredCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                            const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (THERE),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mBitNumber (in_mBitNumber) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_BitTestInStructuredCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_BitTestInStructuredCondition (mProperty_mRegisterExpression, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @pic18BitTestInStructuredCondition type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition ("pic18BitTestInStructuredCondition",
                                                                & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_BitTestInStructuredCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_BitTestInStructuredCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_BitTestInStructuredCondition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@registerExpression analyzeRegisterExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_registerExpression_analyzeRegisterExpression> gExtensionMethodTable_registerExpression_analyzeRegisterExpression ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzeRegisterExpression (const int32_t inClassIndex,
                                                     extensionMethodSignature_registerExpression_analyzeRegisterExpression inMethod) {
  gExtensionMethodTable_registerExpression_analyzeRegisterExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_sint_36__34_ var_offset_615 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mOffset.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_615, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 19)) ;
  ioArgument_ioUsedRegisters.addAssign_operation (object->mProperty_mRegisterName.mProperty_string  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 20)) ;
  GALGAS_string var_assemblyString_729 = object->mProperty_mRegisterName.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 22)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_offset_615.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_assemblyString_729.plusAssign_operation(GALGAS_string (" + ").add_operation (var_offset_615.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 24)).getter_hexString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 24)) ;
  }
  GALGAS_uint var_registerAddress_869 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_uintlist var_registerAddressList_950 ;
  GALGAS_uint var_size_966 ;
  GALGAS_registerProtection var_protection_1015 ;
  GALGAS_string joker_994 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (object->mProperty_mRegisterName, var_registerAddressList_950, var_size_966, outArgument_outBitSliceTable, joker_994, var_protection_1015, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 28)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, object->mProperty_mRegisterName, constinArgument_inWriteAccess, var_protection_1015, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 36)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_offset_615.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfOffsetExpression, GALGAS_string ("offset (").add_operation (var_offset_615.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 39)).add_operation (GALGAS_string (") should be >= 0"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 39)), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 39)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsSupOrEqual, var_offset_615.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 40)).objectCompare (var_size_966)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfOffsetExpression, GALGAS_string ("this offset is too large: should be lower than ").add_operation (var_size_966.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 41)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 41)) ;
    }
  }
  GALGAS_bool var_found_1369 = GALGAS_bool (false) ;
  cEnumerator_uintlist enumerator_1410 (var_registerAddressList_950, kENUMERATION_UP) ;
  bool bool_5 = var_found_1369.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 45)).isValidAndTrue () ;
  if (enumerator_1410.hasCurrentObject () && bool_5) {
    while (enumerator_1410.hasCurrentObject () && bool_5) {
      var_found_1369 = GALGAS_bool (kIsStrictInf, enumerator_1410.current_mValue (HERE).objectCompare (constinArgument_inAccessBankSplitOffset)).operator_or (GALGAS_bool (kIsSupOrEqual, enumerator_1410.current_mValue (HERE).objectCompare (GALGAS_uint ((uint32_t) 3840U).add_operation (constinArgument_inAccessBankSplitOffset, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 46)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 46)) ;
      var_registerAddress_869 = enumerator_1410.current_mValue (HERE) ;
      enumerator_1410.gotoNextObject () ;
      if (enumerator_1410.hasCurrentObject ()) {
        bool_5 = var_found_1369.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 45)).isValidAndTrue () ;
      }
    }
  }
  GALGAS_bool var_needsBSRaccess_1583 = GALGAS_bool (false) ;
  const enumGalgasBool test_6 = var_found_1369.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 50)).boolEnum () ;
  if (kBoolTrue == test_6) {
    var_needsBSRaccess_1583 = GALGAS_bool (true) ;
    var_registerAddressList_950.method_first (var_registerAddress_869, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 52)) ;
    GALGAS_uint var_neededBank_1707 = var_registerAddress_869.right_shift_operation (GALGAS_uint ((uint32_t) 8U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 53)) ;
    const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_neededBank_1707.objectCompare (constinArgument_inCurrentBank)).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_string var_errorMessage_1799 = GALGAS_string ("Accessing the '").add_operation (object->mProperty_mRegisterName.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 55)).add_operation (GALGAS_string ("' needs the bank selection set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 55)).add_operation (var_neededBank_1707.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 55)) ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, constinArgument_inCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 56)))).boolEnum () ;
      if (kBoolTrue == test_8) {
        var_errorMessage_1799.plusAssign_operation(GALGAS_string (", but current bank selection cannot be known"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 57)) ;
      }else if (kBoolFalse == test_8) {
        var_errorMessage_1799.plusAssign_operation(GALGAS_string (", but current bank selection is set to ").add_operation (constinArgument_inCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 59)) ;
      }
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (object->mProperty_mRegisterName.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 61)), var_errorMessage_1799, fixItArray9  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 61)) ;
    }
  }
  outArgument_outIPICregisterDescription = GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::constructor_new (var_assemblyString_729, var_registerAddress_869.add_operation (var_offset_615.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 67)), var_needsBSRaccess_1583  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 65)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerExpression_analyzeRegisterExpression (void) {
  enterExtensionMethod_analyzeRegisterExpression (kTypeDescriptor_GALGAS_registerExpression.mSlotID,
                                                  extensionMethod_registerExpression_analyzeRegisterExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_registerExpression_analyzeRegisterExpression (void) {
  gExtensionMethodTable_registerExpression_analyzeRegisterExpression.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerExpression_analyzeRegisterExpression (defineExtensionMethod_registerExpression_analyzeRegisterExpression,
                                                                         freeExtensionMethod_registerExpression_analyzeRegisterExpression) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Extension method '@registerExpression analyzeRegisterExpressionWithoutCheckingBank'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_registerExpression_analyzeRegisterExpressionWithoutCheckingBank> gExtensionMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank (const int32_t inClassIndex,
                                                                        extensionMethodSignature_registerExpression_analyzeRegisterExpressionWithoutCheckingBank inMethod) {
  gExtensionMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioUsedRegisters.addAssign_operation (object->mProperty_mRegisterName.mProperty_string  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 81)) ;
  GALGAS_string var_assemblyString_2823 = object->mProperty_mRegisterName.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 83)) ;
  GALGAS_sint_36__34_ var_offset_2916 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mOffset.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_2916, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 84)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_offset_2916.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_assemblyString_2823.plusAssign_operation(GALGAS_string (" + ").add_operation (var_offset_2916.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 86)).getter_hexString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 86)) ;
  }
  GALGAS_uintlist var_registerAddressList_3105 ;
  GALGAS_uint var_size_3121 ;
  GALGAS_registerProtection var_protection_3141 ;
  GALGAS_bitSliceTable joker_3123_2 ; // Joker input parameter
  GALGAS_string joker_3123_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (object->mProperty_mRegisterName, var_registerAddressList_3105, var_size_3121, joker_3123_2, joker_3123_1, var_protection_3141, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 89)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, object->mProperty_mRegisterName, constinArgument_inWriteAccess, var_protection_3141, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 90)) ;
  GALGAS_uint var_registerAddress_3285 ;
  var_registerAddressList_3105.method_first (var_registerAddress_3285, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 91)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsSupOrEqual, var_offset_2916.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 93)).objectCompare (var_size_3121)).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfOffsetExpression, GALGAS_string ("this offset is too large: should be lower than ").add_operation (var_size_3121.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 94)), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 94)) ;
  }
  outArgument_outIPICregisterDescription = GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::constructor_new (var_assemblyString_2823, var_registerAddress_3285.add_operation (var_offset_2916.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 99))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 97)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank (void) {
  enterExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank (kTypeDescriptor_GALGAS_registerExpression.mSlotID,
                                                                     extensionMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank (void) {
  gExtensionMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank (defineExtensionMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank,
                                                                                            freeExtensionMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@registerExpression getRegisterAddress'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_registerExpression_getRegisterAddress> gExtensionMethodTable_registerExpression_getRegisterAddress ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getRegisterAddress (const int32_t inClassIndex,
                                              extensionMethodSignature_registerExpression_getRegisterAddress inMethod) {
  gExtensionMethodTable_registerExpression_getRegisterAddress.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_uintlist var_registerAddressList_3972 ;
  GALGAS_uint var_size_3988 ;
  GALGAS_registerProtection var_protection_4008 ;
  GALGAS_bitSliceTable joker_3990_2 ; // Joker input parameter
  GALGAS_string joker_3990_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (object->mProperty_mRegisterName, var_registerAddressList_3972, var_size_3988, joker_3990_2, joker_3990_1, var_protection_4008, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 112)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, object->mProperty_mRegisterName, constinArgument_inWriteAccess, var_protection_4008, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 113)) ;
  GALGAS_sint_36__34_ var_offset_4169 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mOffset.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_4169, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 115)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_offset_4169.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfOffsetExpression, GALGAS_string ("offset (").add_operation (var_offset_4169.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 117)).add_operation (GALGAS_string (") should be >= 0"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 117)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 117)) ;
    outArgument_outRegisterAddress.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsSupOrEqual, var_offset_4169.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 118)).objectCompare (var_size_3988)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfOffsetExpression, GALGAS_string ("this offset is too large: should be lower than ").add_operation (var_size_3988.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 119)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 119)) ;
      outArgument_outRegisterAddress.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      var_registerAddressList_3972.method_first (outArgument_outRegisterAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 121)) ;
      outArgument_outRegisterAddress = outArgument_outRegisterAddress.add_operation (var_offset_4169.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 122)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerExpression_getRegisterAddress (void) {
  enterExtensionMethod_getRegisterAddress (kTypeDescriptor_GALGAS_registerExpression.mSlotID,
                                           extensionMethod_registerExpression_getRegisterAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_registerExpression_getRegisterAddress (void) {
  gExtensionMethodTable_registerExpression_getRegisterAddress.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerExpression_getRegisterAddress (defineExtensionMethod_registerExpression_getRegisterAddress,
                                                                  freeExtensionMethod_registerExpression_getRegisterAddress) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

C_StringCommandLineOption gOption_piccolo_5F_options_optimizationFlags ("piccolo_options",
                                         "optimizationFlags",
                                         0,
                                         "optimization-flags",
                                         "Fine tuning of optimizations (PIC18 compiler only)",
                                         "") ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'checkCurrentEmitAddress'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkCurrentEmitAddress (const GALGAS_uint constinArgument_inCurrentAddress,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_addr_1329 ;
  {
  routine_currentEmitAddress (var_addr_1329, inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 41)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("intermediate_generic.galgas", 42)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsNotEqual, var_addr_1329.objectCompare (constinArgument_inCurrentAddress)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 42)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)), GALGAS_string ("internal error: current emit address is ").add_operation (var_addr_1329.getter_hexString (SOURCE_FILE ("intermediate_generic.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)).add_operation (GALGAS_string ("; it should be "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)).add_operation (constinArgument_inCurrentAddress.getter_hexString (SOURCE_FILE ("intermediate_generic.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 44)), fixItArray1  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension method '@immediatInteger eval'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatInteger_eval (const cPtr_immediatExpression * inObject,
                                                  const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                  const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                  GALGAS_sint_36__34_ & outArgument_outResult,
                                                  GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatInteger * object = (const cPtr_immediatInteger *) inObject ;
  macroValidSharedObject (object, cPtr_immediatInteger) ;
  outArgument_outResult = object->mProperty_mValue.getter_uint (SOURCE_FILE ("intermediate_generic.galgas", 96)).getter_sint_36__34_ (SOURCE_FILE ("intermediate_generic.galgas", 96)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatInteger_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatInteger.mSlotID,
                             extensionMethod_immediatInteger_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatInteger_eval (defineExtensionMethod_immediatInteger_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension method '@immediatRegister eval'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatRegister_eval (const cPtr_immediatExpression * inObject,
                                                   const GALGAS_registerTable constinArgument_inRegisterTable,
                                                   const GALGAS_constantMap constinArgument_inConstantMap,
                                                   GALGAS_sint_36__34_ & outArgument_outResult,
                                                   GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatRegister * object = (const cPtr_immediatRegister *) inObject ;
  macroValidSharedObject (object, cPtr_immediatRegister) ;
  const enumGalgasBool test_0 = constinArgument_inRegisterTable.getter_hasKey (object->mProperty_mRegister.getter_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 107)).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 107)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 107)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioUsedRegisters.addAssign_operation (object->mProperty_mRegister.getter_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 108)).mProperty_string  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 108)) ;
    GALGAS_uintlist var_registerAddressList_3984 ;
    GALGAS_uint var_size_3994 ;
    GALGAS_registerProtection var_protection_4014 ;
    GALGAS_bitSliceTable joker_3996_2 ; // Joker input parameter
    GALGAS_string joker_3996_1 ; // Joker input parameter
    constinArgument_inRegisterTable.method_searchKey (object->mProperty_mRegister.getter_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 109)), var_registerAddressList_3984, var_size_3994, joker_3996_2, joker_3996_1, var_protection_4014, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 109)) ;
    extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, object->mProperty_mRegister.getter_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 110)), GALGAS_bool (false), var_protection_4014, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 110)) ;
    GALGAS_uint var_registerAddress_4162 ;
    var_registerAddressList_3984.method_first (var_registerAddress_4162, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 111)) ;
    GALGAS_sint_36__34_ var_offset_4245 ;
    callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mRegister.getter_mOffset (SOURCE_FILE ("intermediate_generic.galgas", 112)).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_4245, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 112)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_offset_4245.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mRegister.getter_mEndOfOffsetExpression (SOURCE_FILE ("intermediate_generic.galgas", 114)), GALGAS_string ("index (").add_operation (var_offset_4245.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 115)).add_operation (GALGAS_string (") should be >= 0"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 115)), fixItArray2  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 114)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsSupOrEqual, var_offset_4245.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 116)).objectCompare (var_size_3994)).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (object->mProperty_mRegister.getter_mEndOfOffsetExpression (SOURCE_FILE ("intermediate_generic.galgas", 117)), GALGAS_string ("index (").add_operation (var_offset_4245.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 118)).add_operation (GALGAS_string (") should be lower than size ("), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 118)).add_operation (var_size_3994.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 118)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 118)), fixItArray4  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 117)) ;
      }
    }
    outArgument_outResult = var_registerAddress_4162.getter_sint_36__34_ (SOURCE_FILE ("intermediate_generic.galgas", 120)).add_operation (var_offset_4245, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 120)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_5 = constinArgument_inConstantMap.getter_hasKey (object->mProperty_mRegister.getter_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 121)).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 121)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 121)).boolEnum () ;
    if (kBoolTrue == test_5) {
      constinArgument_inConstantMap.method_searchKey (object->mProperty_mRegister.getter_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 122)), outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 122)) ;
      GALGAS_sint_36__34_ var_offset_4829 ;
      callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mRegister.getter_mOffset (SOURCE_FILE ("intermediate_generic.galgas", 123)).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_4829, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 123)) ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_offset_4829.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mRegister.getter_mEndOfOffsetExpression (SOURCE_FILE ("intermediate_generic.galgas", 125)), GALGAS_string ("index notation (").add_operation (var_offset_4829.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 126)).add_operation (GALGAS_string (") cannot be used with a constant"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 126)), fixItArray7  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 125)) ;
      }
    }else if (kBoolFalse == test_5) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mRegister.getter_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 129)).getter_location (SOURCE_FILE ("intermediate_generic.galgas", 129)), GALGAS_string ("'").add_operation (object->mProperty_mRegister.getter_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 129)).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 129)).add_operation (GALGAS_string ("' should be declared as ram register or as constant"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 129)), fixItArray8  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 129)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatRegister_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatRegister.mSlotID,
                             extensionMethod_immediatRegister_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatRegister_eval (defineExtensionMethod_immediatRegister_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension method '@immediatAdd eval'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatAdd_eval (const cPtr_immediatExpression * inObject,
                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                              GALGAS_sint_36__34_ & outArgument_outResult,
                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatAdd * object = (const cPtr_immediatAdd *) inObject ;
  macroValidSharedObject (object, cPtr_immediatAdd) ;
  GALGAS_sint_36__34_ var_leftResult_5474 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_5474, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 140)) ;
  GALGAS_sint_36__34_ var_rightResult_5575 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_5575, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 141)) ;
  outArgument_outResult = var_leftResult_5474.add_operation (var_rightResult_5575, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 142)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatAdd_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatAdd.mSlotID,
                             extensionMethod_immediatAdd_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatAdd_eval (defineExtensionMethod_immediatAdd_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension method '@immediatSub eval'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatSub_eval (const cPtr_immediatExpression * inObject,
                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                              GALGAS_sint_36__34_ & outArgument_outResult,
                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatSub * object = (const cPtr_immediatSub *) inObject ;
  macroValidSharedObject (object, cPtr_immediatSub) ;
  GALGAS_sint_36__34_ var_leftResult_5956 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_5956, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 152)) ;
  GALGAS_sint_36__34_ var_rightResult_6057 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_6057, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 153)) ;
  outArgument_outResult = var_leftResult_5956.substract_operation (var_rightResult_6057, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 154)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatSub_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatSub.mSlotID,
                             extensionMethod_immediatSub_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatSub_eval (defineExtensionMethod_immediatSub_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension method '@immediatMul eval'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatMul_eval (const cPtr_immediatExpression * inObject,
                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                              GALGAS_sint_36__34_ & outArgument_outResult,
                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatMul * object = (const cPtr_immediatMul *) inObject ;
  macroValidSharedObject (object, cPtr_immediatMul) ;
  GALGAS_sint_36__34_ var_leftResult_6438 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_6438, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 164)) ;
  GALGAS_sint_36__34_ var_rightResult_6539 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_6539, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 165)) ;
  outArgument_outResult = var_leftResult_6438.multiply_operation (var_rightResult_6539, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 166)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatMul_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatMul.mSlotID,
                             extensionMethod_immediatMul_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatMul_eval (defineExtensionMethod_immediatMul_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension method '@immediatDiv eval'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatDiv_eval (const cPtr_immediatExpression * inObject,
                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                              GALGAS_sint_36__34_ & outArgument_outResult,
                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatDiv * object = (const cPtr_immediatDiv *) inObject ;
  macroValidSharedObject (object, cPtr_immediatDiv) ;
  GALGAS_sint_36__34_ var_leftResult_6920 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_6920, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 176)) ;
  GALGAS_sint_36__34_ var_rightResult_7021 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_7021, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 177)) ;
  outArgument_outResult = var_leftResult_6920.divide_operation (var_rightResult_7021, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 178)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatDiv_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatDiv.mSlotID,
                             extensionMethod_immediatDiv_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatDiv_eval (defineExtensionMethod_immediatDiv_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension method '@immediatMod eval'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatMod_eval (const cPtr_immediatExpression * inObject,
                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                              GALGAS_sint_36__34_ & outArgument_outResult,
                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatMod * object = (const cPtr_immediatMod *) inObject ;
  macroValidSharedObject (object, cPtr_immediatMod) ;
  GALGAS_sint_36__34_ var_leftResult_7402 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_7402, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 188)) ;
  GALGAS_sint_36__34_ var_rightResult_7503 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_7503, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 189)) ;
  outArgument_outResult = var_leftResult_7402.modulo_operation (var_rightResult_7503, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 190)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatMod_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatMod.mSlotID,
                             extensionMethod_immediatMod_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatMod_eval (defineExtensionMethod_immediatMod_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension method '@immediatAnd eval'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatAnd_eval (const cPtr_immediatExpression * inObject,
                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                              GALGAS_sint_36__34_ & outArgument_outResult,
                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatAnd * object = (const cPtr_immediatAnd *) inObject ;
  macroValidSharedObject (object, cPtr_immediatAnd) ;
  GALGAS_sint_36__34_ var_leftResult_7886 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_7886, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 200)) ;
  GALGAS_sint_36__34_ var_rightResult_7987 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_7987, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 201)) ;
  outArgument_outResult = var_leftResult_7886.operator_and (var_rightResult_7987 COMMA_SOURCE_FILE ("intermediate_generic.galgas", 202)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatAnd_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatAnd.mSlotID,
                             extensionMethod_immediatAnd_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatAnd_eval (defineExtensionMethod_immediatAnd_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension method '@immediatOr eval'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatOr_eval (const cPtr_immediatExpression * inObject,
                                             const GALGAS_registerTable constinArgument_inRegisterTable,
                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                             GALGAS_sint_36__34_ & outArgument_outResult,
                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatOr * object = (const cPtr_immediatOr *) inObject ;
  macroValidSharedObject (object, cPtr_immediatOr) ;
  GALGAS_sint_36__34_ var_leftResult_8367 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_8367, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 212)) ;
  GALGAS_sint_36__34_ var_rightResult_8468 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_8468, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 213)) ;
  outArgument_outResult = var_leftResult_8367.operator_or (var_rightResult_8468 COMMA_SOURCE_FILE ("intermediate_generic.galgas", 214)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatOr_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatOr.mSlotID,
                             extensionMethod_immediatOr_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatOr_eval (defineExtensionMethod_immediatOr_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension method '@immediatXor eval'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatXor_eval (const cPtr_immediatExpression * inObject,
                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                              GALGAS_sint_36__34_ & outArgument_outResult,
                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatXor * object = (const cPtr_immediatXor *) inObject ;
  macroValidSharedObject (object, cPtr_immediatXor) ;
  GALGAS_sint_36__34_ var_leftResult_8849 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_8849, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 224)) ;
  GALGAS_sint_36__34_ var_rightResult_8950 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_8950, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 225)) ;
  outArgument_outResult = var_leftResult_8849.operator_xor (var_rightResult_8950 COMMA_SOURCE_FILE ("intermediate_generic.galgas", 226)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatXor_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatXor.mSlotID,
                             extensionMethod_immediatXor_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatXor_eval (defineExtensionMethod_immediatXor_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension method '@immediatLeftShift eval'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatLeftShift_eval (const cPtr_immediatExpression * inObject,
                                                    const GALGAS_registerTable constinArgument_inRegisterTable,
                                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                                    GALGAS_sint_36__34_ & outArgument_outResult,
                                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatLeftShift * object = (const cPtr_immediatLeftShift *) inObject ;
  macroValidSharedObject (object, cPtr_immediatLeftShift) ;
  GALGAS_sint_36__34_ var_leftResult_9337 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_9337, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 236)) ;
  GALGAS_sint_36__34_ var_rightResult_9438 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_9438, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 237)) ;
  outArgument_outResult = var_leftResult_9337.left_shift_operation (var_rightResult_9438.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 238)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 238)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatLeftShift_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatLeftShift.mSlotID,
                             extensionMethod_immediatLeftShift_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatLeftShift_eval (defineExtensionMethod_immediatLeftShift_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension method '@immediatRightShift eval'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatRightShift_eval (const cPtr_immediatExpression * inObject,
                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                     GALGAS_sint_36__34_ & outArgument_outResult,
                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatRightShift * object = (const cPtr_immediatRightShift *) inObject ;
  macroValidSharedObject (object, cPtr_immediatRightShift) ;
  GALGAS_sint_36__34_ var_leftResult_9834 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_9834, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 248)) ;
  GALGAS_sint_36__34_ var_rightResult_9935 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_9935, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 249)) ;
  outArgument_outResult = var_leftResult_9834.right_shift_operation (var_rightResult_9935.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 250)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 250)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatRightShift_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatRightShift.mSlotID,
                             extensionMethod_immediatRightShift_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatRightShift_eval (defineExtensionMethod_immediatRightShift_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension method '@immediatEqualTest eval'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatEqualTest_eval (const cPtr_immediatExpression * inObject,
                                                    const GALGAS_registerTable constinArgument_inRegisterTable,
                                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                                    GALGAS_sint_36__34_ & outArgument_outResult,
                                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatEqualTest * object = (const cPtr_immediatEqualTest *) inObject ;
  macroValidSharedObject (object, cPtr_immediatEqualTest) ;
  GALGAS_sint_36__34_ var_leftResult_10330 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_10330, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 260)) ;
  GALGAS_sint_36__34_ var_rightResult_10431 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_10431, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 261)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftResult_10330.objectCompare (var_rightResult_10431)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatEqualTest_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatEqualTest.mSlotID,
                             extensionMethod_immediatEqualTest_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatEqualTest_eval (defineExtensionMethod_immediatEqualTest_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension method '@immediatNotEqualTest eval'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatNotEqualTest_eval (const cPtr_immediatExpression * inObject,
                                                       const GALGAS_registerTable constinArgument_inRegisterTable,
                                                       const GALGAS_constantMap constinArgument_inConstantMap,
                                                       GALGAS_sint_36__34_ & outArgument_outResult,
                                                       GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatNotEqualTest * object = (const cPtr_immediatNotEqualTest *) inObject ;
  macroValidSharedObject (object, cPtr_immediatNotEqualTest) ;
  GALGAS_sint_36__34_ var_leftResult_10871 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_10871, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 276)) ;
  GALGAS_sint_36__34_ var_rightResult_10972 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_10972, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 277)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftResult_10871.objectCompare (var_rightResult_10972)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatNotEqualTest_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatNotEqualTest.mSlotID,
                             extensionMethod_immediatNotEqualTest_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatNotEqualTest_eval (defineExtensionMethod_immediatNotEqualTest_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@immediatGreaterOrEqualTest eval'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatGreaterOrEqualTest_eval (const cPtr_immediatExpression * inObject,
                                                             const GALGAS_registerTable constinArgument_inRegisterTable,
                                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                                             GALGAS_sint_36__34_ & outArgument_outResult,
                                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatGreaterOrEqualTest * object = (const cPtr_immediatGreaterOrEqualTest *) inObject ;
  macroValidSharedObject (object, cPtr_immediatGreaterOrEqualTest) ;
  GALGAS_sint_36__34_ var_leftResult_11418 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_11418, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 292)) ;
  GALGAS_sint_36__34_ var_rightResult_11519 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_11519, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 293)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsSupOrEqual, var_leftResult_11418.objectCompare (var_rightResult_11519)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatGreaterOrEqualTest_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest.mSlotID,
                             extensionMethod_immediatGreaterOrEqualTest_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatGreaterOrEqualTest_eval (defineExtensionMethod_immediatGreaterOrEqualTest_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@immediatLowerOrEqualTest eval'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatLowerOrEqualTest_eval (const cPtr_immediatExpression * inObject,
                                                           const GALGAS_registerTable constinArgument_inRegisterTable,
                                                           const GALGAS_constantMap constinArgument_inConstantMap,
                                                           GALGAS_sint_36__34_ & outArgument_outResult,
                                                           GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatLowerOrEqualTest * object = (const cPtr_immediatLowerOrEqualTest *) inObject ;
  macroValidSharedObject (object, cPtr_immediatLowerOrEqualTest) ;
  GALGAS_sint_36__34_ var_leftResult_11963 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_11963, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 308)) ;
  GALGAS_sint_36__34_ var_rightResult_12064 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_12064, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 309)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsInfOrEqual, var_leftResult_11963.objectCompare (var_rightResult_12064)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatLowerOrEqualTest_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatLowerOrEqualTest.mSlotID,
                             extensionMethod_immediatLowerOrEqualTest_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatLowerOrEqualTest_eval (defineExtensionMethod_immediatLowerOrEqualTest_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension method '@immediatGreaterTest eval'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatGreaterTest_eval (const cPtr_immediatExpression * inObject,
                                                      const GALGAS_registerTable constinArgument_inRegisterTable,
                                                      const GALGAS_constantMap constinArgument_inConstantMap,
                                                      GALGAS_sint_36__34_ & outArgument_outResult,
                                                      GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatGreaterTest * object = (const cPtr_immediatGreaterTest *) inObject ;
  macroValidSharedObject (object, cPtr_immediatGreaterTest) ;
  GALGAS_sint_36__34_ var_leftResult_12503 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_12503, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 324)) ;
  GALGAS_sint_36__34_ var_rightResult_12604 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_12604, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 325)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_leftResult_12503.objectCompare (var_rightResult_12604)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatGreaterTest_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatGreaterTest.mSlotID,
                             extensionMethod_immediatGreaterTest_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatGreaterTest_eval (defineExtensionMethod_immediatGreaterTest_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension method '@immediatLowerTest eval'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatLowerTest_eval (const cPtr_immediatExpression * inObject,
                                                    const GALGAS_registerTable constinArgument_inRegisterTable,
                                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                                    GALGAS_sint_36__34_ & outArgument_outResult,
                                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatLowerTest * object = (const cPtr_immediatLowerTest *) inObject ;
  macroValidSharedObject (object, cPtr_immediatLowerTest) ;
  GALGAS_sint_36__34_ var_leftResult_13040 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_13040, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 340)) ;
  GALGAS_sint_36__34_ var_rightResult_13141 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_13141, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 341)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_leftResult_13040.objectCompare (var_rightResult_13141)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatLowerTest_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatLowerTest.mSlotID,
                             extensionMethod_immediatLowerTest_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatLowerTest_eval (defineExtensionMethod_immediatLowerTest_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension method '@immediatNegate eval'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatNegate_eval (const cPtr_immediatExpression * inObject,
                                                 const GALGAS_registerTable constinArgument_inRegisterTable,
                                                 const GALGAS_constantMap constinArgument_inConstantMap,
                                                 GALGAS_sint_36__34_ & outArgument_outResult,
                                                 GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatNegate * object = (const cPtr_immediatNegate *) inObject ;
  macroValidSharedObject (object, cPtr_immediatNegate) ;
  GALGAS_sint_36__34_ var_result_13566 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_13566, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 356)) ;
  outArgument_outResult = var_result_13566.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 357)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatNegate_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatNegate.mSlotID,
                             extensionMethod_immediatNegate_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatNegate_eval (defineExtensionMethod_immediatNegate_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension method '@immediatComplement eval'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatComplement_eval (const cPtr_immediatExpression * inObject,
                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                     GALGAS_sint_36__34_ & outArgument_outResult,
                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatComplement * object = (const cPtr_immediatComplement *) inObject ;
  macroValidSharedObject (object, cPtr_immediatComplement) ;
  GALGAS_sint_36__34_ var_result_13930 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_13930, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 367)) ;
  outArgument_outResult = var_result_13930.operator_tilde (SOURCE_FILE ("intermediate_generic.galgas", 368)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatComplement_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatComplement.mSlotID,
                             extensionMethod_immediatComplement_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatComplement_eval (defineExtensionMethod_immediatComplement_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension method '@immediatSlice eval'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_immediatSlice_eval (const cPtr_immediatExpression * inObject,
                                                const GALGAS_registerTable constinArgument_inRegisterTable,
                                                const GALGAS_constantMap constinArgument_inConstantMap,
                                                GALGAS_sint_36__34_ & outArgument_outResult,
                                                GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatSlice * object = (const cPtr_immediatSlice *) inObject ;
  macroValidSharedObject (object, cPtr_immediatSlice) ;
  GALGAS_bitSliceTable var_bitSliceTable_14248 ;
  outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  ioArgument_ioUsedRegisters.addAssign_operation (object->mProperty_mRegisterName.mProperty_string  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 381)) ;
  GALGAS_registerProtection var_protection_14394 ;
  GALGAS_uintlist joker_14355 ; // Joker input parameter
  GALGAS_uint joker_14358 ; // Joker input parameter
  GALGAS_string joker_14377 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (object->mProperty_mRegisterName, joker_14355, joker_14358, var_bitSliceTable_14248, joker_14377, var_protection_14394, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 382)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, object->mProperty_mRegisterName, GALGAS_bool (false), var_protection_14394, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 383)) ;
  GALGAS_stringset var_sliceNameSet_14493 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("intermediate_generic.galgas", 384)) ;
  cEnumerator_immediatSliceExpressionList enumerator_14550 (object->mProperty_mSliceExpressionList, kENUMERATION_UP) ;
  while (enumerator_14550.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_sliceNameSet_14493.getter_hasKey (enumerator_14550.current_mSliceName (HERE).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 386)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 386)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_14550.current_mSliceName (HERE).getter_location (SOURCE_FILE ("intermediate_generic.galgas", 387)), GALGAS_string ("the '").add_operation (enumerator_14550.current_mSliceName (HERE).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 387)).add_operation (GALGAS_string ("' bit field has been already defined"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 387)), fixItArray1  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 387)) ;
    }else if (kBoolFalse == test_0) {
      var_sliceNameSet_14493.addAssign_operation (enumerator_14550.current_mSliceName (HERE).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 389))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 389)) ;
      GALGAS_uint var_sliceIndex_14768 ;
      GALGAS_uint var_sliceSize_14790 ;
      var_bitSliceTable_14248.method_searchKey (enumerator_14550.current_mSliceName (HERE), var_sliceIndex_14768, var_sliceSize_14790, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 392)) ;
      GALGAS_sint_36__34_ var_result_14933 ;
      callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_14550.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_14933, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 393)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_result_14933.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).operator_or (GALGAS_bool (kIsStrictSup, var_result_14933.objectCompare (GALGAS_sint_36__34_ ((int64_t) 1LL).left_shift_operation (var_sliceSize_14790 COMMA_SOURCE_FILE ("intermediate_generic.galgas", 394)).substract_operation (GALGAS_sint_36__34_ ((int64_t) 1LL), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 394)))) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 394)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_14550.current_mSliceName (HERE).getter_location (SOURCE_FILE ("intermediate_generic.galgas", 395)), GALGAS_string ("invalid immediat value associated to the '").add_operation (enumerator_14550.current_mSliceName (HERE).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 395)).add_operation (GALGAS_string ("' bit field, evaluated as "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 395)).add_operation (var_result_14933.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 395)).add_operation (GALGAS_string (" (should be between 0 and "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 395)).add_operation (GALGAS_uint ((uint32_t) 1U).left_shift_operation (var_sliceSize_14790 COMMA_SOURCE_FILE ("intermediate_generic.galgas", 396)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 396)).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 396)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 396)), fixItArray3  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 395)) ;
      }
      outArgument_outResult = outArgument_outResult.operator_or (var_result_14933.left_shift_operation (var_sliceIndex_14768 COMMA_SOURCE_FILE ("intermediate_generic.galgas", 398)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 398)) ;
    }
    enumerator_14550.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_immediatSlice_eval (void) {
  enterExtensionMethod_eval (kTypeDescriptor_GALGAS_immediatSlice.mSlotID,
                             extensionMethod_immediatSlice_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatSlice_eval (defineExtensionMethod_immediatSlice_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@bitNumberLiteralValue getBitNumber'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mBitNumberLiteralValue.getter_uint (SOURCE_FILE ("intermediate_generic.galgas", 425)).objectCompare (GALGAS_uint ((uint32_t) 7U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mBitNumberLiteralValue.getter_location (SOURCE_FILE ("intermediate_generic.galgas", 426)), GALGAS_string ("The bit number is ").add_operation (object->mProperty_mBitNumberLiteralValue.getter_uint (SOURCE_FILE ("intermediate_generic.galgas", 426)).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 426)).add_operation (GALGAS_string (" (should be <= 7)"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 426)), fixItArray1  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 426)) ;
  }
  outArgument_outBitNumber = object->mProperty_mBitNumberLiteralValue.getter_uint (SOURCE_FILE ("intermediate_generic.galgas", 428)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_bitNumberLiteralValue_getBitNumber (void) {
  enterExtensionMethod_getBitNumber (kTypeDescriptor_GALGAS_bitNumberLiteralValue.mSlotID,
                                     extensionMethod_bitNumberLiteralValue_getBitNumber) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bitNumberLiteralValue_getBitNumber (defineExtensionMethod_bitNumberLiteralValue_getBitNumber, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@bitNumberLabelValue getBitNumber'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_uint var_sliceIndex_16847 ;
  GALGAS_uint var_sliceSize_16862 ;
  constinArgument_inBitSliceTable.method_searchKey (object->mProperty_mBitNumberLabelValue, var_sliceIndex_16847, var_sliceSize_16862, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 440)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mBitNumberIndexValue.getter_uint (SOURCE_FILE ("intermediate_generic.galgas", 441)).objectCompare (var_sliceSize_16862)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mBitNumberIndexValue.getter_location (SOURCE_FILE ("intermediate_generic.galgas", 442)), GALGAS_string ("The ").add_operation (object->mProperty_mBitNumberIndexValue.getter_uint (SOURCE_FILE ("intermediate_generic.galgas", 442)).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 442)).add_operation (GALGAS_string (" index is too large (should be < "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 442)).add_operation (var_sliceSize_16862.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 443)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 443)), fixItArray1  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 442)) ;
  }
  outArgument_outBitNumber = var_sliceIndex_16847.add_operation (object->mProperty_mBitNumberIndexValue.getter_uint (SOURCE_FILE ("intermediate_generic.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 445)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_bitNumberLabelValue_getBitNumber (void) {
  enterExtensionMethod_getBitNumber (kTypeDescriptor_GALGAS_bitNumberLabelValue.mSlotID,
                                     extensionMethod_bitNumberLabelValue_getBitNumber) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bitNumberLabelValue_getBitNumber (defineExtensionMethod_bitNumberLabelValue_getBitNumber, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@bitNumberLiteralExpression getBitNumber'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_sint_36__34_ var_result_17524 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mBitNumberLiteralExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_17524, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 457)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_result_17524.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("bit index is ").add_operation (var_result_17524.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 459)).add_operation (GALGAS_string (", but should be >= 0"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 459)), fixItArray1  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 459)) ;
    outArgument_outBitNumber.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_result_17524.objectCompare (GALGAS_sint_36__34_ ((int64_t) 7LL))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("bit index is ").add_operation (var_result_17524.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 461)).add_operation (GALGAS_string (", but should be <= 7"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 461)), fixItArray3  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 461)) ;
      outArgument_outBitNumber.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outBitNumber = var_result_17524.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 463)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_bitNumberLiteralExpression_getBitNumber (void) {
  enterExtensionMethod_getBitNumber (kTypeDescriptor_GALGAS_bitNumberLiteralExpression.mSlotID,
                                     extensionMethod_bitNumberLiteralExpression_getBitNumber) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bitNumberLiteralExpression_getBitNumber (defineExtensionMethod_bitNumberLiteralExpression_getBitNumber, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'print_constant_definition'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_print_5F_constant_5F_definition (const GALGAS_constantMap constinArgument_inConstantMap,
                                              GALGAS_string & ioArgument_ioListFileContents,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inConstantMap.getter_count (SOURCE_FILE ("intermediate_generic.galgas", 486)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 487)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 487)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 487)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("CONSTANTS").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 488)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 488)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 488)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Constant").getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 40U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 490)).add_operation (GALGAS_string (" Value\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 490)) ;
    cEnumerator_constantMap enumerator_19090 (constinArgument_inConstantMap, kENUMERATION_UP) ;
    while (enumerator_19090.hasCurrentObject ()) {
      ioArgument_ioListFileContents.plusAssign_operation(enumerator_19090.current_lkey (HERE).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 492)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 40U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 492)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 492)).add_operation (enumerator_19090.current_mValue (HERE).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 492)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 492)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 492)) ;
      enumerator_19090.gotoNextObject () ;
    }
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 494)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'actualBuildConfig'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
    GALGAS_uint var_defaultValue_1014 = GALGAS_uint ((uint32_t) 1U).left_shift_operation (enumerator_988.current_mRegisterWidth (HERE).getter_uint (SOURCE_FILE ("piccolo_config.galgas", 27)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 27)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 27)) ;
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
      const enumGalgasBool test_0 = var_actualSettingNameSet_1410.getter_hasKey (enumerator_1500.current_mSettingName (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 38)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 38)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_1500.current_mSettingName (HERE).getter_location (SOURCE_FILE ("piccolo_config.galgas", 39)), GALGAS_string ("the '").add_operation (enumerator_1500.current_mSettingName (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 39)).add_operation (GALGAS_string ("' setting is already defined"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 39)), fixItArray1  COMMA_SOURCE_FILE ("piccolo_config.galgas", 39)) ;
      }
      var_actualSettingNameSet_1410.addAssign_operation (enumerator_1500.current_mSettingName (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 41))  COMMA_SOURCE_FILE ("piccolo_config.galgas", 41)) ;
      GALGAS_lstring var_registerName_1745 ;
      GALGAS_luint var_maskValue_1768 ;
      GALGAS_lstring var_settingDescription_1802 ;
      GALGAS_fieldSettingMap var_fieldSettingMap_1841 ;
      var_configFieldMap_927.method_searchKey (enumerator_1500.current_mSettingName (HERE), var_registerName_1745, var_maskValue_1768, var_settingDescription_1802, var_fieldSettingMap_1841, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 46)) ;
      const enumGalgasBool test_2 = var_fieldSettingMap_1841.getter_hasKey (enumerator_1500.current_mSettingValue (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 47)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 47)).boolEnum () ;
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
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_fieldSettingMap_1841.getter_count (SOURCE_FILE ("piccolo_config.galgas", 55)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
      enumerator_1500.gotoNextObject () ;
    }
    enumerator_1469.gotoNextObject () ;
  }
  GALGAS_stringset var_notDefinedSetting_2945 = var_configFieldMap_927.getter_keySet (SOURCE_FILE ("piccolo_config.galgas", 67)).substract_operation (var_actualSettingNameSet_1410, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 67)) ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_notDefinedSetting_2945.getter_count (SOURCE_FILE ("piccolo_config.galgas", 68)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
        const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_3331.current_mRegisterValue (HERE).operator_and (enumerator_3638.current_mMaskValue (HERE).getter_uint (SOURCE_FILE ("piccolo_config.galgas", 83)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 83)).objectCompare (enumerator_3731.current_mValue (HERE))).boolEnum () ;
        if (kBoolTrue == test_7) {
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  setting '").add_operation (var_settingName_3668.getter_string (SOURCE_FILE ("piccolo_config.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 84)).add_operation (GALGAS_string ("' set to "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 84)).add_operation (enumerator_3731.current_mValue (HERE).getter_hexString (SOURCE_FILE ("piccolo_config.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 84)).add_operation (GALGAS_string (" (\""), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 84)).add_operation (enumerator_3731.current_lkey (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 84)).add_operation (GALGAS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 84)) ;
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
      const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_4087.current_mRegisterValue (HERE).operator_and (enumerator_4227.current_mIllegalMask (HERE).getter_uint (SOURCE_FILE ("piccolo_config.galgas", 95)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 95)).objectCompare (enumerator_4227.current_mIllegalValue (HERE).getter_uint (SOURCE_FILE ("piccolo_config.galgas", 95)))).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 96)), GALGAS_string ("illegal setting for '").add_operation (enumerator_4087.current_lkey (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 96)).add_operation (GALGAS_string ("' register: "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 96)).add_operation (enumerator_4227.current_mDescription (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 96)), fixItArray9  COMMA_SOURCE_FILE ("piccolo_config.galgas", 96)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*** ILLEGAL SETTING for register '").add_operation (enumerator_4087.current_lkey (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 97)).add_operation (GALGAS_string ("' ***\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 97)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  message: ").add_operation (enumerator_4227.current_mDescription (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 98)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 98)) ;
      }
      enumerator_4227.gotoNextObject () ;
    }
    enumerator_4087.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Routine 'buildConfig'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inConfigDefinitionList.getter_length (SOURCE_FILE ("piccolo_config.galgas", 116)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_actualBuildConfig (constinArgument_inConfigRegisterMap, constinArgument_inConfigDefinitionList, ioArgument_ioListFileContents, outArgument_outActualConfigurationMap, inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 117)) ;
    }
  }else if (kBoolFalse == test_0) {
    outArgument_outActualConfigurationMap = GALGAS_actualConfigurationMap::constructor_emptyMap (SOURCE_FILE ("piccolo_config.galgas", 124)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("No configuration.\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 125)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_instruction_IF_BitTest addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                      GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * object = (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
  callExtensionMethod_addUsedRoutines ((const cPtr_baseline_5F_instruction *) object->mProperty_mInstruction.ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 12)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@baseline_instruction_IF_SEMI_COLON addUsedRoutines'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON * object = (const cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
  callExtensionMethod_addUsedRoutines ((const cPtr_baseline_5F_instruction *) object->mProperty_mInstruction.ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@baseline_instruction_IF_IncDec addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                     GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * object = (const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
  callExtensionMethod_addUsedRoutines ((const cPtr_baseline_5F_instruction *) object->mProperty_mInstruction.ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@baseline_instruction_JUMP addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_JUMP_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_JUMP * object = (const cPtr_baseline_5F_instruction_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_JUMP) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mProperty_mTargetLabel.mProperty_string  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_JUMP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_JUMP_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_JUMP_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_JUMP_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@baseline_instruction_GOTO addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_GOTO_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_GOTO * object = (const cPtr_baseline_5F_instruction_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_GOTO) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mProperty_mTargetLabel.mProperty_string  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_GOTO_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_GOTO_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_GOTO_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_GOTO_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@baseline_instruction_CALL addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_CALL_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_CALL * object = (const cPtr_baseline_5F_instruction_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_CALL) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mProperty_mTargetLabel.mProperty_string  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 47)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_CALL_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_CALL_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_CALL_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_CALL_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@baseline_instruction_FOREVER addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_FOREVER_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_FOREVER * object = (const cPtr_baseline_5F_instruction_5F_FOREVER *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_FOREVER) ;
  {
  routine_addBaselineUsedRoutinesFromInstructionList (object->mProperty_mInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 54)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_FOREVER_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_FOREVER_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FOREVER_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_FOREVER_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@baseline_instruction_STATIC_REPEAT addUsedRoutines'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * object = (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
  {
  routine_addBaselineUsedRoutinesFromInstructionList (object->mProperty_mInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 61)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@baseline_instruction_MNOP addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_MNOP_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                             GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_MNOP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_MNOP_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_MNOP_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_MNOP_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@baseline_instruction_TRIS addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_TRIS_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                             GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_TRIS_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_TRIS_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_TRIS_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_TRIS_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_instruction_WO_OPERAND addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                                      GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@baseline_instruction_F addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_F_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                          GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_F_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_F_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_F_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_F_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@baseline_instruction_FB addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_FB_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_FB_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_FB_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FB_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_FB_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@baseline_instruction_do_while addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_do_5F_while_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                    GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_do_5F_while * object = (const cPtr_baseline_5F_instruction_5F_do_5F_while *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
  {
  routine_addBaselineUsedRoutinesFromInstructionList (object->mProperty_mRepeatedInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 98)) ;
  }
  cEnumerator_baseline_5F_partList enumerator_3216 (object->mProperty_mWhilePartList, kENUMERATION_UP) ;
  while (enumerator_3216.hasCurrentObject ()) {
    {
    routine_addBaselineUsedRoutinesFromInstructionList (enumerator_3216.current_mInstructionList (HERE), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 100)) ;
    }
    enumerator_3216.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_do_5F_while_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_do_5F_while_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_do_5F_while_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_do_5F_while_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@baseline_instruction_structured_if addUsedRoutines'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_structured_5F_if_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_structured_5F_if * object = (const cPtr_baseline_5F_instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
  {
  routine_addBaselineUsedRoutinesFromInstructionList (object->mProperty_mThenInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 108)) ;
  }
  {
  routine_addBaselineUsedRoutinesFromInstructionList (object->mProperty_mElseInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 109)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_structured_5F_if_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_structured_5F_if_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_structured_5F_if_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_structured_5F_if_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@baseline_instruction_FD addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_FD_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_FD_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_FD_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FD_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_FD_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@baseline_instruction_JSR addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_JSR_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_JSR * object = (const cPtr_baseline_5F_instruction_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_JSR) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mProperty_mTargetLabel.mProperty_string  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 122)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_JSR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_JSR_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_JSR_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_JSR_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@baseline_instruction_literalOperation addUsedRoutines'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_literalOperation_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                                         GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_literalOperation_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation.mSlotID,
                                        extensionMethod_baseline_5F_instruction_5F_literalOperation_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_literalOperation_addUsedRoutines (defineExtensionMethod_baseline_5F_instruction_5F_literalOperation_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Routine 'addBaselineUsedRoutinesFromInstructionList'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_addBaselineUsedRoutinesFromInstructionList (const GALGAS_baseline_5F_instructionList constinArgument_inInstructionList,
                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_baseline_5F_instructionList enumerator_4496 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_4496.hasCurrentObject ()) {
    callExtensionMethod_addUsedRoutines ((const cPtr_baseline_5F_instruction *) enumerator_4496.current_mInstruction (HERE).ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 137)) ;
    enumerator_4496.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'baseline_computeUsedRoutines'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset function_baseline_5F_computeUsedRoutines (const GALGAS_baseline_5F_routineDefinitionList & constinArgument_inRoutineDefinitionList,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outUsedRoutineSet ; // Returned variable
  result_outUsedRoutineSet = GALGAS_stringset::constructor_setWithString (GALGAS_string ("main")  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 147)) ;
  GALGAS_stringset var_s_4906 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_used_routines.galgas", 149)) ;
  if (constinArgument_inRoutineDefinitionList.getter_length (SOURCE_FILE ("baseline_used_routines.galgas", 150)).isValid ()) {
    uint32_t variant_4936 = constinArgument_inRoutineDefinitionList.getter_length (SOURCE_FILE ("baseline_used_routines.galgas", 150)).uintValue () ;
    bool loop_4936 = true ;
    while (loop_4936) {
      loop_4936 = GALGAS_bool (kIsNotEqual, var_s_4906.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_4936) {
        loop_4936 = GALGAS_bool (kIsNotEqual, var_s_4906.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_4936 && (0 == variant_4936)) {
        loop_4936 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_used_routines.galgas", 150)) ;
      }
      if (loop_4936) {
        variant_4936 -- ;
        var_s_4906 = result_outUsedRoutineSet ;
        cEnumerator_baseline_5F_routineDefinitionList enumerator_5070 (constinArgument_inRoutineDefinitionList, kENUMERATION_UP) ;
        while (enumerator_5070.hasCurrentObject ()) {
          const enumGalgasBool test_0 = result_outUsedRoutineSet.getter_hasKey (enumerator_5070.current_mRoutineName (HERE).mProperty_string COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 154)).boolEnum () ;
          if (kBoolTrue == test_0) {
            {
            routine_addBaselineUsedRoutinesFromInstructionList (enumerator_5070.current_mInstructionList (HERE), result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 155)) ;
            }
          }
          enumerator_5070.gotoNextObject () ;
        }
      }
    }
  }
//---
  return result_outUsedRoutineSet ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_baseline_5F_computeUsedRoutines [2] = {
  & kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_baseline_5F_computeUsedRoutines ("baseline_computeUsedRoutines",
                                                                                 functionWithGenericHeader_baseline_5F_computeUsedRoutines,
                                                                                 & kTypeDescriptor_GALGAS_stringset,
                                                                                 1,
                                                                                 functionArgs_baseline_5F_computeUsedRoutines) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@baseline_instruction_literalOperation shouldTerminateWithMOVLW'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_literalOperation_shouldTerminateWithMOVLW (const cPtr_baseline_5F_instruction * inObject,
                                                                                                  const GALGAS_string constinArgument_inErrorMessage,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_literalOperation * object = (const cPtr_baseline_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_literalOperation) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mLiteralInstruction.objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("baseline_compilation.galgas", 25)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, constinArgument_inErrorMessage, fixItArray1  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 26)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_literalOperation_shouldTerminateWithMOVLW (void) {
  enterExtensionMethod_shouldTerminateWithMOVLW (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation.mSlotID,
                                                 extensionMethod_baseline_5F_instruction_5F_literalOperation_shouldTerminateWithMOVLW) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_literalOperation_shouldTerminateWithMOVLW (defineExtensionMethod_baseline_5F_instruction_5F_literalOperation_shouldTerminateWithMOVLW, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@baseline_instruction_CALL shouldTerminateWithMOVLW'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_CALL_shouldTerminateWithMOVLW (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                                      const GALGAS_string /* constinArgument_inErrorMessage */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_CALL_shouldTerminateWithMOVLW (void) {
  enterExtensionMethod_shouldTerminateWithMOVLW (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL.mSlotID,
                                                 extensionMethod_baseline_5F_instruction_5F_CALL_shouldTerminateWithMOVLW) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_CALL_shouldTerminateWithMOVLW (defineExtensionMethod_baseline_5F_instruction_5F_CALL_shouldTerminateWithMOVLW, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@baseline_instruction_structured_if shouldTerminateWithMOVLW'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_structured_5F_if_shouldTerminateWithMOVLW (const cPtr_baseline_5F_instruction * inObject,
                                                                                                  const GALGAS_string /* constinArgument_inErrorMessage */,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_structured_5F_if * object = (const cPtr_baseline_5F_instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mThenInstructionList.getter_length (SOURCE_FILE ("baseline_compilation.galgas", 41)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the 'then' branch of this 'if' instruction does not have any instruction; it must terminate with a MOVLW instruction"), fixItArray1  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 42)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_baseline_5F_instruction var_lastInstruction_1797 ;
    object->mProperty_mThenInstructionList.method_last (var_lastInstruction_1797, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 44)) ;
    callExtensionMethod_shouldTerminateWithMOVLW ((const cPtr_baseline_5F_instruction *) var_lastInstruction_1797.ptr (), GALGAS_string ("the 'then' branch of this 'if' instruction must terminate with a MOVLW instruction"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 45)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mProperty_mElseInstructionList.getter_length (SOURCE_FILE ("baseline_compilation.galgas", 48)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the 'else' branch of this 'if' instruction does not have any instruction; it must terminate with a MOVLW instruction"), fixItArray3  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 49)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_baseline_5F_instruction var_lastInstruction_2230 ;
    object->mProperty_mElseInstructionList.method_last (var_lastInstruction_2230, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 51)) ;
    callExtensionMethod_shouldTerminateWithMOVLW ((const cPtr_baseline_5F_instruction *) var_lastInstruction_2230.ptr (), GALGAS_string ("the 'else' branch of this 'if' instruction must terminate with a MOVLW instruction"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 52)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_structured_5F_if_shouldTerminateWithMOVLW (void) {
  enterExtensionMethod_shouldTerminateWithMOVLW (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if.mSlotID,
                                                 extensionMethod_baseline_5F_instruction_5F_structured_5F_if_shouldTerminateWithMOVLW) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_structured_5F_if_shouldTerminateWithMOVLW (defineExtensionMethod_baseline_5F_instruction_5F_structured_5F_if_shouldTerminateWithMOVLW, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@baseline_instruction_GOTO shouldNotContinueInSequence'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_GOTO_shouldNotContinueInSequence (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                                         const GALGAS_string /* constinArgument_inErrorMessage */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_GOTO_shouldNotContinueInSequence (void) {
  enterExtensionMethod_shouldNotContinueInSequence (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO.mSlotID,
                                                    extensionMethod_baseline_5F_instruction_5F_GOTO_shouldNotContinueInSequence) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_GOTO_shouldNotContinueInSequence (defineExtensionMethod_baseline_5F_instruction_5F_GOTO_shouldNotContinueInSequence, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@baseline_instruction_JUMP shouldNotContinueInSequence'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_JUMP_shouldNotContinueInSequence (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                                         const GALGAS_string /* constinArgument_inErrorMessage */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_JUMP_shouldNotContinueInSequence (void) {
  enterExtensionMethod_shouldNotContinueInSequence (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP.mSlotID,
                                                    extensionMethod_baseline_5F_instruction_5F_JUMP_shouldNotContinueInSequence) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_JUMP_shouldNotContinueInSequence (defineExtensionMethod_baseline_5F_instruction_5F_JUMP_shouldNotContinueInSequence, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@baseline_instruction_FOREVER shouldNotContinueInSequence'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_FOREVER_shouldNotContinueInSequence (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                                            const GALGAS_string /* constinArgument_inErrorMessage */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_FOREVER_shouldNotContinueInSequence (void) {
  enterExtensionMethod_shouldNotContinueInSequence (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER.mSlotID,
                                                    extensionMethod_baseline_5F_instruction_5F_FOREVER_shouldNotContinueInSequence) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FOREVER_shouldNotContinueInSequence (defineExtensionMethod_baseline_5F_instruction_5F_FOREVER_shouldNotContinueInSequence, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'baseline_analysis'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_baseline_5F_analysis (const GALGAS_baseline_5F_model constinArgument_inPiccoloModel,
                                   const GALGAS_string constinArgument_inSourceFileName,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_sourceFileBaseName_4007 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("baseline_compilation.galgas", 94)).getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 94)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_sourceFileBaseName_4007.objectCompare (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("baseline_compilation.galgas", 95)).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 95)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("baseline_compilation.galgas", 96)).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 96)), GALGAS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("baseline_compilation.galgas", 96)).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 96)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 96)).add_operation (var_sourceFileBaseName_4007, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 97)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 97)), fixItArray1  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 96)) ;
  }
  GALGAS_string var_listFileContents_4359 = GALGAS_string::makeEmptyString () ;
  GALGAS_piccoloDeviceModel var_piccoloDeviceModel_4454 ;
  {
  routine_parseDeviceDefinition (constinArgument_inPiccoloModel.mProperty_mDeviceName, var_piccoloDeviceModel_4454, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 102)) ;
  }
  switch (var_piccoloDeviceModel_4454.getter_mProcessorType (SOURCE_FILE ("baseline_compilation.galgas", 103)).enumValue ()) {
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
  GALGAS_actualConfigurationMap var_actualConfigurationMap_4954 ;
  {
  routine_buildConfig (var_piccoloDeviceModel_4454.getter_mConfigRegisterMap (SOURCE_FILE ("baseline_compilation.galgas", 111)), constinArgument_inPiccoloModel.getter_mConfigDefinitionList (SOURCE_FILE ("baseline_compilation.galgas", 112)), var_listFileContents_4359, var_actualConfigurationMap_4954, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 110)) ;
  }
  GALGAS_registerTable var_registerTable_5194 = var_piccoloDeviceModel_4454.getter_mRegisterTable (SOURCE_FILE ("baseline_compilation.galgas", 117)) ;
  GALGAS_ramBankTable var_ramBank_5256 = var_piccoloDeviceModel_4454.getter_mRamBankTable (SOURCE_FILE ("baseline_compilation.galgas", 118)) ;
  GALGAS_declaredByteMap var_declaredByteMap_5523 ;
  {
  routine_analyze_5F_ram_5F_sections (GALGAS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.mProperty_mRamDefinitionList, var_ramBank_5256, var_piccoloDeviceModel_4454.getter_mRegisterTable (SOURCE_FILE ("baseline_compilation.galgas", 123)), var_listFileContents_4359, var_registerTable_5194, var_declaredByteMap_5523, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 119)) ;
  }
  GALGAS_baselineRoutineMap var_routineMap_5596 = GALGAS_baselineRoutineMap::constructor_emptyMap (SOURCE_FILE ("baseline_compilation.galgas", 129)) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_5679 (constinArgument_inPiccoloModel.mProperty_mRoutineDefinitionList, kENUMERATION_UP) ;
  while (enumerator_5679.hasCurrentObject ()) {
    {
    var_routineMap_5596.setter_insertKey (enumerator_5679.current_mRoutineName (HERE), enumerator_5679.current_mIsNoReturn (HERE), enumerator_5679.current_mPage (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 131)) ;
    }
    enumerator_5679.gotoNextObject () ;
  }
  GALGAS_constantMap var_constantMap_5822 = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("baseline_compilation.galgas", 134)) ;
  GALGAS_stringset var_usedRegisters_6059 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_compilation.galgas", 139)) ;
  cEnumerator_constantDefinitionList enumerator_6136 (constinArgument_inPiccoloModel.getter_mConstantDefinitionList (SOURCE_FILE ("baseline_compilation.galgas", 140)), kENUMERATION_UP) ;
  while (enumerator_6136.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_result_6209 ;
    callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_6136.current_mExpression (HERE).ptr (), var_registerTable_5194, var_constantMap_5822, var_result_6209, var_usedRegisters_6059, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 141)) ;
    const enumGalgasBool test_4 = var_registerTable_5194.getter_hasKey (enumerator_6136.current_mConstantName (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 142)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 142)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_6136.current_mConstantName (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 143)), GALGAS_string ("'").add_operation (enumerator_6136.current_mConstantName (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 143)).add_operation (GALGAS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 143)), fixItArray5  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 143)) ;
    }else if (kBoolFalse == test_4) {
      {
      var_constantMap_5822.setter_insertKey (enumerator_6136.current_mConstantName (HERE), var_result_6209, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 145)) ;
      }
    }
    enumerator_6136.gotoNextObject () ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_6) {
    {
    routine_print_5F_constant_5F_definition (var_constantMap_5822, var_listFileContents_4359, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 150)) ;
    }
  }
  const enumGalgasBool test_7 = var_routineMap_5596.getter_hasKey (GALGAS_string ("main") COMMA_SOURCE_FILE ("baseline_compilation.galgas", 156)).boolEnum () ;
  if (kBoolTrue == test_7) {
    GALGAS_bool var_isNoReturn_6870 ;
    GALGAS_luint var_page_6887 ;
    var_routineMap_5596.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("main"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 157))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 157)), var_isNoReturn_6870, var_page_6887, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 157)) ;
    const enumGalgasBool test_8 = var_isNoReturn_6870.operator_not (SOURCE_FILE ("baseline_compilation.galgas", 158)).boolEnum () ;
    if (kBoolTrue == test_8) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (var_routineMap_5596.getter_locationForKey (GALGAS_string ("main"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 159)), GALGAS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main page 0\""), fixItArray9  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 159)) ;
    }
    const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, var_page_6887.mProperty_uint.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_10) {
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (var_page_6887.getter_location (SOURCE_FILE ("baseline_compilation.galgas", 162)), GALGAS_string ("the \"main\" should be declared in page 0: \"noreturn main page 0\""), fixItArray11  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 162)) ;
    }
  }else if (kBoolFalse == test_7) {
    TC_Array <C_FixItDescription> fixItArray12 ;
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mEndOfProgram (SOURCE_FILE ("baseline_compilation.galgas", 165)), GALGAS_string ("the program should declare the \"main\" routine"), fixItArray12  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 165)) ;
  }
  GALGAS_bool var_needsToSavePCLATH_7407 = GALGAS_bool (false) ;
  GALGAS_uint var_totalPageCount_7442 = var_piccoloDeviceModel_4454.mProperty_mRomSize.getter_uint (SOURCE_FILE ("baseline_compilation.galgas", 169)).add_operation (GALGAS_uint ((uint32_t) 511U), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 169)).divide_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 169)) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_7546 (constinArgument_inPiccoloModel.getter_mRoutineDefinitionList (SOURCE_FILE ("baseline_compilation.galgas", 170)), kENUMERATION_UP) ;
  while (enumerator_7546.hasCurrentObject ()) {
    const enumGalgasBool test_13 = GALGAS_bool (kIsStrictSup, enumerator_7546.current_mPage (HERE).getter_uint (SOURCE_FILE ("baseline_compilation.galgas", 171)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_13) {
      var_needsToSavePCLATH_7407 = GALGAS_bool (true) ;
    }
    const enumGalgasBool test_14 = GALGAS_bool (kIsSupOrEqual, enumerator_7546.current_mPage (HERE).getter_uint (SOURCE_FILE ("baseline_compilation.galgas", 174)).objectCompare (var_totalPageCount_7442)).boolEnum () ;
    if (kBoolTrue == test_14) {
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (enumerator_7546.current_mPage (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 175)), GALGAS_string ("invalid value (").add_operation (enumerator_7546.current_mPage (HERE).mProperty_uint.getter_string (SOURCE_FILE ("baseline_compilation.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 175)).add_operation (GALGAS_string ("); the device has "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 175)).add_operation (var_totalPageCount_7442.getter_string (SOURCE_FILE ("baseline_compilation.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 175)).add_operation (GALGAS_string (" 512 word page(s) on rom"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 175)), fixItArray15  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 175)) ;
    }
    enumerator_7546.gotoNextObject () ;
  }
  GALGAS_baseline_5F_routineDefinitionList var_sortedRoutineDefinitionList_7904 = GALGAS_baseline_5F_routineDefinitionList::constructor_emptyList (SOURCE_FILE ("baseline_compilation.galgas", 179)) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_8000 (constinArgument_inPiccoloModel.mProperty_mRoutineDefinitionList, kENUMERATION_UP) ;
  while (enumerator_8000.hasCurrentObject ()) {
    const enumGalgasBool test_16 = GALGAS_bool (kIsEqual, enumerator_8000.current_mRoutineName (HERE).mProperty_string.objectCompare (GALGAS_string ("main"))).boolEnum () ;
    if (kBoolTrue == test_16) {
      {
      var_sortedRoutineDefinitionList_7904.setter_insertAtIndex (enumerator_8000.current_mRoutineName (HERE), enumerator_8000.current_mPage (HERE), enumerator_8000.current_mIsNoReturn (HERE), enumerator_8000.current_mInstructionList (HERE), enumerator_8000.current_mEndOfRoutineLocation (HERE), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 182)) ;
      }
    }else if (kBoolFalse == test_16) {
      var_sortedRoutineDefinitionList_7904.addAssign_operation (enumerator_8000.current_mRoutineName (HERE), enumerator_8000.current_mPage (HERE), enumerator_8000.current_mIsNoReturn (HERE), enumerator_8000.current_mInstructionList (HERE), enumerator_8000.current_mEndOfRoutineLocation (HERE)  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 191)) ;
    }
    enumerator_8000.gotoNextObject () ;
  }
  GALGAS_baseline_5F_intermediate_5F_instructionList var_intermediateInstructionList_8504 = GALGAS_baseline_5F_intermediate_5F_instructionList::constructor_emptyList (SOURCE_FILE ("baseline_compilation.galgas", 200)) ;
  const enumGalgasBool test_17 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 201)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_17) {
    GALGAS_uint var_currentPage_8611 = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_uint var_localLabelIndex_8641 = GALGAS_uint ((uint32_t) 0U) ;
    if (var_totalPageCount_7442.isValid ()) {
      uint32_t variant_8654 = var_totalPageCount_7442.uintValue () ;
      bool loop_8654 = true ;
      while (loop_8654) {
        loop_8654 = GALGAS_bool (kIsStrictInf, var_currentPage_8611.objectCompare (var_totalPageCount_7442)).isValid () ;
        if (loop_8654) {
          loop_8654 = GALGAS_bool (kIsStrictInf, var_currentPage_8611.objectCompare (var_totalPageCount_7442)).boolValue () ;
        }
        if (loop_8654 && (0 == variant_8654)) {
          loop_8654 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_compilation.galgas", 204)) ;
        }
        if (loop_8654) {
          variant_8654 -- ;
          GALGAS_bool var_pseudo_5F_PAGE_5F_generated_8743 = GALGAS_bool (false) ;
          cEnumerator_baseline_5F_routineDefinitionList enumerator_8796 (var_sortedRoutineDefinitionList_7904, kENUMERATION_UP) ;
          while (enumerator_8796.hasCurrentObject ()) {
            const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, enumerator_8796.current_mPage (HERE).getter_uint (SOURCE_FILE ("baseline_compilation.galgas", 207)).objectCompare (var_currentPage_8611)).boolEnum () ;
            if (kBoolTrue == test_18) {
              const enumGalgasBool test_19 = var_pseudo_5F_PAGE_5F_generated_8743.operator_not (SOURCE_FILE ("baseline_compilation.galgas", 209)).boolEnum () ;
              if (kBoolTrue == test_19) {
                var_pseudo_5F_PAGE_5F_generated_8743 = GALGAS_bool (true) ;
                var_intermediateInstructionList_8504.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::constructor_new (var_currentPage_8611  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 211))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 211)) ;
              }
              GALGAS_routineKind var_routineKind_9103 ;
              const enumGalgasBool test_20 = enumerator_8796.current_mIsNoReturn (HERE).boolEnum () ;
              if (kBoolTrue == test_20) {
                var_routineKind_9103 = GALGAS_routineKind::constructor_noReturnRoutine (SOURCE_FILE ("baseline_compilation.galgas", 216)) ;
                const enumGalgasBool test_21 = GALGAS_bool (kIsEqual, enumerator_8796.current_mInstructionList (HERE).getter_length (SOURCE_FILE ("baseline_compilation.galgas", 218)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                if (kBoolTrue == test_21) {
                  TC_Array <C_FixItDescription> fixItArray22 ;
                  inCompiler->emitSemanticError (enumerator_8796.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 219)), GALGAS_string ("a noreturn routine should terminate by a GOTO or a FOREVER loop"), fixItArray22  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 219)) ;
                }else if (kBoolFalse == test_21) {
                  GALGAS_baseline_5F_instruction var_lastInstruction_9488 ;
                  enumerator_8796.current_mInstructionList (HERE).method_last (var_lastInstruction_9488, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 221)) ;
                  callExtensionMethod_shouldNotContinueInSequence ((const cPtr_baseline_5F_instruction *) var_lastInstruction_9488.ptr (), GALGAS_string ("a noreturn routine should terminate by a GOTO or a FOREVER loop"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 222)) ;
                }
              }else if (kBoolFalse == test_20) {
                var_routineKind_9103 = GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("baseline_compilation.galgas", 225)) ;
                const enumGalgasBool test_23 = GALGAS_bool (kIsEqual, enumerator_8796.current_mInstructionList (HERE).getter_length (SOURCE_FILE ("baseline_compilation.galgas", 227)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                if (kBoolTrue == test_23) {
                  TC_Array <C_FixItDescription> fixItArray24 ;
                  inCompiler->emitSemanticError (enumerator_8796.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 228)), GALGAS_string ("a baseline routine must end with a MOVLW instruction"), fixItArray24  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 228)) ;
                }else if (kBoolFalse == test_23) {
                  GALGAS_baseline_5F_instruction var_lastInstruction_10010 ;
                  enumerator_8796.current_mInstructionList (HERE).method_last (var_lastInstruction_10010, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 230)) ;
                  callExtensionMethod_shouldTerminateWithMOVLW ((const cPtr_baseline_5F_instruction *) var_lastInstruction_10010.ptr (), GALGAS_string ("the last routine instruction should be MOVLW"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 231)) ;
                }
              }
              const enumGalgasBool test_25 = GALGAS_bool (kIsNotEqual, enumerator_8796.current_mRoutineName (HERE).mProperty_string.objectCompare (GALGAS_string ("main"))).boolEnum () ;
              if (kBoolTrue == test_25) {
                var_intermediateInstructionList_8504.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::constructor_new (enumerator_8796.current_mRoutineName (HERE), enumerator_8796.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 236))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 236))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 236)) ;
                var_intermediateInstructionList_8504.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (enumerator_8796.current_mRoutineName (HERE)  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 237))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 237)) ;
              }
              GALGAS_bool var_continuesInSequence_10801 ;
              {
              routine_handleBaselineInstructionList (var_currentPage_8611, enumerator_8796.current_mInstructionList (HERE), var_routineMap_5596, var_registerTable_5194, var_constantMap_5822, var_localLabelIndex_8641, var_intermediateInstructionList_8504, var_listFileContents_4359, var_continuesInSequence_10801, var_routineKind_9103, enumerator_8796.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 250)), var_usedRegisters_6059, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 239)) ;
              }
              var_intermediateInstructionList_8504.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::constructor_new (enumerator_8796.current_mRoutineName (HERE), var_currentPage_8611  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 253))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 253)) ;
              const enumGalgasBool test_26 = enumerator_8796.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_10801 COMMA_SOURCE_FILE ("baseline_compilation.galgas", 254)).boolEnum () ;
              if (kBoolTrue == test_26) {
                TC_Array <C_FixItDescription> fixItArray27 ;
                inCompiler->emitSemanticError (enumerator_8796.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 255)), GALGAS_string ("execution should not reach the end of a \"noreturn\" routine"), fixItArray27  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 255)) ;
              }
            }
            enumerator_8796.gotoNextObject () ;
          }
          var_currentPage_8611.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 259)) ;
        }
      }
    }
  }
  GALGAS_stringset var_usedRoutineSet_11359 = function_baseline_5F_computeUsedRoutines (constinArgument_inPiccoloModel.mProperty_mRoutineDefinitionList, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 263)) ;
  GALGAS_baseline_5F_declaredRoutineMap var_declaredRoutineMap_11464 = GALGAS_baseline_5F_declaredRoutineMap::constructor_emptyMap (SOURCE_FILE ("baseline_compilation.galgas", 266)) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_11556 (constinArgument_inPiccoloModel.mProperty_mRoutineDefinitionList, kENUMERATION_UP) ;
  while (enumerator_11556.hasCurrentObject ()) {
    {
    var_declaredRoutineMap_11464.setter_insertKey (enumerator_11556.current_mRoutineName (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 268)) ;
    }
    enumerator_11556.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedRoutineDeclarationUnicity_11708 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_compilation.galgas", 271)) ;
  cEnumerator_lstringlist enumerator_11778 (constinArgument_inPiccoloModel.mProperty_mUnusedRoutineList, kENUMERATION_UP) ;
  while (enumerator_11778.hasCurrentObject ()) {
    const enumGalgasBool test_28 = var_declaredRoutineMap_11464.getter_hasKey (enumerator_11778.current_mValue (HERE).mProperty_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 273)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 273)).boolEnum () ;
    if (kBoolTrue == test_28) {
      TC_Array <C_FixItDescription> fixItArray29 ;
      inCompiler->emitSemanticError (enumerator_11778.current_mValue (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 274)), GALGAS_string ("the '").add_operation (enumerator_11778.current_mValue (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 274)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 274)), fixItArray29  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 274)) ;
    }else if (kBoolFalse == test_28) {
      const enumGalgasBool test_30 = var_unusedRoutineDeclarationUnicity_11708.getter_hasKey (enumerator_11778.current_mValue (HERE).mProperty_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 275)).boolEnum () ;
      if (kBoolTrue == test_30) {
        TC_Array <C_FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticWarning (enumerator_11778.current_mValue (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 276)), GALGAS_string ("the '").add_operation (enumerator_11778.current_mValue (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 276)).add_operation (GALGAS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 276)), fixItArray31  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 276)) ;
      }else if (kBoolFalse == test_30) {
        const enumGalgasBool test_32 = var_usedRoutineSet_11359.getter_hasKey (enumerator_11778.current_mValue (HERE).mProperty_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 277)).boolEnum () ;
        if (kBoolTrue == test_32) {
          TC_Array <C_FixItDescription> fixItArray33 ;
          inCompiler->emitSemanticWarning (enumerator_11778.current_mValue (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 278)), GALGAS_string ("the '").add_operation (enumerator_11778.current_mValue (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 278)).add_operation (GALGAS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 278)), fixItArray33  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 278)) ;
        }
      }
    }
    var_unusedRoutineDeclarationUnicity_11708.addAssign_operation (enumerator_11778.current_mValue (HERE).mProperty_string  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 280)) ;
    enumerator_11778.gotoNextObject () ;
  }
  cEnumerator_baseline_5F_declaredRoutineMap enumerator_12306 (var_declaredRoutineMap_11464, kENUMERATION_UP) ;
  while (enumerator_12306.hasCurrentObject ()) {
    const enumGalgasBool test_34 = var_usedRoutineSet_11359.getter_hasKey (enumerator_12306.current_lkey (HERE).mProperty_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 283)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 283)).operator_and (var_unusedRoutineDeclarationUnicity_11708.getter_hasKey (enumerator_12306.current_lkey (HERE).mProperty_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 283)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 283)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 283)).boolEnum () ;
    if (kBoolTrue == test_34) {
      TC_Array <C_FixItDescription> fixItArray35 ;
      inCompiler->emitSemanticWarning (enumerator_12306.current_lkey (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 284)), GALGAS_string ("the '").add_operation (enumerator_12306.current_lkey (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 284)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 284)), fixItArray35  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 284)) ;
    }
    enumerator_12306.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedDeclarationUnicity_12622 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_compilation.galgas", 288)) ;
  cEnumerator_lstringlist enumerator_12693 (constinArgument_inPiccoloModel.mProperty_mUnusedRegisterList, kENUMERATION_UP) ;
  while (enumerator_12693.hasCurrentObject ()) {
    const enumGalgasBool test_36 = var_registerTable_5194.getter_hasKey (enumerator_12693.current_mValue (HERE).mProperty_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 290)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 290)).boolEnum () ;
    if (kBoolTrue == test_36) {
      TC_Array <C_FixItDescription> fixItArray37 ;
      inCompiler->emitSemanticError (enumerator_12693.current_mValue (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 291)), GALGAS_string ("the '").add_operation (enumerator_12693.current_mValue (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 291)).add_operation (GALGAS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 291)), fixItArray37  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 291)) ;
    }else if (kBoolFalse == test_36) {
      const enumGalgasBool test_38 = var_unusedDeclarationUnicity_12622.getter_hasKey (enumerator_12693.current_mValue (HERE).mProperty_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 292)).boolEnum () ;
      if (kBoolTrue == test_38) {
        TC_Array <C_FixItDescription> fixItArray39 ;
        inCompiler->emitSemanticWarning (enumerator_12693.current_mValue (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 293)), GALGAS_string ("the '").add_operation (enumerator_12693.current_mValue (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 293)).add_operation (GALGAS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 293)), fixItArray39  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 293)) ;
      }else if (kBoolFalse == test_38) {
        const enumGalgasBool test_40 = var_usedRegisters_6059.getter_hasKey (enumerator_12693.current_mValue (HERE).mProperty_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 294)).boolEnum () ;
        if (kBoolTrue == test_40) {
          TC_Array <C_FixItDescription> fixItArray41 ;
          inCompiler->emitSemanticWarning (enumerator_12693.current_mValue (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 295)), GALGAS_string ("the '").add_operation (enumerator_12693.current_mValue (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 295)).add_operation (GALGAS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 295)), fixItArray41  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 295)) ;
        }
      }
    }
    var_unusedDeclarationUnicity_12622.addAssign_operation (enumerator_12693.current_mValue (HERE).mProperty_string  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 297)) ;
    enumerator_12693.gotoNextObject () ;
  }
  cEnumerator_declaredByteMap enumerator_13189 (var_declaredByteMap_5523, kENUMERATION_UP) ;
  while (enumerator_13189.hasCurrentObject ()) {
    const enumGalgasBool test_42 = var_usedRegisters_6059.getter_hasKey (enumerator_13189.current_lkey (HERE).mProperty_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 300)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 300)).operator_and (var_unusedDeclarationUnicity_12622.getter_hasKey (enumerator_13189.current_lkey (HERE).mProperty_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 300)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 300)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 300)).boolEnum () ;
    if (kBoolTrue == test_42) {
      TC_Array <C_FixItDescription> fixItArray43 ;
      inCompiler->emitSemanticWarning (enumerator_13189.current_lkey (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 301)), GALGAS_string ("the '").add_operation (enumerator_13189.current_lkey (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 301)).add_operation (GALGAS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 301)), fixItArray43  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 301)) ;
    }
    enumerator_13189.gotoNextObject () ;
  }
  const enumGalgasBool test_44 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 305)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.getter_value ()) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 305)).boolEnum () ;
  if (kBoolTrue == test_44) {
    var_listFileContents_4359.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 306)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 306)) ;
    var_listFileContents_4359.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("INTERMEDIATE INSTRUCTION LIST").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 307)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 307)) ;
    var_listFileContents_4359.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 308)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 308)) ;
    var_listFileContents_4359.plusAssign_operation(GALGAS_string ("Generated intermediate code:\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 309)) ;
    var_listFileContents_4359.plusAssign_operation(GALGAS_string (" Line Length Mnemonic\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 310)) ;
    GALGAS_uint var_currentAddress_13919 = GALGAS_uint ((uint32_t) 0U) ;
    cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_13966 (var_intermediateInstructionList_8504, kENUMERATION_UP) ;
    GALGAS_uint index_13931 ((uint32_t) 0) ;
    while (enumerator_13966.hasCurrentObject ()) {
      var_listFileContents_4359.plusAssign_operation(index_13931.getter_string (SOURCE_FILE ("baseline_compilation.galgas", 313)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 5U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 313)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 313)) ;
      var_listFileContents_4359.plusAssign_operation(callExtensionGetter_length ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_13966.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 314)).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 314)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 6U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 314)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 314)) ;
      callExtensionMethod_print ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_13966.current_mInstruction (HERE).ptr (), var_listFileContents_4359, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 315)) ;
      var_listFileContents_4359.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 316)) ;
      callExtensionMethod_setCurrentAddress ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_13966.current_mInstruction (HERE).ptr (), var_currentAddress_13919, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 317)) ;
      enumerator_13966.gotoNextObject () ;
      index_13931.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 312)) ;
    }
    var_listFileContents_4359.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 319)) ;
    var_listFileContents_4359.plusAssign_operation(GALGAS_string ("Code size without optimization: ").add_operation (var_currentAddress_13919.getter_string (SOURCE_FILE ("baseline_compilation.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 320)).add_operation (GALGAS_string (" words.\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 320)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 320)) ;
  }
  const enumGalgasBool test_45 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 323)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.getter_value ()) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 323)).boolEnum () ;
  if (kBoolTrue == test_45) {
    {
    routine_perform_5F_baseline_5F_optimizations (var_intermediateInstructionList_8504, var_listFileContents_4359, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 324)) ;
    }
  }
  {
  routine_initCodeGenerator (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 327)) ;
  }
  GALGAS_registerExpression var_sr_14760 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 329))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 329)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 330))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 330))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 330)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 331))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 328)) ;
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_statusRegister_15008 ;
  GALGAS_bitSliceTable var_statusRegisterBitSliceTable_15060 ;
  callExtensionMethod_resolveBaselineAccess ((const cPtr_registerExpression *) var_sr_14760.ptr (), var_registerTable_5194, var_constantMap_5822, var_statusRegister_15008, var_statusRegisterBitSliceTable_15060, var_usedRegisters_6059, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 333)) ;
  GALGAS_baseline_5F_assembly_5F_instructionList var_assemblyInstructionList_15114 = GALGAS_baseline_5F_assembly_5F_instructionList::constructor_emptyList (SOURCE_FILE ("baseline_compilation.galgas", 340)) ;
  const enumGalgasBool test_46 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 341)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_46) {
    {
    routine_build_5F_baseline_5F_assembly_5F_code (var_intermediateInstructionList_8504, var_actualConfigurationMap_4954, var_statusRegister_15008, var_statusRegisterBitSliceTable_15060, var_assemblyInstructionList_15114, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 342)) ;
    }
  }
  const enumGalgasBool test_47 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 351)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_47) {
    var_listFileContents_4359.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 352)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 352)) ;
    var_listFileContents_4359.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("GENERATED CODE").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 353)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 353)) ;
    var_listFileContents_4359.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 354)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 354)) ;
    var_listFileContents_4359.plusAssign_operation(GALGAS_string ("Address Code Mnemonic\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 355)) ;
    GALGAS_uint var_usedROMsize_15935 ;
    {
    routine_build_5F_baseline_5F_binary_5F_code (var_assemblyInstructionList_15114, var_piccoloDeviceModel_4454.mProperty_mRomSize.getter_uint (SOURCE_FILE ("baseline_compilation.galgas", 358)), var_listFileContents_4359, var_usedROMsize_15935, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 356)) ;
    }
  }
  const enumGalgasBool test_48 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_48) {
    GALGAS_string var_listFile_16073 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 365)).add_operation (GALGAS_string (".list"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 365)) ;
    GALGAS_bool joker_16201 ; // Joker input parameter
    var_listFileContents_4359.method_writeToFileWhenDifferentContents (var_listFile_16073, joker_16201, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 366)) ;
  }
  const enumGalgasBool test_49 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 370)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_49) {
    GALGAS_string var_contents_16684 ;
    {
    routine_getGeneratedContents (var_contents_16684, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 381)) ;
    }
    GALGAS_string var_destinationFile_16714 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 382)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 382)) ;
    GALGAS_bool joker_16840 ; // Joker input parameter
    var_contents_16684.method_writeToFileWhenDifferentContents (var_destinationFile_16714, joker_16840, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 383)) ;
    const enumGalgasBool test_50 = GALGAS_bool (gOption_piccolo_5F_options_output_5F_C_5F_Array.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_50) {
      GALGAS_string var_baseName_16927 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("baseline_compilation.galgas", 385)).getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 385)) ;
      {
      routine_get_5F_C_5F_ArrayImplementation (var_baseName_16927, var_contents_16684, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 386)) ;
      }
      var_destinationFile_16714 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 387)).add_operation (GALGAS_string (".c"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 387)) ;
      GALGAS_bool joker_17202 ; // Joker input parameter
      var_contents_16684.method_writeToFileWhenDifferentContents (var_destinationFile_16714, joker_17202, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 388)) ;
      {
      routine_get_5F_C_5F_ArrayHeader (var_baseName_16927, var_contents_16684, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 389)) ;
      }
      var_destinationFile_16714 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 390)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 390)) ;
      GALGAS_bool joker_17400 ; // Joker input parameter
      var_contents_16684.method_writeToFileWhenDifferentContents (var_destinationFile_16714, joker_17400, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 391)) ;
    }
    const enumGalgasBool test_51 = GALGAS_bool (gOption_piccolo_5F_options_generateAssembly.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_51) {
      GALGAS_string var_assemblyCode_18405 = GALGAS_string ("  processor ").add_operation (constinArgument_inPiccoloModel.mProperty_mDeviceName.getter_string (SOURCE_FILE ("baseline_compilation.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 410)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 410)) ;
      cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_18501 (var_assemblyInstructionList_15114, kENUMERATION_UP) ;
      while (enumerator_18501.hasCurrentObject ()) {
        callExtensionMethod_print ((const cPtr_baseline_5F_assembly_5F_instruction *) enumerator_18501.current_mInstruction (HERE).ptr (), var_assemblyCode_18405, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 412)) ;
        var_assemblyCode_18405.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 413)) ;
        enumerator_18501.gotoNextObject () ;
      }
      var_assemblyCode_18405.plusAssign_operation(GALGAS_string ("\n"
        ";--- Registers\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 415)) ;
      cEnumerator_registerTable enumerator_18661 (var_registerTable_5194, kENUMERATION_UP) ;
      while (enumerator_18661.hasCurrentObject ()) {
        GALGAS_uint var_address_18719 ;
        enumerator_18661.current_mRegisterAddressList (HERE).method_first (var_address_18719, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 417)) ;
        var_assemblyCode_18405.plusAssign_operation(enumerator_18661.current_lkey (HERE).mProperty_string.add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 418)).add_operation (var_address_18719.getter_hexString (SOURCE_FILE ("baseline_compilation.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 418)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 418)) ;
        enumerator_18661.gotoNextObject () ;
      }
      var_assemblyCode_18405.plusAssign_operation(GALGAS_string ("W EQU 0\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 420)) ;
      var_assemblyCode_18405.plusAssign_operation(GALGAS_string (";--- Configuration\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 421)) ;
      cEnumerator_actualConfigurationMap enumerator_18926 (var_actualConfigurationMap_4954, kENUMERATION_UP) ;
      while (enumerator_18926.hasCurrentObject ()) {
        var_assemblyCode_18405.plusAssign_operation(GALGAS_string ("  __config ").add_operation (enumerator_18926.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("baseline_compilation.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 423)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 423)).add_operation (enumerator_18926.current_mRegisterValue (HERE).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 423)).getter_hexString (SOURCE_FILE ("baseline_compilation.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 423)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 423)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 423)) ;
        enumerator_18926.gotoNextObject () ;
      }
      var_assemblyCode_18405.plusAssign_operation(GALGAS_string ("\n"
        "  END\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 425)) ;
      GALGAS_string var_asmDestinationFile_19124 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 426)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 426)) ;
      GALGAS_bool joker_19259 ; // Joker input parameter
      var_assemblyCode_18405.method_writeToFileWhenDifferentContents (var_asmDestinationFile_19124, joker_19259, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 427)) ;
    }
  }else if (kBoolFalse == test_49) {
    GALGAS_string var_hexDestinationFile_19353 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 430)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 430)) ;
    const enumGalgasBool test_52 = var_hexDestinationFile_19353.getter_fileExists (SOURCE_FILE ("baseline_compilation.galgas", 431)).boolEnum () ;
    if (kBoolTrue == test_52) {
      {
      GALGAS_string::class_method_deleteFile (var_hexDestinationFile_19353, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 432)) ;
      }
    }
    GALGAS_string var_asmDestinationFile_19543 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 434)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 434)) ;
    const enumGalgasBool test_53 = var_asmDestinationFile_19543.getter_fileExists (SOURCE_FILE ("baseline_compilation.galgas", 435)).boolEnum () ;
    if (kBoolTrue == test_53) {
      {
      GALGAS_string::class_method_deleteFile (var_asmDestinationFile_19543, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 436)) ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'handleBaselineInstructionList'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  cEnumerator_baseline_5F_instructionList enumerator_2356 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  GALGAS_uint index_2331 ((uint32_t) 0) ;
  while (enumerator_2356.hasCurrentObject ()) {
    const enumGalgasBool test_0 = outArgument_outContinuesInSequence.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 74)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_2356.current_mInstruction (HERE).getter_mInstructionLocation (SOURCE_FILE ("baseline_semantic_analysis.galgas", 75)), GALGAS_string ("Unreachable code"), fixItArray1  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 75)) ;
      outArgument_outContinuesInSequence = GALGAS_bool (true) ;
    }
    GALGAS_bool temp_2 ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, index_2331.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 88)).objectCompare (constinArgument_inInstructionList.getter_length (SOURCE_FILE ("baseline_semantic_analysis.galgas", 88)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      temp_2 = constinArgument_inLastInstructionShouldReturn ;
    }else if (kBoolFalse == test_3) {
      temp_2 = GALGAS_bool (false) ;
    }
    callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList ((const cPtr_baseline_5F_instruction *) enumerator_2356.current_mInstruction (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, outArgument_outContinuesInSequence, constinArgument_inRoutineKind, temp_2, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 78)) ;
    enumerator_2356.gotoNextObject () ;
    index_2331.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 73)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding extension method '@baseline_instruction_WO_OPERAND build_baseline_intermediate_instructionList'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the last routine instruction should be MOVLW"), fixItArray1  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 124)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mInstruction  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 126))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 126)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'acceptableTRISoperand'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_acceptableTRISoperand = false ;
static GALGAS_stringset gOnceFunctionResult_acceptableTRISoperand ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset function_acceptableTRISoperand (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_acceptableTRISoperand) {
    gOnceFunctionResult_acceptableTRISoperand = onceFunction_acceptableTRISoperand (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_acceptableTRISoperand = true ;
  }
  return gOnceFunctionResult_acceptableTRISoperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_acceptableTRISoperand (void) {
  gOnceFunctionResult_acceptableTRISoperand.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_acceptableTRISoperand (NULL,
                                                                   releaseOnceFunctionResult_acceptableTRISoperand) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_acceptableTRISoperand [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_acceptableTRISoperand (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_acceptableTRISoperand (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_acceptableTRISoperand ("acceptableTRISoperand",
                                                                       functionWithGenericHeader_acceptableTRISoperand,
                                                                       & kTypeDescriptor_GALGAS_stringset,
                                                                       0,
                                                                       functionArgs_acceptableTRISoperand) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@baseline_instruction_TRIS build_baseline_intermediate_instructionList'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("this instruction is the last routine instruction but should be MOVLW"), fixItArray1  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 156)) ;
  }
  const enumGalgasBool test_2 = function_acceptableTRISoperand (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 159)).getter_hasKey (object->mProperty_mOperand.mProperty_string COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 159)).operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 159)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_string var_s_5573 = GALGAS_string::makeEmptyString () ;
    cEnumerator_stringset enumerator_5618 (function_acceptableTRISoperand (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 161)), kENUMERATION_UP) ;
    while (enumerator_5618.hasCurrentObject ()) {
      var_s_5573.plusAssign_operation(enumerator_5618.current_key (HERE), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 162)) ;
      if (enumerator_5618.hasNextObject ()) {
        var_s_5573.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 163)) ;
      }
      enumerator_5618.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("invalid TRIS operand; accepted operand are: ").add_operation (var_s_5573, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 165)), fixItArray3  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 165)) ;
  }
  GALGAS_uintlist var_registerAddressList_5837 ;
  GALGAS_registerProtection var_protection_5857 ;
  GALGAS_uint joker_5839_3 ; // Joker input parameter
  GALGAS_bitSliceTable joker_5839_2 ; // Joker input parameter
  GALGAS_string joker_5839_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (object->mProperty_mOperand, var_registerAddressList_5837, joker_5839_3, joker_5839_2, joker_5839_1, var_protection_5857, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 168)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, object->mProperty_mOperand, GALGAS_bool (true), var_protection_5857, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 169)) ;
  GALGAS_uint var_opcode_5978 ;
  var_registerAddressList_5837.method_first (var_opcode_5978, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 170)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_TRIS::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mOperand, var_opcode_5978  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 172))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 172)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_TRIS_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_TRIS_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_TRIS_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_TRIS_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@baseline_instruction_MNOP build_baseline_intermediate_instructionList'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray1  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 190)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mOccurrenceFactor  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 192))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 192)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_MNOP_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_MNOP_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_MNOP_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_MNOP_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding extension method '@baseline_instruction_literalOperation build_baseline_intermediate_instructionList'   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.operator_and (GALGAS_bool (kIsNotEqual, object->mProperty_mLiteralInstruction.objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("baseline_semantic_analysis.galgas", 209)))) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 209)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray1  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 210)) ;
  }
  GALGAS_sint_36__34_ var_immediatValue_7950 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mImmediatExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_immediatValue_7950, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 212)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_immediatValue_7950.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_immediatValue_7950.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 214)))) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 214)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("immediate value is evaluated as ").add_operation (var_immediatValue_7950.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 215)).add_operation (GALGAS_string (" (should be betwween -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 215)), fixItArray3  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 215)) ;
  }
  const enumGalgasBool test_4 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mProperty_mInstructionLocation, GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("baseline_semantic_analysis.galgas", 221)), var_immediatValue_7950.operator_and (GALGAS_sint ((int32_t) 255L).getter_sint_36__34_ (SOURCE_FILE ("baseline_semantic_analysis.galgas", 222)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 222)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 222))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 219))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 219)) ;
  }else if (kBoolFalse == test_4) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mLiteralInstruction, var_immediatValue_7950.operator_and (GALGAS_sint ((int32_t) 255L).getter_sint_36__34_ (SOURCE_FILE ("baseline_semantic_analysis.galgas", 227)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 227)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 227))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 224))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 224)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_literalOperation_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_literalOperation_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_literalOperation_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_literalOperation_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@baseline_instruction_FD build_baseline_intermediate_instructionList'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray1  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 247)) ;
  }
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_9572 ;
  GALGAS_bitSliceTable var_bitSliceTable_9610 ;
  callExtensionMethod_resolveBaselineAccess ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_9572, var_bitSliceTable_9610, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 249)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mInstruction_5F_FD_5F_base_5F_code, var_intermediateRegisterDescription_9572, object->mProperty_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 256))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 256)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_FD_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_FD_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FD_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_FD_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@baseline_instruction_CALL build_baseline_intermediate_instructionList'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_bool var_isNoReturn_10546 ;
  GALGAS_luint var_targetPage_10569 ;
  constinArgument_inRoutineMap.method_searchKey (object->mProperty_mTargetLabel, var_isNoReturn_10546, var_targetPage_10569, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 278)) ;
  const enumGalgasBool test_0 = var_isNoReturn_10546.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("baseline_semantic_analysis.galgas", 280)), GALGAS_string ("a \"noreturn\" routine should be called with a GOTO or a JUMP instruction"), fixItArray1  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 280)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inCurrentPage.objectCompare (var_targetPage_10569.mProperty_uint)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("baseline_semantic_analysis.galgas", 283)), GALGAS_string ("for an inter-page regular routine call, use a JSR instruction"), fixItArray3  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 283)) ;
  }
  const enumGalgasBool test_4 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabel  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 287))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 287)) ;
  }else if (kBoolFalse == test_4) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_CALL::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabel  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 291))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 291)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_CALL_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_CALL_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_CALL_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_CALL_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@baseline_instruction_JSR build_baseline_intermediate_instructionList'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_bool var_isNoReturn_11841 ;
  GALGAS_luint var_targetPage_11864 ;
  constinArgument_inRoutineMap.method_searchKey (object->mProperty_mTargetLabel, var_isNoReturn_11841, var_targetPage_11864, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 312)) ;
  const enumGalgasBool test_0 = var_isNoReturn_11841.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("baseline_semantic_analysis.galgas", 314)), GALGAS_string ("a \"noreturn\" routine should be called with a GOTO or a JUMP instruction"), fixItArray1  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 314)) ;
  }
  const enumGalgasBool test_2 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_JUMP::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabel, constinArgument_inCurrentPage, var_targetPage_11864.mProperty_uint  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 318))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 318)) ;
  }else if (kBoolFalse == test_2) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_JSR::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabel, constinArgument_inCurrentPage, var_targetPage_11864.mProperty_uint  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 324))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 324)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_JSR_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_JSR_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_JSR_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_JSR_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@baseline_instruction_F build_baseline_intermediate_instructionList'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray1  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 347)) ;
  }
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_13311 ;
  GALGAS_bitSliceTable joker_13317 ; // Joker input parameter
  callExtensionMethod_resolveBaselineAccess ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_13311, joker_13317, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 349)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mFAinstruction, var_intermediateRegisterDescription_13311  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 356))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 356)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_F_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_F_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_F_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_F_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@baseline_instruction_FB build_baseline_intermediate_instructionList'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray1  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 377)) ;
  }
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_14443 ;
  GALGAS_bitSliceTable var_bitSliceTable_14481 ;
  callExtensionMethod_resolveBaselineAccess ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_14443, var_bitSliceTable_14481, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 379)) ;
  GALGAS_uint var_bitNumber_14640 ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mProperty_mBitNumber.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_14481, var_bitNumber_14640, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 386)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mBitOrientedOp, var_intermediateRegisterDescription_14443, var_bitNumber_14640  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 393))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 393)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_FB_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_FB_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FB_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_FB_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@baseline_instruction_GOTO build_baseline_intermediate_instructionList'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray1  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 416)) ;
  }
  GALGAS_bool var_isNoReturn_15658 ;
  GALGAS_luint var_targetPage_15681 ;
  constinArgument_inRoutineMap.method_searchKey (object->mProperty_mTargetLabel, var_isNoReturn_15658, var_targetPage_15681, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 418)) ;
  const enumGalgasBool test_2 = var_isNoReturn_15658.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 419)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("baseline_semantic_analysis.galgas", 420)), GALGAS_string ("a regular routine should be called with a CALL or a JSR instruction"), fixItArray3  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 420)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inCurrentPage.objectCompare (var_targetPage_15681.mProperty_uint)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("baseline_semantic_analysis.galgas", 423)), GALGAS_string ("for an inter-page noreturn routine call, use a JUMP instruction"), fixItArray5  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 423)) ;
  }
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabel  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 427))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 427)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_GOTO_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_GOTO_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_GOTO_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_GOTO_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@baseline_instruction_JUMP build_baseline_intermediate_instructionList'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray1  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 447)) ;
  }
  GALGAS_bool var_isNoReturn_16928 ;
  GALGAS_luint var_targetPage_16951 ;
  constinArgument_inRoutineMap.method_searchKey (object->mProperty_mTargetLabel, var_isNoReturn_16928, var_targetPage_16951, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 449)) ;
  const enumGalgasBool test_2 = var_isNoReturn_16928.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 450)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("baseline_semantic_analysis.galgas", 451)), GALGAS_string ("a regular routine should be called with a CALL or a JSR instruction"), fixItArray3  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 451)) ;
  }
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_JUMP::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabel, constinArgument_inCurrentPage, var_targetPage_16951.mProperty_uint  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 455))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 455)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_JUMP_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_JUMP_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_JUMP_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_JUMP_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding extension method '@baseline_instruction_IF_BitTest build_baseline_intermediate_instructionList'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_18027 ;
  GALGAS_bitSliceTable var_bitSliceTable_18065 ;
  callExtensionMethod_resolveBaselineAccess ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_18027, var_bitSliceTable_18065, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 476)) ;
  GALGAS_uint var_bitNumber_18109 ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mProperty_mBitNumber.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_18065, var_bitNumber_18109, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 484)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mSkipIfSet, var_intermediateRegisterDescription_18027, var_bitNumber_18109  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 491))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 491)) ;
  GALGAS_bool var_unusedContinuesInSequence_18476 = GALGAS_bool (true) ;
  callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList ((const cPtr_baseline_5F_instruction *) object->mProperty_mInstruction.ptr (), constinArgument_inCurrentPage, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_unusedContinuesInSequence_18476, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 498)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_IF_5F_BitTest_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension method '@baseline_instruction_IF_IncDec build_baseline_intermediate_instructionList'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code var_baseCode_19457 ;
  const enumGalgasBool test_0 = object->mProperty_mIncrement.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_baseCode_19457 = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_INCFSZ (SOURCE_FILE ("baseline_semantic_analysis.galgas", 530)) ;
  }else if (kBoolFalse == test_0) {
    var_baseCode_19457 = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_DECFSZ (SOURCE_FILE ("baseline_semantic_analysis.galgas", 532)) ;
  }
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_19780 ;
  GALGAS_bitSliceTable var_bitSliceTable_19818 ;
  callExtensionMethod_resolveBaselineAccess ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_19780, var_bitSliceTable_19818, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 535)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::constructor_new (object->mProperty_mInstructionLocation, var_baseCode_19457, var_intermediateRegisterDescription_19780, object->mProperty_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 543))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 543)) ;
  GALGAS_bool var_unusedContinuesInSequence_20067 = GALGAS_bool (true) ;
  callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList ((const cPtr_baseline_5F_instruction *) object->mProperty_mInstruction.ptr (), constinArgument_inCurrentPage, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_unusedContinuesInSequence_20067, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 550)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_IncDec_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_IF_5F_IncDec_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_IF_5F_IncDec_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_IncDec_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@baseline_instruction_FOREVER build_baseline_intermediate_instructionList'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("a regular routine does not accept the \"forever\" instruction"), fixItArray0  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 581)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_noReturnRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("an interrupt routine does not accept the \"forever\" instruction"), fixItArray1  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 584)) ;
    }
    break ;
  }
  GALGAS_string var_label_30__21364 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 587)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 588)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_30__21364, object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 589))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 589))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 589)) ;
  {
  routine_handleBaselineInstructionList (constinArgument_inCurrentPage, object->mProperty_mInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, GALGAS_bool (false), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 590)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (object->mProperty_mInstructionLocation, GALGAS_lstring::constructor_new (var_label_30__21364, object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 607))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 605))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 605)) ;
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_FOREVER_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_FOREVER_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FOREVER_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_FOREVER_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding extension method '@baseline_instruction_STATIC_REPEAT build_baseline_intermediate_instructionList'    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_sint_36__34_ var_lowerBound_22845 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mLowerBoundExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_22845, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 628)) ;
  GALGAS_sint_36__34_ var_upperBound_22950 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mUpperBoundExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_22950, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 629)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_lowerBound_22845.objectCompare (var_upperBound_22950)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("lower bound (").add_operation (var_lowerBound_22845.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 632)).add_operation (GALGAS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 632)).add_operation (var_upperBound_22950.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 632)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 632)), fixItArray1  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 632)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_upperBound_22950.substract_operation (var_lowerBound_22845, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 633)).objectCompare (GALGAS_sint_36__34_ ((int64_t) 65535LL))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("repeat count (").add_operation (var_upperBound_22950.substract_operation (var_lowerBound_22845, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 634)).getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 634)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 634)).add_operation (GALGAS_string (") too large (should be <= 0xFFFF)"), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 634)), fixItArray3  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 634)) ;
    }
  }
  GALGAS_constantMap var_tempConstantMap_23330 = constinArgument_inConstantMap ;
  {
  var_tempConstantMap_23330.setter_insertKey (object->mProperty_mConstantName, var_lowerBound_22845, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 638)) ;
  }
  {
  routine_handleBaselineInstructionList (constinArgument_inCurrentPage, object->mProperty_mInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_tempConstantMap_23330, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, GALGAS_bool (false), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 639)) ;
  }
  const enumGalgasBool test_4 = ioArgument_ioContinuesInSequence.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 653)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfInstruction, GALGAS_string ("enclosed instruction list contains an endless loop"), fixItArray5  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 654)) ;
  }
  GALGAS_sint_36__34_ var_idx_23908 = var_lowerBound_22845.add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("baseline_semantic_analysis.galgas", 657)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 657)) ;
  if (var_upperBound_22950.substract_operation (var_lowerBound_22845, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 658)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("baseline_semantic_analysis.galgas", 658)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 658)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 658)).isValid ()) {
    uint32_t variant_23932 = var_upperBound_22950.substract_operation (var_lowerBound_22845, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 658)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("baseline_semantic_analysis.galgas", 658)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 658)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 658)).uintValue () ;
    bool loop_23932 = true ;
    while (loop_23932) {
      GALGAS_bool test_6 = GALGAS_bool (kIsInfOrEqual, var_idx_23908.objectCompare (var_upperBound_22950)) ;
      if (kBoolTrue == test_6.boolEnum ()) {
        test_6 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_semantic_analysis.galgas", 658)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      }
      loop_23932 = test_6.isValid () ;
      if (loop_23932) {
        loop_23932 = test_6.boolValue () ;
      }
      if (loop_23932 && (0 == variant_23932)) {
        loop_23932 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_semantic_analysis.galgas", 658)) ;
      }
      if (loop_23932) {
        variant_23932 -- ;
        GALGAS_constantMap var_constantMap_24045 = constinArgument_inConstantMap ;
        {
        var_constantMap_24045.setter_insertKey (object->mProperty_mConstantName, var_idx_23908, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 660)) ;
        }
        {
        routine_handleBaselineInstructionList (constinArgument_inCurrentPage, object->mProperty_mInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_constantMap_24045, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, GALGAS_bool (false), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 661)) ;
        }
        var_idx_23908.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 675)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension method '@baseline_instruction_do_while build_baseline_intermediate_instructionList'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_string var_labelInstructionBegin_25140 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 694)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 694)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 694)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_labelInstructionBegin_25140, object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 696))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 696))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 696)) ;
  {
  routine_handleBaselineInstructionList (constinArgument_inCurrentPage, object->mProperty_mRepeatedInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 698)) ;
  }
  cEnumerator_baseline_5F_partList enumerator_25757 (object->mProperty_mWhilePartList, kENUMERATION_UP) ;
  while (enumerator_25757.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_25757.current_mInstructionList (HERE).getter_length (SOURCE_FILE ("baseline_semantic_analysis.galgas", 714)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((const cPtr_baseline_5F_conditionExpression *) enumerator_25757.current_mCondition (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), object->mProperty_mInstructionLocation, var_labelInstructionBegin_25140, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 715)) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_string var_nextBranchLabel_26148 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 727)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 727)) ;
      ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 727)) ;
      callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((const cPtr_baseline_5F_conditionExpression *) enumerator_25757.current_mCondition (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), object->mProperty_mInstructionLocation, var_nextBranchLabel_26148, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 728)) ;
      {
      routine_handleBaselineInstructionList (constinArgument_inCurrentPage, enumerator_25757.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 739)) ;
      }
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (object->mProperty_mInstructionLocation, GALGAS_lstring::constructor_new (var_labelInstructionBegin_25140, object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 755))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 753))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 753)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_nextBranchLabel_26148, object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 756))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 756))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 756)) ;
    }
    enumerator_25757.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_do_5F_while_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_do_5F_while_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_do_5F_while_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_do_5F_while_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding extension method '@baseline_instruction_structured_if build_baseline_intermediate_instructionList'    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_string var_label_5F_nextCondition_27835 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 776)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 776)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 776)) ;
  GALGAS_string var_label_5F_endOfIfinstruction_27927 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 777)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 777)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 777)) ;
  callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((const cPtr_baseline_5F_conditionExpression *) object->mProperty_mIfCondition.ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), object->mProperty_mInstructionLocation, var_label_5F_nextCondition_27835, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 779)) ;
  GALGAS_bool var_thenContinuesInSequence_28553 ;
  {
  routine_handleBaselineInstructionList (constinArgument_inCurrentPage, object->mProperty_mThenInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_thenContinuesInSequence_28553, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 791)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mElseInstructionList.getter_length (SOURCE_FILE ("baseline_semantic_analysis.galgas", 806)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (constinArgument_inLastInstructionShouldReturn.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 806)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 806)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (object->mProperty_mInstructionLocation, GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_27927, object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 809))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 807))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 807)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_nextCondition_27835, object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 811))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 811))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 811)) ;
  GALGAS_bool var_elseContinuesInSequence_29313 ;
  {
  routine_handleBaselineInstructionList (constinArgument_inCurrentPage, object->mProperty_mElseInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_elseContinuesInSequence_29313, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 812)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mProperty_mElseInstructionList.getter_length (SOURCE_FILE ("baseline_semantic_analysis.galgas", 826)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (constinArgument_inLastInstructionShouldReturn.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 826)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 826)).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_5F_endOfIfinstruction_27927, object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 827))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 827))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 827)) ;
  }
  ioArgument_ioContinuesInSequence = var_thenContinuesInSequence_28553.operator_or (var_elseContinuesInSequence_29313 COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 830)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_instruction_5F_structured_5F_if_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if.mSlotID,
                                                                             extensionMethod_baseline_5F_instruction_5F_structured_5F_if_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_structured_5F_if_build_5F_baseline_5F_intermediate_5F_instructionList (defineExtensionMethod_baseline_5F_instruction_5F_structured_5F_if_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding extension method '@baseline_incDecRegisterInCondition build_intermediate_condition_instructions'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_31206 ;
  GALGAS_bitSliceTable var_bitSliceTable_31244 ;
  callExtensionMethod_resolveBaselineAccess ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_31206, var_bitSliceTable_31244, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 862)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::constructor_new (constinArgument_inInstructionLocation, var_intermediateRegisterDescription_31206, constinArgument_inTargetLabel, object->mProperty_mIncrement, object->mProperty_m_5F_W_5F_isDestination, object->mProperty_mBranchIfZero.operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 876))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 870))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 870)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_incDecRegisterInCondition_build_5F_intermediate_5F_condition_5F_instructions (void) {
  enterExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions (kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition.mSlotID,
                                                                           extensionMethod_baseline_5F_incDecRegisterInCondition_build_5F_intermediate_5F_condition_5F_instructions) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_incDecRegisterInCondition_build_5F_intermediate_5F_condition_5F_instructions (defineExtensionMethod_baseline_5F_incDecRegisterInCondition_build_5F_intermediate_5F_condition_5F_instructions, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@baseline_negateCondition build_intermediate_condition_instructions'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((const cPtr_baseline_5F_conditionExpression *) object->mProperty_mCondition.ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, constinArgument_inComplementaryBranch.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 896)), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 891)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_negateCondition_build_5F_intermediate_5F_condition_5F_instructions (void) {
  enterExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions (kTypeDescriptor_GALGAS_baseline_5F_negateCondition.mSlotID,
                                                                           extensionMethod_baseline_5F_negateCondition_build_5F_intermediate_5F_condition_5F_instructions) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_negateCondition_build_5F_intermediate_5F_condition_5F_instructions (defineExtensionMethod_baseline_5F_negateCondition_build_5F_intermediate_5F_condition_5F_instructions, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@baseline_andCondition build_intermediate_condition_instructions'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = constinArgument_inComplementaryBranch.boolEnum () ;
  if (kBoolTrue == test_0) {
    callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((const cPtr_baseline_5F_conditionExpression *) object->mProperty_mLeftExpression.ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 917)) ;
    callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((const cPtr_baseline_5F_conditionExpression *) object->mProperty_mRightExpression.ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 928)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_label_30__33379 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 940)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 940)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 940)) ;
    callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((const cPtr_baseline_5F_conditionExpression *) object->mProperty_mLeftExpression.ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, var_label_30__33379, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 941)) ;
    callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((const cPtr_baseline_5F_conditionExpression *) object->mProperty_mRightExpression.ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 952)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_new (var_label_30__33379, constinArgument_inInstructionLocation  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 963))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 963))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 963)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_andCondition_build_5F_intermediate_5F_condition_5F_instructions (void) {
  enterExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions (kTypeDescriptor_GALGAS_baseline_5F_andCondition.mSlotID,
                                                                           extensionMethod_baseline_5F_andCondition_build_5F_intermediate_5F_condition_5F_instructions) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_andCondition_build_5F_intermediate_5F_condition_5F_instructions (defineExtensionMethod_baseline_5F_andCondition_build_5F_intermediate_5F_condition_5F_instructions, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding extension method '@baseline_bitTest_in_structured_if_condition build_intermediate_condition_instructions' *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_34804 ;
  GALGAS_bitSliceTable var_bitSliceTable_34842 ;
  callExtensionMethod_resolveBaselineAccess ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_34804, var_bitSliceTable_34842, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 980)) ;
  GALGAS_uint var_bitNumber_34886 ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mProperty_mBitNumber.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_34842, var_bitNumber_34886, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 988)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_new (constinArgument_inInstructionLocation, constinArgument_inComplementaryBranch, var_intermediateRegisterDescription_34804, var_bitNumber_34886  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 995))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 995)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (constinArgument_inInstructionLocation, GALGAS_lstring::constructor_new (constinArgument_inTargetLabel, constinArgument_inInstructionLocation  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 1003))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 1001))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 1001)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_build_5F_intermediate_5F_condition_5F_instructions (void) {
  enterExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions (kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition.mSlotID,
                                                                           extensionMethod_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_build_5F_intermediate_5F_condition_5F_instructions) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_build_5F_intermediate_5F_condition_5F_instructions (defineExtensionMethod_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_build_5F_intermediate_5F_condition_5F_instructions, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@baseline_intermediate_NULL print'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_NULL_print (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 10)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_NULL_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_NULL_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_NULL_print (defineExtensionMethod_baseline_5F_intermediate_5F_NULL_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@baseline_intermediate_pseudo_PAGE print'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                              GALGAS_string & ioArgument_ioListFileContents,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("ORG ").add_operation (object->mProperty_mPage.multiply_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 16)).getter_hexString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 16)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 16)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 16)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_print (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_intermediate_pseudo_BEGIN_ROUTINE print'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("BEGIN OF ROUTINE ").add_operation (object->mProperty_mRoutineName.getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 22)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_print (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@baseline_intermediate_pseudo_END_ROUTINE print'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("END OF ROUTINE ").add_operation (object->mProperty_mRoutineName.getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)).add_operation (GALGAS_string (" IN PAGE "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)).add_operation (object->mProperty_mPage.getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_print (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@baseline_intermediate_pseudo_LABEL print'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("LABEL ").add_operation (object->mProperty_mLabel.getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_print (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@baseline_intermediate_instruction_FD print'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_FD_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (object->mProperty_mInstruction, inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 40)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 40)).add_operation (object->mProperty_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 40)) ;
  const enumGalgasBool test_0 = object->mProperty_m_5F_W_5F_isDestination.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 42)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_FD_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_instruction_5F_FD_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_FD_print (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_FD_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@baseline_intermediate_instruction_F print'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_F_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_F * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (object->mProperty_mInstruction, inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 49)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 49)).add_operation (object->mProperty_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_F_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_instruction_5F_F_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_F_print (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_F_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@baseline_intermediate_instruction_FB print'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_FB_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (object->mProperty_mInstruction, inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)).add_operation (object->mProperty_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)).add_operation (object->mProperty_mBitNumber.getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_FB_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_instruction_5F_FB_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_FB_print (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_FB_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@baseline_intermediate_instruction_BitTestSkip print'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
  const enumGalgasBool test_0 = object->mProperty_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 62)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 64)) ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (object->mProperty_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)).add_operation (object->mProperty_mBitNumber.getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_print (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@baseline_intermediate_GOTO print'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_GOTO_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_GOTO * object = (const cPtr_baseline_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_GOTO) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("GOTO ").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 72)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_GOTO_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_GOTO_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_GOTO_print (defineExtensionMethod_baseline_5F_intermediate_5F_GOTO_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@baseline_intermediate_JUMP print'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_JUMP_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_JUMP * object = (const cPtr_baseline_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JUMP) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JUMP ").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 78)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 78)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_JUMP_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_JUMP_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_JUMP_print (defineExtensionMethod_baseline_5F_intermediate_5F_JUMP_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@baseline_intermediate_CALL print'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_CALL_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_CALL * object = (const cPtr_baseline_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_CALL) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("CALL ").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 85)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 85)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_CALL_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_CALL_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_CALL_print (defineExtensionMethod_baseline_5F_intermediate_5F_CALL_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@baseline_intermediate_JSR print'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_JSR_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_JSR * object = (const cPtr_baseline_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JSR) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JSR ").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 92)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_JSR_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_JSR_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_JSR_print (defineExtensionMethod_baseline_5F_intermediate_5F_JSR_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@baseline_intermediate_instruction_literalOperation print'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (object->mProperty_mInstruction, inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 98)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 98)).add_operation (object->mProperty_mLiteralValue.getter_hexString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 98)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_print (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_literalOperation_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@baseline_intermediate_instruction_MNOP print'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("MNOP ").add_operation (object->mProperty_mOccurrenceFactor.getter_uint (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 104)).getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 104)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_print (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_MNOP_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@baseline_intermediate_incDecRegisterInCondition print'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JUMP "), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 110)) ;
  const enumGalgasBool test_0 = object->mProperty_mIncrement.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("INCF "), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 112)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("DECF "), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 114)) ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(object->mProperty_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 116)) ;
  const enumGalgasBool test_1 = object->mProperty_m_5F_W_5F_isDestination.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 118)) ;
  }
  const enumGalgasBool test_2 = object->mProperty_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" Z"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 121)) ;
  }else if (kBoolFalse == test_2) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" NZ"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 123)) ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (object->mProperty_mTargetLabel, inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 125)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_print (defineExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@baseline_intermediate_WO_OPERAND print'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * object = (const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (object->mProperty_mInstruction, inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 131)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_print (defineExtensionMethod_baseline_5F_intermediate_5F_WO_5F_OPERAND_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@baseline_intermediate_TRIS print'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_TRIS_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_TRIS * object = (const cPtr_baseline_5F_intermediate_5F_TRIS *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_TRIS) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("TRIS ").add_operation (object->mProperty_mOperand.getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 137)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 137)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_TRIS_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS.mSlotID,
                              extensionMethod_baseline_5F_intermediate_5F_TRIS_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_TRIS_print (defineExtensionMethod_baseline_5F_intermediate_5F_TRIS_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension getter '@baseline_intermediate_NULL length'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_NULL_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_NULL_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_NULL_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_NULL_length (defineExtensionGetter_baseline_5F_intermediate_5F_NULL_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@baseline_intermediate_pseudo_PAGE length'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_length (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@baseline_intermediate_pseudo_BEGIN_ROUTINE length'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_length (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@baseline_intermediate_pseudo_END_ROUTINE length'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_length (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@baseline_intermediate_pseudo_LABEL length'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_length (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@baseline_intermediate_actualInstruction length'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_actualInstruction_length (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 1U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_actualInstruction_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_actualInstruction_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_actualInstruction_length (defineExtensionGetter_baseline_5F_intermediate_5F_actualInstruction_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension getter '@baseline_intermediate_JUMP length'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_JUMP_length (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_baseline_5F_intermediate_5F_JUMP * object = (const cPtr_baseline_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JUMP) ;
  result_outLength = GALGAS_uint ((uint32_t) 1U).add_operation (object->mProperty_mCurrentPage.operator_xor (object->mProperty_mTargetPage COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 46)).getter_oneBitCount (SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 46)) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_JUMP_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_JUMP_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_JUMP_length (defineExtensionGetter_baseline_5F_intermediate_5F_JUMP_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension getter '@baseline_intermediate_JSR length'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_JSR_length (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_baseline_5F_intermediate_5F_JSR * object = (const cPtr_baseline_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JSR) ;
  result_outLength = GALGAS_uint ((uint32_t) 1U).add_operation (GALGAS_uint ((uint32_t) 2U).multiply_operation (object->mProperty_mCurrentPage.operator_xor (object->mProperty_mTargetPage COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)).getter_oneBitCount (SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_JSR_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_JSR_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_JSR_length (defineExtensionGetter_baseline_5F_intermediate_5F_JSR_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@baseline_intermediate_instruction_MNOP length'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_instruction_5F_MNOP_length (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
  result_outLength = object->mProperty_mOccurrenceFactor.getter_uint (SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 59)) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_instruction_5F_MNOP_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_instruction_5F_MNOP_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_instruction_5F_MNOP_length (defineExtensionGetter_baseline_5F_intermediate_5F_instruction_5F_MNOP_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@baseline_intermediate_incDecRegisterInCondition length'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_intermediate_5F_incDecRegisterInCondition_length (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
  const enumGalgasBool test_0 = object->mProperty_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outLength = GALGAS_uint ((uint32_t) 3U) ;
  }else if (kBoolFalse == test_0) {
    result_outLength = GALGAS_uint ((uint32_t) 2U) ;
  }
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_incDecRegisterInCondition_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_incDecRegisterInCondition_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_incDecRegisterInCondition_length (defineExtensionGetter_baseline_5F_intermediate_5F_incDecRegisterInCondition_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@baseline_intermediate_pseudo_PAGE setCurrentAddress'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_setCurrentAddress (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                          GALGAS_uint & ioArgument_ioCurrentWordAdress,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
  ioArgument_ioCurrentWordAdress = object->mProperty_mPage.multiply_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_setCurrentAddress (void) {
  enterExtensionMethod_setCurrentAddress (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE.mSlotID,
                                          extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_setCurrentAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_setCurrentAddress (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_setCurrentAddress, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@baseline_intermediate_pseudo_LABEL isLABEL'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GALGAS_bool (true) ;
//---
  return result_outIsLABEL ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_isLABEL (void) {
  enterExtensionGetter_isLABEL (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_isLABEL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_isLABEL (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_LABEL_isLABEL, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@baseline_intermediate_pseudo_PAGE isLABEL'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GALGAS_bool (true) ;
//---
  return result_outIsLABEL ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_isLABEL (void) {
  enterExtensionGetter_isLABEL (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE.mSlotID,
                                extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_isLABEL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_isLABEL (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_PAGE_isLABEL, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@baseline_intermediate_pseudo_END_ROUTINE isLABEL'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GALGAS_bool (true) ;
//---
  return result_outIsLABEL ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_isLABEL (void) {
  enterExtensionGetter_isLABEL (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE.mSlotID,
                                extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_isLABEL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_isLABEL (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_isLABEL, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension getter '@baseline_intermediate_NULL isNULL'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_NULL_isNULL (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GALGAS_bool (true) ;
//---
  return result_outIsNULL ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_NULL_isNULL (void) {
  enterExtensionGetter_isNULL (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_NULL_isNULL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_NULL_isNULL (defineExtensionGetter_baseline_5F_intermediate_5F_NULL_isNULL, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension getter '@baseline_intermediate_instruction_BitTestSkip isSkippingInstruction'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                                 C_Compiler * /* inCompiler */
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GALGAS_bool (true) ;
//---
  return result_outIsSkipping ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction (void) {
  enterExtensionGetter_isSkippingInstruction (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip.mSlotID,
                                              extensionGetter_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction (defineExtensionGetter_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_isSkippingInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@baseline_intermediate_GOTO nextInstructionIsReachable'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_GOTO_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_GOTO_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO.mSlotID,
                                                   extensionGetter_baseline_5F_intermediate_5F_GOTO_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_GOTO_nextInstructionIsReachable (defineExtensionGetter_baseline_5F_intermediate_5F_GOTO_nextInstructionIsReachable, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@baseline_intermediate_JUMP nextInstructionIsReachable'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_JUMP_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_JUMP_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP.mSlotID,
                                                   extensionGetter_baseline_5F_intermediate_5F_JUMP_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_JUMP_nextInstructionIsReachable (defineExtensionGetter_baseline_5F_intermediate_5F_JUMP_nextInstructionIsReachable, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension getter '@baseline_intermediate_pseudo_END_ROUTINE nextInstructionIsReachable'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                                    C_Compiler * /* inCompiler */
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE.mSlotID,
                                                   extensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_nextInstructionIsReachable (defineExtensionGetter_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_nextInstructionIsReachable, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding extension getter '@baseline_intermediate_instruction_literalOperation nextInstructionIsReachable'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                                           C_Compiler * /* inCompiler */
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
  result_outIsReachable = GALGAS_bool (kIsNotEqual, object->mProperty_mInstruction.objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 126)))) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable (void) {
  enterExtensionGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                                   extensionGetter_baseline_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable (defineExtensionGetter_baseline_5F_intermediate_5F_instruction_5F_literalOperation_nextInstructionIsReachable, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_intermediate_GOTO enterReferencedLabel'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_GOTO_enterReferencedLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_GOTO * object = (const cPtr_baseline_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_GOTO) ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (object->mProperty_mTargetLabel.mProperty_string  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 143)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_GOTO_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_GOTO_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_GOTO_enterReferencedLabel (defineExtensionMethod_baseline_5F_intermediate_5F_GOTO_enterReferencedLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_intermediate_JUMP enterReferencedLabel'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_JUMP_enterReferencedLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_JUMP * object = (const cPtr_baseline_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JUMP) ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (object->mProperty_mTargetLabel.mProperty_string  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 150)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_JUMP_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_JUMP_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_JUMP_enterReferencedLabel (defineExtensionMethod_baseline_5F_intermediate_5F_JUMP_enterReferencedLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_intermediate_CALL enterReferencedLabel'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_CALL_enterReferencedLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_CALL * object = (const cPtr_baseline_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_CALL) ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (object->mProperty_mTargetLabel.mProperty_string  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 157)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_CALL_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_CALL_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_CALL_enterReferencedLabel (defineExtensionMethod_baseline_5F_intermediate_5F_CALL_enterReferencedLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@baseline_intermediate_JSR enterReferencedLabel'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_JSR_enterReferencedLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_JSR * object = (const cPtr_baseline_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JSR) ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (object->mProperty_mTargetLabel.mProperty_string  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 164)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_JSR_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_JSR_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_JSR_enterReferencedLabel (defineExtensionMethod_baseline_5F_intermediate_5F_JSR_enterReferencedLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@baseline_intermediate_incDecRegisterInCondition enterReferencedLabel'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                        GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (object->mProperty_mTargetLabel  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 171)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel (void) {
  enterExtensionMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel (defineExtensionMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_enterReferencedLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@baseline_intermediate_pseudo_LABEL defineLabel'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                     GALGAS_baselineSymbolTableForOptimizations & ioArgument_ioRoutineSymbolTable,
                                                                                     const GALGAS_uint constinArgument_inLineIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
  {
  ioArgument_ioRoutineSymbolTable.setter_insertKey (object->mProperty_mLabel, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 191)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel (void) {
  enterExtensionMethod_defineLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                    extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_LABEL_defineLabel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Routine 'findBaselineFirstInstructionFromAddress'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_findBaselineFirstInstructionFromAddress (const GALGAS_uint constinArgument_inLineIndex,
                                                      const GALGAS_baseline_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                      GALGAS_baseline_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  GALGAS_uint var_currentAddress_7874 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 203)) ;
  GALGAS_bool var_found_8027 = GALGAS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 205)).isValid ()) {
    uint32_t variant_8042 = constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 205)).uintValue () ;
    bool loop_8042 = true ;
    while (loop_8042) {
      loop_8042 = GALGAS_bool (kIsStrictInf, var_currentAddress_7874.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 206)))).operator_and (var_found_8027.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 206)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 206)).isValid () ;
      if (loop_8042) {
        loop_8042 = GALGAS_bool (kIsStrictInf, var_currentAddress_7874.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 206)))).operator_and (var_found_8027.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 206)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 206)).boolValue () ;
      }
      if (loop_8042 && (0 == variant_8042)) {
        loop_8042 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 205)) ;
      }
      if (loop_8042) {
        variant_8042 -- ;
        if (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7874, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 208)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_baseline_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7874, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 208)).ptr ())) {
            GALGAS_baseline_5F_intermediate_5F_actualInstruction cast_8293_instr ((cPtr_baseline_5F_intermediate_5F_actualInstruction *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7874, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 208)).ptr ()) ;
            outArgument_outFirstInstruction = cast_8293_instr ;
            var_found_8027 = GALGAS_bool (true) ;
          }else{
            var_currentAddress_7874.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 213)) ;
          }
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Routine 'findBaselineFirstInstructionOrLabelFromAddress'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_findBaselineFirstInstructionOrLabelFromAddress (const GALGAS_uint constinArgument_inLineIndex,
                                                             const GALGAS_baseline_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                             GALGAS_baseline_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                             GALGAS_stringset & outArgument_outReachedLabelSet,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_optimizations.galgas", 225)) ;
  GALGAS_uint var_currentAddress_8804 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 229)) ;
  GALGAS_bool var_found_8957 = GALGAS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 231)).isValid ()) {
    uint32_t variant_8972 = constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 231)).uintValue () ;
    bool loop_8972 = true ;
    while (loop_8972) {
      loop_8972 = GALGAS_bool (kIsStrictInf, var_currentAddress_8804.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 232)))).operator_and (var_found_8957.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 232)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 232)).isValid () ;
      if (loop_8972) {
        loop_8972 = GALGAS_bool (kIsStrictInf, var_currentAddress_8804.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 232)))).operator_and (var_found_8957.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 232)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 232)).boolValue () ;
      }
      if (loop_8972 && (0 == variant_8972)) {
        loop_8972 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 231)) ;
      }
      if (loop_8972) {
        variant_8972 -- ;
        if (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8804, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_baseline_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8804, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).ptr ())) {
            GALGAS_baseline_5F_intermediate_5F_actualInstruction cast_9223_instr ((cPtr_baseline_5F_intermediate_5F_actualInstruction *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8804, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).ptr ()) ;
            outArgument_outFirstInstruction = cast_9223_instr ;
            var_found_8957 = GALGAS_bool (true) ;
          }else if (NULL != dynamic_cast <const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8804, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).ptr ())) {
            GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE cast_9331_instr ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8804, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).ptr ()) ;
            outArgument_outFirstInstruction = cast_9331_instr ;
            var_found_8957 = GALGAS_bool (true) ;
          }else if (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8804, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL) {
            GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL cast_9440_instr ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8804, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).ptr ()) ;
            outArgument_outFirstInstruction = cast_9440_instr ;
            outArgument_outReachedLabelSet.addAssign_operation (cast_9440_instr.getter_mLabel (SOURCE_FILE ("baseline_optimizations.galgas", 243)).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 243))  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 243)) ;
            var_currentAddress_8804.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 244)) ;
          }else{
            var_currentAddress_8804.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 246)) ;
          }
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'perform_baseline_optimizations'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_perform_5F_baseline_5F_optimizations (GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 521)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 521)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 521)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("CODE OPTIMIZATION").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 522)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 522)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 522)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 523)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 523)) ;
  GALGAS_baselineSymbolTableForOptimizations var_symbolTable_20581 = GALGAS_baselineSymbolTableForOptimizations::constructor_emptyMap (SOURCE_FILE ("baseline_optimizations.galgas", 525)) ;
  cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_20670 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
  GALGAS_uint index_20636 ((uint32_t) 0) ;
  while (enumerator_20670.hasCurrentObject ()) {
    callExtensionMethod_defineLabel ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_20670.current_mInstruction (HERE).ptr (), var_symbolTable_20581, index_20636, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 527)) ;
    enumerator_20670.gotoNextObject () ;
    index_20636.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 526)) ;
  }
  GALGAS_bool var_optimizationsDone_20830 = GALGAS_bool (true) ;
  GALGAS_uint var_iteration_20855 = GALGAS_uint ((uint32_t) 0U) ;
  if (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 532)).isValid ()) {
    uint32_t variant_20866 = ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 532)).uintValue () ;
    bool loop_20866 = true ;
    while (loop_20866) {
      loop_20866 = var_optimizationsDone_20830.isValid () ;
      if (loop_20866) {
        loop_20866 = var_optimizationsDone_20830.boolValue () ;
      }
      if (loop_20866 && (0 == variant_20866)) {
        loop_20866 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 532)) ;
      }
      if (loop_20866) {
        variant_20866 -- ;
        var_optimizationsDone_20830 = GALGAS_bool (false) ;
        var_iteration_20855.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 536)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Pass ").add_operation (var_iteration_20855.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 537)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 537)) ;
        cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_21112 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        GALGAS_uint index_21078 ((uint32_t) 0) ;
        while (enumerator_21112.hasCurrentObject ()) {
          if (enumerator_21112.current_mInstruction (HERE).isValid ()) {
            if (enumerator_21112.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) {
              GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE cast_21207_inst ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) enumerator_21112.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeBEGIN_5F_ROUTINE ((const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) cast_21207_inst.ptr (), index_21078, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_20830, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 542)) ;
            }else if (enumerator_21112.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO) {
              GALGAS_baseline_5F_intermediate_5F_GOTO cast_21368_inst ((cPtr_baseline_5F_intermediate_5F_GOTO *) enumerator_21112.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeGOTO ((const cPtr_baseline_5F_intermediate_5F_GOTO *) cast_21368_inst.ptr (), var_symbolTable_20581, index_21078, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_20830, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 544)) ;
            }else if (enumerator_21112.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP) {
              GALGAS_baseline_5F_intermediate_5F_JUMP cast_21533_inst ((cPtr_baseline_5F_intermediate_5F_JUMP *) enumerator_21112.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeJUMP ((const cPtr_baseline_5F_intermediate_5F_JUMP *) cast_21533_inst.ptr (), var_symbolTable_20581, index_21078, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_20830, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 546)) ;
            }else if (enumerator_21112.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL) {
              GALGAS_baseline_5F_intermediate_5F_CALL cast_21698_inst ((cPtr_baseline_5F_intermediate_5F_CALL *) enumerator_21112.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeCALL ((const cPtr_baseline_5F_intermediate_5F_CALL *) cast_21698_inst.ptr (), var_symbolTable_20581, index_21078, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_20830, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 548)) ;
            }else if (enumerator_21112.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR) {
              GALGAS_baseline_5F_intermediate_5F_JSR cast_21862_inst ((cPtr_baseline_5F_intermediate_5F_JSR *) enumerator_21112.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeJSR ((const cPtr_baseline_5F_intermediate_5F_JSR *) cast_21862_inst.ptr (), var_symbolTable_20581, index_21078, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_20830, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 550)) ;
            }else if (enumerator_21112.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition) {
              GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition cast_22047_inst ((cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) enumerator_21112.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeTestDecInc ((const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) cast_22047_inst.ptr (), var_symbolTable_20581, index_21078, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_20830, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 552)) ;
            }
          }
          enumerator_21112.gotoNextObject () ;
          index_21078.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 539)) ;
        }
        GALGAS_stringset var_referencedLabels_22261 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_optimizations.galgas", 557)) ;
        cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_22326 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        while (enumerator_22326.hasCurrentObject ()) {
          callExtensionMethod_enterReferencedLabel ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_22326.current_mInstruction (HERE).ptr (), var_referencedLabels_22261, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 559)) ;
          enumerator_22326.gotoNextObject () ;
        }
        cEnumerator_baselineSymbolTableForOptimizations enumerator_22425 (var_symbolTable_20581, kENUMERATION_UP) ;
        while (enumerator_22425.hasCurrentObject ()) {
          const enumGalgasBool test_0 = var_referencedLabels_22261.getter_hasKey (enumerator_22425.current_lkey (HERE).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 562)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 562)).operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 562)).boolEnum () ;
          if (kBoolTrue == test_0) {
            GALGAS_uint var_definitionLine_22550 ;
            var_symbolTable_20581.method_searchKey (enumerator_22425.current_lkey (HERE), var_definitionLine_22550, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 563)) ;
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (var_definitionLine_22550.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)).add_operation (GALGAS_string (": unreferenced label '"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)).add_operation (enumerator_22425.current_lkey (HERE).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)).add_operation (GALGAS_string ("' is deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)) ;
            {
            ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 565)), var_definitionLine_22550, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 565)) ;
            }
            {
            GALGAS_uint joker_22824 ; // Joker input parameter
            var_symbolTable_20581.setter_removeKey (enumerator_22425.current_lkey (HERE), joker_22824, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 566)) ;
            }
          }
          enumerator_22425.gotoNextObject () ;
        }
        GALGAS_bool var_reachable_22893 = GALGAS_bool (true) ;
        GALGAS_bool var_skippingInstruction_22930 = GALGAS_bool (false) ;
        GALGAS_bool var_previousWasSkippingInstruction_22979 = GALGAS_bool (false) ;
        cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_23029 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        GALGAS_uint index_22995 ((uint32_t) 0) ;
        while (enumerator_23029.hasCurrentObject ()) {
          const enumGalgasBool test_1 = var_reachable_22893.operator_or (var_previousWasSkippingInstruction_22979 COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 574)).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_reachable_22893 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23029.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 575)) ;
            var_previousWasSkippingInstruction_22979 = var_skippingInstruction_22930 ;
            var_skippingInstruction_22930 = callExtensionGetter_isSkippingInstruction ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23029.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 577)) ;
          }else if (kBoolFalse == test_1) {
            GALGAS_bool var_isLABEL_23327 = callExtensionGetter_isLABEL ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23029.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 579)) ;
            const enumGalgasBool test_2 = var_isLABEL_23327.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 580)).operator_and (callExtensionGetter_isNULL ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23029.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 580)).operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 580)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 580)).boolEnum () ;
            if (kBoolTrue == test_2) {
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (index_22995.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 581)).add_operation (GALGAS_string (": dead code is deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 581)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 581)) ;
              {
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 582)), index_22995, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 582)) ;
              }
            }else if (kBoolFalse == test_2) {
              const enumGalgasBool test_3 = var_isLABEL_23327.boolEnum () ;
              if (kBoolTrue == test_3) {
                var_reachable_22893 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23029.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 584)) ;
                var_previousWasSkippingInstruction_22979 = GALGAS_bool (false) ;
                var_skippingInstruction_22930 = GALGAS_bool (false) ;
              }
            }
          }
          enumerator_23029.gotoNextObject () ;
          index_22995.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 573)) ;
        }
        const enumGalgasBool test_4 = var_optimizationsDone_20830.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 590)).boolEnum () ;
        if (kBoolTrue == test_4) {
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No optimization\n"
            "\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 591)) ;
          GALGAS_uint var_currentAddress_23949 = GALGAS_uint ((uint32_t) 0U) ;
          cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_23997 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
          while (enumerator_23997.hasCurrentObject ()) {
            callExtensionMethod_setCurrentAddress ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23997.current_mInstruction (HERE).ptr (), var_currentAddress_23949, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 595)) ;
            enumerator_23997.gotoNextObject () ;
          }
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Minimum code size: ").add_operation (var_currentAddress_23949.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 597)).add_operation (GALGAS_string (" words\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 597)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 597)) ;
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@baseline_assembly_pseudo_ORG print'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ORG ").add_operation (object->mProperty_mOrigin.getter_hexString (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 10)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 10)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_print (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ORG_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@baseline_assembly_pseudo_BEGINOFROUTINE print'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (";  BEGIN OF ROUTINE ").add_operation (object->mProperty_mRoutineName.getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 16)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 16)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 16)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_print (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@baseline_assembly_pseudo_ENDOFROUTINE print'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (";  END OF ROUTINE ").add_operation (object->mProperty_mRoutineName.getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)).add_operation (GALGAS_string (" IN PAGE "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)).add_operation (object->mProperty_mPage.getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_print (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@baseline_assembly_pseudo_LABEL print'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * object = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
  ioArgument_ioListFileContents.plusAssign_operation(object->mProperty_mLabel.mProperty_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_print (defineExtensionMethod_baseline_5F_assembly_5F_pseudo_5F_LABEL_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@baseline_assembly_instruction_FD print'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_FD_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_FD * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (object->mProperty_mInstruction, inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)).add_operation (object->mProperty_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)) ;
  const enumGalgasBool test_0 = object->mProperty_m_5F_W_5F_isDestination.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 36)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", 1"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 38)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_FD_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_instruction_5F_FD_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_FD_print (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_FD_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@baseline_assembly_instruction_F print'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_F_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_F * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_F) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (object->mProperty_mInstruction, inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)).add_operation (object->mProperty_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_F_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_instruction_5F_F_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_F_print (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_F_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@baseline_assembly_instruction_FB print'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_FB_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_FB * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (object->mProperty_mInstruction, inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)).add_operation (object->mProperty_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)).add_operation (object->mProperty_mBitNumber.getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_FB_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_instruction_5F_FB_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_FB_print (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_FB_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_assembly_instruction_BitTestSkip print'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
  const enumGalgasBool test_0 = object->mProperty_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  BTFSS "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 58)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  BTFSC "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 60)) ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(object->mProperty_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 62)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 62)).add_operation (object->mProperty_mBitNumber.getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_print (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@baseline_assembly_GOTO print'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_GOTO_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_GOTO * object = (const cPtr_baseline_5F_assembly_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_GOTO) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  GOTO ").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_GOTO_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_GOTO_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_GOTO_print (defineExtensionMethod_baseline_5F_assembly_5F_GOTO_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@baseline_assembly_SKIP print'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_SKIP_print (const cPtr_baseline_5F_assembly_5F_instruction * /* inObject */,
                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  GOTO * + 2"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 74)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_SKIP_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_SKIP_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_SKIP_print (defineExtensionMethod_baseline_5F_assembly_5F_SKIP_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@baseline_assembly_CALL print'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_CALL_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_CALL * object = (const cPtr_baseline_5F_assembly_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_CALL) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  CALL ").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 81)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_CALL_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_CALL_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_CALL_print (defineExtensionMethod_baseline_5F_assembly_5F_CALL_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@baseline_assembly_instruction_literalOperation print'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * object = (const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (object->mProperty_mInstruction, inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)).add_operation (object->mProperty_mLiteralValue.getter_hexString (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_print (defineExtensionMethod_baseline_5F_assembly_5F_instruction_5F_literalOperation_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@baseline_assembly_incDecRegisterInCondition print'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * object = (const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
  const enumGalgasBool test_0 = object->mProperty_mIncrement.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  INCFSZ "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 94)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  DECFSZ "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 96)) ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(object->mProperty_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 98)) ;
  const enumGalgasBool test_1 = object->mProperty_m_5F_W_5F_isDestination.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 100)) ;
  }else if (kBoolFalse == test_1) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", 1"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 102)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_print (defineExtensionMethod_baseline_5F_assembly_5F_incDecRegisterInCondition_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@baseline_assembly_WO_OPERAND print'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND * object = (const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (object->mProperty_mInstruction, inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 109)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_print (defineExtensionMethod_baseline_5F_assembly_5F_WO_5F_OPERAND_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@baseline_assembly_TRIS print'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_assembly_5F_TRIS_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_assembly_5F_TRIS * object = (const cPtr_baseline_5F_assembly_5F_TRIS *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_assembly_5F_TRIS) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  TRIS ").add_operation (object->mProperty_mOperand.getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 115)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_assembly_5F_TRIS_print (void) {
  enterExtensionMethod_print (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS.mSlotID,
                              extensionMethod_baseline_5F_assembly_5F_TRIS_print) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_TRIS_print (defineExtensionMethod_baseline_5F_assembly_5F_TRIS_print, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@baseline_assembly_pseudo_ORG length'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_assembly_5F_pseudo_5F_ORG_length (const cPtr_baseline_5F_assembly_5F_instruction * /* inObject */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_assembly_5F_pseudo_5F_ORG_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG.mSlotID,
                               extensionGetter_baseline_5F_assembly_5F_pseudo_5F_ORG_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_assembly_5F_pseudo_5F_ORG_length (defineExtensionGetter_baseline_5F_assembly_5F_pseudo_5F_ORG_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@baseline_assembly_pseudo_BEGINOFROUTINE length'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_length (const cPtr_baseline_5F_assembly_5F_instruction * /* inObject */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE.mSlotID,
                               extensionGetter_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_length (defineExtensionGetter_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@baseline_assembly_pseudo_ENDOFROUTINE length'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_length (const cPtr_baseline_5F_assembly_5F_instruction * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE.mSlotID,
                               extensionGetter_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_length (defineExtensionGetter_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension getter '@baseline_assembly_pseudo_LABEL length'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_assembly_5F_pseudo_5F_LABEL_length (const cPtr_baseline_5F_assembly_5F_instruction * /* inObject */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_assembly_5F_pseudo_5F_LABEL_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL.mSlotID,
                               extensionGetter_baseline_5F_assembly_5F_pseudo_5F_LABEL_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_assembly_5F_pseudo_5F_LABEL_length (defineExtensionGetter_baseline_5F_assembly_5F_pseudo_5F_LABEL_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@baseline_assembly_actualInstruction length'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_baseline_5F_assembly_5F_actualInstruction_length (const cPtr_baseline_5F_assembly_5F_instruction * /* inObject */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint ((uint32_t) 1U) ;
//---
  return result_outLength ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_baseline_5F_assembly_5F_actualInstruction_length (void) {
  enterExtensionGetter_length (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction.mSlotID,
                               extensionGetter_baseline_5F_assembly_5F_actualInstruction_length) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_assembly_5F_actualInstruction_length (defineExtensionGetter_baseline_5F_assembly_5F_actualInstruction_length, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@baseline_intermediate_NULL generateAssemblyCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_NULL_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                   const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                   const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                   GALGAS_baseline_5F_assembly_5F_instructionList & /* ioArgument_ioAssemblyInstructionList */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_NULL_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_NULL_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_NULL_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_NULL_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@baseline_intermediate_pseudo_PAGE generateAssemblyCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                             const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                             const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                             GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::constructor_new (object->mProperty_mPage.multiply_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 28))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 28))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_PAGE_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@baseline_intermediate_pseudo_BEGIN_ROUTINE generateAssemblyCode'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                         const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                         const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                         GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                         C_Compiler * /* inCompiler */
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::constructor_new (object->mProperty_mRoutineName, object->mProperty_mIsRegular  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 37))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 37)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@baseline_intermediate_pseudo_END_ROUTINE generateAssemblyCode'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                       const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                       const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                       GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                       C_Compiler * /* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * object = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::constructor_new (object->mProperty_mRoutineName, object->mProperty_mPage  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 46))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_generateAssemblyCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@baseline_intermediate_instruction_FD generateAssemblyCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_intermediate_5F_instruction_5F_FD_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * object = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mInstruction, object->mProperty_mRegisterDescription, object->mProperty_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 55))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_FD_generateAssemblyCode (void) {
  enterExtensionMethod_generateAssemblyCode (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD.mSlotID,
                                             extensionMethod_baseline_5F_intermediate_5F_instruction_5F_FD_generateAssemblyCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_5F_FD_generateAssemblyCode (defineExtensionMethod_baseline_5F_intermediate_5F_instruction_5F_FD_generateAssemblyCode, NULL) ;

