#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-7.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'parseDeviceDefinition'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_parseDeviceDefinition (const GALGAS_lstring constinArgument_inDeviceName,
                                    GALGAS_piccoloDeviceModel & outArgument_outPiccoloDeviceModel,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outPiccoloDeviceModel.drop () ; // Release 'out' argument
  GALGAS_filewrapper var_fw = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices) ;
  GALGAS_string var_deviceFullName = constinArgument_inDeviceName.reader_string (SOURCE_FILE ("piccolo_embedded_devices.galgas", 17)).add_operation (GALGAS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 17)) ;
  const enumGalgasBool test_0 = var_fw.reader_fileExistsAtPath (var_deviceFullName, inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 18)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_definitionString = var_fw.reader_textFileContentsAtPath (var_deviceFullName, inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 19)) ;
    outArgument_outPiccoloDeviceModel.drop () ;
    cGrammar_piccoloDevice_5F_grammar::_performSourceStringParsing_ (inCompiler, var_definitionString, outArgument_outPiccoloDeviceModel  COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 20)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_location location_1 (constinArgument_inDeviceName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("The '").add_operation (constinArgument_inDeviceName.reader_string (SOURCE_FILE ("piccolo_embedded_devices.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 24)).add_operation (GALGAS_string ("' definition file is not defined"), inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 24))  COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 22)) ;
    outArgument_outPiccoloDeviceModel.drop () ; // Release error dropped variable
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_abstractBlockTerminationForBlockInstruction::objectCompare (const GALGAS_abstractBlockTerminationForBlockInstruction & inOperand) const {
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

GALGAS_abstractBlockTerminationForBlockInstruction::GALGAS_abstractBlockTerminationForBlockInstruction (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBlockTerminationForBlockInstruction::GALGAS_abstractBlockTerminationForBlockInstruction (const cPtr_abstractBlockTerminationForBlockInstruction * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractBlockTerminationForBlockInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                        Pointer class for @abstractBlockTerminationForBlockInstruction class                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractBlockTerminationForBlockInstruction::cPtr_abstractBlockTerminationForBlockInstruction (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @abstractBlockTerminationForBlockInstruction type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction ("abstractBlockTerminationForBlockInstruction",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractBlockTerminationForBlockInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractBlockTerminationForBlockInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractBlockTerminationForBlockInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBlockTerminationForBlockInstruction GALGAS_abstractBlockTerminationForBlockInstruction::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractBlockTerminationForBlockInstruction result ;
  const GALGAS_abstractBlockTerminationForBlockInstruction * p = (const GALGAS_abstractBlockTerminationForBlockInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractBlockTerminationForBlockInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractBlockTerminationForBlockInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_exitBlockTerminationForBlockInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_exitBlockTerminationForBlockInstruction * p = (const cPtr_exitBlockTerminationForBlockInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_exitBlockTerminationForBlockInstruction) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_exitBlockTerminationForBlockInstruction::objectCompare (const GALGAS_exitBlockTerminationForBlockInstruction & inOperand) const {
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

GALGAS_exitBlockTerminationForBlockInstruction::GALGAS_exitBlockTerminationForBlockInstruction (void) :
GALGAS_abstractBlockTerminationForBlockInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exitBlockTerminationForBlockInstruction GALGAS_exitBlockTerminationForBlockInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_exitBlockTerminationForBlockInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exitBlockTerminationForBlockInstruction::GALGAS_exitBlockTerminationForBlockInstruction (const cPtr_exitBlockTerminationForBlockInstruction * inSourcePtr) :
GALGAS_abstractBlockTerminationForBlockInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_exitBlockTerminationForBlockInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exitBlockTerminationForBlockInstruction GALGAS_exitBlockTerminationForBlockInstruction::constructor_new (const GALGAS_location & inAttribute_mLocation
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_exitBlockTerminationForBlockInstruction result ;
  if (inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_exitBlockTerminationForBlockInstruction (inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_exitBlockTerminationForBlockInstruction::reader_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_exitBlockTerminationForBlockInstruction * p = (const cPtr_exitBlockTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_exitBlockTerminationForBlockInstruction) ;
    result = p->mAttribute_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_exitBlockTerminationForBlockInstruction::reader_mLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @exitBlockTerminationForBlockInstruction class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_exitBlockTerminationForBlockInstruction::cPtr_exitBlockTerminationForBlockInstruction (const GALGAS_location & in_mLocation
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractBlockTerminationForBlockInstruction (THERE),
mAttribute_mLocation (in_mLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_exitBlockTerminationForBlockInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction ;
}

void cPtr_exitBlockTerminationForBlockInstruction::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@exitBlockTerminationForBlockInstruction:" ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_exitBlockTerminationForBlockInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_exitBlockTerminationForBlockInstruction (mAttribute_mLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @exitBlockTerminationForBlockInstruction type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction ("exitBlockTerminationForBlockInstruction",
                                                                & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_exitBlockTerminationForBlockInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_exitBlockTerminationForBlockInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_exitBlockTerminationForBlockInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exitBlockTerminationForBlockInstruction GALGAS_exitBlockTerminationForBlockInstruction::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_exitBlockTerminationForBlockInstruction result ;
  const GALGAS_exitBlockTerminationForBlockInstruction * p = (const GALGAS_exitBlockTerminationForBlockInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_exitBlockTerminationForBlockInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("exitBlockTerminationForBlockInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gotoTerminationForBlockInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gotoTerminationForBlockInstruction * p = (const cPtr_gotoTerminationForBlockInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gotoTerminationForBlockInstruction) ;
  if (kOperandEqual == result) {
    result = mAttribute_mNextBlock.objectCompare (p->mAttribute_mNextBlock) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gotoTerminationForBlockInstruction::objectCompare (const GALGAS_gotoTerminationForBlockInstruction & inOperand) const {
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

GALGAS_gotoTerminationForBlockInstruction::GALGAS_gotoTerminationForBlockInstruction (void) :
GALGAS_abstractBlockTerminationForBlockInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gotoTerminationForBlockInstruction GALGAS_gotoTerminationForBlockInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gotoTerminationForBlockInstruction::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gotoTerminationForBlockInstruction::GALGAS_gotoTerminationForBlockInstruction (const cPtr_gotoTerminationForBlockInstruction * inSourcePtr) :
GALGAS_abstractBlockTerminationForBlockInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gotoTerminationForBlockInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gotoTerminationForBlockInstruction GALGAS_gotoTerminationForBlockInstruction::constructor_new (const GALGAS_lstring & inAttribute_mNextBlock
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gotoTerminationForBlockInstruction result ;
  if (inAttribute_mNextBlock.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gotoTerminationForBlockInstruction (inAttribute_mNextBlock COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gotoTerminationForBlockInstruction::reader_mNextBlock (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_gotoTerminationForBlockInstruction * p = (const cPtr_gotoTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gotoTerminationForBlockInstruction) ;
    result = p->mAttribute_mNextBlock ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_gotoTerminationForBlockInstruction::reader_mNextBlock (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNextBlock ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @gotoTerminationForBlockInstruction class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gotoTerminationForBlockInstruction::cPtr_gotoTerminationForBlockInstruction (const GALGAS_lstring & in_mNextBlock
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractBlockTerminationForBlockInstruction (THERE),
mAttribute_mNextBlock (in_mNextBlock) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gotoTerminationForBlockInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction ;
}

void cPtr_gotoTerminationForBlockInstruction::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@gotoTerminationForBlockInstruction:" ;
  mAttribute_mNextBlock.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gotoTerminationForBlockInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gotoTerminationForBlockInstruction (mAttribute_mNextBlock COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @gotoTerminationForBlockInstruction type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction ("gotoTerminationForBlockInstruction",
                                                           & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gotoTerminationForBlockInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gotoTerminationForBlockInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gotoTerminationForBlockInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_testTerminationForBlockInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_testTerminationForBlockInstruction * p = (const cPtr_testTerminationForBlockInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
  if (kOperandEqual == result) {
    result = mAttribute_mCondition.objectCompare (p->mAttribute_mCondition) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTrueTermination.objectCompare (p->mAttribute_mTrueTermination) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFalseTermination.objectCompare (p->mAttribute_mFalseTermination) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_testTerminationForBlockInstruction::objectCompare (const GALGAS_testTerminationForBlockInstruction & inOperand) const {
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

GALGAS_testTerminationForBlockInstruction::GALGAS_testTerminationForBlockInstruction (void) :
GALGAS_abstractBlockTerminationForBlockInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_testTerminationForBlockInstruction::GALGAS_testTerminationForBlockInstruction (const cPtr_testTerminationForBlockInstruction * inSourcePtr) :
GALGAS_abstractBlockTerminationForBlockInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_testTerminationForBlockInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_ConditionExpression GALGAS_testTerminationForBlockInstruction::reader_mCondition (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_ConditionExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_testTerminationForBlockInstruction * p = (const cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    result = p->mAttribute_mCondition ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_ConditionExpression cPtr_testTerminationForBlockInstruction::reader_mCondition (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBlockTerminationForBlockInstruction GALGAS_testTerminationForBlockInstruction::reader_mTrueTermination (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBlockTerminationForBlockInstruction result ;
  if (NULL != mObjectPtr) {
    const cPtr_testTerminationForBlockInstruction * p = (const cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    result = p->mAttribute_mTrueTermination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBlockTerminationForBlockInstruction cPtr_testTerminationForBlockInstruction::reader_mTrueTermination (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTrueTermination ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBlockTerminationForBlockInstruction GALGAS_testTerminationForBlockInstruction::reader_mFalseTermination (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBlockTerminationForBlockInstruction result ;
  if (NULL != mObjectPtr) {
    const cPtr_testTerminationForBlockInstruction * p = (const cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    result = p->mAttribute_mFalseTermination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBlockTerminationForBlockInstruction cPtr_testTerminationForBlockInstruction::reader_mFalseTermination (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFalseTermination ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_testTerminationForBlockInstruction::reader_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_testTerminationForBlockInstruction * p = (const cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    result = p->mAttribute_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_testTerminationForBlockInstruction::reader_mLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @testTerminationForBlockInstruction class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_testTerminationForBlockInstruction::cPtr_testTerminationForBlockInstruction (const GALGAS_pic_31__38_ConditionExpression & in_mCondition,
                                                                                  const GALGAS_abstractBlockTerminationForBlockInstruction & in_mTrueTermination,
                                                                                  const GALGAS_abstractBlockTerminationForBlockInstruction & in_mFalseTermination,
                                                                                  const GALGAS_location & in_mLocation
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractBlockTerminationForBlockInstruction (THERE),
mAttribute_mCondition (in_mCondition),
mAttribute_mTrueTermination (in_mTrueTermination),
mAttribute_mFalseTermination (in_mFalseTermination),
mAttribute_mLocation (in_mLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_testTerminationForBlockInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testTerminationForBlockInstruction ;
}

void cPtr_testTerminationForBlockInstruction::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@testTerminationForBlockInstruction:" ;
  mAttribute_mCondition.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTrueTermination.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFalseTermination.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_testTerminationForBlockInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_testTerminationForBlockInstruction (mAttribute_mCondition, mAttribute_mTrueTermination, mAttribute_mFalseTermination, mAttribute_mLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @testTerminationForBlockInstruction type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_testTerminationForBlockInstruction ("testTerminationForBlockInstruction",
                                                           & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_testTerminationForBlockInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testTerminationForBlockInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_testTerminationForBlockInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_testTerminationForBlockInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_baseline_5F_assembly_5F_instruction::objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_instruction::GALGAS_baseline_5F_assembly_5F_instruction (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction::GALGAS_baseline_5F_assembly_5F_instruction (const cPtr_baseline_5F_assembly_5F_instruction * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @baseline_assembly_instruction class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_instruction::cPtr_baseline_5F_assembly_5F_instruction (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @baseline_assembly_instruction type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction ("baseline_assembly_instruction",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction GALGAS_baseline_5F_assembly_5F_instruction::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction result ;
  const GALGAS_baseline_5F_assembly_5F_instruction * p = (const GALGAS_baseline_5F_assembly_5F_instruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_baseline_5F_assembly_5F_actualInstruction::objectCompare (const GALGAS_baseline_5F_assembly_5F_actualInstruction & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_actualInstruction::GALGAS_baseline_5F_assembly_5F_actualInstruction (void) :
GALGAS_baseline_5F_assembly_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_actualInstruction::GALGAS_baseline_5F_assembly_5F_actualInstruction (const cPtr_baseline_5F_assembly_5F_actualInstruction * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_actualInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_baseline_5F_assembly_5F_actualInstruction::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_actualInstruction * p = (const cPtr_baseline_5F_assembly_5F_actualInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_actualInstruction) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_baseline_5F_assembly_5F_actualInstruction::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @baseline_assembly_actualInstruction class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_actualInstruction::cPtr_baseline_5F_assembly_5F_actualInstruction (const GALGAS_location & in_mInstructionLocation
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (THERE),
mAttribute_mInstructionLocation (in_mInstructionLocation) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @baseline_assembly_actualInstruction type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction ("baseline_assembly_actualInstruction",
                                                                  & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_actualInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_actualInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_actualInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_actualInstruction GALGAS_baseline_5F_assembly_5F_actualInstruction::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_actualInstruction result ;
  const GALGAS_baseline_5F_assembly_5F_actualInstruction * p = (const GALGAS_baseline_5F_assembly_5F_actualInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_actualInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_actualInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_assembly_5F_CALL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_CALL * p = (const cPtr_baseline_5F_assembly_5F_CALL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_CALL) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabel.objectCompare (p->mAttribute_mTargetLabel) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_assembly_5F_CALL::objectCompare (const GALGAS_baseline_5F_assembly_5F_CALL & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_CALL::GALGAS_baseline_5F_assembly_5F_CALL (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_CALL GALGAS_baseline_5F_assembly_5F_CALL::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_assembly_5F_CALL::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                               GALGAS_lstring::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_CALL::GALGAS_baseline_5F_assembly_5F_CALL (const cPtr_baseline_5F_assembly_5F_CALL * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_CALL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_CALL GALGAS_baseline_5F_assembly_5F_CALL::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_CALL result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_CALL (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_CALL::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_CALL * p = (const cPtr_baseline_5F_assembly_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_CALL) ;
    result = p->mAttribute_mTargetLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_baseline_5F_assembly_5F_CALL::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @baseline_assembly_CALL class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_CALL::cPtr_baseline_5F_assembly_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mTargetLabel
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mTargetLabel (in_mTargetLabel) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_CALL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL ;
}

void cPtr_baseline_5F_assembly_5F_CALL::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_CALL:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_assembly_5F_CALL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_CALL (mAttribute_mInstructionLocation, mAttribute_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @baseline_assembly_CALL type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL ("baseline_assembly_CALL",
                                                     & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_CALL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_CALL::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_CALL (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_assembly_5F_GOTO::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_GOTO * p = (const cPtr_baseline_5F_assembly_5F_GOTO *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_GOTO) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabel.objectCompare (p->mAttribute_mTargetLabel) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_assembly_5F_GOTO::objectCompare (const GALGAS_baseline_5F_assembly_5F_GOTO & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_GOTO::GALGAS_baseline_5F_assembly_5F_GOTO (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_GOTO GALGAS_baseline_5F_assembly_5F_GOTO::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_assembly_5F_GOTO::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                               GALGAS_lstring::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_GOTO::GALGAS_baseline_5F_assembly_5F_GOTO (const cPtr_baseline_5F_assembly_5F_GOTO * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_GOTO) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_GOTO GALGAS_baseline_5F_assembly_5F_GOTO::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_GOTO result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_GOTO (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_GOTO::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_GOTO * p = (const cPtr_baseline_5F_assembly_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_GOTO) ;
    result = p->mAttribute_mTargetLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_baseline_5F_assembly_5F_GOTO::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @baseline_assembly_GOTO class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_GOTO::cPtr_baseline_5F_assembly_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mTargetLabel
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mTargetLabel (in_mTargetLabel) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_GOTO::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO ;
}

void cPtr_baseline_5F_assembly_5F_GOTO::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_GOTO:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_assembly_5F_GOTO::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_GOTO (mAttribute_mInstructionLocation, mAttribute_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @baseline_assembly_GOTO type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO ("baseline_assembly_GOTO",
                                                     & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_GOTO::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_GOTO::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_GOTO (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_assembly_5F_SKIP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_SKIP * p = (const cPtr_baseline_5F_assembly_5F_SKIP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_SKIP) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_assembly_5F_SKIP::objectCompare (const GALGAS_baseline_5F_assembly_5F_SKIP & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_SKIP::GALGAS_baseline_5F_assembly_5F_SKIP (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_SKIP GALGAS_baseline_5F_assembly_5F_SKIP::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_assembly_5F_SKIP::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_SKIP::GALGAS_baseline_5F_assembly_5F_SKIP (const cPtr_baseline_5F_assembly_5F_SKIP * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_SKIP) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_SKIP GALGAS_baseline_5F_assembly_5F_SKIP::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_SKIP result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_SKIP (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @baseline_assembly_SKIP class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_SKIP::cPtr_baseline_5F_assembly_5F_SKIP (const GALGAS_location & in_mInstructionLocation
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_SKIP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP ;
}

void cPtr_baseline_5F_assembly_5F_SKIP::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_SKIP:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_assembly_5F_SKIP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_SKIP (mAttribute_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @baseline_assembly_SKIP type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP ("baseline_assembly_SKIP",
                                                     & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_SKIP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_SKIP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_SKIP (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_SKIP GALGAS_baseline_5F_assembly_5F_SKIP::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_SKIP result ;
  const GALGAS_baseline_5F_assembly_5F_SKIP * p = (const GALGAS_baseline_5F_assembly_5F_SKIP *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_SKIP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_SKIP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_assembly_5F_TRIS::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_TRIS * p = (const cPtr_baseline_5F_assembly_5F_TRIS *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_TRIS) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOperand.objectCompare (p->mAttribute_mOperand) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOpcode.objectCompare (p->mAttribute_mOpcode) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_assembly_5F_TRIS::objectCompare (const GALGAS_baseline_5F_assembly_5F_TRIS & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_TRIS::GALGAS_baseline_5F_assembly_5F_TRIS (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_TRIS GALGAS_baseline_5F_assembly_5F_TRIS::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_assembly_5F_TRIS::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_uint::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_TRIS::GALGAS_baseline_5F_assembly_5F_TRIS (const cPtr_baseline_5F_assembly_5F_TRIS * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_TRIS) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_TRIS::reader_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_TRIS * p = (const cPtr_baseline_5F_assembly_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_TRIS) ;
    result = p->mAttribute_mOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_baseline_5F_assembly_5F_TRIS::reader_mOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_assembly_5F_TRIS::reader_mOpcode (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_TRIS * p = (const cPtr_baseline_5F_assembly_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_TRIS) ;
    result = p->mAttribute_mOpcode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_baseline_5F_assembly_5F_TRIS::reader_mOpcode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOpcode ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @baseline_assembly_TRIS class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_TRIS::cPtr_baseline_5F_assembly_5F_TRIS (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mOperand,
                                                                      const GALGAS_uint & in_mOpcode
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mOperand (in_mOperand),
mAttribute_mOpcode (in_mOpcode) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_TRIS::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS ;
}

void cPtr_baseline_5F_assembly_5F_TRIS::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_TRIS:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOpcode.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_assembly_5F_TRIS::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_TRIS (mAttribute_mInstructionLocation, mAttribute_mOperand, mAttribute_mOpcode COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @baseline_assembly_TRIS type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS ("baseline_assembly_TRIS",
                                                     & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_TRIS::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_TRIS::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_TRIS (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND * p = (const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstruction.objectCompare (p->mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::objectCompare (const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND (const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                            const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & inAttribute_mInstruction
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND (inAttribute_mInstructionLocation, inAttribute_mInstruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND * p = (const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND) ;
    result = p->mAttribute_mInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @baseline_assembly_WO_OPERAND class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND (const GALGAS_location & in_mInstructionLocation,
                                                                                        const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mInstruction (in_mInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND ;
}

void cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_WO_OPERAND:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND (mAttribute_mInstructionLocation, mAttribute_mInstruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @baseline_assembly_WO_OPERAND type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND ("baseline_assembly_WO_OPERAND",
                                                              & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND result ;
  const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND * p = (const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_WO_OPERAND", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterDescription.objectCompare (p->mAttribute_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIncrement.objectCompare (p->mAttribute_mIncrement) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_m_5F_W_5F_isDestination.objectCompare (p->mAttribute_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::objectCompare (const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                    GALGAS_baseline_5F_intermediate_5F_registerExpression::constructor_default (HERE),
                                                                                    GALGAS_bool::constructor_default (HERE),
                                                                                    GALGAS_bool::constructor_default (HERE)
                                                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition (const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                    const GALGAS_baseline_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                                    const GALGAS_bool & inAttribute_mIncrement,
                                                                                                                                    const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_mIncrement.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition (inAttribute_mInstructionLocation, inAttribute_mRegisterDescription, inAttribute_mIncrement, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
    result = p->mAttribute_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::reader_mIncrement (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
    result = p->mAttribute_mIncrement ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::reader_mIncrement (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIncrement ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
    result = p->mAttribute_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                        Pointer class for @baseline_assembly_incDecRegisterInCondition class                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition (const GALGAS_location & in_mInstructionLocation,
                                                                                                                const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                const GALGAS_bool & in_mIncrement,
                                                                                                                const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mRegisterDescription (in_mRegisterDescription),
mAttribute_mIncrement (in_mIncrement),
mAttribute_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition ;
}

void cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_incDecRegisterInCondition:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIncrement.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition (mAttribute_mInstructionLocation, mAttribute_mRegisterDescription, mAttribute_mIncrement, mAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @baseline_assembly_incDecRegisterInCondition type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition ("baseline_assembly_incDecRegisterInCondition",
                                                                          & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition result ;
  const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_incDecRegisterInCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSkipIfSet.objectCompare (p->mAttribute_mSkipIfSet) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterDescription.objectCompare (p->mAttribute_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitNumber.objectCompare (p->mAttribute_mBitNumber) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                     GALGAS_bool::constructor_default (HERE),
                                                                                     GALGAS_baseline_5F_intermediate_5F_registerExpression::constructor_default (HERE),
                                                                                     GALGAS_uint::constructor_default (HERE)
                                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                      const GALGAS_bool & inAttribute_mSkipIfSet,
                                                                                                                                      const GALGAS_baseline_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                                      const GALGAS_uint & inAttribute_mBitNumber
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSkipIfSet.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (inAttribute_mInstructionLocation, inAttribute_mSkipIfSet, inAttribute_mRegisterDescription, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::reader_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
    result = p->mAttribute_mSkipIfSet ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::reader_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSkipIfSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
    result = p->mAttribute_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
    result = p->mAttribute_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                         Pointer class for @baseline_assembly_instruction_BitTestSkip class                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (const GALGAS_location & in_mInstructionLocation,
                                                                                                                  const GALGAS_bool & in_mSkipIfSet,
                                                                                                                  const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                  const GALGAS_uint & in_mBitNumber
                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mSkipIfSet (in_mSkipIfSet),
mAttribute_mRegisterDescription (in_mRegisterDescription),
mAttribute_mBitNumber (in_mBitNumber) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip ;
}

void cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_instruction_BitTestSkip:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (mAttribute_mInstructionLocation, mAttribute_mSkipIfSet, mAttribute_mRegisterDescription, mAttribute_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @baseline_assembly_instruction_BitTestSkip type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip ("baseline_assembly_instruction_BitTestSkip",
                                                                           & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip result ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_BitTestSkip", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_assembly_5F_instruction_5F_F::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_instruction_5F_F * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_F *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_F) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstruction.objectCompare (p->mAttribute_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterDescription.objectCompare (p->mAttribute_mRegisterDescription) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_assembly_5F_instruction_5F_F::objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_5F_F & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_instruction_5F_F::GALGAS_baseline_5F_assembly_5F_instruction_5F_F (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_F::GALGAS_baseline_5F_assembly_5F_instruction_5F_F (const cPtr_baseline_5F_assembly_5F_instruction_5F_F * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction_5F_F) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_F GALGAS_baseline_5F_assembly_5F_instruction_5F_F::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                  const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & inAttribute_mInstruction,
                                                                                                                  const GALGAS_baseline_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_F result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mRegisterDescription.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_F (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mRegisterDescription COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code GALGAS_baseline_5F_assembly_5F_instruction_5F_F::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_F * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_F) ;
    result = p->mAttribute_mInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code cPtr_baseline_5F_assembly_5F_instruction_5F_F::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_assembly_5F_instruction_5F_F::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_F * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_F) ;
    result = p->mAttribute_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression cPtr_baseline_5F_assembly_5F_instruction_5F_F::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @baseline_assembly_instruction_F class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_instruction_5F_F::cPtr_baseline_5F_assembly_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                                                                              const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                                                              const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mInstruction (in_mInstruction),
mAttribute_mRegisterDescription (in_mRegisterDescription) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_instruction_5F_F::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F ;
}

void cPtr_baseline_5F_assembly_5F_instruction_5F_F::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_instruction_F:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_assembly_5F_instruction_5F_F::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_instruction_5F_F (mAttribute_mInstructionLocation, mAttribute_mInstruction, mAttribute_mRegisterDescription COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @baseline_assembly_instruction_F type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F ("baseline_assembly_instruction_F",
                                                                 & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instruction_5F_F::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instruction_5F_F::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instruction_5F_F (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_F GALGAS_baseline_5F_assembly_5F_instruction_5F_F::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_F result ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_F * p = (const GALGAS_baseline_5F_assembly_5F_instruction_5F_F *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instruction_5F_F *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_F", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_assembly_5F_instruction_5F_FB::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstruction.objectCompare (p->mAttribute_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterDescription.objectCompare (p->mAttribute_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitNumber.objectCompare (p->mAttribute_mBitNumber) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::GALGAS_baseline_5F_assembly_5F_instruction_5F_FB (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::GALGAS_baseline_5F_assembly_5F_instruction_5F_FB (const cPtr_baseline_5F_assembly_5F_instruction_5F_FB * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_FB GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                    const GALGAS_baseline_5F_bit_5F_oriented_5F_op & inAttribute_mInstruction,
                                                                                                                    const GALGAS_baseline_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                    const GALGAS_uint & inAttribute_mBitNumber
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_FB result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_FB (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mRegisterDescription, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_bit_5F_oriented_5F_op GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_bit_5F_oriented_5F_op result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
    result = p->mAttribute_mInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_bit_5F_oriented_5F_op cPtr_baseline_5F_assembly_5F_instruction_5F_FB::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
    result = p->mAttribute_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression cPtr_baseline_5F_assembly_5F_instruction_5F_FB::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
    result = p->mAttribute_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_baseline_5F_assembly_5F_instruction_5F_FB::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @baseline_assembly_instruction_FB class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_instruction_5F_FB::cPtr_baseline_5F_assembly_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                                                                                const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                                                                const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                const GALGAS_uint & in_mBitNumber
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mInstruction (in_mInstruction),
mAttribute_mRegisterDescription (in_mRegisterDescription),
mAttribute_mBitNumber (in_mBitNumber) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_instruction_5F_FB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB ;
}

void cPtr_baseline_5F_assembly_5F_instruction_5F_FB::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_instruction_FB:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_assembly_5F_instruction_5F_FB::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_instruction_5F_FB (mAttribute_mInstructionLocation, mAttribute_mInstruction, mAttribute_mRegisterDescription, mAttribute_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @baseline_assembly_instruction_FB type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB ("baseline_assembly_instruction_FB",
                                                                  & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instruction_5F_FB (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_FB GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_FB result ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB * p = (const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_FB", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_assembly_5F_instruction_5F_FD::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstruction.objectCompare (p->mAttribute_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterDescription.objectCompare (p->mAttribute_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_m_5F_W_5F_isDestination.objectCompare (p->mAttribute_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::GALGAS_baseline_5F_assembly_5F_instruction_5F_FD (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::GALGAS_baseline_5F_assembly_5F_instruction_5F_FD (const cPtr_baseline_5F_assembly_5F_instruction_5F_FD * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_FD GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                    const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inAttribute_mInstruction,
                                                                                                                    const GALGAS_baseline_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                    const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_FD result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_FD (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mRegisterDescription, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
    result = p->mAttribute_mInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code cPtr_baseline_5F_assembly_5F_instruction_5F_FD::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
    result = p->mAttribute_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression cPtr_baseline_5F_assembly_5F_instruction_5F_FD::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
    result = p->mAttribute_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_assembly_5F_instruction_5F_FD::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @baseline_assembly_instruction_FD class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_instruction_5F_FD::cPtr_baseline_5F_assembly_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                                                                                const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                                                                const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mInstruction (in_mInstruction),
mAttribute_mRegisterDescription (in_mRegisterDescription),
mAttribute_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_instruction_5F_FD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD ;
}

void cPtr_baseline_5F_assembly_5F_instruction_5F_FD::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_instruction_FD:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_assembly_5F_instruction_5F_FD::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_instruction_5F_FD (mAttribute_mInstructionLocation, mAttribute_mInstruction, mAttribute_mRegisterDescription, mAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @baseline_assembly_instruction_FD type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD ("baseline_assembly_instruction_FD",
                                                                  & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instruction_5F_FD (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_FD GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_FD result ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD * p = (const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_FD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstruction.objectCompare (p->mAttribute_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLiteralValue.objectCompare (p->mAttribute_mLiteralValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation (const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                                const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & inAttribute_mInstruction,
                                                                                                                                                const GALGAS_uint & inAttribute_mLiteralValue
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mLiteralValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mLiteralValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation) ;
    result = p->mAttribute_mInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::reader_mLiteralValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * p = (const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation) ;
    result = p->mAttribute_mLiteralValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::reader_mLiteralValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                       Pointer class for @baseline_assembly_instruction_literalOperation class                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                                                                            const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                                                                            const GALGAS_uint & in_mLiteralValue
                                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mInstruction (in_mInstruction),
mAttribute_mLiteralValue (in_mLiteralValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation ;
}

void cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_instruction_literalOperation:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLiteralValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation (mAttribute_mInstructionLocation, mAttribute_mInstruction, mAttribute_mLiteralValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @baseline_assembly_instruction_literalOperation type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation ("baseline_assembly_instruction_literalOperation",
                                                                                & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::extractObject (const GALGAS_object & inObject,
                                                                                                                                              C_Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation result ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation * p = (const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineName.objectCompare (p->mAttribute_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsRegular.objectCompare (p->mAttribute_mIsRegular) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (void) :
GALGAS_baseline_5F_assembly_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                   GALGAS_bool::constructor_default (HERE)
                                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::constructor_new (const GALGAS_lstring & inAttribute_mRoutineName,
                                                                                                                                  const GALGAS_bool & inAttribute_mIsRegular
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE result ;
  if (inAttribute_mRoutineName.isValid () && inAttribute_mIsRegular.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (inAttribute_mRoutineName, inAttribute_mIsRegular COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::reader_mRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
    result = p->mAttribute_mRoutineName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::reader_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::reader_mIsRegular (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
    result = p->mAttribute_mIsRegular ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::reader_mIsRegular (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsRegular ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @baseline_assembly_pseudo_BEGINOFROUTINE class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                                                              const GALGAS_bool & in_mIsRegular
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (THERE),
mAttribute_mRoutineName (in_mRoutineName),
mAttribute_mIsRegular (in_mIsRegular) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE ;
}

void cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_pseudo_BEGINOFROUTINE:" ;
  mAttribute_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIsRegular.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (mAttribute_mRoutineName, mAttribute_mIsRegular COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @baseline_assembly_pseudo_BEGINOFROUTINE type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE ("baseline_assembly_pseudo_BEGINOFROUTINE",
                                                                         & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineName.objectCompare (p->mAttribute_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPage.objectCompare (p->mAttribute_mPage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (void) :
GALGAS_baseline_5F_assembly_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                 GALGAS_uint::constructor_default (HERE)
                                                                                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::constructor_new (const GALGAS_lstring & inAttribute_mRoutineName,
                                                                                                                              const GALGAS_uint & inAttribute_mPage
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE result ;
  if (inAttribute_mRoutineName.isValid () && inAttribute_mPage.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (inAttribute_mRoutineName, inAttribute_mPage COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::reader_mRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
    result = p->mAttribute_mRoutineName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::reader_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::reader_mPage (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
    result = p->mAttribute_mPage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::reader_mPage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPage ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @baseline_assembly_pseudo_ENDOFROUTINE class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                                                          const GALGAS_uint & in_mPage
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (THERE),
mAttribute_mRoutineName (in_mRoutineName),
mAttribute_mPage (in_mPage) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE ;
}

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_pseudo_ENDOFROUTINE:" ;
  mAttribute_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPage.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (mAttribute_mRoutineName, mAttribute_mPage COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @baseline_assembly_pseudo_ENDOFROUTINE type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE ("baseline_assembly_pseudo_ENDOFROUTINE",
                                                                       & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLabel.objectCompare (p->mAttribute_mLabel) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL (void) :
GALGAS_baseline_5F_assembly_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL (const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::constructor_new (const GALGAS_lstring & inAttribute_mLabel
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL result ;
  if (inAttribute_mLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (inAttribute_mLabel COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::reader_mLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
    result = p->mAttribute_mLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::reader_mLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @baseline_assembly_pseudo_LABEL class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (const GALGAS_lstring & in_mLabel
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (THERE),
mAttribute_mLabel (in_mLabel) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL ;
}

void cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_pseudo_LABEL:" ;
  mAttribute_mLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (mAttribute_mLabel COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @baseline_assembly_pseudo_LABEL type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL ("baseline_assembly_pseudo_LABEL",
                                                                & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOrigin.objectCompare (p->mAttribute_mOrigin) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG (void) :
GALGAS_baseline_5F_assembly_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::constructor_new (const GALGAS_uint & inAttribute_mOrigin
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG result ;
  if (inAttribute_mOrigin.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG (inAttribute_mOrigin COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::reader_mOrigin (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
    result = p->mAttribute_mOrigin ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::reader_mOrigin (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOrigin ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @baseline_assembly_pseudo_ORG class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG (const GALGAS_uint & in_mOrigin
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (THERE),
mAttribute_mOrigin (in_mOrigin) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG ;
}

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@baseline_assembly_pseudo_ORG:" ;
  mAttribute_mOrigin.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG (mAttribute_mOrigin COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @baseline_assembly_pseudo_ORG type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG ("baseline_assembly_pseudo_ORG",
                                                              & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG result ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG * p = (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_ORG", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_baseline_5F_conditionExpression::objectCompare (const GALGAS_baseline_5F_conditionExpression & inOperand) const {
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

GALGAS_baseline_5F_conditionExpression::GALGAS_baseline_5F_conditionExpression (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_conditionExpression::GALGAS_baseline_5F_conditionExpression (const cPtr_baseline_5F_conditionExpression * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_conditionExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @baseline_conditionExpression class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_conditionExpression::cPtr_baseline_5F_conditionExpression (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @baseline_conditionExpression type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_conditionExpression ("baseline_conditionExpression",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_conditionExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_conditionExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_conditionExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_conditionExpression GALGAS_baseline_5F_conditionExpression::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_conditionExpression result ;
  const GALGAS_baseline_5F_conditionExpression * p = (const GALGAS_baseline_5F_conditionExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_conditionExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_conditionExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_andCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_andCondition * p = (const cPtr_baseline_5F_andCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_andCondition) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_andCondition::objectCompare (const GALGAS_baseline_5F_andCondition & inOperand) const {
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

GALGAS_baseline_5F_andCondition::GALGAS_baseline_5F_andCondition (void) :
GALGAS_baseline_5F_conditionExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_andCondition::GALGAS_baseline_5F_andCondition (const cPtr_baseline_5F_andCondition * inSourcePtr) :
GALGAS_baseline_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_andCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_andCondition GALGAS_baseline_5F_andCondition::constructor_new (const GALGAS_baseline_5F_conditionExpression & inAttribute_mLeftExpression,
                                                                                  const GALGAS_baseline_5F_conditionExpression & inAttribute_mRightExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_andCondition result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_andCondition (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_conditionExpression GALGAS_baseline_5F_andCondition::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_conditionExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_andCondition * p = (const cPtr_baseline_5F_andCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_andCondition) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_conditionExpression cPtr_baseline_5F_andCondition::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_conditionExpression GALGAS_baseline_5F_andCondition::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_conditionExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_andCondition * p = (const cPtr_baseline_5F_andCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_andCondition) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_conditionExpression cPtr_baseline_5F_andCondition::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @baseline_andCondition class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_andCondition::cPtr_baseline_5F_andCondition (const GALGAS_baseline_5F_conditionExpression & in_mLeftExpression,
                                                              const GALGAS_baseline_5F_conditionExpression & in_mRightExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_andCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_andCondition ;
}

void cPtr_baseline_5F_andCondition::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@baseline_andCondition:" ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_andCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_andCondition (mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @baseline_andCondition type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_andCondition ("baseline_andCondition",
                                                 & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_andCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_andCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_andCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_andCondition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_andCondition GALGAS_baseline_5F_andCondition::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_andCondition result ;
  const GALGAS_baseline_5F_andCondition * p = (const GALGAS_baseline_5F_andCondition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_andCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_andCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterExpression.objectCompare (p->mAttribute_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitNumber.objectCompare (p->mAttribute_mBitNumber) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::objectCompare (const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inOperand) const {
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

GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (void) :
GALGAS_baseline_5F_conditionExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * inSourcePtr) :
GALGAS_baseline_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::constructor_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                                                      const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_bitNumberExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    result = p->mAttribute_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                        Pointer class for @baseline_bitTest_in_structured_if_condition class                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                                                  const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (THERE),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_mBitNumber (in_mBitNumber) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;
}

void cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::description (C_String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString << "[@baseline_bitTest_in_structured_if_condition:" ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (mAttribute_mRegisterExpression, mAttribute_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @baseline_bitTest_in_structured_if_condition type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ("baseline_bitTest_in_structured_if_condition",
                                                                                   & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_bitTest_in_structured_if_condition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_incDecRegisterInCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_incDecRegisterInCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterExpression.objectCompare (p->mAttribute_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIncrement.objectCompare (p->mAttribute_mIncrement) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_m_5F_W_5F_isDestination.objectCompare (p->mAttribute_m_5F_W_5F_isDestination) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBranchIfZero.objectCompare (p->mAttribute_mBranchIfZero) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_incDecRegisterInCondition::objectCompare (const GALGAS_baseline_5F_incDecRegisterInCondition & inOperand) const {
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

GALGAS_baseline_5F_incDecRegisterInCondition::GALGAS_baseline_5F_incDecRegisterInCondition (void) :
GALGAS_baseline_5F_conditionExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_incDecRegisterInCondition::GALGAS_baseline_5F_incDecRegisterInCondition (const cPtr_baseline_5F_incDecRegisterInCondition * inSourcePtr) :
GALGAS_baseline_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_incDecRegisterInCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_incDecRegisterInCondition GALGAS_baseline_5F_incDecRegisterInCondition::constructor_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                            const GALGAS_bool & inAttribute_mIncrement,
                                                                                                            const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination,
                                                                                                            const GALGAS_bool & inAttribute_mBranchIfZero
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_incDecRegisterInCondition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mIncrement.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid () && inAttribute_mBranchIfZero.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_incDecRegisterInCondition (inAttribute_mRegisterExpression, inAttribute_mIncrement, inAttribute_m_5F_W_5F_isDestination, inAttribute_mBranchIfZero COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_baseline_5F_incDecRegisterInCondition::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_baseline_5F_incDecRegisterInCondition::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_incDecRegisterInCondition::reader_mIncrement (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    result = p->mAttribute_mIncrement ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_incDecRegisterInCondition::reader_mIncrement (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIncrement ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_incDecRegisterInCondition::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    result = p->mAttribute_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_incDecRegisterInCondition::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_incDecRegisterInCondition::reader_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    result = p->mAttribute_mBranchIfZero ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_incDecRegisterInCondition::reader_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBranchIfZero ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @baseline_incDecRegisterInCondition class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_incDecRegisterInCondition::cPtr_baseline_5F_incDecRegisterInCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                        const GALGAS_bool & in_mIncrement,
                                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                                        const GALGAS_bool & in_mBranchIfZero
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (THERE),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_mIncrement (in_mIncrement),
mAttribute_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination),
mAttribute_mBranchIfZero (in_mBranchIfZero) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_incDecRegisterInCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition ;
}

void cPtr_baseline_5F_incDecRegisterInCondition::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@baseline_incDecRegisterInCondition:" ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIncrement.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBranchIfZero.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_incDecRegisterInCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_incDecRegisterInCondition (mAttribute_mRegisterExpression, mAttribute_mIncrement, mAttribute_m_5F_W_5F_isDestination, mAttribute_mBranchIfZero COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @baseline_incDecRegisterInCondition type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition ("baseline_incDecRegisterInCondition",
                                                              & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_incDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_incDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_incDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_incDecRegisterInCondition GALGAS_baseline_5F_incDecRegisterInCondition::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_incDecRegisterInCondition result ;
  const GALGAS_baseline_5F_incDecRegisterInCondition * p = (const GALGAS_baseline_5F_incDecRegisterInCondition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_incDecRegisterInCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_incDecRegisterInCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_negateCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_negateCondition * p = (const cPtr_baseline_5F_negateCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_negateCondition) ;
  if (kOperandEqual == result) {
    result = mAttribute_mCondition.objectCompare (p->mAttribute_mCondition) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_negateCondition::objectCompare (const GALGAS_baseline_5F_negateCondition & inOperand) const {
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

GALGAS_baseline_5F_negateCondition::GALGAS_baseline_5F_negateCondition (void) :
GALGAS_baseline_5F_conditionExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_negateCondition::GALGAS_baseline_5F_negateCondition (const cPtr_baseline_5F_negateCondition * inSourcePtr) :
GALGAS_baseline_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_negateCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_negateCondition GALGAS_baseline_5F_negateCondition::constructor_new (const GALGAS_baseline_5F_conditionExpression & inAttribute_mCondition
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_negateCondition result ;
  if (inAttribute_mCondition.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_negateCondition (inAttribute_mCondition COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_conditionExpression GALGAS_baseline_5F_negateCondition::reader_mCondition (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_conditionExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_negateCondition * p = (const cPtr_baseline_5F_negateCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_negateCondition) ;
    result = p->mAttribute_mCondition ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_conditionExpression cPtr_baseline_5F_negateCondition::reader_mCondition (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @baseline_negateCondition class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_negateCondition::cPtr_baseline_5F_negateCondition (const GALGAS_baseline_5F_conditionExpression & in_mCondition
                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (THERE),
mAttribute_mCondition (in_mCondition) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_negateCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_negateCondition ;
}

void cPtr_baseline_5F_negateCondition::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@baseline_negateCondition:" ;
  mAttribute_mCondition.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_negateCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_negateCondition (mAttribute_mCondition COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @baseline_negateCondition type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_negateCondition ("baseline_negateCondition",
                                                    & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_negateCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_negateCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_negateCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_negateCondition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_negateCondition GALGAS_baseline_5F_negateCondition::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_negateCondition result ;
  const GALGAS_baseline_5F_negateCondition * p = (const GALGAS_baseline_5F_negateCondition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_negateCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_negateCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_baseline_5F_instruction::objectCompare (const GALGAS_baseline_5F_instruction & inOperand) const {
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

GALGAS_baseline_5F_instruction::GALGAS_baseline_5F_instruction (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction::GALGAS_baseline_5F_instruction (const cPtr_baseline_5F_instruction * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_baseline_5F_instruction::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction * p = (const cPtr_baseline_5F_instruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_baseline_5F_instruction::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @baseline_instruction class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction::cPtr_baseline_5F_instruction (const GALGAS_location & in_mInstructionLocation
                                                            COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_mInstructionLocation (in_mInstructionLocation) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @baseline_instruction type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction ("baseline_instruction",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction GALGAS_baseline_5F_instruction::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction result ;
  const GALGAS_baseline_5F_instruction * p = (const GALGAS_baseline_5F_instruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_instruction_5F_CALL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_CALL * p = (const cPtr_baseline_5F_instruction_5F_CALL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_CALL) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabel.objectCompare (p->mAttribute_mTargetLabel) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_instruction_5F_CALL::objectCompare (const GALGAS_baseline_5F_instruction_5F_CALL & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_CALL::GALGAS_baseline_5F_instruction_5F_CALL (void) :
GALGAS_baseline_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_CALL GALGAS_baseline_5F_instruction_5F_CALL::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_instruction_5F_CALL::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_CALL::GALGAS_baseline_5F_instruction_5F_CALL (const cPtr_baseline_5F_instruction_5F_CALL * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_CALL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_CALL GALGAS_baseline_5F_instruction_5F_CALL::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_CALL result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_CALL (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_CALL::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_CALL * p = (const cPtr_baseline_5F_instruction_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_CALL) ;
    result = p->mAttribute_mTargetLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_baseline_5F_instruction_5F_CALL::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @baseline_instruction_CALL class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction_5F_CALL::cPtr_baseline_5F_instruction_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mTargetLabel (in_mTargetLabel) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_CALL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL ;
}

void cPtr_baseline_5F_instruction_5F_CALL::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_CALL:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_instruction_5F_CALL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_CALL (mAttribute_mInstructionLocation, mAttribute_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @baseline_instruction_CALL type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL ("baseline_instruction_CALL",
                                                        & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_CALL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_CALL::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_CALL (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_instruction_5F_F::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_F * p = (const cPtr_baseline_5F_instruction_5F_F *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_F) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFAinstruction.objectCompare (p->mAttribute_mFAinstruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterExpression.objectCompare (p->mAttribute_mRegisterExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_instruction_5F_F::objectCompare (const GALGAS_baseline_5F_instruction_5F_F & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_F::GALGAS_baseline_5F_instruction_5F_F (void) :
GALGAS_baseline_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_F::GALGAS_baseline_5F_instruction_5F_F (const cPtr_baseline_5F_instruction_5F_F * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_F) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_F::reader_mFAinstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_F * p = (const cPtr_baseline_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_F) ;
    result = p->mAttribute_mFAinstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code cPtr_baseline_5F_instruction_5F_F::reader_mFAinstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFAinstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_baseline_5F_instruction_5F_F::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_F * p = (const cPtr_baseline_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_F) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_baseline_5F_instruction_5F_F::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @baseline_instruction_F class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction_5F_F::cPtr_baseline_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                      const GALGAS_registerExpression & in_mRegisterExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mFAinstruction (in_mFAinstruction),
mAttribute_mRegisterExpression (in_mRegisterExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_F::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F ;
}

void cPtr_baseline_5F_instruction_5F_F::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_F:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFAinstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_instruction_5F_F::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_F (mAttribute_mInstructionLocation, mAttribute_mFAinstruction, mAttribute_mRegisterExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @baseline_instruction_F type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F ("baseline_instruction_F",
                                                     & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_F::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_F::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_F (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_F GALGAS_baseline_5F_instruction_5F_F::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_F result ;
  const GALGAS_baseline_5F_instruction_5F_F * p = (const GALGAS_baseline_5F_instruction_5F_F *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_F *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_F", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_instruction_5F_FB::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_instruction_5F_FB *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitOrientedOp.objectCompare (p->mAttribute_mBitOrientedOp) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterExpression.objectCompare (p->mAttribute_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitNumber.objectCompare (p->mAttribute_mBitNumber) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_instruction_5F_FB::objectCompare (const GALGAS_baseline_5F_instruction_5F_FB & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_FB::GALGAS_baseline_5F_instruction_5F_FB (void) :
GALGAS_baseline_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FB::GALGAS_baseline_5F_instruction_5F_FB (const cPtr_baseline_5F_instruction_5F_FB * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_FB) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_bit_5F_oriented_5F_op GALGAS_baseline_5F_instruction_5F_FB::reader_mBitOrientedOp (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_bit_5F_oriented_5F_op result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    result = p->mAttribute_mBitOrientedOp ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_bit_5F_oriented_5F_op cPtr_baseline_5F_instruction_5F_FB::reader_mBitOrientedOp (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitOrientedOp ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_baseline_5F_instruction_5F_FB::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_baseline_5F_instruction_5F_FB::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression GALGAS_baseline_5F_instruction_5F_FB::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_bitNumberExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    result = p->mAttribute_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression cPtr_baseline_5F_instruction_5F_FB::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @baseline_instruction_FB class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction_5F_FB::cPtr_baseline_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bitNumberExpression & in_mBitNumber
                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mBitOrientedOp (in_mBitOrientedOp),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_mBitNumber (in_mBitNumber) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_FB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB ;
}

void cPtr_baseline_5F_instruction_5F_FB::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_FB:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBitOrientedOp.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_instruction_5F_FB::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_FB (mAttribute_mInstructionLocation, mAttribute_mBitOrientedOp, mAttribute_mRegisterExpression, mAttribute_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @baseline_instruction_FB type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB ("baseline_instruction_FB",
                                                      & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_FB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_FB::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_FB (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FB GALGAS_baseline_5F_instruction_5F_FB::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FB result ;
  const GALGAS_baseline_5F_instruction_5F_FB * p = (const GALGAS_baseline_5F_instruction_5F_FB *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_FB *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_FB", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_instruction_5F_FD::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_instruction_5F_FD *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstruction_5F_FD_5F_base_5F_code.objectCompare (p->mAttribute_mInstruction_5F_FD_5F_base_5F_code) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterExpression.objectCompare (p->mAttribute_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_m_5F_W_5F_isDestination.objectCompare (p->mAttribute_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_instruction_5F_FD::objectCompare (const GALGAS_baseline_5F_instruction_5F_FD & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_FD::GALGAS_baseline_5F_instruction_5F_FD (void) :
GALGAS_baseline_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD::GALGAS_baseline_5F_instruction_5F_FD (const cPtr_baseline_5F_instruction_5F_FD * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_FD) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD::reader_mInstruction_5F_FD_5F_base_5F_code (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    result = p->mAttribute_mInstruction_5F_FD_5F_base_5F_code ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code cPtr_baseline_5F_instruction_5F_FD::reader_mInstruction_5F_FD_5F_base_5F_code (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction_5F_FD_5F_base_5F_code ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_baseline_5F_instruction_5F_FD::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_baseline_5F_instruction_5F_FD::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    result = p->mAttribute_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_instruction_5F_FD::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @baseline_instruction_FD class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction_5F_FD::cPtr_baseline_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mInstruction_5F_FD_5F_base_5F_code (in_mInstruction_5F_FD_5F_base_5F_code),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_FD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD ;
}

void cPtr_baseline_5F_instruction_5F_FD::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_FD:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstruction_5F_FD_5F_base_5F_code.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_instruction_5F_FD::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_FD (mAttribute_mInstructionLocation, mAttribute_mInstruction_5F_FD_5F_base_5F_code, mAttribute_mRegisterExpression, mAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @baseline_instruction_FD type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD ("baseline_instruction_FD",
                                                      & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_FD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_FD::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_FD (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD GALGAS_baseline_5F_instruction_5F_FD::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD result ;
  const GALGAS_baseline_5F_instruction_5F_FD * p = (const GALGAS_baseline_5F_instruction_5F_FD *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_FD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_FD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_instruction_5F_FOREVER::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_FOREVER * p = (const cPtr_baseline_5F_instruction_5F_FOREVER *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FOREVER) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionList.objectCompare (p->mAttribute_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfInstructionList.objectCompare (p->mAttribute_mEndOfInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_instruction_5F_FOREVER::objectCompare (const GALGAS_baseline_5F_instruction_5F_FOREVER & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_FOREVER::GALGAS_baseline_5F_instruction_5F_FOREVER (void) :
GALGAS_baseline_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FOREVER GALGAS_baseline_5F_instruction_5F_FOREVER::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_instruction_5F_FOREVER::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                     GALGAS_baseline_5F_instructionList::constructor_emptyList (HERE),
                                                                     GALGAS_location::constructor_nowhere (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FOREVER::GALGAS_baseline_5F_instruction_5F_FOREVER (const cPtr_baseline_5F_instruction_5F_FOREVER * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_FOREVER) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FOREVER GALGAS_baseline_5F_instruction_5F_FOREVER::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                      const GALGAS_baseline_5F_instructionList & inAttribute_mInstructionList,
                                                                                                      const GALGAS_location & inAttribute_mEndOfInstructionList
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FOREVER result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mEndOfInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_FOREVER (inAttribute_mInstructionLocation, inAttribute_mInstructionList, inAttribute_mEndOfInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instruction_5F_FOREVER::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_FOREVER * p = (const cPtr_baseline_5F_instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FOREVER) ;
    result = p->mAttribute_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList cPtr_baseline_5F_instruction_5F_FOREVER::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_baseline_5F_instruction_5F_FOREVER::reader_mEndOfInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_FOREVER * p = (const cPtr_baseline_5F_instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FOREVER) ;
    result = p->mAttribute_mEndOfInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_baseline_5F_instruction_5F_FOREVER::reader_mEndOfInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @baseline_instruction_FOREVER class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction_5F_FOREVER::cPtr_baseline_5F_instruction_5F_FOREVER (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                                                  const GALGAS_location & in_mEndOfInstructionList
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mInstructionList (in_mInstructionList),
mAttribute_mEndOfInstructionList (in_mEndOfInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_FOREVER::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER ;
}

void cPtr_baseline_5F_instruction_5F_FOREVER::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_FOREVER:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_instruction_5F_FOREVER::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_FOREVER (mAttribute_mInstructionLocation, mAttribute_mInstructionList, mAttribute_mEndOfInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @baseline_instruction_FOREVER type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER ("baseline_instruction_FOREVER",
                                                           & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_FOREVER::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_FOREVER::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_FOREVER (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FOREVER GALGAS_baseline_5F_instruction_5F_FOREVER::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FOREVER result ;
  const GALGAS_baseline_5F_instruction_5F_FOREVER * p = (const GALGAS_baseline_5F_instruction_5F_FOREVER *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_FOREVER *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_FOREVER", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_instruction_5F_GOTO::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_GOTO * p = (const cPtr_baseline_5F_instruction_5F_GOTO *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_GOTO) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabel.objectCompare (p->mAttribute_mTargetLabel) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_instruction_5F_GOTO::objectCompare (const GALGAS_baseline_5F_instruction_5F_GOTO & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_GOTO::GALGAS_baseline_5F_instruction_5F_GOTO (void) :
GALGAS_baseline_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_GOTO GALGAS_baseline_5F_instruction_5F_GOTO::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_instruction_5F_GOTO::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_GOTO::GALGAS_baseline_5F_instruction_5F_GOTO (const cPtr_baseline_5F_instruction_5F_GOTO * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_GOTO) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_GOTO GALGAS_baseline_5F_instruction_5F_GOTO::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_GOTO result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_GOTO (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_GOTO::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_GOTO * p = (const cPtr_baseline_5F_instruction_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_GOTO) ;
    result = p->mAttribute_mTargetLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_baseline_5F_instruction_5F_GOTO::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @baseline_instruction_GOTO class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction_5F_GOTO::cPtr_baseline_5F_instruction_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mTargetLabel (in_mTargetLabel) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_GOTO::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO ;
}

void cPtr_baseline_5F_instruction_5F_GOTO::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_GOTO:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_instruction_5F_GOTO::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_GOTO (mAttribute_mInstructionLocation, mAttribute_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @baseline_instruction_GOTO type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO ("baseline_instruction_GOTO",
                                                        & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_GOTO::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_GOTO::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_GOTO (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (void) :
GALGAS_baseline_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON * p = (const cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
    result = p->mAttribute_mInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @baseline_instruction_IF_SEMI_COLON class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const GALGAS_location & in_mInstructionLocation,
                                                                                                          const GALGAS_baseline_5F_instruction & in_mInstruction
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mInstruction (in_mInstruction) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @baseline_instruction_IF_SEMI_COLON type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON ("baseline_instruction_IF_SEMI_COLON",
                                                                       & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON result ;
  const GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON * p = (const GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_IF_SEMI_COLON", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstruction.objectCompare (p->mAttribute_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSkipIfSet.objectCompare (p->mAttribute_mSkipIfSet) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterExpression.objectCompare (p->mAttribute_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitNumber.objectCompare (p->mAttribute_mBitNumber) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest (void) :
GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inSourcePtr) :
GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                  const GALGAS_baseline_5F_instruction & inAttribute_mInstruction,
                                                                                                                  const GALGAS_bool & inAttribute_mSkipIfSet,
                                                                                                                  const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                  const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mSkipIfSet.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mSkipIfSet, inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::reader_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    result = p->mAttribute_mSkipIfSet ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::reader_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSkipIfSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_bitNumberExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    result = p->mAttribute_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @baseline_instruction_IF_BitTest class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (const GALGAS_location & in_mInstructionLocation,
                                                                                              const GALGAS_baseline_5F_instruction & in_mInstruction,
                                                                                              const GALGAS_bool & in_mSkipIfSet,
                                                                                              const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                              const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction COMMA_THERE),
mAttribute_mSkipIfSet (in_mSkipIfSet),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_mBitNumber (in_mBitNumber) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest ;
}

void cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_IF_BitTest:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (mAttribute_mInstructionLocation, mAttribute_mInstruction, mAttribute_mSkipIfSet, mAttribute_mRegisterExpression, mAttribute_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @baseline_instruction_IF_BitTest type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest ("baseline_instruction_IF_BitTest",
                                                                 & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest result ;
  const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest * p = (const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_IF_BitTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstruction.objectCompare (p->mAttribute_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIncrement.objectCompare (p->mAttribute_mIncrement) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterExpression.objectCompare (p->mAttribute_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_m_5F_W_5F_isDestination.objectCompare (p->mAttribute_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec (void) :
GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec (const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * inSourcePtr) :
GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                const GALGAS_baseline_5F_instruction & inAttribute_mInstruction,
                                                                                                                const GALGAS_bool & inAttribute_mIncrement,
                                                                                                                const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mIncrement.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mIncrement, inAttribute_mRegisterExpression, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::reader_mIncrement (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
    result = p->mAttribute_mIncrement ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::reader_mIncrement (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIncrement ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
    result = p->mAttribute_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @baseline_instruction_IF_IncDec class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_baseline_5F_instruction & in_mInstruction,
                                                                                            const GALGAS_bool & in_mIncrement,
                                                                                            const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                            const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction COMMA_THERE),
mAttribute_mIncrement (in_mIncrement),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec ;
}

void cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_IF_IncDec:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIncrement.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (mAttribute_mInstructionLocation, mAttribute_mInstruction, mAttribute_mIncrement, mAttribute_mRegisterExpression, mAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @baseline_instruction_IF_IncDec type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec ("baseline_instruction_IF_IncDec",
                                                                & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec result ;
  const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec * p = (const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_IF_IncDec", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_instruction_5F_JSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_JSR * p = (const cPtr_baseline_5F_instruction_5F_JSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_JSR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabel.objectCompare (p->mAttribute_mTargetLabel) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_instruction_5F_JSR::objectCompare (const GALGAS_baseline_5F_instruction_5F_JSR & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_JSR::GALGAS_baseline_5F_instruction_5F_JSR (void) :
GALGAS_baseline_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_JSR GALGAS_baseline_5F_instruction_5F_JSR::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_instruction_5F_JSR::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                 GALGAS_lstring::constructor_default (HERE)
                                                                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_JSR::GALGAS_baseline_5F_instruction_5F_JSR (const cPtr_baseline_5F_instruction_5F_JSR * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_JSR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_JSR GALGAS_baseline_5F_instruction_5F_JSR::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                              const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_JSR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_JSR (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_JSR::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_JSR * p = (const cPtr_baseline_5F_instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_JSR) ;
    result = p->mAttribute_mTargetLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_baseline_5F_instruction_5F_JSR::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @baseline_instruction_JSR class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction_5F_JSR::cPtr_baseline_5F_instruction_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_lstring & in_mTargetLabel
                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mTargetLabel (in_mTargetLabel) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR ;
}

void cPtr_baseline_5F_instruction_5F_JSR::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_JSR:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_instruction_5F_JSR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_JSR (mAttribute_mInstructionLocation, mAttribute_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @baseline_instruction_JSR type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR ("baseline_instruction_JSR",
                                                       & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_JSR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_instruction_5F_JUMP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_JUMP * p = (const cPtr_baseline_5F_instruction_5F_JUMP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_JUMP) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabel.objectCompare (p->mAttribute_mTargetLabel) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_instruction_5F_JUMP::objectCompare (const GALGAS_baseline_5F_instruction_5F_JUMP & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_JUMP::GALGAS_baseline_5F_instruction_5F_JUMP (void) :
GALGAS_baseline_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_JUMP GALGAS_baseline_5F_instruction_5F_JUMP::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_instruction_5F_JUMP::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_JUMP::GALGAS_baseline_5F_instruction_5F_JUMP (const cPtr_baseline_5F_instruction_5F_JUMP * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_JUMP) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_JUMP GALGAS_baseline_5F_instruction_5F_JUMP::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_JUMP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_JUMP (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_JUMP::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_JUMP * p = (const cPtr_baseline_5F_instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_JUMP) ;
    result = p->mAttribute_mTargetLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_baseline_5F_instruction_5F_JUMP::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @baseline_instruction_JUMP class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction_5F_JUMP::cPtr_baseline_5F_instruction_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mTargetLabel (in_mTargetLabel) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_JUMP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP ;
}

void cPtr_baseline_5F_instruction_5F_JUMP::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_JUMP:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_instruction_5F_JUMP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_JUMP (mAttribute_mInstructionLocation, mAttribute_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @baseline_instruction_JUMP type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP ("baseline_instruction_JUMP",
                                                        & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_JUMP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_JUMP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_JUMP (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_instruction_5F_MNOP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_MNOP * p = (const cPtr_baseline_5F_instruction_5F_MNOP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_MNOP) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOccurrenceFactor.objectCompare (p->mAttribute_mOccurrenceFactor) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_instruction_5F_MNOP::objectCompare (const GALGAS_baseline_5F_instruction_5F_MNOP & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_MNOP::GALGAS_baseline_5F_instruction_5F_MNOP (void) :
GALGAS_baseline_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_MNOP GALGAS_baseline_5F_instruction_5F_MNOP::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_instruction_5F_MNOP::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_luint::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_MNOP::GALGAS_baseline_5F_instruction_5F_MNOP (const cPtr_baseline_5F_instruction_5F_MNOP * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_MNOP) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_MNOP GALGAS_baseline_5F_instruction_5F_MNOP::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_luint & inAttribute_mOccurrenceFactor
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_MNOP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOccurrenceFactor.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_MNOP (inAttribute_mInstructionLocation, inAttribute_mOccurrenceFactor COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_baseline_5F_instruction_5F_MNOP::reader_mOccurrenceFactor (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_MNOP * p = (const cPtr_baseline_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_MNOP) ;
    result = p->mAttribute_mOccurrenceFactor ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_baseline_5F_instruction_5F_MNOP::reader_mOccurrenceFactor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOccurrenceFactor ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @baseline_instruction_MNOP class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction_5F_MNOP::cPtr_baseline_5F_instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_luint & in_mOccurrenceFactor
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mOccurrenceFactor (in_mOccurrenceFactor) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_MNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP ;
}

void cPtr_baseline_5F_instruction_5F_MNOP::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_MNOP:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_instruction_5F_MNOP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_MNOP (mAttribute_mInstructionLocation, mAttribute_mOccurrenceFactor COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @baseline_instruction_MNOP type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP ("baseline_instruction_MNOP",
                                                        & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_MNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_MNOP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_MNOP (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_MNOP GALGAS_baseline_5F_instruction_5F_MNOP::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_MNOP result ;
  const GALGAS_baseline_5F_instruction_5F_MNOP * p = (const GALGAS_baseline_5F_instruction_5F_MNOP *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_MNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_MNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mConstantName.objectCompare (p->mAttribute_mConstantName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLowerBoundExpression.objectCompare (p->mAttribute_mLowerBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mUpperBoundExpression.objectCompare (p->mAttribute_mUpperBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionList.objectCompare (p->mAttribute_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfInstruction.objectCompare (p->mAttribute_mEndOfInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::objectCompare (const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (void) :
GALGAS_baseline_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::reader_mConstantName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    result = p->mAttribute_mConstantName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::reader_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::reader_mLowerBoundExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    result = p->mAttribute_mLowerBoundExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::reader_mLowerBoundExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLowerBoundExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::reader_mUpperBoundExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    result = p->mAttribute_mUpperBoundExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::reader_mUpperBoundExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUpperBoundExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    result = p->mAttribute_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::reader_mEndOfInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    result = p->mAttribute_mEndOfInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::reader_mEndOfInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @baseline_instruction_STATIC_REPEAT class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT (const GALGAS_location & in_mInstructionLocation,
                                                                                                    const GALGAS_lstring & in_mConstantName,
                                                                                                    const GALGAS_immediatExpression & in_mLowerBoundExpression,
                                                                                                    const GALGAS_immediatExpression & in_mUpperBoundExpression,
                                                                                                    const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                                                                    const GALGAS_location & in_mEndOfInstruction
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mConstantName (in_mConstantName),
mAttribute_mLowerBoundExpression (in_mLowerBoundExpression),
mAttribute_mUpperBoundExpression (in_mUpperBoundExpression),
mAttribute_mInstructionList (in_mInstructionList),
mAttribute_mEndOfInstruction (in_mEndOfInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT ;
}

void cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_STATIC_REPEAT:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mConstantName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLowerBoundExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mUpperBoundExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT (mAttribute_mInstructionLocation, mAttribute_mConstantName, mAttribute_mLowerBoundExpression, mAttribute_mUpperBoundExpression, mAttribute_mInstructionList, mAttribute_mEndOfInstruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @baseline_instruction_STATIC_REPEAT type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT ("baseline_instruction_STATIC_REPEAT",
                                                                    & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_instruction_5F_TRIS::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_TRIS * p = (const cPtr_baseline_5F_instruction_5F_TRIS *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_TRIS) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOperand.objectCompare (p->mAttribute_mOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_instruction_5F_TRIS::objectCompare (const GALGAS_baseline_5F_instruction_5F_TRIS & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_TRIS::GALGAS_baseline_5F_instruction_5F_TRIS (void) :
GALGAS_baseline_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_TRIS GALGAS_baseline_5F_instruction_5F_TRIS::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_instruction_5F_TRIS::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_TRIS::GALGAS_baseline_5F_instruction_5F_TRIS (const cPtr_baseline_5F_instruction_5F_TRIS * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_TRIS) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_TRIS GALGAS_baseline_5F_instruction_5F_TRIS::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mOperand
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_TRIS result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_TRIS (inAttribute_mInstructionLocation, inAttribute_mOperand COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_TRIS::reader_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_TRIS * p = (const cPtr_baseline_5F_instruction_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_TRIS) ;
    result = p->mAttribute_mOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_baseline_5F_instruction_5F_TRIS::reader_mOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @baseline_instruction_TRIS class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction_5F_TRIS::cPtr_baseline_5F_instruction_5F_TRIS (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mOperand
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mOperand (in_mOperand) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_TRIS::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS ;
}

void cPtr_baseline_5F_instruction_5F_TRIS::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_TRIS:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_instruction_5F_TRIS::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_TRIS (mAttribute_mInstructionLocation, mAttribute_mOperand COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @baseline_instruction_TRIS type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS ("baseline_instruction_TRIS",
                                                        & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_TRIS::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_TRIS::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_TRIS (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND * p = (const cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstruction.objectCompare (p->mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::objectCompare (const GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND (void) :
GALGAS_baseline_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND (const cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                  const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & inAttribute_mInstruction
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND (inAttribute_mInstructionLocation, inAttribute_mInstruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND * p = (const cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND) ;
    result = p->mAttribute_mInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @baseline_instruction_WO_OPERAND class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND (const GALGAS_location & in_mInstructionLocation,
                                                                                              const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mInstruction (in_mInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND ;
}

void cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_WO_OPERAND:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND (mAttribute_mInstructionLocation, mAttribute_mInstruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @baseline_instruction_WO_OPERAND type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND ("baseline_instruction_WO_OPERAND",
                                                                 & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND result ;
  const GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND * p = (const GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_WO_OPERAND", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_instruction_5F_do_5F_while::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_do_5F_while * p = (const cPtr_baseline_5F_instruction_5F_do_5F_while *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRepeatedInstructionList.objectCompare (p->mAttribute_mRepeatedInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfRepeatedInstructionList.objectCompare (p->mAttribute_mEndOfRepeatedInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWhilePartList.objectCompare (p->mAttribute_mWhilePartList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_instruction_5F_do_5F_while::objectCompare (const GALGAS_baseline_5F_instruction_5F_do_5F_while & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_do_5F_while::GALGAS_baseline_5F_instruction_5F_do_5F_while (void) :
GALGAS_baseline_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_do_5F_while GALGAS_baseline_5F_instruction_5F_do_5F_while::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_instruction_5F_do_5F_while::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                         GALGAS_baseline_5F_instructionList::constructor_emptyList (HERE),
                                                                         GALGAS_location::constructor_nowhere (HERE),
                                                                         GALGAS_baseline_5F_partList::constructor_emptyList (HERE)
                                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_do_5F_while::GALGAS_baseline_5F_instruction_5F_do_5F_while (const cPtr_baseline_5F_instruction_5F_do_5F_while * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_do_5F_while GALGAS_baseline_5F_instruction_5F_do_5F_while::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                              const GALGAS_baseline_5F_instructionList & inAttribute_mRepeatedInstructionList,
                                                                                                              const GALGAS_location & inAttribute_mEndOfRepeatedInstructionList,
                                                                                                              const GALGAS_baseline_5F_partList & inAttribute_mWhilePartList
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_do_5F_while result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRepeatedInstructionList.isValid () && inAttribute_mEndOfRepeatedInstructionList.isValid () && inAttribute_mWhilePartList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_do_5F_while (inAttribute_mInstructionLocation, inAttribute_mRepeatedInstructionList, inAttribute_mEndOfRepeatedInstructionList, inAttribute_mWhilePartList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instruction_5F_do_5F_while::reader_mRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_do_5F_while * p = (const cPtr_baseline_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
    result = p->mAttribute_mRepeatedInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList cPtr_baseline_5F_instruction_5F_do_5F_while::reader_mRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRepeatedInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_baseline_5F_instruction_5F_do_5F_while::reader_mEndOfRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_do_5F_while * p = (const cPtr_baseline_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
    result = p->mAttribute_mEndOfRepeatedInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_baseline_5F_instruction_5F_do_5F_while::reader_mEndOfRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfRepeatedInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList GALGAS_baseline_5F_instruction_5F_do_5F_while::reader_mWhilePartList (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_partList result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_do_5F_while * p = (const cPtr_baseline_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
    result = p->mAttribute_mWhilePartList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList cPtr_baseline_5F_instruction_5F_do_5F_while::reader_mWhilePartList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWhilePartList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @baseline_instruction_do_while class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction_5F_do_5F_while::cPtr_baseline_5F_instruction_5F_do_5F_while (const GALGAS_location & in_mInstructionLocation,
                                                                                          const GALGAS_baseline_5F_instructionList & in_mRepeatedInstructionList,
                                                                                          const GALGAS_location & in_mEndOfRepeatedInstructionList,
                                                                                          const GALGAS_baseline_5F_partList & in_mWhilePartList
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mRepeatedInstructionList (in_mRepeatedInstructionList),
mAttribute_mEndOfRepeatedInstructionList (in_mEndOfRepeatedInstructionList),
mAttribute_mWhilePartList (in_mWhilePartList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_do_5F_while::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while ;
}

void cPtr_baseline_5F_instruction_5F_do_5F_while::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_do_while:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mWhilePartList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_instruction_5F_do_5F_while::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_do_5F_while (mAttribute_mInstructionLocation, mAttribute_mRepeatedInstructionList, mAttribute_mEndOfRepeatedInstructionList, mAttribute_mWhilePartList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @baseline_instruction_do_while type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while ("baseline_instruction_do_while",
                                                               & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_do_5F_while::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_do_5F_while::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_do_5F_while (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_do_5F_while GALGAS_baseline_5F_instruction_5F_do_5F_while::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_do_5F_while result ;
  const GALGAS_baseline_5F_instruction_5F_do_5F_while * p = (const GALGAS_baseline_5F_instruction_5F_do_5F_while *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_do_5F_while *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_do_while", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_instruction_5F_literalOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_literalOperation * p = (const cPtr_baseline_5F_instruction_5F_literalOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_literalOperation) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLiteralInstruction.objectCompare (p->mAttribute_mLiteralInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImmediatExpression.objectCompare (p->mAttribute_mImmediatExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_instruction_5F_literalOperation::objectCompare (const GALGAS_baseline_5F_instruction_5F_literalOperation & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_literalOperation::GALGAS_baseline_5F_instruction_5F_literalOperation (void) :
GALGAS_baseline_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_literalOperation::GALGAS_baseline_5F_instruction_5F_literalOperation (const cPtr_baseline_5F_instruction_5F_literalOperation * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_literalOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_literalOperation GALGAS_baseline_5F_instruction_5F_literalOperation::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                        const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & inAttribute_mLiteralInstruction,
                                                                                                                        const GALGAS_immediatExpression & inAttribute_mImmediatExpression
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_literalOperation result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mLiteralInstruction.isValid () && inAttribute_mImmediatExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_literalOperation (inAttribute_mInstructionLocation, inAttribute_mLiteralInstruction, inAttribute_mImmediatExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode GALGAS_baseline_5F_instruction_5F_literalOperation::reader_mLiteralInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_literalOperation * p = (const cPtr_baseline_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_literalOperation) ;
    result = p->mAttribute_mLiteralInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode cPtr_baseline_5F_instruction_5F_literalOperation::reader_mLiteralInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_baseline_5F_instruction_5F_literalOperation::reader_mImmediatExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_literalOperation * p = (const cPtr_baseline_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_literalOperation) ;
    result = p->mAttribute_mImmediatExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_baseline_5F_instruction_5F_literalOperation::reader_mImmediatExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImmediatExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @baseline_instruction_literalOperation class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction_5F_literalOperation::cPtr_baseline_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                                                    const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                                    const GALGAS_immediatExpression & in_mImmediatExpression
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mLiteralInstruction (in_mLiteralInstruction),
mAttribute_mImmediatExpression (in_mImmediatExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation ;
}

void cPtr_baseline_5F_instruction_5F_literalOperation::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_literalOperation:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLiteralInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImmediatExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_instruction_5F_literalOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_literalOperation (mAttribute_mInstructionLocation, mAttribute_mLiteralInstruction, mAttribute_mImmediatExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @baseline_instruction_literalOperation type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation ("baseline_instruction_literalOperation",
                                                                    & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_literalOperation GALGAS_baseline_5F_instruction_5F_literalOperation::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_literalOperation result ;
  const GALGAS_baseline_5F_instruction_5F_literalOperation * p = (const GALGAS_baseline_5F_instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_instruction_5F_structured_5F_if::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (const cPtr_baseline_5F_instruction_5F_structured_5F_if *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIfCondition.objectCompare (p->mAttribute_mIfCondition) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mThenInstructionList.objectCompare (p->mAttribute_mThenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElseInstructionList.objectCompare (p->mAttribute_mElseInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfElsePartLocation.objectCompare (p->mAttribute_mEndOfElsePartLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_instruction_5F_structured_5F_if::objectCompare (const GALGAS_baseline_5F_instruction_5F_structured_5F_if & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_structured_5F_if::GALGAS_baseline_5F_instruction_5F_structured_5F_if (void) :
GALGAS_baseline_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_structured_5F_if::GALGAS_baseline_5F_instruction_5F_structured_5F_if (const cPtr_baseline_5F_instruction_5F_structured_5F_if * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_structured_5F_if GALGAS_baseline_5F_instruction_5F_structured_5F_if::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                        const GALGAS_baseline_5F_conditionExpression & inAttribute_mIfCondition,
                                                                                                                        const GALGAS_baseline_5F_instructionList & inAttribute_mThenInstructionList,
                                                                                                                        const GALGAS_baseline_5F_instructionList & inAttribute_mElseInstructionList,
                                                                                                                        const GALGAS_location & inAttribute_mEndOfElsePartLocation
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_structured_5F_if result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mIfCondition.isValid () && inAttribute_mThenInstructionList.isValid () && inAttribute_mElseInstructionList.isValid () && inAttribute_mEndOfElsePartLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_structured_5F_if (inAttribute_mInstructionLocation, inAttribute_mIfCondition, inAttribute_mThenInstructionList, inAttribute_mElseInstructionList, inAttribute_mEndOfElsePartLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_conditionExpression GALGAS_baseline_5F_instruction_5F_structured_5F_if::reader_mIfCondition (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_conditionExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (const cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    result = p->mAttribute_mIfCondition ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_conditionExpression cPtr_baseline_5F_instruction_5F_structured_5F_if::reader_mIfCondition (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIfCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instruction_5F_structured_5F_if::reader_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (const cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    result = p->mAttribute_mThenInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList cPtr_baseline_5F_instruction_5F_structured_5F_if::reader_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mThenInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instruction_5F_structured_5F_if::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (const cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    result = p->mAttribute_mElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList cPtr_baseline_5F_instruction_5F_structured_5F_if::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_baseline_5F_instruction_5F_structured_5F_if::reader_mEndOfElsePartLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (const cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    result = p->mAttribute_mEndOfElsePartLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_baseline_5F_instruction_5F_structured_5F_if::reader_mEndOfElsePartLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfElsePartLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @baseline_instruction_structured_if class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction_5F_structured_5F_if::cPtr_baseline_5F_instruction_5F_structured_5F_if (const GALGAS_location & in_mInstructionLocation,
                                                                                                    const GALGAS_baseline_5F_conditionExpression & in_mIfCondition,
                                                                                                    const GALGAS_baseline_5F_instructionList & in_mThenInstructionList,
                                                                                                    const GALGAS_baseline_5F_instructionList & in_mElseInstructionList,
                                                                                                    const GALGAS_location & in_mEndOfElsePartLocation
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mIfCondition (in_mIfCondition),
mAttribute_mThenInstructionList (in_mThenInstructionList),
mAttribute_mElseInstructionList (in_mElseInstructionList),
mAttribute_mEndOfElsePartLocation (in_mEndOfElsePartLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_structured_5F_if::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if ;
}

void cPtr_baseline_5F_instruction_5F_structured_5F_if::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_structured_if:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIfCondition.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mThenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfElsePartLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_instruction_5F_structured_5F_if::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_structured_5F_if (mAttribute_mInstructionLocation, mAttribute_mIfCondition, mAttribute_mThenInstructionList, mAttribute_mElseInstructionList, mAttribute_mEndOfElsePartLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @baseline_instruction_structured_if type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if ("baseline_instruction_structured_if",
                                                                    & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_structured_5F_if::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_structured_5F_if::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_structured_5F_if (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_structured_5F_if GALGAS_baseline_5F_instruction_5F_structured_5F_if::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_structured_5F_if result ;
  const GALGAS_baseline_5F_instruction_5F_structured_5F_if * p = (const GALGAS_baseline_5F_instruction_5F_structured_5F_if *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_structured_5F_if *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_structured_if", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction::GALGAS_baseline_5F_intermediate_5F_instruction (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction::GALGAS_baseline_5F_intermediate_5F_instruction (const cPtr_baseline_5F_intermediate_5F_instruction * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @baseline_intermediate_instruction class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_instruction::cPtr_baseline_5F_intermediate_5F_instruction (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @baseline_intermediate_instruction type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction ("baseline_intermediate_instruction",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction GALGAS_baseline_5F_intermediate_5F_instruction::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction * p = (const GALGAS_baseline_5F_intermediate_5F_instruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_NULL::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_NULL::objectCompare (const GALGAS_baseline_5F_intermediate_5F_NULL & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_NULL::GALGAS_baseline_5F_intermediate_5F_NULL (void) :
GALGAS_baseline_5F_intermediate_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_NULL GALGAS_baseline_5F_intermediate_5F_NULL::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_NULL::GALGAS_baseline_5F_intermediate_5F_NULL (const cPtr_baseline_5F_intermediate_5F_NULL * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_NULL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_NULL GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_NULL result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_NULL (THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @baseline_intermediate_NULL class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_NULL::cPtr_baseline_5F_intermediate_5F_NULL (LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_NULL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL ;
}

void cPtr_baseline_5F_intermediate_5F_NULL::description (C_String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString << "[@baseline_intermediate_NULL]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_NULL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_NULL (THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @baseline_intermediate_NULL type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL ("baseline_intermediate_NULL",
                                                         & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_NULL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_NULL::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_NULL (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_NULL GALGAS_baseline_5F_intermediate_5F_NULL::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_NULL result ;
  const GALGAS_baseline_5F_intermediate_5F_NULL * p = (const GALGAS_baseline_5F_intermediate_5F_NULL *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_NULL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_NULL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_baseline_5F_intermediate_5F_actualInstruction::objectCompare (const GALGAS_baseline_5F_intermediate_5F_actualInstruction & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_actualInstruction::GALGAS_baseline_5F_intermediate_5F_actualInstruction (void) :
GALGAS_baseline_5F_intermediate_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_actualInstruction::GALGAS_baseline_5F_intermediate_5F_actualInstruction (const cPtr_baseline_5F_intermediate_5F_actualInstruction * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_actualInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_baseline_5F_intermediate_5F_actualInstruction::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_actualInstruction * p = (const cPtr_baseline_5F_intermediate_5F_actualInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_actualInstruction) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_baseline_5F_intermediate_5F_actualInstruction::reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @baseline_intermediate_actualInstruction class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_actualInstruction::cPtr_baseline_5F_intermediate_5F_actualInstruction (const GALGAS_location & in_mInstructionLocation
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (THERE),
mAttribute_mInstructionLocation (in_mInstructionLocation) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @baseline_intermediate_actualInstruction type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction ("baseline_intermediate_actualInstruction",
                                                                      & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_actualInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_actualInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_actualInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_actualInstruction GALGAS_baseline_5F_intermediate_5F_actualInstruction::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_actualInstruction result ;
  const GALGAS_baseline_5F_intermediate_5F_actualInstruction * p = (const GALGAS_baseline_5F_intermediate_5F_actualInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_actualInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_actualInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_CALL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_CALL * p = (const cPtr_baseline_5F_intermediate_5F_CALL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_CALL) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabel.objectCompare (p->mAttribute_mTargetLabel) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_CALL::objectCompare (const GALGAS_baseline_5F_intermediate_5F_CALL & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_CALL::GALGAS_baseline_5F_intermediate_5F_CALL (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_CALL GALGAS_baseline_5F_intermediate_5F_CALL::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_CALL::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                   GALGAS_lstring::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_CALL::GALGAS_baseline_5F_intermediate_5F_CALL (const cPtr_baseline_5F_intermediate_5F_CALL * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_CALL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_CALL GALGAS_baseline_5F_intermediate_5F_CALL::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_CALL result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_CALL (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_CALL::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_CALL * p = (const cPtr_baseline_5F_intermediate_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_CALL) ;
    result = p->mAttribute_mTargetLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_baseline_5F_intermediate_5F_CALL::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @baseline_intermediate_CALL class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_CALL::cPtr_baseline_5F_intermediate_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mTargetLabel (in_mTargetLabel) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_CALL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL ;
}

void cPtr_baseline_5F_intermediate_5F_CALL::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_CALL:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_CALL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_CALL (mAttribute_mInstructionLocation, mAttribute_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @baseline_intermediate_CALL type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL ("baseline_intermediate_CALL",
                                                         & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_CALL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_CALL::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_CALL (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_GOTO::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_GOTO * p = (const cPtr_baseline_5F_intermediate_5F_GOTO *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_GOTO) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabel.objectCompare (p->mAttribute_mTargetLabel) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_GOTO::objectCompare (const GALGAS_baseline_5F_intermediate_5F_GOTO & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_GOTO::GALGAS_baseline_5F_intermediate_5F_GOTO (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_GOTO GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                   GALGAS_lstring::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_GOTO::GALGAS_baseline_5F_intermediate_5F_GOTO (const cPtr_baseline_5F_intermediate_5F_GOTO * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_GOTO) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_GOTO GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstring & inAttribute_mTargetLabel
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_GOTO result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_GOTO (inAttribute_mInstructionLocation, inAttribute_mTargetLabel COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_GOTO::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_GOTO * p = (const cPtr_baseline_5F_intermediate_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_GOTO) ;
    result = p->mAttribute_mTargetLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_baseline_5F_intermediate_5F_GOTO::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @baseline_intermediate_GOTO class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_GOTO::cPtr_baseline_5F_intermediate_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mTargetLabel (in_mTargetLabel) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_GOTO::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO ;
}

void cPtr_baseline_5F_intermediate_5F_GOTO::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_GOTO:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_GOTO::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_GOTO (mAttribute_mInstructionLocation, mAttribute_mTargetLabel COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @baseline_intermediate_GOTO type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO ("baseline_intermediate_GOTO",
                                                         & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_GOTO::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_GOTO::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_GOTO (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_JSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_JSR * p = (const cPtr_baseline_5F_intermediate_5F_JSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabel.objectCompare (p->mAttribute_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCurrentPage.objectCompare (p->mAttribute_mCurrentPage) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetPage.objectCompare (p->mAttribute_mTargetPage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_JSR::objectCompare (const GALGAS_baseline_5F_intermediate_5F_JSR & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_JSR::GALGAS_baseline_5F_intermediate_5F_JSR (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_JSR GALGAS_baseline_5F_intermediate_5F_JSR::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_JSR::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_uint::constructor_default (HERE),
                                                                  GALGAS_uint::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_JSR::GALGAS_baseline_5F_intermediate_5F_JSR (const cPtr_baseline_5F_intermediate_5F_JSR * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_JSR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_JSR::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_JSR * p = (const cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    result = p->mAttribute_mTargetLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_baseline_5F_intermediate_5F_JSR::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_JSR::reader_mCurrentPage (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_JSR * p = (const cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    result = p->mAttribute_mCurrentPage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_baseline_5F_intermediate_5F_JSR::reader_mCurrentPage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCurrentPage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_JSR::reader_mTargetPage (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_JSR * p = (const cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    result = p->mAttribute_mTargetPage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_baseline_5F_intermediate_5F_JSR::reader_mTargetPage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetPage ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @baseline_intermediate_JSR class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_JSR::cPtr_baseline_5F_intermediate_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mTargetLabel,
                                                                            const GALGAS_uint & in_mCurrentPage,
                                                                            const GALGAS_uint & in_mTargetPage
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mTargetLabel (in_mTargetLabel),
mAttribute_mCurrentPage (in_mCurrentPage),
mAttribute_mTargetPage (in_mTargetPage) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR ;
}

void cPtr_baseline_5F_intermediate_5F_JSR::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_JSR:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCurrentPage.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetPage.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_JSR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_JSR (mAttribute_mInstructionLocation, mAttribute_mTargetLabel, mAttribute_mCurrentPage, mAttribute_mTargetPage COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @baseline_intermediate_JSR type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR ("baseline_intermediate_JSR",
                                                        & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_JSR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_JUMP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_JUMP * p = (const cPtr_baseline_5F_intermediate_5F_JUMP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabel.objectCompare (p->mAttribute_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCurrentPage.objectCompare (p->mAttribute_mCurrentPage) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetPage.objectCompare (p->mAttribute_mTargetPage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_JUMP::objectCompare (const GALGAS_baseline_5F_intermediate_5F_JUMP & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_JUMP::GALGAS_baseline_5F_intermediate_5F_JUMP (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_JUMP GALGAS_baseline_5F_intermediate_5F_JUMP::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_JUMP::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                   GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_uint::constructor_default (HERE),
                                                                   GALGAS_uint::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_JUMP::GALGAS_baseline_5F_intermediate_5F_JUMP (const cPtr_baseline_5F_intermediate_5F_JUMP * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_JUMP) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_JUMP::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_JUMP * p = (const cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    result = p->mAttribute_mTargetLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_baseline_5F_intermediate_5F_JUMP::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_JUMP::reader_mCurrentPage (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_JUMP * p = (const cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    result = p->mAttribute_mCurrentPage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_baseline_5F_intermediate_5F_JUMP::reader_mCurrentPage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCurrentPage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_JUMP::reader_mTargetPage (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_JUMP * p = (const cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    result = p->mAttribute_mTargetPage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_baseline_5F_intermediate_5F_JUMP::reader_mTargetPage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetPage ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @baseline_intermediate_JUMP class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_JUMP::cPtr_baseline_5F_intermediate_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel,
                                                                              const GALGAS_uint & in_mCurrentPage,
                                                                              const GALGAS_uint & in_mTargetPage
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mTargetLabel (in_mTargetLabel),
mAttribute_mCurrentPage (in_mCurrentPage),
mAttribute_mTargetPage (in_mTargetPage) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_JUMP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP ;
}

void cPtr_baseline_5F_intermediate_5F_JUMP::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_JUMP:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCurrentPage.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetPage.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_JUMP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_JUMP (mAttribute_mInstructionLocation, mAttribute_mTargetLabel, mAttribute_mCurrentPage, mAttribute_mTargetPage COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @baseline_intermediate_JUMP type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP ("baseline_intermediate_JUMP",
                                                         & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_JUMP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_JUMP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_JUMP (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_TRIS::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_TRIS * p = (const cPtr_baseline_5F_intermediate_5F_TRIS *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_TRIS) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOperand.objectCompare (p->mAttribute_mOperand) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOpcode.objectCompare (p->mAttribute_mOpcode) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_TRIS::objectCompare (const GALGAS_baseline_5F_intermediate_5F_TRIS & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_TRIS::GALGAS_baseline_5F_intermediate_5F_TRIS (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_TRIS GALGAS_baseline_5F_intermediate_5F_TRIS::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_TRIS::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                   GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_uint::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_TRIS::GALGAS_baseline_5F_intermediate_5F_TRIS (const cPtr_baseline_5F_intermediate_5F_TRIS * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_TRIS) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_TRIS::reader_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_TRIS * p = (const cPtr_baseline_5F_intermediate_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_TRIS) ;
    result = p->mAttribute_mOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_baseline_5F_intermediate_5F_TRIS::reader_mOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_TRIS::reader_mOpcode (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_TRIS * p = (const cPtr_baseline_5F_intermediate_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_TRIS) ;
    result = p->mAttribute_mOpcode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_baseline_5F_intermediate_5F_TRIS::reader_mOpcode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOpcode ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @baseline_intermediate_TRIS class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_TRIS::cPtr_baseline_5F_intermediate_5F_TRIS (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mOperand,
                                                                              const GALGAS_uint & in_mOpcode
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mOperand (in_mOperand),
mAttribute_mOpcode (in_mOpcode) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_TRIS::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS ;
}

void cPtr_baseline_5F_intermediate_5F_TRIS::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_TRIS:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOpcode.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_TRIS::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_TRIS (mAttribute_mInstructionLocation, mAttribute_mOperand, mAttribute_mOpcode COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @baseline_intermediate_TRIS type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS ("baseline_intermediate_TRIS",
                                                         & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_TRIS::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_TRIS::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_TRIS (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * p = (const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstruction.objectCompare (p->mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::objectCompare (const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND (const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                    const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & inAttribute_mInstruction
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (inAttribute_mInstructionLocation, inAttribute_mInstruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * p = (const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
    result = p->mAttribute_mInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @baseline_intermediate_WO_OPERAND class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (const GALGAS_location & in_mInstructionLocation,
                                                                                                const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mInstruction (in_mInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND ;
}

void cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_WO_OPERAND:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (mAttribute_mInstructionLocation, mAttribute_mInstruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @baseline_intermediate_WO_OPERAND type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND ("baseline_intermediate_WO_OPERAND",
                                                                  & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND result ;
  const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND * p = (const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_WO_OPERAND", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterDescription.objectCompare (p->mAttribute_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabel.objectCompare (p->mAttribute_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIncrement.objectCompare (p->mAttribute_mIncrement) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_m_5F_W_5F_isDestination.objectCompare (p->mAttribute_m_5F_W_5F_isDestination) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBranchIfZero.objectCompare (p->mAttribute_mBranchIfZero) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::objectCompare (const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                        GALGAS_baseline_5F_intermediate_5F_registerExpression::constructor_default (HERE),
                                                                                        GALGAS_string::constructor_default (HERE),
                                                                                        GALGAS_bool::constructor_default (HERE),
                                                                                        GALGAS_bool::constructor_default (HERE),
                                                                                        GALGAS_bool::constructor_default (HERE)
                                                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                            const GALGAS_baseline_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                                            const GALGAS_string & inAttribute_mTargetLabel,
                                                                                                                                            const GALGAS_bool & inAttribute_mIncrement,
                                                                                                                                            const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination,
                                                                                                                                            const GALGAS_bool & inAttribute_mBranchIfZero
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mIncrement.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid () && inAttribute_mBranchIfZero.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (inAttribute_mInstructionLocation, inAttribute_mRegisterDescription, inAttribute_mTargetLabel, inAttribute_mIncrement, inAttribute_m_5F_W_5F_isDestination, inAttribute_mBranchIfZero COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    result = p->mAttribute_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    result = p->mAttribute_mTargetLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::reader_mIncrement (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    result = p->mAttribute_mIncrement ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::reader_mIncrement (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIncrement ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    result = p->mAttribute_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::reader_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    result = p->mAttribute_mBranchIfZero ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::reader_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBranchIfZero ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                      Pointer class for @baseline_intermediate_incDecRegisterInCondition class                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (const GALGAS_location & in_mInstructionLocation,
                                                                                                                        const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                        const GALGAS_string & in_mTargetLabel,
                                                                                                                        const GALGAS_bool & in_mIncrement,
                                                                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                                                                        const GALGAS_bool & in_mBranchIfZero
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mRegisterDescription (in_mRegisterDescription),
mAttribute_mTargetLabel (in_mTargetLabel),
mAttribute_mIncrement (in_mIncrement),
mAttribute_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination),
mAttribute_mBranchIfZero (in_mBranchIfZero) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition ;
}

void cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_incDecRegisterInCondition:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIncrement.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBranchIfZero.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (mAttribute_mInstructionLocation, mAttribute_mRegisterDescription, mAttribute_mTargetLabel, mAttribute_mIncrement, mAttribute_m_5F_W_5F_isDestination, mAttribute_mBranchIfZero COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @baseline_intermediate_incDecRegisterInCondition type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition ("baseline_intermediate_incDecRegisterInCondition",
                                                                              & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition result ;
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_incDecRegisterInCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSkipIfSet.objectCompare (p->mAttribute_mSkipIfSet) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterDescription.objectCompare (p->mAttribute_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitNumber.objectCompare (p->mAttribute_mBitNumber) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                         GALGAS_bool::constructor_default (HERE),
                                                                                         GALGAS_baseline_5F_intermediate_5F_registerExpression::constructor_default (HERE),
                                                                                         GALGAS_uint::constructor_default (HERE)
                                                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                              const GALGAS_bool & inAttribute_mSkipIfSet,
                                                                                                                                              const GALGAS_baseline_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                                              const GALGAS_uint & inAttribute_mBitNumber
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSkipIfSet.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (inAttribute_mInstructionLocation, inAttribute_mSkipIfSet, inAttribute_mRegisterDescription, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::reader_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    result = p->mAttribute_mSkipIfSet ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::reader_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSkipIfSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    result = p->mAttribute_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    result = p->mAttribute_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                       Pointer class for @baseline_intermediate_instruction_BitTestSkip class                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (const GALGAS_location & in_mInstructionLocation,
                                                                                                                          const GALGAS_bool & in_mSkipIfSet,
                                                                                                                          const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                          const GALGAS_uint & in_mBitNumber
                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mSkipIfSet (in_mSkipIfSet),
mAttribute_mRegisterDescription (in_mRegisterDescription),
mAttribute_mBitNumber (in_mBitNumber) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_instruction_BitTestSkip:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (mAttribute_mInstructionLocation, mAttribute_mSkipIfSet, mAttribute_mRegisterDescription, mAttribute_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @baseline_intermediate_instruction_BitTestSkip type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ("baseline_intermediate_instruction_BitTestSkip",
                                                                               & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::extractObject (const GALGAS_object & inObject,
                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_BitTestSkip", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_instruction_5F_F::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_F * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstruction.objectCompare (p->mAttribute_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterDescription.objectCompare (p->mAttribute_mRegisterDescription) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::GALGAS_baseline_5F_intermediate_5F_instruction_5F_F (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::GALGAS_baseline_5F_intermediate_5F_instruction_5F_F (const cPtr_baseline_5F_intermediate_5F_instruction_5F_F * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_F GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                          const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & inAttribute_mInstruction,
                                                                                                                          const GALGAS_baseline_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_F result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mRegisterDescription.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_F (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mRegisterDescription COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_F * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
    result = p->mAttribute_mInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code cPtr_baseline_5F_intermediate_5F_instruction_5F_F::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_F * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
    result = p->mAttribute_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression cPtr_baseline_5F_intermediate_5F_instruction_5F_F::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @baseline_intermediate_instruction_F class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_instruction_5F_F::cPtr_baseline_5F_intermediate_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                                                                                      const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                                                                      const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mInstruction (in_mInstruction),
mAttribute_mRegisterDescription (in_mRegisterDescription) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_F::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_F::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_instruction_F:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_F::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_F (mAttribute_mInstructionLocation, mAttribute_mInstruction, mAttribute_mRegisterDescription COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @baseline_intermediate_instruction_F type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F ("baseline_intermediate_instruction_F",
                                                                     & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction_5F_F (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_F GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_F result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F * p = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_F", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstruction.objectCompare (p->mAttribute_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterDescription.objectCompare (p->mAttribute_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitNumber.objectCompare (p->mAttribute_mBitNumber) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                            const GALGAS_baseline_5F_bit_5F_oriented_5F_op & inAttribute_mInstruction,
                                                                                                                            const GALGAS_baseline_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                            const GALGAS_uint & inAttribute_mBitNumber
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mRegisterDescription, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_bit_5F_oriented_5F_op GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_bit_5F_oriented_5F_op result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
    result = p->mAttribute_mInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_bit_5F_oriented_5F_op cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
    result = p->mAttribute_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
    result = p->mAttribute_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @baseline_intermediate_instruction_FB class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                                                                                        const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                                                                        const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                        const GALGAS_uint & in_mBitNumber
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mInstruction (in_mInstruction),
mAttribute_mRegisterDescription (in_mRegisterDescription),
mAttribute_mBitNumber (in_mBitNumber) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_instruction_FB:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (mAttribute_mInstructionLocation, mAttribute_mInstruction, mAttribute_mRegisterDescription, mAttribute_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @baseline_intermediate_instruction_FB type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB ("baseline_intermediate_instruction_FB",
                                                                      & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB * p = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_FB", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstruction.objectCompare (p->mAttribute_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterDescription.objectCompare (p->mAttribute_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_m_5F_W_5F_isDestination.objectCompare (p->mAttribute_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                            const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inAttribute_mInstruction,
                                                                                                                            const GALGAS_baseline_5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                            const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mRegisterDescription, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
    result = p->mAttribute_mInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
    result = p->mAttribute_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
    result = p->mAttribute_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @baseline_intermediate_instruction_FD class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                                                                                        const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                                                                        const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mInstruction (in_mInstruction),
mAttribute_mRegisterDescription (in_mRegisterDescription),
mAttribute_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_instruction_FD:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (mAttribute_mInstructionLocation, mAttribute_mInstruction, mAttribute_mRegisterDescription, mAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @baseline_intermediate_instruction_FD type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD ("baseline_intermediate_instruction_FD",
                                                                      & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD * p = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_FD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOccurrenceFactor.objectCompare (p->mAttribute_mOccurrenceFactor) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                  GALGAS_luint::constructor_default (HERE)
                                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP (const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                const GALGAS_luint & inAttribute_mOccurrenceFactor
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOccurrenceFactor.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (inAttribute_mInstructionLocation, inAttribute_mOccurrenceFactor COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::reader_mOccurrenceFactor (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
    result = p->mAttribute_mOccurrenceFactor ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::reader_mOccurrenceFactor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOccurrenceFactor ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @baseline_intermediate_instruction_MNOP class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                                                                            const GALGAS_luint & in_mOccurrenceFactor
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mOccurrenceFactor (in_mOccurrenceFactor) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_instruction_MNOP:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (mAttribute_mInstructionLocation, mAttribute_mOccurrenceFactor COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @baseline_intermediate_instruction_MNOP type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP ("baseline_intermediate_instruction_MNOP",
                                                                        & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP * p = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_MNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstruction.objectCompare (p->mAttribute_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLiteralValue.objectCompare (p->mAttribute_mLiteralValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (void) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                                        const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & inAttribute_mInstruction,
                                                                                                                                                        const GALGAS_uint & inAttribute_mLiteralValue
                                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mLiteralValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mLiteralValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
    result = p->mAttribute_mInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::reader_mLiteralValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
    result = p->mAttribute_mLiteralValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::reader_mLiteralValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                     Pointer class for @baseline_intermediate_instruction_literalOperation class                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                                                                                    const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                                                                                    const GALGAS_uint & in_mLiteralValue
                                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mInstruction (in_mInstruction),
mAttribute_mLiteralValue (in_mLiteralValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::description (C_String & ioString,
                                                                                    const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_instruction_literalOperation:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLiteralValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (mAttribute_mInstructionLocation, mAttribute_mInstruction, mAttribute_mLiteralValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @baseline_intermediate_instruction_literalOperation type                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ("baseline_intermediate_instruction_literalOperation",
                                                                                    & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation result ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_pseudo::GALGAS_baseline_5F_intermediate_5F_pseudo (void) :
GALGAS_baseline_5F_intermediate_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_pseudo::GALGAS_baseline_5F_intermediate_5F_pseudo (const cPtr_baseline_5F_intermediate_5F_pseudo * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @baseline_intermediate_pseudo class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_pseudo::cPtr_baseline_5F_intermediate_5F_pseudo (LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @baseline_intermediate_pseudo type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo ("baseline_intermediate_pseudo",
                                                           & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_pseudo::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_pseudo::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_pseudo (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_pseudo GALGAS_baseline_5F_intermediate_5F_pseudo::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo result ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo * p = (const GALGAS_baseline_5F_intermediate_5F_pseudo *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_pseudo *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineName.objectCompare (p->mAttribute_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsRegular.objectCompare (p->mAttribute_mIsRegular) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (void) :
GALGAS_baseline_5F_intermediate_5F_pseudo () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                         GALGAS_bool::constructor_default (HERE)
                                                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_pseudo (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::constructor_new (const GALGAS_lstring & inAttribute_mRoutineName,
                                                                                                                                              const GALGAS_bool & inAttribute_mIsRegular
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE result ;
  if (inAttribute_mRoutineName.isValid () && inAttribute_mIsRegular.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (inAttribute_mRoutineName, inAttribute_mIsRegular COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::reader_mRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
    result = p->mAttribute_mRoutineName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::reader_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::reader_mIsRegular (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
    result = p->mAttribute_mIsRegular ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::reader_mIsRegular (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsRegular ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                         Pointer class for @baseline_intermediate_pseudo_BEGIN_ROUTINE class                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                                                                          const GALGAS_bool & in_mIsRegular
                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (THERE),
mAttribute_mRoutineName (in_mRoutineName),
mAttribute_mIsRegular (in_mIsRegular) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ;
}

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_pseudo_BEGIN_ROUTINE:" ;
  mAttribute_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIsRegular.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (mAttribute_mRoutineName, mAttribute_mIsRegular COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @baseline_intermediate_pseudo_BEGIN_ROUTINE type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ("baseline_intermediate_pseudo_BEGIN_ROUTINE",
                                                                               & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineName.objectCompare (p->mAttribute_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPage.objectCompare (p->mAttribute_mPage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (void) :
GALGAS_baseline_5F_intermediate_5F_pseudo () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                       GALGAS_uint::constructor_default (HERE)
                                                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_pseudo (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::constructor_new (const GALGAS_lstring & inAttribute_mRoutineName,
                                                                                                                                          const GALGAS_uint & inAttribute_mPage
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE result ;
  if (inAttribute_mRoutineName.isValid () && inAttribute_mPage.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (inAttribute_mRoutineName, inAttribute_mPage COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::reader_mRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
    result = p->mAttribute_mRoutineName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::reader_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::reader_mPage (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
    result = p->mAttribute_mPage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::reader_mPage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPage ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @baseline_intermediate_pseudo_END_ROUTINE class                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                                                                      const GALGAS_uint & in_mPage
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (THERE),
mAttribute_mRoutineName (in_mRoutineName),
mAttribute_mPage (in_mPage) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ;
}

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_pseudo_END_ROUTINE:" ;
  mAttribute_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPage.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (mAttribute_mRoutineName, mAttribute_mPage COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @baseline_intermediate_pseudo_END_ROUTINE type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ("baseline_intermediate_pseudo_END_ROUTINE",
                                                                             & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLabel.objectCompare (p->mAttribute_mLabel) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (void) :
GALGAS_baseline_5F_intermediate_5F_pseudo () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_pseudo (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (const GALGAS_lstring & inAttribute_mLabel
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL result ;
  if (inAttribute_mLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (inAttribute_mLabel COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::reader_mLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
    result = p->mAttribute_mLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::reader_mLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @baseline_intermediate_pseudo_LABEL class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (const GALGAS_lstring & in_mLabel
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (THERE),
mAttribute_mLabel (in_mLabel) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ;
}

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_pseudo_LABEL:" ;
  mAttribute_mLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (mAttribute_mLabel COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @baseline_intermediate_pseudo_LABEL type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ("baseline_intermediate_pseudo_LABEL",
                                                                    & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
  if (kOperandEqual == result) {
    result = mAttribute_mPage.objectCompare (p->mAttribute_mPage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE & inOperand) const {
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

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (void) :
GALGAS_baseline_5F_intermediate_5F_pseudo () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::constructor_default (LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * inSourcePtr) :
GALGAS_baseline_5F_intermediate_5F_pseudo (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::constructor_new (const GALGAS_uint & inAttribute_mPage
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE result ;
  if (inAttribute_mPage.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (inAttribute_mPage COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::reader_mPage (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
    result = p->mAttribute_mPage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::reader_mPage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPage ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @baseline_intermediate_pseudo_PAGE class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (const GALGAS_uint & in_mPage
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (THERE),
mAttribute_mPage (in_mPage) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ;
}

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@baseline_intermediate_pseudo_PAGE:" ;
  mAttribute_mPage.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (mAttribute_mPage COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @baseline_intermediate_pseudo_PAGE type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ("baseline_intermediate_pseudo_PAGE",
                                                                   & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE result ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE * p = (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_PAGE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_bitNumberExpression::objectCompare (const GALGAS_bitNumberExpression & inOperand) const {
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

GALGAS_bitNumberExpression::GALGAS_bitNumberExpression (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression::GALGAS_bitNumberExpression (const cPtr_bitNumberExpression * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitNumberExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @bitNumberExpression class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_bitNumberExpression::cPtr_bitNumberExpression (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @bitNumberExpression type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bitNumberExpression ("bitNumberExpression",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bitNumberExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bitNumberExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitNumberExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression GALGAS_bitNumberExpression::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_bitNumberExpression result ;
  const GALGAS_bitNumberExpression * p = (const GALGAS_bitNumberExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bitNumberExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_bitNumberLabelValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_bitNumberLabelValue * p = (const cPtr_bitNumberLabelValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_bitNumberLabelValue) ;
  if (kOperandEqual == result) {
    result = mAttribute_mBitNumberLabelValue.objectCompare (p->mAttribute_mBitNumberLabelValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitNumberIndexValue.objectCompare (p->mAttribute_mBitNumberIndexValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_bitNumberLabelValue::objectCompare (const GALGAS_bitNumberLabelValue & inOperand) const {
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

GALGAS_bitNumberLabelValue::GALGAS_bitNumberLabelValue (void) :
GALGAS_bitNumberExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberLabelValue GALGAS_bitNumberLabelValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_bitNumberLabelValue::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_luint::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberLabelValue::GALGAS_bitNumberLabelValue (const cPtr_bitNumberLabelValue * inSourcePtr) :
GALGAS_bitNumberExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitNumberLabelValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberLabelValue GALGAS_bitNumberLabelValue::constructor_new (const GALGAS_lstring & inAttribute_mBitNumberLabelValue,
                                                                        const GALGAS_luint & inAttribute_mBitNumberIndexValue
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_bitNumberLabelValue result ;
  if (inAttribute_mBitNumberLabelValue.isValid () && inAttribute_mBitNumberIndexValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_bitNumberLabelValue (inAttribute_mBitNumberLabelValue, inAttribute_mBitNumberIndexValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_bitNumberLabelValue::reader_mBitNumberLabelValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_bitNumberLabelValue * p = (const cPtr_bitNumberLabelValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLabelValue) ;
    result = p->mAttribute_mBitNumberLabelValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_bitNumberLabelValue::reader_mBitNumberLabelValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitNumberLabelValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_bitNumberLabelValue::reader_mBitNumberIndexValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_bitNumberLabelValue * p = (const cPtr_bitNumberLabelValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLabelValue) ;
    result = p->mAttribute_mBitNumberIndexValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_bitNumberLabelValue::reader_mBitNumberIndexValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitNumberIndexValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @bitNumberLabelValue class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_bitNumberLabelValue::cPtr_bitNumberLabelValue (const GALGAS_lstring & in_mBitNumberLabelValue,
                                                    const GALGAS_luint & in_mBitNumberIndexValue
                                                    COMMA_LOCATION_ARGS) :
cPtr_bitNumberExpression (THERE),
mAttribute_mBitNumberLabelValue (in_mBitNumberLabelValue),
mAttribute_mBitNumberIndexValue (in_mBitNumberIndexValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_bitNumberLabelValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLabelValue ;
}

void cPtr_bitNumberLabelValue::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@bitNumberLabelValue:" ;
  mAttribute_mBitNumberLabelValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBitNumberIndexValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_bitNumberLabelValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_bitNumberLabelValue (mAttribute_mBitNumberLabelValue, mAttribute_mBitNumberIndexValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @bitNumberLabelValue type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bitNumberLabelValue ("bitNumberLabelValue",
                                            & kTypeDescriptor_GALGAS_bitNumberExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bitNumberLabelValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLabelValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bitNumberLabelValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitNumberLabelValue (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_bitNumberLiteralExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_bitNumberLiteralExpression * p = (const cPtr_bitNumberLiteralExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_bitNumberLiteralExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_mBitNumberLiteralExpression.objectCompare (p->mAttribute_mBitNumberLiteralExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfExpression.objectCompare (p->mAttribute_mEndOfExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_bitNumberLiteralExpression::objectCompare (const GALGAS_bitNumberLiteralExpression & inOperand) const {
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

GALGAS_bitNumberLiteralExpression::GALGAS_bitNumberLiteralExpression (void) :
GALGAS_bitNumberExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberLiteralExpression::GALGAS_bitNumberLiteralExpression (const cPtr_bitNumberLiteralExpression * inSourcePtr) :
GALGAS_bitNumberExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitNumberLiteralExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberLiteralExpression GALGAS_bitNumberLiteralExpression::constructor_new (const GALGAS_immediatExpression & inAttribute_mBitNumberLiteralExpression,
                                                                                      const GALGAS_location & inAttribute_mEndOfExpression
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_bitNumberLiteralExpression result ;
  if (inAttribute_mBitNumberLiteralExpression.isValid () && inAttribute_mEndOfExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_bitNumberLiteralExpression (inAttribute_mBitNumberLiteralExpression, inAttribute_mEndOfExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_bitNumberLiteralExpression::reader_mBitNumberLiteralExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_bitNumberLiteralExpression * p = (const cPtr_bitNumberLiteralExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLiteralExpression) ;
    result = p->mAttribute_mBitNumberLiteralExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_bitNumberLiteralExpression::reader_mBitNumberLiteralExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitNumberLiteralExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_bitNumberLiteralExpression::reader_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_bitNumberLiteralExpression * p = (const cPtr_bitNumberLiteralExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLiteralExpression) ;
    result = p->mAttribute_mEndOfExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_bitNumberLiteralExpression::reader_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @bitNumberLiteralExpression class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_bitNumberLiteralExpression::cPtr_bitNumberLiteralExpression (const GALGAS_immediatExpression & in_mBitNumberLiteralExpression,
                                                                  const GALGAS_location & in_mEndOfExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_bitNumberExpression (THERE),
mAttribute_mBitNumberLiteralExpression (in_mBitNumberLiteralExpression),
mAttribute_mEndOfExpression (in_mEndOfExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_bitNumberLiteralExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLiteralExpression ;
}

void cPtr_bitNumberLiteralExpression::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@bitNumberLiteralExpression:" ;
  mAttribute_mBitNumberLiteralExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_bitNumberLiteralExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_bitNumberLiteralExpression (mAttribute_mBitNumberLiteralExpression, mAttribute_mEndOfExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @bitNumberLiteralExpression type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bitNumberLiteralExpression ("bitNumberLiteralExpression",
                                                   & kTypeDescriptor_GALGAS_bitNumberExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bitNumberLiteralExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLiteralExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bitNumberLiteralExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitNumberLiteralExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberLiteralExpression GALGAS_bitNumberLiteralExpression::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_bitNumberLiteralExpression result ;
  const GALGAS_bitNumberLiteralExpression * p = (const GALGAS_bitNumberLiteralExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bitNumberLiteralExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberLiteralExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_bitNumberLiteralValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_bitNumberLiteralValue * p = (const cPtr_bitNumberLiteralValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_bitNumberLiteralValue) ;
  if (kOperandEqual == result) {
    result = mAttribute_mBitNumberLiteralValue.objectCompare (p->mAttribute_mBitNumberLiteralValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_bitNumberLiteralValue::objectCompare (const GALGAS_bitNumberLiteralValue & inOperand) const {
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

GALGAS_bitNumberLiteralValue::GALGAS_bitNumberLiteralValue (void) :
GALGAS_bitNumberExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberLiteralValue GALGAS_bitNumberLiteralValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_bitNumberLiteralValue::constructor_new (GALGAS_luint::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberLiteralValue::GALGAS_bitNumberLiteralValue (const cPtr_bitNumberLiteralValue * inSourcePtr) :
GALGAS_bitNumberExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitNumberLiteralValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberLiteralValue GALGAS_bitNumberLiteralValue::constructor_new (const GALGAS_luint & inAttribute_mBitNumberLiteralValue
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_bitNumberLiteralValue result ;
  if (inAttribute_mBitNumberLiteralValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_bitNumberLiteralValue (inAttribute_mBitNumberLiteralValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_bitNumberLiteralValue::reader_mBitNumberLiteralValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_bitNumberLiteralValue * p = (const cPtr_bitNumberLiteralValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLiteralValue) ;
    result = p->mAttribute_mBitNumberLiteralValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_bitNumberLiteralValue::reader_mBitNumberLiteralValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitNumberLiteralValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @bitNumberLiteralValue class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_bitNumberLiteralValue::cPtr_bitNumberLiteralValue (const GALGAS_luint & in_mBitNumberLiteralValue
                                                        COMMA_LOCATION_ARGS) :
cPtr_bitNumberExpression (THERE),
mAttribute_mBitNumberLiteralValue (in_mBitNumberLiteralValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_bitNumberLiteralValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLiteralValue ;
}

void cPtr_bitNumberLiteralValue::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@bitNumberLiteralValue:" ;
  mAttribute_mBitNumberLiteralValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_bitNumberLiteralValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_bitNumberLiteralValue (mAttribute_mBitNumberLiteralValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @bitNumberLiteralValue type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bitNumberLiteralValue ("bitNumberLiteralValue",
                                              & kTypeDescriptor_GALGAS_bitNumberExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bitNumberLiteralValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLiteralValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bitNumberLiteralValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitNumberLiteralValue (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberLiteralValue GALGAS_bitNumberLiteralValue::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_bitNumberLiteralValue result ;
  const GALGAS_bitNumberLiteralValue * p = (const GALGAS_bitNumberLiteralValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bitNumberLiteralValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberLiteralValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_declarationInRam::objectCompare (const GALGAS_declarationInRam & inOperand) const {
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

GALGAS_declarationInRam::GALGAS_declarationInRam (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationInRam::GALGAS_declarationInRam (const cPtr_declarationInRam * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_declarationInRam) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @declarationInRam class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_declarationInRam::cPtr_declarationInRam (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @declarationInRam type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declarationInRam ("declarationInRam",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_declarationInRam::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationInRam ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_declarationInRam::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationInRam (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationInRam GALGAS_declarationInRam::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_declarationInRam result ;
  const GALGAS_declarationInRam * p = (const GALGAS_declarationInRam *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declarationInRam *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationInRam", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_byteDeclarationInRam::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_byteDeclarationInRam * p = (const cPtr_byteDeclarationInRam *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
  if (kOperandEqual == result) {
    result = mAttribute_mName.objectCompare (p->mAttribute_mName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSize.objectCompare (p->mAttribute_mSize) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitSliceTable.objectCompare (p->mAttribute_mBitSliceTable) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitDefinitionString.objectCompare (p->mAttribute_mBitDefinitionString) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_byteDeclarationInRam::objectCompare (const GALGAS_byteDeclarationInRam & inOperand) const {
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

GALGAS_byteDeclarationInRam::GALGAS_byteDeclarationInRam (void) :
GALGAS_declarationInRam () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_byteDeclarationInRam GALGAS_byteDeclarationInRam::constructor_default (LOCATION_ARGS) {
  return GALGAS_byteDeclarationInRam::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_luint::constructor_default (HERE),
                                                       GALGAS_bitSliceTable::constructor_emptyMap (HERE),
                                                       GALGAS_string::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_byteDeclarationInRam::GALGAS_byteDeclarationInRam (const cPtr_byteDeclarationInRam * inSourcePtr) :
GALGAS_declarationInRam (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_byteDeclarationInRam) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_byteDeclarationInRam GALGAS_byteDeclarationInRam::constructor_new (const GALGAS_lstring & inAttribute_mName,
                                                                          const GALGAS_luint & inAttribute_mSize,
                                                                          const GALGAS_bitSliceTable & inAttribute_mBitSliceTable,
                                                                          const GALGAS_string & inAttribute_mBitDefinitionString
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_byteDeclarationInRam result ;
  if (inAttribute_mName.isValid () && inAttribute_mSize.isValid () && inAttribute_mBitSliceTable.isValid () && inAttribute_mBitDefinitionString.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_byteDeclarationInRam (inAttribute_mName, inAttribute_mSize, inAttribute_mBitSliceTable, inAttribute_mBitDefinitionString COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_byteDeclarationInRam::reader_mName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_byteDeclarationInRam * p = (const cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    result = p->mAttribute_mName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_byteDeclarationInRam::reader_mName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_byteDeclarationInRam::reader_mSize (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_byteDeclarationInRam * p = (const cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    result = p->mAttribute_mSize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_byteDeclarationInRam::reader_mSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitSliceTable GALGAS_byteDeclarationInRam::reader_mBitSliceTable (UNUSED_LOCATION_ARGS) const {
  GALGAS_bitSliceTable result ;
  if (NULL != mObjectPtr) {
    const cPtr_byteDeclarationInRam * p = (const cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    result = p->mAttribute_mBitSliceTable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitSliceTable cPtr_byteDeclarationInRam::reader_mBitSliceTable (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitSliceTable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_byteDeclarationInRam::reader_mBitDefinitionString (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_byteDeclarationInRam * p = (const cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    result = p->mAttribute_mBitDefinitionString ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_byteDeclarationInRam::reader_mBitDefinitionString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitDefinitionString ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @byteDeclarationInRam class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_byteDeclarationInRam::cPtr_byteDeclarationInRam (const GALGAS_lstring & in_mName,
                                                      const GALGAS_luint & in_mSize,
                                                      const GALGAS_bitSliceTable & in_mBitSliceTable,
                                                      const GALGAS_string & in_mBitDefinitionString
                                                      COMMA_LOCATION_ARGS) :
cPtr_declarationInRam (THERE),
mAttribute_mName (in_mName),
mAttribute_mSize (in_mSize),
mAttribute_mBitSliceTable (in_mBitSliceTable),
mAttribute_mBitDefinitionString (in_mBitDefinitionString) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_byteDeclarationInRam::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_byteDeclarationInRam ;
}

void cPtr_byteDeclarationInRam::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@byteDeclarationInRam:" ;
  mAttribute_mName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSize.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBitSliceTable.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBitDefinitionString.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_byteDeclarationInRam::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_byteDeclarationInRam (mAttribute_mName, mAttribute_mSize, mAttribute_mBitSliceTable, mAttribute_mBitDefinitionString COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @byteDeclarationInRam type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_byteDeclarationInRam ("byteDeclarationInRam",
                                             & kTypeDescriptor_GALGAS_declarationInRam) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_byteDeclarationInRam::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_byteDeclarationInRam ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_byteDeclarationInRam::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_byteDeclarationInRam (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_immediatExpression::objectCompare (const GALGAS_immediatExpression & inOperand) const {
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

GALGAS_immediatExpression::GALGAS_immediatExpression (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression::GALGAS_immediatExpression (const cPtr_immediatExpression * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @immediatExpression class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_immediatExpression::cPtr_immediatExpression (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @immediatExpression type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatExpression ("immediatExpression",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_immediatExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_immediatExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_immediatExpression::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_immediatExpression result ;
  const GALGAS_immediatExpression * p = (const GALGAS_immediatExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_immediatExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_immediatAdd::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatAdd * p = (const cPtr_immediatAdd *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatAdd) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_immediatAdd::objectCompare (const GALGAS_immediatAdd & inOperand) const {
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

GALGAS_immediatAdd::GALGAS_immediatAdd (void) :
GALGAS_immediatExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatAdd::GALGAS_immediatAdd (const cPtr_immediatAdd * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatAdd) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatAdd GALGAS_immediatAdd::constructor_new (const GALGAS_immediatExpression & inAttribute_mLeftExpression,
                                                        const GALGAS_immediatExpression & inAttribute_mRightExpression
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_immediatAdd result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatAdd (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_immediatAdd::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_immediatAdd * p = (const cPtr_immediatAdd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatAdd) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_immediatAdd::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_immediatAdd::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_immediatAdd * p = (const cPtr_immediatAdd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatAdd) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_immediatAdd::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @immediatAdd class                                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_immediatAdd::cPtr_immediatAdd (const GALGAS_immediatExpression & in_mLeftExpression,
                                    const GALGAS_immediatExpression & in_mRightExpression
                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_immediatAdd::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatAdd ;
}

void cPtr_immediatAdd::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "[@immediatAdd:" ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_immediatAdd::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_immediatAdd (mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @immediatAdd type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatAdd ("immediatAdd",
                                    & kTypeDescriptor_GALGAS_immediatExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_immediatAdd::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatAdd ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_immediatAdd::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatAdd (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatAdd GALGAS_immediatAdd::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_immediatAdd result ;
  const GALGAS_immediatAdd * p = (const GALGAS_immediatAdd *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_immediatAdd *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatAdd", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_immediatAnd::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatAnd * p = (const cPtr_immediatAnd *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatAnd) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_immediatAnd::objectCompare (const GALGAS_immediatAnd & inOperand) const {
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

GALGAS_immediatAnd::GALGAS_immediatAnd (void) :
GALGAS_immediatExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatAnd::GALGAS_immediatAnd (const cPtr_immediatAnd * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatAnd) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatAnd GALGAS_immediatAnd::constructor_new (const GALGAS_immediatExpression & inAttribute_mLeftExpression,
                                                        const GALGAS_immediatExpression & inAttribute_mRightExpression
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_immediatAnd result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatAnd (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_immediatAnd::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_immediatAnd * p = (const cPtr_immediatAnd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatAnd) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_immediatAnd::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_immediatAnd::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_immediatAnd * p = (const cPtr_immediatAnd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatAnd) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_immediatAnd::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @immediatAnd class                                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_immediatAnd::cPtr_immediatAnd (const GALGAS_immediatExpression & in_mLeftExpression,
                                    const GALGAS_immediatExpression & in_mRightExpression
                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_immediatAnd::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatAnd ;
}

void cPtr_immediatAnd::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "[@immediatAnd:" ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_immediatAnd::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_immediatAnd (mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @immediatAnd type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatAnd ("immediatAnd",
                                    & kTypeDescriptor_GALGAS_immediatExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_immediatAnd::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatAnd ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_immediatAnd::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatAnd (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatAnd GALGAS_immediatAnd::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_immediatAnd result ;
  const GALGAS_immediatAnd * p = (const GALGAS_immediatAnd *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_immediatAnd *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatAnd", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_immediatComplement::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatComplement * p = (const cPtr_immediatComplement *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatComplement) ;
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_immediatComplement::objectCompare (const GALGAS_immediatComplement & inOperand) const {
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

GALGAS_immediatComplement::GALGAS_immediatComplement (void) :
GALGAS_immediatExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatComplement::GALGAS_immediatComplement (const cPtr_immediatComplement * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatComplement) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatComplement GALGAS_immediatComplement::constructor_new (const GALGAS_immediatExpression & inAttribute_mExpression
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_immediatComplement result ;
  if (inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatComplement (inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_immediatComplement::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_immediatComplement * p = (const cPtr_immediatComplement *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatComplement) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_immediatComplement::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @immediatComplement class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_immediatComplement::cPtr_immediatComplement (const GALGAS_immediatExpression & in_mExpression
                                                  COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_immediatComplement::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatComplement ;
}

void cPtr_immediatComplement::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@immediatComplement:" ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_immediatComplement::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_immediatComplement (mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @immediatComplement type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatComplement ("immediatComplement",
                                           & kTypeDescriptor_GALGAS_immediatExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_immediatComplement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatComplement ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_immediatComplement::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatComplement (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatComplement GALGAS_immediatComplement::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_immediatComplement result ;
  const GALGAS_immediatComplement * p = (const GALGAS_immediatComplement *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_immediatComplement *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatComplement", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_immediatDiv::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatDiv * p = (const cPtr_immediatDiv *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatDiv) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_immediatDiv::objectCompare (const GALGAS_immediatDiv & inOperand) const {
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

GALGAS_immediatDiv::GALGAS_immediatDiv (void) :
GALGAS_immediatExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatDiv::GALGAS_immediatDiv (const cPtr_immediatDiv * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatDiv) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatDiv GALGAS_immediatDiv::constructor_new (const GALGAS_immediatExpression & inAttribute_mLeftExpression,
                                                        const GALGAS_immediatExpression & inAttribute_mRightExpression
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_immediatDiv result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatDiv (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_immediatDiv::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_immediatDiv * p = (const cPtr_immediatDiv *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatDiv) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_immediatDiv::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_immediatDiv::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_immediatDiv * p = (const cPtr_immediatDiv *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatDiv) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_immediatDiv::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @immediatDiv class                                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_immediatDiv::cPtr_immediatDiv (const GALGAS_immediatExpression & in_mLeftExpression,
                                    const GALGAS_immediatExpression & in_mRightExpression
                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_immediatDiv::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatDiv ;
}

void cPtr_immediatDiv::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "[@immediatDiv:" ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_immediatDiv::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_immediatDiv (mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @immediatDiv type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatDiv ("immediatDiv",
                                    & kTypeDescriptor_GALGAS_immediatExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_immediatDiv::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatDiv ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_immediatDiv::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatDiv (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatDiv GALGAS_immediatDiv::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_immediatDiv result ;
  const GALGAS_immediatDiv * p = (const GALGAS_immediatDiv *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_immediatDiv *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatDiv", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_immediatEqualTest::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatEqualTest * p = (const cPtr_immediatEqualTest *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatEqualTest) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_immediatEqualTest::objectCompare (const GALGAS_immediatEqualTest & inOperand) const {
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

GALGAS_immediatEqualTest::GALGAS_immediatEqualTest (void) :
GALGAS_immediatExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatEqualTest::GALGAS_immediatEqualTest (const cPtr_immediatEqualTest * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatEqualTest) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatEqualTest GALGAS_immediatEqualTest::constructor_new (const GALGAS_immediatExpression & inAttribute_mLeftExpression,
                                                                    const GALGAS_immediatExpression & inAttribute_mRightExpression
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_immediatEqualTest result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatEqualTest (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_immediatEqualTest::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_immediatEqualTest * p = (const cPtr_immediatEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatEqualTest) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_immediatEqualTest::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_immediatEqualTest::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_immediatEqualTest * p = (const cPtr_immediatEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatEqualTest) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_immediatEqualTest::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @immediatEqualTest class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_immediatEqualTest::cPtr_immediatEqualTest (const GALGAS_immediatExpression & in_mLeftExpression,
                                                const GALGAS_immediatExpression & in_mRightExpression
                                                COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_immediatEqualTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatEqualTest ;
}

void cPtr_immediatEqualTest::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@immediatEqualTest:" ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_immediatEqualTest::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_immediatEqualTest (mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @immediatEqualTest type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatEqualTest ("immediatEqualTest",
                                          & kTypeDescriptor_GALGAS_immediatExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_immediatEqualTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatEqualTest ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_immediatEqualTest::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatEqualTest (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatEqualTest GALGAS_immediatEqualTest::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_immediatEqualTest result ;
  const GALGAS_immediatEqualTest * p = (const GALGAS_immediatEqualTest *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_immediatEqualTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatEqualTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_immediatGreaterOrEqualTest::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatGreaterOrEqualTest * p = (const cPtr_immediatGreaterOrEqualTest *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatGreaterOrEqualTest) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_immediatGreaterOrEqualTest::objectCompare (const GALGAS_immediatGreaterOrEqualTest & inOperand) const {
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

GALGAS_immediatGreaterOrEqualTest::GALGAS_immediatGreaterOrEqualTest (void) :
GALGAS_immediatExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatGreaterOrEqualTest::GALGAS_immediatGreaterOrEqualTest (const cPtr_immediatGreaterOrEqualTest * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatGreaterOrEqualTest) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatGreaterOrEqualTest GALGAS_immediatGreaterOrEqualTest::constructor_new (const GALGAS_immediatExpression & inAttribute_mLeftExpression,
                                                                                      const GALGAS_immediatExpression & inAttribute_mRightExpression
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_immediatGreaterOrEqualTest result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatGreaterOrEqualTest (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_immediatGreaterOrEqualTest::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_immediatGreaterOrEqualTest * p = (const cPtr_immediatGreaterOrEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatGreaterOrEqualTest) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_immediatGreaterOrEqualTest::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_immediatGreaterOrEqualTest::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_immediatGreaterOrEqualTest * p = (const cPtr_immediatGreaterOrEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatGreaterOrEqualTest) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_immediatGreaterOrEqualTest::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @immediatGreaterOrEqualTest class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_immediatGreaterOrEqualTest::cPtr_immediatGreaterOrEqualTest (const GALGAS_immediatExpression & in_mLeftExpression,
                                                                  const GALGAS_immediatExpression & in_mRightExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_immediatGreaterOrEqualTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest ;
}

void cPtr_immediatGreaterOrEqualTest::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@immediatGreaterOrEqualTest:" ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_immediatGreaterOrEqualTest::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_immediatGreaterOrEqualTest (mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @immediatGreaterOrEqualTest type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest ("immediatGreaterOrEqualTest",
                                                   & kTypeDescriptor_GALGAS_immediatExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_immediatGreaterOrEqualTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_immediatGreaterOrEqualTest::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatGreaterOrEqualTest (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatGreaterOrEqualTest GALGAS_immediatGreaterOrEqualTest::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_immediatGreaterOrEqualTest result ;
  const GALGAS_immediatGreaterOrEqualTest * p = (const GALGAS_immediatGreaterOrEqualTest *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_immediatGreaterOrEqualTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatGreaterOrEqualTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_immediatGreaterTest::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatGreaterTest * p = (const cPtr_immediatGreaterTest *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatGreaterTest) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_immediatGreaterTest::objectCompare (const GALGAS_immediatGreaterTest & inOperand) const {
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

GALGAS_immediatGreaterTest::GALGAS_immediatGreaterTest (void) :
GALGAS_immediatExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatGreaterTest::GALGAS_immediatGreaterTest (const cPtr_immediatGreaterTest * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatGreaterTest) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatGreaterTest GALGAS_immediatGreaterTest::constructor_new (const GALGAS_immediatExpression & inAttribute_mLeftExpression,
                                                                        const GALGAS_immediatExpression & inAttribute_mRightExpression
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_immediatGreaterTest result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatGreaterTest (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_immediatGreaterTest::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_immediatGreaterTest * p = (const cPtr_immediatGreaterTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatGreaterTest) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_immediatGreaterTest::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_immediatGreaterTest::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_immediatGreaterTest * p = (const cPtr_immediatGreaterTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatGreaterTest) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_immediatGreaterTest::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @immediatGreaterTest class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_immediatGreaterTest::cPtr_immediatGreaterTest (const GALGAS_immediatExpression & in_mLeftExpression,
                                                    const GALGAS_immediatExpression & in_mRightExpression
                                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_immediatGreaterTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatGreaterTest ;
}

void cPtr_immediatGreaterTest::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@immediatGreaterTest:" ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_immediatGreaterTest::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_immediatGreaterTest (mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @immediatGreaterTest type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatGreaterTest ("immediatGreaterTest",
                                            & kTypeDescriptor_GALGAS_immediatExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_immediatGreaterTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatGreaterTest ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_immediatGreaterTest::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatGreaterTest (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatGreaterTest GALGAS_immediatGreaterTest::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_immediatGreaterTest result ;
  const GALGAS_immediatGreaterTest * p = (const GALGAS_immediatGreaterTest *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_immediatGreaterTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatGreaterTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_immediatInteger::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatInteger * p = (const cPtr_immediatInteger *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatInteger) ;
  if (kOperandEqual == result) {
    result = mAttribute_mValue.objectCompare (p->mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_immediatInteger::objectCompare (const GALGAS_immediatInteger & inOperand) const {
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

GALGAS_immediatInteger::GALGAS_immediatInteger (void) :
GALGAS_immediatExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatInteger GALGAS_immediatInteger::constructor_default (LOCATION_ARGS) {
  return GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_default (HERE)
                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatInteger::GALGAS_immediatInteger (const cPtr_immediatInteger * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatInteger) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatInteger GALGAS_immediatInteger::constructor_new (const GALGAS_luint & inAttribute_mValue
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_immediatInteger result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatInteger (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_immediatInteger::reader_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_immediatInteger * p = (const cPtr_immediatInteger *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatInteger) ;
    result = p->mAttribute_mValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_immediatInteger::reader_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @immediatInteger class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_immediatInteger::cPtr_immediatInteger (const GALGAS_luint & in_mValue
                                            COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mAttribute_mValue (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_immediatInteger::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatInteger ;
}

void cPtr_immediatInteger::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@immediatInteger:" ;
  mAttribute_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_immediatInteger::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_immediatInteger (mAttribute_mValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @immediatInteger type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatInteger ("immediatInteger",
                                        & kTypeDescriptor_GALGAS_immediatExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_immediatInteger::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatInteger ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_immediatInteger::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatInteger (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_immediatLeftShift::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatLeftShift * p = (const cPtr_immediatLeftShift *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatLeftShift) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_immediatLeftShift::objectCompare (const GALGAS_immediatLeftShift & inOperand) const {
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

GALGAS_immediatLeftShift::GALGAS_immediatLeftShift (void) :
GALGAS_immediatExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatLeftShift::GALGAS_immediatLeftShift (const cPtr_immediatLeftShift * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatLeftShift) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatLeftShift GALGAS_immediatLeftShift::constructor_new (const GALGAS_immediatExpression & inAttribute_mLeftExpression,
                                                                    const GALGAS_immediatExpression & inAttribute_mRightExpression
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_immediatLeftShift result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatLeftShift (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_immediatLeftShift::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_immediatLeftShift * p = (const cPtr_immediatLeftShift *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLeftShift) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_immediatLeftShift::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_immediatLeftShift::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_immediatLeftShift * p = (const cPtr_immediatLeftShift *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLeftShift) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_immediatLeftShift::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @immediatLeftShift class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_immediatLeftShift::cPtr_immediatLeftShift (const GALGAS_immediatExpression & in_mLeftExpression,
                                                const GALGAS_immediatExpression & in_mRightExpression
                                                COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_immediatLeftShift::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLeftShift ;
}

void cPtr_immediatLeftShift::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@immediatLeftShift:" ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_immediatLeftShift::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_immediatLeftShift (mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @immediatLeftShift type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatLeftShift ("immediatLeftShift",
                                          & kTypeDescriptor_GALGAS_immediatExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_immediatLeftShift::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLeftShift ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_immediatLeftShift::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatLeftShift (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatLeftShift GALGAS_immediatLeftShift::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_immediatLeftShift result ;
  const GALGAS_immediatLeftShift * p = (const GALGAS_immediatLeftShift *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_immediatLeftShift *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatLeftShift", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

