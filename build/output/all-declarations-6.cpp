#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList_2E_element::GGS_pic_31__38_InstructionList_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList_2E_element::GGS_pic_31__38_InstructionList_2E_element (const GGS_pic_31__38_InstructionList_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList_2E_element & GGS_pic_31__38_InstructionList_2E_element::operator = (const GGS_pic_31__38_InstructionList_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_pic_31__38_InstructionList_2E_element GGS_pic_31__38_InstructionList_2E_element::init_21_ (const GGS_pic_31__38_PiccoloInstruction & in_mInstruction,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InstructionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList_2E_element::GGS_pic_31__38_InstructionList_2E_element (const GGS_pic_31__38_PiccoloInstruction & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38_InstructionList_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InstructionList_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InstructionList_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18InstructionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18InstructionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_InstructionList_2E_element ("pic18InstructionList.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_InstructionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_InstructionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_InstructionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_InstructionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList_2E_element GGS_pic_31__38_InstructionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionList_2E_element result ;
  const GGS_pic_31__38_InstructionList_2E_element * p = (const GGS_pic_31__38_InstructionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_InstructionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18InstructionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList_2E_element::GGS_pic_31__38_DoWhilePartList_2E_element (void) :
mProperty_mCondition (),
mProperty_mInstructionList (),
mProperty_mEndOfPartLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList_2E_element::GGS_pic_31__38_DoWhilePartList_2E_element (const GGS_pic_31__38_DoWhilePartList_2E_element & inSource) :
mProperty_mCondition (inSource.mProperty_mCondition),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mEndOfPartLocation (inSource.mProperty_mEndOfPartLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList_2E_element & GGS_pic_31__38_DoWhilePartList_2E_element::operator = (const GGS_pic_31__38_DoWhilePartList_2E_element & inSource) {
  mProperty_mCondition = inSource.mProperty_mCondition ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mEndOfPartLocation = inSource.mProperty_mEndOfPartLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList_2E_element GGS_pic_31__38_DoWhilePartList_2E_element::init_21__21__21_ (const GGS_pic_31__38_ConditionExpression & in_mCondition,
                                                                                                       const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                       const GGS_location & in_mEndOfPartLocation,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_DoWhilePartList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mCondition = in_mCondition ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfPartLocation = in_mEndOfPartLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList_2E_element::GGS_pic_31__38_DoWhilePartList_2E_element (const GGS_pic_31__38_ConditionExpression & inOperand0,
                                                                                      const GGS_pic_31__38_InstructionList & inOperand1,
                                                                                      const GGS_location & inOperand2) :
mProperty_mCondition (inOperand0),
mProperty_mInstructionList (inOperand1),
mProperty_mEndOfPartLocation (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38_DoWhilePartList_2E_element::isValid (void) const {
  return mProperty_mCondition.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfPartLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList_2E_element::drop (void) {
  mProperty_mCondition.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfPartLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18DoWhilePartList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mCondition.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfPartLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18DoWhilePartList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList_2E_element ("pic18DoWhilePartList.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_DoWhilePartList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_DoWhilePartList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_DoWhilePartList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList_2E_element GGS_pic_31__38_DoWhilePartList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_DoWhilePartList_2E_element result ;
  const GGS_pic_31__38_DoWhilePartList_2E_element * p = (const GGS_pic_31__38_DoWhilePartList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_DoWhilePartList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18DoWhilePartList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList_2E_element::GGS_checkpicList_2E_element (void) :
mProperty_mErrorLocation (),
mProperty_mValueList () {
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList_2E_element::GGS_checkpicList_2E_element (const GGS_checkpicList_2E_element & inSource) :
mProperty_mErrorLocation (inSource.mProperty_mErrorLocation),
mProperty_mValueList (inSource.mProperty_mValueList) {
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList_2E_element & GGS_checkpicList_2E_element::operator = (const GGS_checkpicList_2E_element & inSource) {
  mProperty_mErrorLocation = inSource.mProperty_mErrorLocation ;
  mProperty_mValueList = inSource.mProperty_mValueList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_checkpicList_2E_element GGS_checkpicList_2E_element::init_21__21_ (const GGS_location & in_mErrorLocation,
                                                                       const GGS_lstringlist & in_mValueList,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_checkpicList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mErrorLocation = in_mErrorLocation ;
  result.mProperty_mValueList = in_mValueList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList_2E_element::GGS_checkpicList_2E_element (const GGS_location & inOperand0,
                                                          const GGS_lstringlist & inOperand1) :
mProperty_mErrorLocation (inOperand0),
mProperty_mValueList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_checkpicList_2E_element::isValid (void) const {
  return mProperty_mErrorLocation.isValid () && mProperty_mValueList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList_2E_element::drop (void) {
  mProperty_mErrorLocation.drop () ;
  mProperty_mValueList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList_2E_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @checkpicList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValueList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @checkpicList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_checkpicList_2E_element ("checkpicList.element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_checkpicList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkpicList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_checkpicList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_checkpicList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList_2E_element GGS_checkpicList_2E_element::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_checkpicList_2E_element result ;
  const GGS_checkpicList_2E_element * p = (const GGS_checkpicList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_checkpicList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkpicList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_piccoloDeviceModel::GGS_piccoloDeviceModel (void) :
mProperty_mDeviceName (),
mProperty_mProcessorType (),
mProperty_mRomSize (),
mProperty_mBankCount (),
mProperty_mRegisterTable (),
mProperty_mRamBankTable (),
mProperty_mEepromSize (),
mProperty_mEepromAddress (),
mProperty_mConfigRegisterMap (),
mProperty_mSharedBankName () {
}

//--------------------------------------------------------------------------------------------------

GGS_piccoloDeviceModel::GGS_piccoloDeviceModel (const GGS_piccoloDeviceModel & inSource) :
mProperty_mDeviceName (inSource.mProperty_mDeviceName),
mProperty_mProcessorType (inSource.mProperty_mProcessorType),
mProperty_mRomSize (inSource.mProperty_mRomSize),
mProperty_mBankCount (inSource.mProperty_mBankCount),
mProperty_mRegisterTable (inSource.mProperty_mRegisterTable),
mProperty_mRamBankTable (inSource.mProperty_mRamBankTable),
mProperty_mEepromSize (inSource.mProperty_mEepromSize),
mProperty_mEepromAddress (inSource.mProperty_mEepromAddress),
mProperty_mConfigRegisterMap (inSource.mProperty_mConfigRegisterMap),
mProperty_mSharedBankName (inSource.mProperty_mSharedBankName) {
}

//--------------------------------------------------------------------------------------------------

GGS_piccoloDeviceModel & GGS_piccoloDeviceModel::operator = (const GGS_piccoloDeviceModel & inSource) {
  mProperty_mDeviceName = inSource.mProperty_mDeviceName ;
  mProperty_mProcessorType = inSource.mProperty_mProcessorType ;
  mProperty_mRomSize = inSource.mProperty_mRomSize ;
  mProperty_mBankCount = inSource.mProperty_mBankCount ;
  mProperty_mRegisterTable = inSource.mProperty_mRegisterTable ;
  mProperty_mRamBankTable = inSource.mProperty_mRamBankTable ;
  mProperty_mEepromSize = inSource.mProperty_mEepromSize ;
  mProperty_mEepromAddress = inSource.mProperty_mEepromAddress ;
  mProperty_mConfigRegisterMap = inSource.mProperty_mConfigRegisterMap ;
  mProperty_mSharedBankName = inSource.mProperty_mSharedBankName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_piccoloDeviceModel GGS_piccoloDeviceModel::init_21__21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mDeviceName,
                                                                                             const GGS_processorType & in_mProcessorType,
                                                                                             const GGS_luint & in_mRomSize,
                                                                                             const GGS_luint & in_mBankCount,
                                                                                             const GGS_registerTable & in_mRegisterTable,
                                                                                             const GGS_ramBankTable & in_mRamBankTable,
                                                                                             const GGS_uint & in_mEepromSize,
                                                                                             const GGS_uint & in_mEepromAddress,
                                                                                             const GGS_configRegisterMap & in_mConfigRegisterMap,
                                                                                             const GGS_string & in_mSharedBankName,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_piccoloDeviceModel result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDeviceName = in_mDeviceName ;
  result.mProperty_mProcessorType = in_mProcessorType ;
  result.mProperty_mRomSize = in_mRomSize ;
  result.mProperty_mBankCount = in_mBankCount ;
  result.mProperty_mRegisterTable = in_mRegisterTable ;
  result.mProperty_mRamBankTable = in_mRamBankTable ;
  result.mProperty_mEepromSize = in_mEepromSize ;
  result.mProperty_mEepromAddress = in_mEepromAddress ;
  result.mProperty_mConfigRegisterMap = in_mConfigRegisterMap ;
  result.mProperty_mSharedBankName = in_mSharedBankName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_piccoloDeviceModel::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_piccoloDeviceModel::GGS_piccoloDeviceModel (const GGS_lstring & inOperand0,
                                                const GGS_processorType & inOperand1,
                                                const GGS_luint & inOperand2,
                                                const GGS_luint & inOperand3,
                                                const GGS_registerTable & inOperand4,
                                                const GGS_ramBankTable & inOperand5,
                                                const GGS_uint & inOperand6,
                                                const GGS_uint & inOperand7,
                                                const GGS_configRegisterMap & inOperand8,
                                                const GGS_string & inOperand9) :
mProperty_mDeviceName (inOperand0),
mProperty_mProcessorType (inOperand1),
mProperty_mRomSize (inOperand2),
mProperty_mBankCount (inOperand3),
mProperty_mRegisterTable (inOperand4),
mProperty_mRamBankTable (inOperand5),
mProperty_mEepromSize (inOperand6),
mProperty_mEepromAddress (inOperand7),
mProperty_mConfigRegisterMap (inOperand8),
mProperty_mSharedBankName (inOperand9) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_piccoloDeviceModel::isValid (void) const {
  return mProperty_mDeviceName.isValid () && mProperty_mProcessorType.isValid () && mProperty_mRomSize.isValid () && mProperty_mBankCount.isValid () && mProperty_mRegisterTable.isValid () && mProperty_mRamBankTable.isValid () && mProperty_mEepromSize.isValid () && mProperty_mEepromAddress.isValid () && mProperty_mConfigRegisterMap.isValid () && mProperty_mSharedBankName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_piccoloDeviceModel::drop (void) {
  mProperty_mDeviceName.drop () ;
  mProperty_mProcessorType.drop () ;
  mProperty_mRomSize.drop () ;
  mProperty_mBankCount.drop () ;
  mProperty_mRegisterTable.drop () ;
  mProperty_mRamBankTable.drop () ;
  mProperty_mEepromSize.drop () ;
  mProperty_mEepromAddress.drop () ;
  mProperty_mConfigRegisterMap.drop () ;
  mProperty_mSharedBankName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_piccoloDeviceModel::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @piccoloDeviceModel:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDeviceName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProcessorType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRomSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBankCount.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterTable.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRamBankTable.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEepromSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEepromAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mConfigRegisterMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSharedBankName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @piccoloDeviceModel generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_piccoloDeviceModel ("piccoloDeviceModel",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_piccoloDeviceModel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_piccoloDeviceModel ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_piccoloDeviceModel::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_piccoloDeviceModel (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_piccoloDeviceModel GGS_piccoloDeviceModel::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_piccoloDeviceModel result ;
  const GGS_piccoloDeviceModel * p = (const GGS_piccoloDeviceModel *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_piccoloDeviceModel *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("piccoloDeviceModel", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@baseline_assembly_instruction length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint callExtensionGetter_length (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  GGS_uint result ;
  if (nullptr != inObject) {
    result = inObject->getter_length (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@midrange_intermediate_instruction setCurrentAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction::method_setCurrentAddress (GGS_uint & ioArgument_ioCurrentAddress,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction temp_0 = this ;
  ioArgument_ioCurrentAddress = ioArgument_ioCurrentAddress.add_operation (callExtensionGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_instruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_instruction_set_current_address.galgas3", 6)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_instruction_set_current_address.galgas3", 6)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_setCurrentAddress (cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                            GGS_uint & io_ioCurrentAddress,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    inObject->method_setCurrentAddress (io_ioCurrentAddress, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_AbstractBlockTerminator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_AbstractBlockTerminator::objectCompare (const GGS_ipic_31__38_AbstractBlockTerminator & inOperand) const {
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

GGS_ipic_31__38_AbstractBlockTerminator::GGS_ipic_31__38_AbstractBlockTerminator (void) :
AC_GALGAS_reference_class () {
}


void cPtr_ipic_31__38_AbstractBlockTerminator::
ipic_31__38_AbstractBlockTerminator_init_21_ (const GGS_location & in_mInstructionLocation,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractBlockTerminator::GGS_ipic_31__38_AbstractBlockTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_AbstractBlockTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_ipic_31__38_AbstractBlockTerminator::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ipic_31__38_AbstractBlockTerminator * p = (cPtr_ipic_31__38_AbstractBlockTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18AbstractBlockTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_AbstractBlockTerminator::cPtr_ipic_31__38_AbstractBlockTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_AbstractBlockTerminator::cPtr_ipic_31__38_AbstractBlockTerminator (const GGS_location & in_mInstructionLocation,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_AbstractBlockTerminator::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18AbstractBlockTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator ("ipic18AbstractBlockTerminator",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_AbstractBlockTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_AbstractBlockTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_AbstractBlockTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractBlockTerminator GGS_ipic_31__38_AbstractBlockTerminator::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_AbstractBlockTerminator result ;
  const GGS_ipic_31__38_AbstractBlockTerminator * p = (const GGS_ipic_31__38_AbstractBlockTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_AbstractBlockTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18AbstractBlockTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_SequentialInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_SequentialInstruction::objectCompare (const GGS_ipic_31__38_SequentialInstruction & inOperand) const {
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

GGS_ipic_31__38_SequentialInstruction::GGS_ipic_31__38_SequentialInstruction (void) :
AC_GALGAS_reference_class () {
}


void cPtr_ipic_31__38_SequentialInstruction::
ipic_31__38_SequentialInstruction_init_21_ (const GGS_location & in_mInstructionLocation,
                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction::GGS_ipic_31__38_SequentialInstruction (const cPtr_ipic_31__38_SequentialInstruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_SequentialInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_ipic_31__38_SequentialInstruction::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ipic_31__38_SequentialInstruction * p = (cPtr_ipic_31__38_SequentialInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_SequentialInstruction) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18SequentialInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_SequentialInstruction::cPtr_ipic_31__38_SequentialInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_SequentialInstruction::cPtr_ipic_31__38_SequentialInstruction (const GGS_location & in_mInstructionLocation,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18SequentialInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction ("ipic18SequentialInstruction",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_SequentialInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_SequentialInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_SequentialInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction GGS_ipic_31__38_SequentialInstruction::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_SequentialInstruction result ;
  const GGS_ipic_31__38_SequentialInstruction * p = (const GGS_ipic_31__38_SequentialInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_SequentialInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18SequentialInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
                                                   const GGS_blockDurationMap constin_inExploredBlockMap,
                                                   const GGS_string constin_inNextLabel,
                                                   GGS_uint & out_outMin,
                                                   GGS_uint & out_outMax,
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
// @ipic_31__38_SingleInstructionTerminator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_SingleInstructionTerminator::objectCompare (const GGS_ipic_31__38_SingleInstructionTerminator & inOperand) const {
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

GGS_ipic_31__38_SingleInstructionTerminator::GGS_ipic_31__38_SingleInstructionTerminator (void) :
GGS_ipic_31__38_AbstractBlockTerminator () {
}


void cPtr_ipic_31__38_SingleInstructionTerminator::
ipic_31__38_SingleInstructionTerminator_init_21_ (const GGS_location & in_mInstructionLocation,
                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator::GGS_ipic_31__38_SingleInstructionTerminator (const cPtr_ipic_31__38_SingleInstructionTerminator * inSourcePtr) :
GGS_ipic_31__38_AbstractBlockTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_SingleInstructionTerminator) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18SingleInstructionTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_SingleInstructionTerminator::cPtr_ipic_31__38_SingleInstructionTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_SingleInstructionTerminator::cPtr_ipic_31__38_SingleInstructionTerminator (const GGS_location & in_mInstructionLocation,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_SingleInstructionTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_AbstractBlockTerminator::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18SingleInstructionTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator ("ipic18SingleInstructionTerminator",
                                                                                            & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_SingleInstructionTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_SingleInstructionTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_SingleInstructionTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator GGS_ipic_31__38_SingleInstructionTerminator::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_SingleInstructionTerminator result ;
  const GGS_ipic_31__38_SingleInstructionTerminator * p = (const GGS_ipic_31__38_SingleInstructionTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_SingleInstructionTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18SingleInstructionTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@ipic18SequentialInstruction minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_SequentialInstruction::method_minMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                    GGS_uint & outArgument_outMin,
                                                                    GGS_uint & outArgument_outMax,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (1U)) ;
  outArgument_outMax = GGS_uint (uint32_t (1U)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_minMaxDuration (cPtr_ipic_31__38_SequentialInstruction * inObject,
                                         const GGS_blockDurationMap constin_inExploredBlockMap,
                                         GGS_uint & out_outMin,
                                         GGS_uint & out_outMax,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  out_outMin.drop () ;
  out_outMax.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    inObject->method_minMaxDuration (constin_inExploredBlockMap, out_outMin, out_outMax, inCompiler COMMA_THERE) ;
  }
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
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction::cPtr_midrange_5F_instruction (const GGS_location & in_mInstructionLocation,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
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
//
//Abstract extension method '@immediatExpression eval'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_eval (cPtr_immediatExpression * inObject,
                               const GGS_registerTable constin_inRegisterTable,
                               const GGS_constantMap constin_inConstantMap,
                               GGS_sint_36__34_ & out_outResult,
                               GGS_stringset & io_ioUsedRegisters,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outResult.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_immediatExpression) ;
    inObject->method_eval (constin_inRegisterTable, constin_inConstantMap, out_outResult, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@bitNumberExpression getBitNumber'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getBitNumber (cPtr_bitNumberExpression * inObject,
                                       const GGS_registerTable constin_inRegisterTable,
                                       const GGS_constantMap constin_inConstantMap,
                                       GGS_stringset & io_ioUsedRegisters,
                                       const GGS_bitSliceTable constin_inBitSliceTable,
                                       GGS_uint & out_outBitNumber,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outBitNumber.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_bitNumberExpression) ;
    inObject->method_getBitNumber (constin_inRegisterTable, constin_inConstantMap, io_ioUsedRegisters, constin_inBitSliceTable, out_outBitNumber, inCompiler COMMA_THERE) ;
  }
}


//------------------------------------------------------------------------------------------------

void cParser_piccoloDevice_5F_syntax::rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_ (GGS_piccoloDeviceModel & outArgument_outPiccoloDeviceModel,
                                                                                        Lexique_piccoloDevice_5F_lexique * inCompiler) {
  outArgument_outPiccoloDeviceModel.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_controller COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 11)) ;
  GGS_lstring var_deviceName_338 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 12)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 13)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_processor COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 14)) ;
  GGS_processorType var_processorType_390 ;
  GGS_lstring var_processorName_429 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 16)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_processorName_429.readProperty_string ().objectCompare (GGS_string ("pic18_60"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_processorType_390 = GGS_processorType::class_func_pic_31__38__5F__36__30_ (SOURCE_FILE ("piccoloDevice_syntax.galgas3", 18)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, var_processorName_429.readProperty_string ().objectCompare (GGS_string ("pic18_80"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_processorType_390 = GGS_processorType::class_func_pic_31__38__5F__38__30_ (SOURCE_FILE ("piccoloDevice_syntax.galgas3", 20)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::equal, var_processorName_429.readProperty_string ().objectCompare (GGS_string ("mid-range"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          var_processorType_390 = GGS_processorType::class_func_midrange (SOURCE_FILE ("piccoloDevice_syntax.galgas3", 22)) ;
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::equal, var_processorName_429.readProperty_string ().objectCompare (GGS_string ("baseline"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            var_processorType_390 = GGS_processorType::class_func_baseline (SOURCE_FILE ("piccoloDevice_syntax.galgas3", 24)) ;
          }
        }
        if (GalgasBool::boolFalse == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 26)), GGS_string ("The '").add_operation (var_processorName_429.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 26)).add_operation (GGS_string ("' processor is not handled"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 26)), fixItArray4  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 26)) ;
          var_processorType_390.drop () ; // Release error dropped variable
        }
      }
    }
  }
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_romsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 29)) ;
  GGS_luint var_romSize_972 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 30)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 31)) ;
  GGS_uint var_eepromSize_998 ;
  GGS_uint var_eepromAddress_1021 ;
  switch (select_piccoloDevice_5F_syntax_0 (inCompiler)) {
  case 1: {
    var_eepromSize_998 = GGS_uint (uint32_t (0U)) ;
    var_eepromAddress_1021 = GGS_uint (uint32_t (0U)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_eepromsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 38)) ;
    GGS_luint var_l_5F_eepromSize_1133 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 39)) ;
    var_eepromSize_998 = var_l_5F_eepromSize_1133.readProperty_uint () ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 41)) ;
    GGS_luint var_l_5F_eepromAddress_1216 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 42)) ;
    var_eepromAddress_1021 = var_l_5F_eepromAddress_1216.readProperty_uint () ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 44)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 46)) ;
  GGS_luint var_bankCount_1320 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 47)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 48)) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    if (select_piccoloDevice_5F_syntax_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_unusedregister COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 51)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 52)) ;
      switch (select_piccoloDevice_5F_syntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 55)) ;
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 56)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 58)) ;
    }else{
      repeatFlag_5 = false ;
    }
  }
  GGS_ramBankTable var_ramBankTable_1531 = GGS_ramBankTable::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_6 = true ;
  while (repeatFlag_6) {
    if (select_piccoloDevice_5F_syntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_ram COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 63)) ;
      GGS_lstring var_ramName_1620 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 64)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 65)) ;
      GGS_luint var_ramStart_1662 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 66)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 67)) ;
      GGS_luint var_ramEnd_1706 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 68)) ;
      GGS_uintlist var_mirrorOffsetList_1721 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
      switch (select_piccoloDevice_5F_syntax_4 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mirrorat COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 72)) ;
        bool repeatFlag_7 = true ;
        while (repeatFlag_7) {
          GGS_luint var_mirrorStartAddress_1830 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 74)) ;
          var_mirrorOffsetList_1721.addAssignOperation (var_mirrorStartAddress_1830.readProperty_uint ().substract_operation (var_ramStart_1662.readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 75))  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 75)) ;
          if (select_piccoloDevice_5F_syntax_5 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 77)) ;
          }else{
            repeatFlag_7 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 80)) ;
      {
      var_ramBankTable_1531.setter_insertKey (var_ramName_1620, var_ramStart_1662.readProperty_uint (), var_ramStart_1662.readProperty_uint (), var_ramEnd_1706.readProperty_uint ().add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 85)), var_mirrorOffsetList_1721, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 81)) ;
      }
    }else{
      repeatFlag_6 = false ;
    }
  }
  GGS_registerTable var_registerTable_2161 = GGS_registerTable::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_8 = true ;
  while (repeatFlag_8) {
    if (select_piccoloDevice_5F_syntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_register COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 92)) ;
      GGS_lstring var_registerName_2257 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 93)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 94)) ;
      GGS_uintlist var_registerAddressList_2287 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_9 = true ;
      while (repeatFlag_9) {
        GGS_luint var_registerAddress_2360 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 97)) ;
        var_registerAddressList_2287.addAssignOperation (var_registerAddress_2360.readProperty_uint ()  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 98)) ;
        if (select_piccoloDevice_5F_syntax_7 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 100)) ;
        }else{
          repeatFlag_9 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 102)) ;
      GGS_uint var_sliceIndex_2477 = GGS_uint (uint32_t (8U)) ;
      GGS_bitSliceTable var_bitSliceTable_2500 = GGS_bitSliceTable::init (inCompiler COMMA_HERE) ;
      GGS_string var_bitDefinitionString_2549 = GGS_string (" <") ;
      bool repeatFlag_10 = true ;
      while (repeatFlag_10) {
        switch (select_piccoloDevice_5F_syntax_9 (inCompiler)) {
        case 1: {
          GGS_uint var_sliceWidth_2618 = GGS_uint (uint32_t (0U)) ;
          bool repeatFlag_11 = true ;
          while (repeatFlag_11) {
            GGS_uint var_sliceBase_2687 = var_sliceIndex_2477 ;
            GGS_lstring var_sliceName_2747 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 111)) ;
            switch (select_piccoloDevice_5F_syntax_11 (inCompiler)) {
            case 1: {
              GalgasBool test_12 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_12) {
                test_12 = GGS_bool (ComparisonKind::notEqual, var_sliceWidth_2618.objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_sliceWidth_2618.objectCompare (GGS_uint (uint32_t (1U)))) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 113)).boolEnum () ;
                if (GalgasBool::boolTrue == test_12) {
                  GenericArray <FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (var_sliceName_2747.readProperty_location (), GGS_string ("a slice of 1 bit is expected for '").add_operation (var_sliceName_2747.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 114)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 114)), fixItArray13  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 114)) ;
                }
              }
              var_sliceWidth_2618 = GGS_uint (uint32_t (1U)) ;
              var_bitDefinitionString_2549.plusAssignOperation(var_sliceName_2747.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 117)) ;
            } break ;
            case 2: {
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 119)) ;
              GGS_luint var_sliceSize_3078 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 120)) ;
              GalgasBool test_14 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_14) {
                test_14 = GGS_bool (ComparisonKind::notEqual, var_sliceWidth_2618.objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_sliceWidth_2618.objectCompare (var_sliceSize_3078.readProperty_uint ())) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 121)).boolEnum () ;
                if (GalgasBool::boolTrue == test_14) {
                  GenericArray <FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (var_sliceName_2747.readProperty_location (), GGS_string ("a slice of ").add_operation (var_sliceWidth_2618.getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas3", 122)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 122)).add_operation (GGS_string (" bits is expected for '"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 122)).add_operation (var_sliceName_2747.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 122)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 122)), fixItArray15  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 122)) ;
                }
              }
              var_sliceWidth_2618 = var_sliceSize_3078.readProperty_uint () ;
              var_sliceBase_2687 = var_sliceBase_2687.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 125)).substract_operation (var_sliceSize_3078.readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 125)) ;
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 126)) ;
              var_bitDefinitionString_2549.plusAssignOperation(var_sliceName_2747.readProperty_string ().add_operation (GGS_string ("["), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 127)).add_operation (var_sliceSize_3078.readProperty_uint ().getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas3", 127)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 127)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 127)), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 127)) ;
            } break ;
            default:
              break ;
            }
            {
            var_bitSliceTable_2500.setter_insertKey (var_sliceName_2747, var_sliceIndex_2477.substract_operation (var_sliceWidth_2618, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 129)), var_sliceWidth_2618, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 129)) ;
            }
            if (select_piccoloDevice_5F_syntax_10 (inCompiler) == 2) {
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 131)) ;
              var_bitDefinitionString_2549.plusAssignOperation(GGS_string ("/"), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 132)) ;
            }else{
              repeatFlag_11 = false ;
            }
          }
          var_sliceIndex_2477 = var_sliceIndex_2477.substract_operation (var_sliceWidth_2618, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 134)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 136)) ;
          var_bitDefinitionString_2549.plusAssignOperation(GGS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 137)) ;
          var_sliceIndex_2477.minusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 138)) ;
        } break ;
        default:
          break ;
        }
        if (select_piccoloDevice_5F_syntax_8 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 141)) ;
          var_bitDefinitionString_2549.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 142)) ;
        }else{
          repeatFlag_10 = false ;
        }
      }
      GalgasBool test_16 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_16) {
        test_16 = GGS_bool (ComparisonKind::notEqual, var_sliceIndex_2477.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          GenericArray <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (var_registerName_2257.readProperty_location (), GGS_string ("Incorrect bit definition for register '").add_operation (var_registerName_2257.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 145)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 145)), fixItArray17  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 145)) ;
        }
      }
      var_bitDefinitionString_2549.plusAssignOperation(GGS_string (">"), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 147)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 148)) ;
      {
      var_registerTable_2161.setter_insertKey (var_registerName_2257, var_registerAddressList_2287, GGS_uint (uint32_t (1U)), var_bitSliceTable_2500, var_bitDefinitionString_2549, GGS_registerProtection::class_func_publicRegister (SOURCE_FILE ("piccoloDevice_syntax.galgas3", 149)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 149)) ;
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 150)) ;
    }else{
      repeatFlag_8 = false ;
    }
  }
  GGS_configRegisterMap var_configRegisterMap_4168 = GGS_configRegisterMap::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_18 = true ;
  while (repeatFlag_18) {
    if (select_piccoloDevice_5F_syntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_configuration COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 155)) ;
      GGS_lstring var_configRegisterName_4277 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 156)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 157)) ;
      GGS_luint var_configRegisterAddress_4331 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 158)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_width COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 159)) ;
      GGS_luint var_configRegisterWidth_4391 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 160)) ;
      GGS_illegalMaskList var_illegalMaskList_4419 = GGS_illegalMaskList::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_19 = true ;
      while (repeatFlag_19) {
        if (select_piccoloDevice_5F_syntax_13 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_illegal COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 164)) ;
          GGS_luint var_illegalValue_4521 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 165)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 166)) ;
          GGS_luint var_illegalMask_4575 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 167)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_message COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 168)) ;
          GGS_lstring var_illegalDescriptionString_4632 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 169)) ;
          var_illegalMaskList_4419.addAssignOperation (var_illegalValue_4521, var_illegalMask_4575, var_illegalDescriptionString_4632  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 170)) ;
        }else{
          repeatFlag_19 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 172)) ;
      GGS_configRegisterMaskMap var_configRegisterMaskMap_4759 = GGS_configRegisterMaskMap::init (inCompiler COMMA_HERE) ;
      GGS_stringset var_settingNameSet_4816 = GGS_stringset::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_20 = true ;
      while (repeatFlag_20) {
        if (select_piccoloDevice_5F_syntax_14 (inCompiler) == 2) {
          GGS_lstring var_maskName_4900 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 177)) ;
          GalgasBool test_21 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_21) {
            test_21 = var_settingNameSet_4816.getter_hasKey (var_maskName_4900.readProperty_string () COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 178)).boolEnum () ;
            if (GalgasBool::boolTrue == test_21) {
              GenericArray <FixItDescription> fixItArray22 ;
              inCompiler->emitSemanticError (var_maskName_4900.readProperty_location (), GGS_string ("The '").add_operation (var_maskName_4900.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 179)).add_operation (GGS_string ("' setting is already defined"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 179)), fixItArray22  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 179)) ;
            }
          }
          var_settingNameSet_4816.plusPlusAssignOperation (var_maskName_4900.readProperty_string ()  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 181)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 182)) ;
          GGS_luint var_maskValue_5133 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 183)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 184)) ;
          GGS_lstring var_maskDescriptionString_5192 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 185)) ;
          GGS_fieldSettingMap var_fieldSettingMap_5224 = GGS_fieldSettingMap::init (inCompiler COMMA_HERE) ;
          bool repeatFlag_23 = true ;
          while (repeatFlag_23) {
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_setting COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 188)) ;
            GGS_luint var_value_5322 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 189)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 190)) ;
            GGS_luint var_mask_5373 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 191)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 192)) ;
            GGS_lstring var_descriptionString_5431 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 193)) ;
            {
            var_fieldSettingMap_5224.setter_insertKey (var_descriptionString_5431, var_value_5322.readProperty_uint (), var_mask_5373.readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 194)) ;
            }
            if (select_piccoloDevice_5F_syntax_15 (inCompiler) == 2) {
            }else{
              repeatFlag_23 = false ;
            }
          }
          {
          var_configRegisterMaskMap_4759.setter_insertKey (var_maskName_4900, var_maskValue_5133, var_maskDescriptionString_5192, var_fieldSettingMap_5224, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 197)) ;
          }
        }else{
          repeatFlag_20 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 199)) ;
      {
      var_configRegisterMap_4168.setter_insertKey (var_configRegisterName_4277, var_configRegisterAddress_4331, var_configRegisterWidth_4391, var_configRegisterMaskMap_4759, var_illegalMaskList_4419, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 200)) ;
      }
    }else{
      repeatFlag_18 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 208)) ;
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    test_24 = GGS_bool (ComparisonKind::equal, var_processorName_429.readProperty_string ().objectCompare (GGS_string ("pic18_60"))).operator_or (GGS_bool (ComparisonKind::equal, var_processorName_429.readProperty_string ().objectCompare (GGS_string ("pic18_80"))) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 210)).boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      GGS_uintlist joker_6054_5 ; // Joker input parameter
      GGS_uint joker_6054_4 ; // Joker input parameter
      GGS_bitSliceTable joker_6054_3 ; // Joker input parameter
      GGS_string joker_6054_2 ; // Joker input parameter
      GGS_registerProtection joker_6054_1 ; // Joker input parameter
      var_registerTable_2161.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("BSR"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 211)), inCompiler COMMA_HERE), joker_6054_5, joker_6054_4, joker_6054_3, joker_6054_2, joker_6054_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 211)) ;
      GGS_uintlist joker_6125_5 ; // Joker input parameter
      GGS_uint joker_6125_4 ; // Joker input parameter
      GGS_bitSliceTable joker_6125_3 ; // Joker input parameter
      GGS_string joker_6125_2 ; // Joker input parameter
      GGS_registerProtection joker_6125_1 ; // Joker input parameter
      var_registerTable_2161.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("TOSL"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 212)), inCompiler COMMA_HERE), joker_6125_5, joker_6125_4, joker_6125_3, joker_6125_2, joker_6125_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 212)) ;
      GGS_uintlist joker_6196_5 ; // Joker input parameter
      GGS_uint joker_6196_4 ; // Joker input parameter
      GGS_bitSliceTable joker_6196_3 ; // Joker input parameter
      GGS_string joker_6196_2 ; // Joker input parameter
      GGS_registerProtection joker_6196_1 ; // Joker input parameter
      var_registerTable_2161.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("TOSH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 213)), inCompiler COMMA_HERE), joker_6196_5, joker_6196_4, joker_6196_3, joker_6196_2, joker_6196_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 213)) ;
      GGS_uintlist joker_6267_5 ; // Joker input parameter
      GGS_uint joker_6267_4 ; // Joker input parameter
      GGS_bitSliceTable joker_6267_3 ; // Joker input parameter
      GGS_string joker_6267_2 ; // Joker input parameter
      GGS_registerProtection joker_6267_1 ; // Joker input parameter
      var_registerTable_2161.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("TOSU"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 214)), inCompiler COMMA_HERE), joker_6267_5, joker_6267_4, joker_6267_3, joker_6267_2, joker_6267_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 214)) ;
    }
  }
  GGS_string var_sharedBankName_6336 = GGS_string::makeEmptyString () ;
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    test_25 = GGS_bool (ComparisonKind::equal, var_processorName_429.readProperty_string ().objectCompare (GGS_string ("mid-range"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      UpEnumerator_ramBankTable enumerator_6467 (var_ramBankTable_1531) ;
      bool bool_26 = GGS_bool (ComparisonKind::equal, var_sharedBankName_6336.objectCompare (GGS_string::makeEmptyString ())).isValidAndTrue () ;
      if (enumerator_6467.hasCurrentObject () && bool_26) {
        while (enumerator_6467.hasCurrentObject () && bool_26) {
          GGS_uint var_bankAccessibility_6550 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 220)).left_shift_operation (enumerator_6467.current_mFirstFreeAddress (HERE).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 220)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 220)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 220)).getter_uint (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 220)) ;
          UpEnumerator_uintlist enumerator_6611 (enumerator_6467.current_mMirrorOffsetList (HERE)) ;
          while (enumerator_6611.hasCurrentObject ()) {
            var_bankAccessibility_6550 = var_bankAccessibility_6550.operator_or (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 222)).left_shift_operation (enumerator_6467.current_mFirstFreeAddress (HERE).add_operation (enumerator_6611.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 222)).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 222)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 222)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 222)).getter_uint (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 222)) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 222)) ;
            enumerator_6611.gotoNextObject () ;
          }
          GalgasBool test_27 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_27) {
            test_27 = GGS_bool (ComparisonKind::equal, GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 224)).left_shift_operation (var_bankCount_1320.readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 224)).objectCompare (var_bankAccessibility_6550.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 224)).getter_bigint (SOURCE_FILE ("piccoloDevice_syntax.galgas3", 224)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_27) {
              var_sharedBankName_6336 = enumerator_6467.current_lkey (HERE).readProperty_string () ;
            }
          }
          enumerator_6467.gotoNextObject () ;
          if (enumerator_6467.hasCurrentObject ()) {
            bool_26 = GGS_bool (ComparisonKind::equal, var_sharedBankName_6336.objectCompare (GGS_string::makeEmptyString ())).isValidAndTrue () ;
          }
        }
      }
    }
  }
  outArgument_outPiccoloDeviceModel = GGS_piccoloDeviceModel::init_21__21__21__21__21__21__21__21__21__21_ (var_deviceName_338, var_processorType_390, var_romSize_972, var_bankCount_1320, var_registerTable_2161, var_ramBankTable_1531, var_eepromSize_998, var_eepromAddress_1021, var_configRegisterMap_4168, var_sharedBankName_6336, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_piccoloDevice_5F_syntax::rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_indexing (Lexique_piccoloDevice_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_controller COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 11)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 12)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 13)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_processor COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 14)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 16)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_romsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 29)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 30)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 31)) ;
  switch (select_piccoloDevice_5F_syntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_eepromsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 38)) ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 39)) ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 41)) ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 42)) ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 44)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 46)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 47)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 48)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_piccoloDevice_5F_syntax_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_unusedregister COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 51)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 52)) ;
      switch (select_piccoloDevice_5F_syntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 55)) ;
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 56)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 58)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_piccoloDevice_5F_syntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_ram COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 63)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 64)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 65)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 66)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 67)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 68)) ;
      switch (select_piccoloDevice_5F_syntax_4 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mirrorat COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 72)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 74)) ;
          if (select_piccoloDevice_5F_syntax_5 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 77)) ;
          }else{
            repeatFlag_2 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 80)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    if (select_piccoloDevice_5F_syntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_register COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 92)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 93)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 94)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 97)) ;
        if (select_piccoloDevice_5F_syntax_7 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 100)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 102)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        switch (select_piccoloDevice_5F_syntax_9 (inCompiler)) {
        case 1: {
          bool repeatFlag_6 = true ;
          while (repeatFlag_6) {
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 111)) ;
            switch (select_piccoloDevice_5F_syntax_11 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 119)) ;
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 120)) ;
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 126)) ;
            } break ;
            default:
              break ;
            }
            if (select_piccoloDevice_5F_syntax_10 (inCompiler) == 2) {
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 131)) ;
            }else{
              repeatFlag_6 = false ;
            }
          }
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 136)) ;
        } break ;
        default:
          break ;
        }
        if (select_piccoloDevice_5F_syntax_8 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 141)) ;
        }else{
          repeatFlag_5 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 148)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 150)) ;
    }else{
      repeatFlag_3 = false ;
    }
  }
  bool repeatFlag_7 = true ;
  while (repeatFlag_7) {
    if (select_piccoloDevice_5F_syntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_configuration COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 155)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 156)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 157)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 158)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_width COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 159)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 160)) ;
      bool repeatFlag_8 = true ;
      while (repeatFlag_8) {
        if (select_piccoloDevice_5F_syntax_13 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_illegal COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 164)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 165)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 166)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 167)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_message COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 168)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 169)) ;
        }else{
          repeatFlag_8 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 172)) ;
      bool repeatFlag_9 = true ;
      while (repeatFlag_9) {
        if (select_piccoloDevice_5F_syntax_14 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 177)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 182)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 183)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 184)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 185)) ;
          bool repeatFlag_10 = true ;
          while (repeatFlag_10) {
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_setting COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 188)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 189)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 190)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 191)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 192)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 193)) ;
            if (select_piccoloDevice_5F_syntax_15 (inCompiler) == 2) {
            }else{
              repeatFlag_10 = false ;
            }
          }
        }else{
          repeatFlag_9 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 199)) ;
    }else{
      repeatFlag_7 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 208)) ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE & inOperand) const {
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

GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (void) :
GGS_baseline_5F_assembly_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::
init_21__21_ (const GGS_lstring & in_mRoutineName,
              const GGS_bool & in_mIsRegular,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_init_21__21_ (in_mRoutineName, in_mIsRegular, inCompiler) ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::
baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_init_21__21_ (const GGS_lstring & in_mRoutineName,
                                                               const GGS_bool & in_mIsRegular,
                                                               Compiler * /* inCompiler */) {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mIsRegular = in_mIsRegular ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * inSourcePtr) :
GGS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::readProperty_mIsRegular (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
    return p->mProperty_mIsRegular ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_pseudo_BEGINOFROUTINE class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mIsRegular () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (const GGS_lstring & in_mRoutineName,
                                                                                                              const GGS_bool & in_mIsRegular,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mIsRegular () {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mIsRegular = in_mIsRegular ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE ;
}

void cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_pseudo_BEGINOFROUTINE:") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsRegular.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (mProperty_mRoutineName, mProperty_mIsRegular, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineName.printNonNullClassInstanceProperties ("mRoutineName") ;
    mProperty_mIsRegular.printNonNullClassInstanceProperties ("mIsRegular") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_pseudo_BEGINOFROUTINE generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE ("baseline_assembly_pseudo_BEGINOFROUTINE",
                                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE result ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_BEGINOFROUTINE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE & inOperand) const {
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

GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (void) :
GGS_baseline_5F_assembly_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::
init_21__21_ (const GGS_lstring & in_mRoutineName,
              const GGS_uint & in_mPage,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_init_21__21_ (in_mRoutineName, in_mPage, inCompiler) ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::
baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_init_21__21_ (const GGS_lstring & in_mRoutineName,
                                                             const GGS_uint & in_mPage,
                                                             Compiler * /* inCompiler */) {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mPage = in_mPage ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * inSourcePtr) :
GGS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::readProperty_mPage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
    return p->mProperty_mPage ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_pseudo_ENDOFROUTINE class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mPage () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (const GGS_lstring & in_mRoutineName,
                                                                                                          const GGS_uint & in_mPage,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mPage () {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mPage = in_mPage ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE ;
}

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_pseudo_ENDOFROUTINE:") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPage.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (mProperty_mRoutineName, mProperty_mPage, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineName.printNonNullClassInstanceProperties ("mRoutineName") ;
    mProperty_mPage.printNonNullClassInstanceProperties ("mPage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_pseudo_ENDOFROUTINE generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE ("baseline_assembly_pseudo_ENDOFROUTINE",
                                                                                                   & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE result ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_ENDOFROUTINE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_pseudo_5F_LABEL reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL::objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL & inOperand) const {
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

GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL::GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL (void) :
GGS_baseline_5F_assembly_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL::
init_21_ (const GGS_lstring & in_mLabel,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_pseudo_5F_LABEL_init_21_ (in_mLabel, inCompiler) ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::
baseline_5F_assembly_5F_pseudo_5F_LABEL_init_21_ (const GGS_lstring & in_mLabel,
                                                  Compiler * /* inCompiler */) {
  mProperty_mLabel = in_mLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL::GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL (const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * inSourcePtr) :
GGS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL::readProperty_mLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
    return p->mProperty_mLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_pseudo_LABEL class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (inCompiler COMMA_THERE),
mProperty_mLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (const GGS_lstring & in_mLabel,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (inCompiler COMMA_THERE),
mProperty_mLabel () {
  mProperty_mLabel = in_mLabel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL ;
}

void cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_pseudo_LABEL:") ;
  mProperty_mLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (mProperty_mLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mLabel.printNonNullClassInstanceProperties ("mLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_pseudo_LABEL generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL ("baseline_assembly_pseudo_LABEL",
                                                                                            & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL result ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL * p = (const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_LABEL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_actualInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_actualInstruction::objectCompare (const GGS_baseline_5F_assembly_5F_actualInstruction & inOperand) const {
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

GGS_baseline_5F_assembly_5F_actualInstruction::GGS_baseline_5F_assembly_5F_actualInstruction (void) :
GGS_baseline_5F_assembly_5F_instruction () {
}


void cPtr_baseline_5F_assembly_5F_actualInstruction::
baseline_5F_assembly_5F_actualInstruction_init_21_ (const GGS_location & in_mInstructionLocation,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_actualInstruction::GGS_baseline_5F_assembly_5F_actualInstruction (const cPtr_baseline_5F_assembly_5F_actualInstruction * inSourcePtr) :
GGS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_actualInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_baseline_5F_assembly_5F_actualInstruction::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_baseline_5F_assembly_5F_actualInstruction * p = (cPtr_baseline_5F_assembly_5F_actualInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_actualInstruction) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_actualInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_actualInstruction::cPtr_baseline_5F_assembly_5F_actualInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_actualInstruction::cPtr_baseline_5F_assembly_5F_actualInstruction (const GGS_location & in_mInstructionLocation,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_actualInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction ("baseline_assembly_actualInstruction",
                                                                                              & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_actualInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_actualInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_actualInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_actualInstruction GGS_baseline_5F_assembly_5F_actualInstruction::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_actualInstruction result ;
  const GGS_baseline_5F_assembly_5F_actualInstruction * p = (const GGS_baseline_5F_assembly_5F_actualInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_actualInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_actualInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_instruction_5F_FD reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_instruction_5F_FD::objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_FD & inOperand) const {
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

GGS_baseline_5F_assembly_5F_instruction_5F_FD::GGS_baseline_5F_assembly_5F_instruction_5F_FD (void) :
GGS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_FD GGS_baseline_5F_assembly_5F_instruction_5F_FD::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                      const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GGS_bool & in_m_5F_W_5F_isDestination,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_instruction_5F_FD * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_instruction_5F_FD (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_instruction_5F_FD_init_21__21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_FD result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_FD::
baseline_5F_assembly_5F_instruction_5F_FD_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
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

GGS_baseline_5F_assembly_5F_instruction_5F_FD::GGS_baseline_5F_assembly_5F_instruction_5F_FD (const cPtr_baseline_5F_assembly_5F_instruction_5F_FD * inSourcePtr) :
GGS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_assembly_5F_instruction_5F_FD::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_FD * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_assembly_5F_instruction_5F_FD::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_FD * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_assembly_5F_instruction_5F_FD::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_FD * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_instruction_FD class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction_5F_FD::cPtr_baseline_5F_assembly_5F_instruction_5F_FD (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription (),
mProperty_m_5F_W_5F_isDestination () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction_5F_FD::cPtr_baseline_5F_assembly_5F_instruction_5F_FD (const GGS_location & in_mInstructionLocation,
                                                                                                const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                                                                const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription (),
mProperty_m_5F_W_5F_isDestination () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_assembly_5F_instruction_5F_FD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD ;
}

void cPtr_baseline_5F_assembly_5F_instruction_5F_FD::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_instruction_FD:") ;
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

AbstractPtrClass * cPtr_baseline_5F_assembly_5F_instruction_5F_FD::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_instruction_5F_FD (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mRegisterDescription, mProperty_m_5F_W_5F_isDestination, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_instruction_5F_FD::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_instruction_FD generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD ("baseline_assembly_instruction_FD",
                                                                                              & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_instruction_5F_FD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_instruction_5F_FD::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_instruction_5F_FD (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_FD GGS_baseline_5F_assembly_5F_instruction_5F_FD::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instruction_5F_FD result ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_FD * p = (const GGS_baseline_5F_assembly_5F_instruction_5F_FD *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_instruction_5F_FD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_FD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_instruction_5F_F reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_instruction_5F_F::objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_F & inOperand) const {
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

GGS_baseline_5F_assembly_5F_instruction_5F_F::GGS_baseline_5F_assembly_5F_instruction_5F_F (void) :
GGS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_F GGS_baseline_5F_assembly_5F_instruction_5F_F::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                  const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_instruction_5F_F * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_instruction_5F_F (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_instruction_5F_F_init_21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, inCompiler) ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_F result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_F::
baseline_5F_assembly_5F_instruction_5F_F_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                           const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                           const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_F::GGS_baseline_5F_assembly_5F_instruction_5F_F (const cPtr_baseline_5F_assembly_5F_instruction_5F_F * inSourcePtr) :
GGS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction_5F_F) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_F_5F_instruction_5F_base_5F_code GGS_baseline_5F_assembly_5F_instruction_5F_F::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_F_5F_instruction_5F_base_5F_code () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_F * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_F) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_assembly_5F_instruction_5F_F::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_F * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_F) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_instruction_F class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction_5F_F::cPtr_baseline_5F_assembly_5F_instruction_5F_F (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction_5F_F::cPtr_baseline_5F_assembly_5F_instruction_5F_F (const GGS_location & in_mInstructionLocation,
                                                                                              const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                                                              const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_assembly_5F_instruction_5F_F::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F ;
}

void cPtr_baseline_5F_assembly_5F_instruction_5F_F::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_instruction_F:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_assembly_5F_instruction_5F_F::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_instruction_5F_F (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mRegisterDescription, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_instruction_5F_F::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_instruction_F generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F ("baseline_assembly_instruction_F",
                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_instruction_5F_F::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_instruction_5F_F::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_instruction_5F_F (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_F GGS_baseline_5F_assembly_5F_instruction_5F_F::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instruction_5F_F result ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_F * p = (const GGS_baseline_5F_assembly_5F_instruction_5F_F *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_instruction_5F_F *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_F", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_instruction_5F_FB reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_instruction_5F_FB::objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_FB & inOperand) const {
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

GGS_baseline_5F_assembly_5F_instruction_5F_FB::GGS_baseline_5F_assembly_5F_instruction_5F_FB (void) :
GGS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_FB GGS_baseline_5F_assembly_5F_instruction_5F_FB::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                      const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GGS_uint & in_mBitNumber,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_instruction_5F_FB * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_instruction_5F_FB (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_instruction_5F_FB_init_21__21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, in_mBitNumber, inCompiler) ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_FB result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_FB::
baseline_5F_assembly_5F_instruction_5F_FB_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
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

GGS_baseline_5F_assembly_5F_instruction_5F_FB::GGS_baseline_5F_assembly_5F_instruction_5F_FB (const cPtr_baseline_5F_assembly_5F_instruction_5F_FB * inSourcePtr) :
GGS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bit_5F_oriented_5F_op GGS_baseline_5F_assembly_5F_instruction_5F_FB::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_bit_5F_oriented_5F_op () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_FB * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_assembly_5F_instruction_5F_FB::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_FB * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_assembly_5F_instruction_5F_FB::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_FB * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_instruction_FB class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction_5F_FB::cPtr_baseline_5F_assembly_5F_instruction_5F_FB (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction_5F_FB::cPtr_baseline_5F_assembly_5F_instruction_5F_FB (const GGS_location & in_mInstructionLocation,
                                                                                                const GGS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                                                                const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                const GGS_uint & in_mBitNumber,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_assembly_5F_instruction_5F_FB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB ;
}

void cPtr_baseline_5F_assembly_5F_instruction_5F_FB::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_instruction_FB:") ;
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

AbstractPtrClass * cPtr_baseline_5F_assembly_5F_instruction_5F_FB::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_instruction_5F_FB (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mRegisterDescription, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_instruction_5F_FB::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_instruction_FB generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB ("baseline_assembly_instruction_FB",
                                                                                              & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_instruction_5F_FB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_instruction_5F_FB::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_instruction_5F_FB (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_FB GGS_baseline_5F_assembly_5F_instruction_5F_FB::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instruction_5F_FB result ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_FB * p = (const GGS_baseline_5F_assembly_5F_instruction_5F_FB *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_instruction_5F_FB *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_FB", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_instruction_5F_BitTestSkip reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip & inOperand) const {
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

GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (void) :
GGS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_bool & in_mSkipIfSet,
                      const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GGS_uint & in_mBitNumber,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_instruction_5F_BitTestSkip_init_21__21__21__21_ (in_mInstructionLocation, in_mSkipIfSet, in_mRegisterDescription, in_mBitNumber, inCompiler) ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::
baseline_5F_assembly_5F_instruction_5F_BitTestSkip_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
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

GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * inSourcePtr) :
GGS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::readProperty_mSkipIfSet (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mSkipIfSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_instruction_BitTestSkip class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (const GGS_location & in_mInstructionLocation,
                                                                                                                  const GGS_bool & in_mSkipIfSet,
                                                                                                                  const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                  const GGS_uint & in_mBitNumber,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip ;
}

void cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_instruction_BitTestSkip:") ;
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

AbstractPtrClass * cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (mProperty_mInstructionLocation, mProperty_mSkipIfSet, mProperty_mRegisterDescription, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mSkipIfSet.printNonNullClassInstanceProperties ("mSkipIfSet") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_instruction_BitTestSkip generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip ("baseline_assembly_instruction_BitTestSkip",
                                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip result ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_BitTestSkip", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_GOTO reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_GOTO::objectCompare (const GGS_baseline_5F_assembly_5F_GOTO & inOperand) const {
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

GGS_baseline_5F_assembly_5F_GOTO::GGS_baseline_5F_assembly_5F_GOTO (void) :
GGS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_GOTO GGS_baseline_5F_assembly_5F_GOTO::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_GOTO * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_GOTO (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_GOTO_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GGS_baseline_5F_assembly_5F_GOTO result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_GOTO::
baseline_5F_assembly_5F_GOTO_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                           const GGS_lstring & in_mTargetLabel,
                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_GOTO::GGS_baseline_5F_assembly_5F_GOTO (const cPtr_baseline_5F_assembly_5F_GOTO * inSourcePtr) :
GGS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_GOTO) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_assembly_5F_GOTO::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_assembly_5F_GOTO * p = (cPtr_baseline_5F_assembly_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_GOTO) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_GOTO class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_GOTO::cPtr_baseline_5F_assembly_5F_GOTO (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_GOTO::cPtr_baseline_5F_assembly_5F_GOTO (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_lstring & in_mTargetLabel,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_assembly_5F_GOTO::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO ;
}

void cPtr_baseline_5F_assembly_5F_GOTO::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_GOTO:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_assembly_5F_GOTO::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_GOTO (mProperty_mInstructionLocation, mProperty_mTargetLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_GOTO::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_GOTO generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO ("baseline_assembly_GOTO",
                                                                                 & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_GOTO::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_GOTO::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_GOTO (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_GOTO GGS_baseline_5F_assembly_5F_GOTO::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_GOTO result ;
  const GGS_baseline_5F_assembly_5F_GOTO * p = (const GGS_baseline_5F_assembly_5F_GOTO *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_GOTO *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_GOTO", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_SKIP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_SKIP::objectCompare (const GGS_baseline_5F_assembly_5F_SKIP & inOperand) const {
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

GGS_baseline_5F_assembly_5F_SKIP::GGS_baseline_5F_assembly_5F_SKIP (void) :
GGS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_SKIP GGS_baseline_5F_assembly_5F_SKIP::
init_21_ (const GGS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_SKIP * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_SKIP (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_SKIP_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GGS_baseline_5F_assembly_5F_SKIP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_SKIP::
baseline_5F_assembly_5F_SKIP_init_21_ (const GGS_location & in_mInstructionLocation,
                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_SKIP::GGS_baseline_5F_assembly_5F_SKIP (const cPtr_baseline_5F_assembly_5F_SKIP * inSourcePtr) :
GGS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_SKIP) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_SKIP class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_SKIP::cPtr_baseline_5F_assembly_5F_SKIP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_SKIP::cPtr_baseline_5F_assembly_5F_SKIP (const GGS_location & in_mInstructionLocation,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_assembly_5F_SKIP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP ;
}

void cPtr_baseline_5F_assembly_5F_SKIP::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_SKIP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_assembly_5F_SKIP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_SKIP (mProperty_mInstructionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_SKIP::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_SKIP generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP ("baseline_assembly_SKIP",
                                                                                 & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_SKIP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_SKIP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_SKIP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_SKIP GGS_baseline_5F_assembly_5F_SKIP::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_SKIP result ;
  const GGS_baseline_5F_assembly_5F_SKIP * p = (const GGS_baseline_5F_assembly_5F_SKIP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_SKIP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_SKIP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_CALL reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_CALL::objectCompare (const GGS_baseline_5F_assembly_5F_CALL & inOperand) const {
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

GGS_baseline_5F_assembly_5F_CALL::GGS_baseline_5F_assembly_5F_CALL (void) :
GGS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_CALL GGS_baseline_5F_assembly_5F_CALL::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_CALL * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_CALL (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_CALL_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GGS_baseline_5F_assembly_5F_CALL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_CALL::
baseline_5F_assembly_5F_CALL_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                           const GGS_lstring & in_mTargetLabel,
                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_CALL::GGS_baseline_5F_assembly_5F_CALL (const cPtr_baseline_5F_assembly_5F_CALL * inSourcePtr) :
GGS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_CALL) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_assembly_5F_CALL::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_assembly_5F_CALL * p = (cPtr_baseline_5F_assembly_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_CALL) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_CALL class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_CALL::cPtr_baseline_5F_assembly_5F_CALL (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_CALL::cPtr_baseline_5F_assembly_5F_CALL (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_lstring & in_mTargetLabel,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_assembly_5F_CALL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL ;
}

void cPtr_baseline_5F_assembly_5F_CALL::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_CALL:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_assembly_5F_CALL::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_CALL (mProperty_mInstructionLocation, mProperty_mTargetLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_CALL::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_CALL generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL ("baseline_assembly_CALL",
                                                                                 & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_CALL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_CALL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_CALL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_CALL GGS_baseline_5F_assembly_5F_CALL::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_CALL result ;
  const GGS_baseline_5F_assembly_5F_CALL * p = (const GGS_baseline_5F_assembly_5F_CALL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_CALL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_CALL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_WO_5F_OPERAND reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_WO_5F_OPERAND::objectCompare (const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND & inOperand) const {
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

GGS_baseline_5F_assembly_5F_WO_5F_OPERAND::GGS_baseline_5F_assembly_5F_WO_5F_OPERAND (void) :
GGS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_WO_5F_OPERAND GGS_baseline_5F_assembly_5F_WO_5F_OPERAND::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_WO_5F_OPERAND_init_21__21_ (in_mInstructionLocation, in_mInstruction, inCompiler) ;
  const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::
baseline_5F_assembly_5F_WO_5F_OPERAND_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                    const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_WO_5F_OPERAND::GGS_baseline_5F_assembly_5F_WO_5F_OPERAND (const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND * inSourcePtr) :
GGS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_WO_5F_OPERAND_5F_group GGS_baseline_5F_assembly_5F_WO_5F_OPERAND::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_WO_5F_OPERAND_5F_group () ;
  }else{
    cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND * p = (cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_WO_OPERAND class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND (const GGS_location & in_mInstructionLocation,
                                                                                        const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND ;
}

void cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_WO_OPERAND:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND (mProperty_mInstructionLocation, mProperty_mInstruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_WO_OPERAND generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND ("baseline_assembly_WO_OPERAND",
                                                                                          & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_WO_5F_OPERAND::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_WO_5F_OPERAND::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_WO_5F_OPERAND (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_WO_5F_OPERAND GGS_baseline_5F_assembly_5F_WO_5F_OPERAND::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_WO_5F_OPERAND result ;
  const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND * p = (const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_WO_OPERAND", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_TRIS reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_TRIS::objectCompare (const GGS_baseline_5F_assembly_5F_TRIS & inOperand) const {
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

GGS_baseline_5F_assembly_5F_TRIS::GGS_baseline_5F_assembly_5F_TRIS (void) :
GGS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_TRIS GGS_baseline_5F_assembly_5F_TRIS::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstring & in_mOperand,
                  const GGS_uint & in_mOpcode,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_TRIS * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_TRIS (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_TRIS_init_21__21__21_ (in_mInstructionLocation, in_mOperand, in_mOpcode, inCompiler) ;
  const GGS_baseline_5F_assembly_5F_TRIS result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_TRIS::
baseline_5F_assembly_5F_TRIS_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_lstring & in_mOperand,
                                               const GGS_uint & in_mOpcode,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOperand = in_mOperand ;
  mProperty_mOpcode = in_mOpcode ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_TRIS::GGS_baseline_5F_assembly_5F_TRIS (const cPtr_baseline_5F_assembly_5F_TRIS * inSourcePtr) :
GGS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_TRIS) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_assembly_5F_TRIS::readProperty_mOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_assembly_5F_TRIS * p = (cPtr_baseline_5F_assembly_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_TRIS) ;
    return p->mProperty_mOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_assembly_5F_TRIS::readProperty_mOpcode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_assembly_5F_TRIS * p = (cPtr_baseline_5F_assembly_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_TRIS) ;
    return p->mProperty_mOpcode ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_TRIS class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_TRIS::cPtr_baseline_5F_assembly_5F_TRIS (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mOperand (),
mProperty_mOpcode () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_TRIS::cPtr_baseline_5F_assembly_5F_TRIS (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_lstring & in_mOperand,
                                                                      const GGS_uint & in_mOpcode,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mOperand (),
mProperty_mOpcode () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOperand = in_mOperand ;
  mProperty_mOpcode = in_mOpcode ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_assembly_5F_TRIS::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS ;
}

void cPtr_baseline_5F_assembly_5F_TRIS::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_TRIS:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOpcode.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_assembly_5F_TRIS::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_TRIS (mProperty_mInstructionLocation, mProperty_mOperand, mProperty_mOpcode, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_TRIS::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
    mProperty_mOpcode.printNonNullClassInstanceProperties ("mOpcode") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_TRIS generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS ("baseline_assembly_TRIS",
                                                                                 & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_TRIS::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_TRIS::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_TRIS (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_TRIS GGS_baseline_5F_assembly_5F_TRIS::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_TRIS result ;
  const GGS_baseline_5F_assembly_5F_TRIS * p = (const GGS_baseline_5F_assembly_5F_TRIS *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_TRIS *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_TRIS", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation::objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation & inOperand) const {
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

GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation::GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation (void) :
GGS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                  const GGS_uint & in_mLiteralValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_instruction_5F_literalOperation_init_21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mLiteralValue, inCompiler) ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::
baseline_5F_assembly_5F_instruction_5F_literalOperation_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                          const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                          const GGS_uint & in_mLiteralValue,
                                                                          Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mLiteralValue = in_mLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation::GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation (const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * inSourcePtr) :
GGS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_literal_5F_instruction_5F_opcode GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_literal_5F_instruction_5F_opcode () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation::readProperty_mLiteralValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mLiteralValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mLiteralValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation (const GGS_location & in_mInstructionLocation,
                                                                                                                            const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                                                                            const GGS_uint & in_mLiteralValue,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mLiteralValue () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mLiteralValue = in_mLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation ;
}

void cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::description (String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_instruction_literalOperation:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mLiteralValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
    mProperty_mLiteralValue.printNonNullClassInstanceProperties ("mLiteralValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_instruction_literalOperation generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation ("baseline_assembly_instruction_literalOperation",
                                                                                                            & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation::extractObject (const GGS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation result ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation * p = (const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_incDecRegisterInCondition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_incDecRegisterInCondition::objectCompare (const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition & inOperand) const {
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

GGS_baseline_5F_assembly_5F_incDecRegisterInCondition::GGS_baseline_5F_assembly_5F_incDecRegisterInCondition (void) :
GGS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_incDecRegisterInCondition GGS_baseline_5F_assembly_5F_incDecRegisterInCondition::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GGS_bool & in_mIncrement,
                      const GGS_bool & in_m_5F_W_5F_isDestination,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_incDecRegisterInCondition_init_21__21__21__21_ (in_mInstructionLocation, in_mRegisterDescription, in_mIncrement, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::
baseline_5F_assembly_5F_incDecRegisterInCondition_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                        const GGS_bool & in_mIncrement,
                                                                        const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_incDecRegisterInCondition::GGS_baseline_5F_assembly_5F_incDecRegisterInCondition (const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * inSourcePtr) :
GGS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_assembly_5F_incDecRegisterInCondition::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_assembly_5F_incDecRegisterInCondition::readProperty_mIncrement (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
    return p->mProperty_mIncrement ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_assembly_5F_incDecRegisterInCondition::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_incDecRegisterInCondition class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mRegisterDescription (),
mProperty_mIncrement (),
mProperty_m_5F_W_5F_isDestination () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition (const GGS_location & in_mInstructionLocation,
                                                                                                                const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                const GGS_bool & in_mIncrement,
                                                                                                                const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mRegisterDescription (),
mProperty_mIncrement (),
mProperty_m_5F_W_5F_isDestination () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition ;
}

void cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_incDecRegisterInCondition:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition (mProperty_mInstructionLocation, mProperty_mRegisterDescription, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mIncrement.printNonNullClassInstanceProperties ("mIncrement") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_incDecRegisterInCondition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition ("baseline_assembly_incDecRegisterInCondition",
                                                                                                      & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_incDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_incDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_incDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_incDecRegisterInCondition GGS_baseline_5F_assembly_5F_incDecRegisterInCondition::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_incDecRegisterInCondition result ;
  const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_incDecRegisterInCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
// @pic_31__38_SimpleConstantCaseItem reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_SimpleConstantCaseItem::objectCompare (const GGS_pic_31__38_SimpleConstantCaseItem & inOperand) const {
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

GGS_pic_31__38_SimpleConstantCaseItem::GGS_pic_31__38_SimpleConstantCaseItem (void) :
GGS_pic_31__38_AbstractCaseItem () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_SimpleConstantCaseItem GGS_pic_31__38_SimpleConstantCaseItem::
init_21__21_ (const GGS_immediatExpression & in_mCaseExpression,
              const GGS_location & in_mCaseExpressionLocation,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_SimpleConstantCaseItem * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_SimpleConstantCaseItem (inCompiler COMMA_THERE)) ;
  object->pic_31__38_SimpleConstantCaseItem_init_21__21_ (in_mCaseExpression, in_mCaseExpressionLocation, inCompiler) ;
  const GGS_pic_31__38_SimpleConstantCaseItem result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_SimpleConstantCaseItem::
pic_31__38_SimpleConstantCaseItem_init_21__21_ (const GGS_immediatExpression & in_mCaseExpression,
                                                const GGS_location & in_mCaseExpressionLocation,
                                                Compiler * /* inCompiler */) {
  mProperty_mCaseExpression = in_mCaseExpression ;
  mProperty_mCaseExpressionLocation = in_mCaseExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SimpleConstantCaseItem::GGS_pic_31__38_SimpleConstantCaseItem (const cPtr_pic_31__38_SimpleConstantCaseItem * inSourcePtr) :
GGS_pic_31__38_AbstractCaseItem (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_SimpleConstantCaseItem) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_pic_31__38_SimpleConstantCaseItem::readProperty_mCaseExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_SimpleConstantCaseItem * p = (cPtr_pic_31__38_SimpleConstantCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_SimpleConstantCaseItem) ;
    return p->mProperty_mCaseExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_pic_31__38_SimpleConstantCaseItem::readProperty_mCaseExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_pic_31__38_SimpleConstantCaseItem * p = (cPtr_pic_31__38_SimpleConstantCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_SimpleConstantCaseItem) ;
    return p->mProperty_mCaseExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18SimpleConstantCaseItem class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_SimpleConstantCaseItem::cPtr_pic_31__38_SimpleConstantCaseItem (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_AbstractCaseItem (inCompiler COMMA_THERE),
mProperty_mCaseExpression (),
mProperty_mCaseExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_SimpleConstantCaseItem::cPtr_pic_31__38_SimpleConstantCaseItem (const GGS_immediatExpression & in_mCaseExpression,
                                                                                const GGS_location & in_mCaseExpressionLocation,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_AbstractCaseItem (inCompiler COMMA_THERE),
mProperty_mCaseExpression (),
mProperty_mCaseExpressionLocation () {
  mProperty_mCaseExpression = in_mCaseExpression ;
  mProperty_mCaseExpressionLocation = in_mCaseExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_SimpleConstantCaseItem::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem ;
}

void cPtr_pic_31__38_SimpleConstantCaseItem::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18SimpleConstantCaseItem:") ;
  mProperty_mCaseExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCaseExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_SimpleConstantCaseItem::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_SimpleConstantCaseItem (mProperty_mCaseExpression, mProperty_mCaseExpressionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_SimpleConstantCaseItem::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_AbstractCaseItem::printNonNullClassInstanceProperties () ;
    mProperty_mCaseExpression.printNonNullClassInstanceProperties ("mCaseExpression") ;
    mProperty_mCaseExpressionLocation.printNonNullClassInstanceProperties ("mCaseExpressionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18SimpleConstantCaseItem generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem ("pic18SimpleConstantCaseItem",
                                                                                      & kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_SimpleConstantCaseItem::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_SimpleConstantCaseItem::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_SimpleConstantCaseItem (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SimpleConstantCaseItem GGS_pic_31__38_SimpleConstantCaseItem::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_SimpleConstantCaseItem result ;
  const GGS_pic_31__38_SimpleConstantCaseItem * p = (const GGS_pic_31__38_SimpleConstantCaseItem *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_SimpleConstantCaseItem *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18SimpleConstantCaseItem", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_SimpleConstantCaseItem_2E_weak::objectCompare (const GGS_pic_31__38_SimpleConstantCaseItem_2E_weak & inOperand) const {
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

GGS_pic_31__38_SimpleConstantCaseItem_2E_weak::GGS_pic_31__38_SimpleConstantCaseItem_2E_weak (void) :
GGS_pic_31__38_AbstractCaseItem_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SimpleConstantCaseItem_2E_weak & GGS_pic_31__38_SimpleConstantCaseItem_2E_weak::operator = (const GGS_pic_31__38_SimpleConstantCaseItem & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SimpleConstantCaseItem_2E_weak::GGS_pic_31__38_SimpleConstantCaseItem_2E_weak (const GGS_pic_31__38_SimpleConstantCaseItem & inSource) :
GGS_pic_31__38_AbstractCaseItem_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SimpleConstantCaseItem_2E_weak GGS_pic_31__38_SimpleConstantCaseItem_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_SimpleConstantCaseItem_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SimpleConstantCaseItem GGS_pic_31__38_SimpleConstantCaseItem_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_SimpleConstantCaseItem result ;
  if (isValid ()) {
    const cPtr_pic_31__38_SimpleConstantCaseItem * p = (cPtr_pic_31__38_SimpleConstantCaseItem *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_SimpleConstantCaseItem (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SimpleConstantCaseItem GGS_pic_31__38_SimpleConstantCaseItem_2E_weak::bang_pic_31__38_SimpleConstantCaseItem_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_SimpleConstantCaseItem result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_SimpleConstantCaseItem) ;
      result = GGS_pic_31__38_SimpleConstantCaseItem ((cPtr_pic_31__38_SimpleConstantCaseItem *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18SimpleConstantCaseItem.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem_2E_weak ("pic18SimpleConstantCaseItem.weak",
                                                                                              & kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_SimpleConstantCaseItem_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_SimpleConstantCaseItem_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_SimpleConstantCaseItem_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SimpleConstantCaseItem_2E_weak GGS_pic_31__38_SimpleConstantCaseItem_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_SimpleConstantCaseItem_2E_weak result ;
  const GGS_pic_31__38_SimpleConstantCaseItem_2E_weak * p = (const GGS_pic_31__38_SimpleConstantCaseItem_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_SimpleConstantCaseItem_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18SimpleConstantCaseItem.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_switch reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_switch::objectCompare (const GGS_pic_31__38_Instruction_5F_switch & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_switch::GGS_pic_31__38_Instruction_5F_switch (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_switch GGS_pic_31__38_Instruction_5F_switch::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_pic_31__38_SwitchInstructionCaseList & in_mCaseList,
                      const GGS_location & in_mElseBranchStartLocation,
                      const GGS_pic_31__38_InstructionList & in_mElseInstructionList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_switch * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_switch (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_switch_init_21__21__21__21_ (in_mInstructionLocation, in_mCaseList, in_mElseBranchStartLocation, in_mElseInstructionList, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_switch result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_switch::
pic_31__38_Instruction_5F_switch_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                       const GGS_pic_31__38_SwitchInstructionCaseList & in_mCaseList,
                                                       const GGS_location & in_mElseBranchStartLocation,
                                                       const GGS_pic_31__38_InstructionList & in_mElseInstructionList,
                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mCaseList = in_mCaseList ;
  mProperty_mElseBranchStartLocation = in_mElseBranchStartLocation ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_switch::GGS_pic_31__38_Instruction_5F_switch (const cPtr_pic_31__38_Instruction_5F_switch * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_switch) ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SwitchInstructionCaseList GGS_pic_31__38_Instruction_5F_switch::readProperty_mCaseList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_pic_31__38_SwitchInstructionCaseList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_switch * p = (cPtr_pic_31__38_Instruction_5F_switch *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
    return p->mProperty_mCaseList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_pic_31__38_Instruction_5F_switch::readProperty_mElseBranchStartLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_switch * p = (cPtr_pic_31__38_Instruction_5F_switch *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
    return p->mProperty_mElseBranchStartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList GGS_pic_31__38_Instruction_5F_switch::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_pic_31__38_InstructionList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_switch * p = (cPtr_pic_31__38_Instruction_5F_switch *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_switch class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_switch::cPtr_pic_31__38_Instruction_5F_switch (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mCaseList (),
mProperty_mElseBranchStartLocation (),
mProperty_mElseInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_switch::cPtr_pic_31__38_Instruction_5F_switch (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_pic_31__38_SwitchInstructionCaseList & in_mCaseList,
                                                                              const GGS_location & in_mElseBranchStartLocation,
                                                                              const GGS_pic_31__38_InstructionList & in_mElseInstructionList,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mCaseList (),
mProperty_mElseBranchStartLocation (),
mProperty_mElseInstructionList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mCaseList = in_mCaseList ;
  mProperty_mElseBranchStartLocation = in_mElseBranchStartLocation ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_switch::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch ;
}

void cPtr_pic_31__38_Instruction_5F_switch::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_switch:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCaseList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseBranchStartLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_switch::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_switch (mProperty_mInstructionLocation, mProperty_mCaseList, mProperty_mElseBranchStartLocation, mProperty_mElseInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_switch::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mCaseList.printNonNullClassInstanceProperties ("mCaseList") ;
    mProperty_mElseBranchStartLocation.printNonNullClassInstanceProperties ("mElseBranchStartLocation") ;
    mProperty_mElseInstructionList.printNonNullClassInstanceProperties ("mElseInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_switch generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch ("pic18Instruction_switch",
                                                                                     & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_switch::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_switch::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_switch (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_switch GGS_pic_31__38_Instruction_5F_switch::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_switch result ;
  const GGS_pic_31__38_Instruction_5F_switch * p = (const GGS_pic_31__38_Instruction_5F_switch *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_switch *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_switch", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_switch_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_switch_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_switch_2E_weak::GGS_pic_31__38_Instruction_5F_switch_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_switch_2E_weak & GGS_pic_31__38_Instruction_5F_switch_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_switch & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_switch_2E_weak::GGS_pic_31__38_Instruction_5F_switch_2E_weak (const GGS_pic_31__38_Instruction_5F_switch & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_switch_2E_weak GGS_pic_31__38_Instruction_5F_switch_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_switch_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_switch GGS_pic_31__38_Instruction_5F_switch_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_switch result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_switch * p = (cPtr_pic_31__38_Instruction_5F_switch *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_switch (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_switch GGS_pic_31__38_Instruction_5F_switch_2E_weak::bang_pic_31__38_Instruction_5F_switch_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_switch result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_switch) ;
      result = GGS_pic_31__38_Instruction_5F_switch ((cPtr_pic_31__38_Instruction_5F_switch *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_switch.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch_2E_weak ("pic18Instruction_switch.weak",
                                                                                             & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_switch_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_switch_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_switch_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_switch_2E_weak GGS_pic_31__38_Instruction_5F_switch_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_switch_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_switch_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_switch_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_switch_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_switch.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                  const GGS_string in_inNextBlockLabel,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_string result ;
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

GGS_uint callExtensionGetter_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                             const GGS_string in_inNextBlockLabel,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  GGS_uint result ;
  if (nullptr != inObject) {
    result = inObject->getter_terminatorSize (in_inNextBlockLabel, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@baseline_intermediate_instruction setCurrentAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction::method_setCurrentAddress (GGS_uint & ioArgument_ioCurrentWordAdress,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction temp_0 = this ;
  ioArgument_ioCurrentWordAdress = ioArgument_ioCurrentWordAdress.add_operation (callExtensionGetter_length ((const cPtr_baseline_5F_intermediate_5F_instruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 18)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas3", 18)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_setCurrentAddress (cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                            GGS_uint & io_ioCurrentWordAdress,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    inObject->method_setCurrentAddress (io_ioCurrentWordAdress, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_GOTO reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_GOTO::objectCompare (const GGS_baseline_5F_intermediate_5F_GOTO & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_GOTO::GGS_baseline_5F_intermediate_5F_GOTO (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO GGS_baseline_5F_intermediate_5F_GOTO::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_GOTO * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_GOTO (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_GOTO_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_GOTO result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_GOTO::
baseline_5F_intermediate_5F_GOTO_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_lstring & in_mTargetLabel,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO::GGS_baseline_5F_intermediate_5F_GOTO (const cPtr_baseline_5F_intermediate_5F_GOTO * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_GOTO) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_intermediate_5F_GOTO::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_GOTO * p = (cPtr_baseline_5F_intermediate_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_GOTO) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_GOTO class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_GOTO::cPtr_baseline_5F_intermediate_5F_GOTO (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_GOTO::cPtr_baseline_5F_intermediate_5F_GOTO (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_lstring & in_mTargetLabel,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_GOTO::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO ;
}

void cPtr_baseline_5F_intermediate_5F_GOTO::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_GOTO:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_intermediate_5F_GOTO::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_GOTO (mProperty_mInstructionLocation, mProperty_mTargetLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_GOTO::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_GOTO generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO ("baseline_intermediate_GOTO",
                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_GOTO::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_GOTO::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_GOTO (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO GGS_baseline_5F_intermediate_5F_GOTO::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_GOTO result ;
  const GGS_baseline_5F_intermediate_5F_GOTO * p = (const GGS_baseline_5F_intermediate_5F_GOTO *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_GOTO *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_GOTO", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_JUMP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_JUMP::objectCompare (const GGS_baseline_5F_intermediate_5F_JUMP & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_JUMP::GGS_baseline_5F_intermediate_5F_JUMP (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP GGS_baseline_5F_intermediate_5F_JUMP::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_lstring & in_mTargetLabel,
                      const GGS_uint & in_mCurrentPage,
                      const GGS_uint & in_mTargetPage,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_JUMP * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_JUMP (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_JUMP_init_21__21__21__21_ (in_mInstructionLocation, in_mTargetLabel, in_mCurrentPage, in_mTargetPage, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_JUMP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JUMP::
baseline_5F_intermediate_5F_JUMP_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                       const GGS_lstring & in_mTargetLabel,
                                                       const GGS_uint & in_mCurrentPage,
                                                       const GGS_uint & in_mTargetPage,
                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mCurrentPage = in_mCurrentPage ;
  mProperty_mTargetPage = in_mTargetPage ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP::GGS_baseline_5F_intermediate_5F_JUMP (const cPtr_baseline_5F_intermediate_5F_JUMP * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_JUMP) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_intermediate_5F_JUMP::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_JUMP::readProperty_mCurrentPage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    return p->mProperty_mCurrentPage ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_JUMP::readProperty_mTargetPage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    return p->mProperty_mTargetPage ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_JUMP class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_JUMP::cPtr_baseline_5F_intermediate_5F_JUMP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mCurrentPage (),
mProperty_mTargetPage () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_JUMP::cPtr_baseline_5F_intermediate_5F_JUMP (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_lstring & in_mTargetLabel,
                                                                              const GGS_uint & in_mCurrentPage,
                                                                              const GGS_uint & in_mTargetPage,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mCurrentPage (),
mProperty_mTargetPage () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mCurrentPage = in_mCurrentPage ;
  mProperty_mTargetPage = in_mTargetPage ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_JUMP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP ;
}

void cPtr_baseline_5F_intermediate_5F_JUMP::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_JUMP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCurrentPage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetPage.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_intermediate_5F_JUMP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_JUMP (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mCurrentPage, mProperty_mTargetPage, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_JUMP::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
    mProperty_mCurrentPage.printNonNullClassInstanceProperties ("mCurrentPage") ;
    mProperty_mTargetPage.printNonNullClassInstanceProperties ("mTargetPage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_JUMP generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP ("baseline_intermediate_JUMP",
                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_JUMP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_JUMP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_JUMP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP GGS_baseline_5F_intermediate_5F_JUMP::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_JUMP result ;
  const GGS_baseline_5F_intermediate_5F_JUMP * p = (const GGS_baseline_5F_intermediate_5F_JUMP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_JUMP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_JUMP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_CALL reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_CALL::objectCompare (const GGS_baseline_5F_intermediate_5F_CALL & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_CALL::GGS_baseline_5F_intermediate_5F_CALL (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL GGS_baseline_5F_intermediate_5F_CALL::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_CALL * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_CALL (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_CALL_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_CALL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_CALL::
baseline_5F_intermediate_5F_CALL_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_lstring & in_mTargetLabel,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL::GGS_baseline_5F_intermediate_5F_CALL (const cPtr_baseline_5F_intermediate_5F_CALL * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_CALL) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_intermediate_5F_CALL::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_CALL * p = (cPtr_baseline_5F_intermediate_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_CALL) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_CALL class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_CALL::cPtr_baseline_5F_intermediate_5F_CALL (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_CALL::cPtr_baseline_5F_intermediate_5F_CALL (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_lstring & in_mTargetLabel,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_CALL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL ;
}

void cPtr_baseline_5F_intermediate_5F_CALL::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_CALL:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_intermediate_5F_CALL::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_CALL (mProperty_mInstructionLocation, mProperty_mTargetLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_CALL::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_CALL generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL ("baseline_intermediate_CALL",
                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_CALL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_CALL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_CALL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL GGS_baseline_5F_intermediate_5F_CALL::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_CALL result ;
  const GGS_baseline_5F_intermediate_5F_CALL * p = (const GGS_baseline_5F_intermediate_5F_CALL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_CALL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_CALL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_JSR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_JSR::objectCompare (const GGS_baseline_5F_intermediate_5F_JSR & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_JSR::GGS_baseline_5F_intermediate_5F_JSR (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR GGS_baseline_5F_intermediate_5F_JSR::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_lstring & in_mTargetLabel,
                      const GGS_uint & in_mCurrentPage,
                      const GGS_uint & in_mTargetPage,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_JSR * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_JSR (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_JSR_init_21__21__21__21_ (in_mInstructionLocation, in_mTargetLabel, in_mCurrentPage, in_mTargetPage, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_JSR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JSR::
baseline_5F_intermediate_5F_JSR_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                      const GGS_lstring & in_mTargetLabel,
                                                      const GGS_uint & in_mCurrentPage,
                                                      const GGS_uint & in_mTargetPage,
                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mCurrentPage = in_mCurrentPage ;
  mProperty_mTargetPage = in_mTargetPage ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR::GGS_baseline_5F_intermediate_5F_JSR (const cPtr_baseline_5F_intermediate_5F_JSR * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_JSR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_intermediate_5F_JSR::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_JSR::readProperty_mCurrentPage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    return p->mProperty_mCurrentPage ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_JSR::readProperty_mTargetPage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    return p->mProperty_mTargetPage ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_JSR class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_JSR::cPtr_baseline_5F_intermediate_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mCurrentPage (),
mProperty_mTargetPage () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_JSR::cPtr_baseline_5F_intermediate_5F_JSR (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_lstring & in_mTargetLabel,
                                                                            const GGS_uint & in_mCurrentPage,
                                                                            const GGS_uint & in_mTargetPage,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mCurrentPage (),
mProperty_mTargetPage () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mCurrentPage = in_mCurrentPage ;
  mProperty_mTargetPage = in_mTargetPage ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR ;
}

void cPtr_baseline_5F_intermediate_5F_JSR::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_JSR:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCurrentPage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetPage.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_intermediate_5F_JSR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_JSR (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mCurrentPage, mProperty_mTargetPage, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_JSR::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
    mProperty_mCurrentPage.printNonNullClassInstanceProperties ("mCurrentPage") ;
    mProperty_mTargetPage.printNonNullClassInstanceProperties ("mTargetPage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_JSR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR ("baseline_intermediate_JSR",
                                                                                    & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_JSR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR GGS_baseline_5F_intermediate_5F_JSR::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_JSR result ;
  const GGS_baseline_5F_intermediate_5F_JSR * p = (const GGS_baseline_5F_intermediate_5F_JSR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_JSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_JSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (void) :
GGS_baseline_5F_intermediate_5F_pseudo () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::
init_21__21_ (const GGS_lstring & in_mRoutineName,
              const GGS_bool & in_mIsRegular,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_init_21__21_ (in_mRoutineName, in_mIsRegular, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::
baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_init_21__21_ (const GGS_lstring & in_mRoutineName,
                                                                     const GGS_bool & in_mIsRegular,
                                                                     Compiler * /* inCompiler */) {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mIsRegular = in_mIsRegular ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_pseudo (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::readProperty_mIsRegular (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
    return p->mProperty_mIsRegular ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_pseudo_BEGIN_ROUTINE class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mIsRegular () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const GGS_lstring & in_mRoutineName,
                                                                                                                          const GGS_bool & in_mIsRegular,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mIsRegular () {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mIsRegular = in_mIsRegular ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ;
}

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_pseudo_BEGIN_ROUTINE:") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsRegular.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (mProperty_mRoutineName, mProperty_mIsRegular, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_pseudo::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineName.printNonNullClassInstanceProperties ("mRoutineName") ;
    mProperty_mIsRegular.printNonNullClassInstanceProperties ("mIsRegular") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_pseudo_BEGIN_ROUTINE generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ("baseline_intermediate_pseudo_BEGIN_ROUTINE",
                                                                                                           & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE result ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_BEGIN_ROUTINE", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

AbstractPtrClass * cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
// @registerExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_registerExpression::objectCompare (const GGS_registerExpression & inOperand) const {
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

GGS_registerExpression::GGS_registerExpression (void) :
AC_GALGAS_reference_class () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_registerExpression GGS_registerExpression::
init_21__21__21_ (const GGS_lstring & in_mRegisterName,
                  const GGS_immediatExpression & in_mOffset,
                  const GGS_location & in_mEndOfOffsetExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_registerExpression * object = nullptr ;
  macroMyNew (object, cPtr_registerExpression (inCompiler COMMA_THERE)) ;
  object->registerExpression_init_21__21__21_ (in_mRegisterName, in_mOffset, in_mEndOfOffsetExpression, inCompiler) ;
  const GGS_registerExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_registerExpression::
registerExpression_init_21__21__21_ (const GGS_lstring & in_mRegisterName,
                                     const GGS_immediatExpression & in_mOffset,
                                     const GGS_location & in_mEndOfOffsetExpression,
                                     Compiler * /* inCompiler */) {
  mProperty_mRegisterName = in_mRegisterName ;
  mProperty_mOffset = in_mOffset ;
  mProperty_mEndOfOffsetExpression = in_mEndOfOffsetExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression::GGS_registerExpression (const cPtr_registerExpression * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_registerExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_registerExpression::readProperty_mRegisterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_registerExpression * p = (cPtr_registerExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerExpression) ;
    return p->mProperty_mRegisterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_registerExpression::readProperty_mOffset (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_registerExpression * p = (cPtr_registerExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerExpression) ;
    return p->mProperty_mOffset ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_registerExpression::readProperty_mEndOfOffsetExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_registerExpression * p = (cPtr_registerExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerExpression) ;
    return p->mProperty_mEndOfOffsetExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @registerExpression class
//--------------------------------------------------------------------------------------------------

cPtr_registerExpression::cPtr_registerExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mRegisterName (),
mProperty_mOffset (),
mProperty_mEndOfOffsetExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_registerExpression::cPtr_registerExpression (const GGS_lstring & in_mRegisterName,
                                                  const GGS_immediatExpression & in_mOffset,
                                                  const GGS_location & in_mEndOfOffsetExpression,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mRegisterName (),
mProperty_mOffset (),
mProperty_mEndOfOffsetExpression () {
  mProperty_mRegisterName = in_mRegisterName ;
  mProperty_mOffset = in_mOffset ;
  mProperty_mEndOfOffsetExpression = in_mEndOfOffsetExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_registerExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerExpression ;
}

void cPtr_registerExpression::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@registerExpression:") ;
  mProperty_mRegisterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOffset.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfOffsetExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_registerExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_registerExpression (mProperty_mRegisterName, mProperty_mOffset, mProperty_mEndOfOffsetExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_registerExpression::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterName.printNonNullClassInstanceProperties ("mRegisterName") ;
    mProperty_mOffset.printNonNullClassInstanceProperties ("mOffset") ;
    mProperty_mEndOfOffsetExpression.printNonNullClassInstanceProperties ("mEndOfOffsetExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @registerExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerExpression ("registerExpression",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_registerExpression::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_registerExpression result ;
  const GGS_registerExpression * p = (const GGS_registerExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerExpression *> (p)) {
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

ComparisonResult GGS_byteDeclarationInRam::objectCompare (const GGS_byteDeclarationInRam & inOperand) const {
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

GGS_byteDeclarationInRam::GGS_byteDeclarationInRam (void) :
GGS_declarationInRam () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_byteDeclarationInRam GGS_byteDeclarationInRam::
init_21__21__21__21__21_ (const GGS_lstring & in_mName,
                          const GGS_immediatExpression & in_mSizeExpression,
                          const GGS_bitSliceTable & in_mBitSliceTable,
                          const GGS_string & in_mBitDefinitionString,
                          const GGS_registerProtection & in_mProtection,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_byteDeclarationInRam * object = nullptr ;
  macroMyNew (object, cPtr_byteDeclarationInRam (inCompiler COMMA_THERE)) ;
  object->byteDeclarationInRam_init_21__21__21__21__21_ (in_mName, in_mSizeExpression, in_mBitSliceTable, in_mBitDefinitionString, in_mProtection, inCompiler) ;
  const GGS_byteDeclarationInRam result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_byteDeclarationInRam::
byteDeclarationInRam_init_21__21__21__21__21_ (const GGS_lstring & in_mName,
                                               const GGS_immediatExpression & in_mSizeExpression,
                                               const GGS_bitSliceTable & in_mBitSliceTable,
                                               const GGS_string & in_mBitDefinitionString,
                                               const GGS_registerProtection & in_mProtection,
                                               Compiler * /* inCompiler */) {
  mProperty_mName = in_mName ;
  mProperty_mSizeExpression = in_mSizeExpression ;
  mProperty_mBitSliceTable = in_mBitSliceTable ;
  mProperty_mBitDefinitionString = in_mBitDefinitionString ;
  mProperty_mProtection = in_mProtection ;
}

//--------------------------------------------------------------------------------------------------

GGS_byteDeclarationInRam::GGS_byteDeclarationInRam (const cPtr_byteDeclarationInRam * inSourcePtr) :
GGS_declarationInRam (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_byteDeclarationInRam) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_byteDeclarationInRam::readProperty_mName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    return p->mProperty_mName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_byteDeclarationInRam::readProperty_mSizeExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    return p->mProperty_mSizeExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable GGS_byteDeclarationInRam::readProperty_mBitSliceTable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bitSliceTable () ;
  }else{
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    return p->mProperty_mBitSliceTable ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_byteDeclarationInRam::readProperty_mBitDefinitionString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    return p->mProperty_mBitDefinitionString ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerProtection GGS_byteDeclarationInRam::readProperty_mProtection (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerProtection () ;
  }else{
    cPtr_byteDeclarationInRam * p = (cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    return p->mProperty_mProtection ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @byteDeclarationInRam class
//--------------------------------------------------------------------------------------------------

cPtr_byteDeclarationInRam::cPtr_byteDeclarationInRam (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_declarationInRam (inCompiler COMMA_THERE),
mProperty_mName (),
mProperty_mSizeExpression (),
mProperty_mBitSliceTable (),
mProperty_mBitDefinitionString (),
mProperty_mProtection () {
}

//--------------------------------------------------------------------------------------------------

cPtr_byteDeclarationInRam::cPtr_byteDeclarationInRam (const GGS_lstring & in_mName,
                                                      const GGS_immediatExpression & in_mSizeExpression,
                                                      const GGS_bitSliceTable & in_mBitSliceTable,
                                                      const GGS_string & in_mBitDefinitionString,
                                                      const GGS_registerProtection & in_mProtection,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_declarationInRam (inCompiler COMMA_THERE),
mProperty_mName (),
mProperty_mSizeExpression (),
mProperty_mBitSliceTable (),
mProperty_mBitDefinitionString (),
mProperty_mProtection () {
  mProperty_mName = in_mName ;
  mProperty_mSizeExpression = in_mSizeExpression ;
  mProperty_mBitSliceTable = in_mBitSliceTable ;
  mProperty_mBitDefinitionString = in_mBitDefinitionString ;
  mProperty_mProtection = in_mProtection ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_byteDeclarationInRam::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_byteDeclarationInRam ;
}

void cPtr_byteDeclarationInRam::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@byteDeclarationInRam:") ;
  mProperty_mName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitSliceTable.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitDefinitionString.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mProtection.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_byteDeclarationInRam::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_byteDeclarationInRam (mProperty_mName, mProperty_mSizeExpression, mProperty_mBitSliceTable, mProperty_mBitDefinitionString, mProperty_mProtection, inCompiler COMMA_THERE)) ;
  return ptr ;
}


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
//     @byteDeclarationInRam generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_byteDeclarationInRam ("byteDeclarationInRam",
                                                                         & kTypeDescriptor_GALGAS_declarationInRam) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_byteDeclarationInRam::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_byteDeclarationInRam ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_byteDeclarationInRam::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_byteDeclarationInRam (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_byteDeclarationInRam GGS_byteDeclarationInRam::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_byteDeclarationInRam result ;
  const GGS_byteDeclarationInRam * p = (const GGS_byteDeclarationInRam *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_byteDeclarationInRam *> (p)) {
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

AbstractPtrClass * cPtr_immediatInteger::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
// @immediatRegister reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatRegister::objectCompare (const GGS_immediatRegister & inOperand) const {
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

GGS_immediatRegister::GGS_immediatRegister (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatRegister GGS_immediatRegister::
init_21_ (const GGS_registerExpression & in_mRegister,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_immediatRegister * object = nullptr ;
  macroMyNew (object, cPtr_immediatRegister (inCompiler COMMA_THERE)) ;
  object->immediatRegister_init_21_ (in_mRegister, inCompiler) ;
  const GGS_immediatRegister result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatRegister::
immediatRegister_init_21_ (const GGS_registerExpression & in_mRegister,
                           Compiler * /* inCompiler */) {
  mProperty_mRegister = in_mRegister ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRegister::GGS_immediatRegister (const cPtr_immediatRegister * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatRegister) ;
}
//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_immediatRegister::readProperty_mRegister (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_immediatRegister * p = (cPtr_immediatRegister *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatRegister) ;
    return p->mProperty_mRegister ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatRegister class
//--------------------------------------------------------------------------------------------------

cPtr_immediatRegister::cPtr_immediatRegister (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mRegister () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatRegister::cPtr_immediatRegister (const GGS_registerExpression & in_mRegister,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mRegister () {
  mProperty_mRegister = in_mRegister ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_immediatRegister::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatRegister ;
}

void cPtr_immediatRegister::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatRegister:") ;
  mProperty_mRegister.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_immediatRegister::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatRegister (mProperty_mRegister, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatRegister::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mRegister.printNonNullClassInstanceProperties ("mRegister") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatRegister generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatRegister ("immediatRegister",
                                                                     & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatRegister::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatRegister ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatRegister::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatRegister (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRegister GGS_immediatRegister::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_immediatRegister result ;
  const GGS_immediatRegister * p = (const GGS_immediatRegister *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatRegister *> (p)) {
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

ComparisonResult GGS_immediatSlice::objectCompare (const GGS_immediatSlice & inOperand) const {
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

GGS_immediatSlice::GGS_immediatSlice (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatSlice GGS_immediatSlice::
init_21__21_ (const GGS_lstring & in_mRegisterName,
              const GGS_immediatSliceExpressionList & in_mSliceExpressionList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatSlice * object = nullptr ;
  macroMyNew (object, cPtr_immediatSlice (inCompiler COMMA_THERE)) ;
  object->immediatSlice_init_21__21_ (in_mRegisterName, in_mSliceExpressionList, inCompiler) ;
  const GGS_immediatSlice result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatSlice::
immediatSlice_init_21__21_ (const GGS_lstring & in_mRegisterName,
                            const GGS_immediatSliceExpressionList & in_mSliceExpressionList,
                            Compiler * /* inCompiler */) {
  mProperty_mRegisterName = in_mRegisterName ;
  mProperty_mSliceExpressionList = in_mSliceExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSlice::GGS_immediatSlice (const cPtr_immediatSlice * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatSlice) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_immediatSlice::readProperty_mRegisterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_immediatSlice * p = (cPtr_immediatSlice *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSlice) ;
    return p->mProperty_mRegisterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList GGS_immediatSlice::readProperty_mSliceExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatSliceExpressionList () ;
  }else{
    cPtr_immediatSlice * p = (cPtr_immediatSlice *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSlice) ;
    return p->mProperty_mSliceExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatSlice class
//--------------------------------------------------------------------------------------------------

cPtr_immediatSlice::cPtr_immediatSlice (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mRegisterName (),
mProperty_mSliceExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatSlice::cPtr_immediatSlice (const GGS_lstring & in_mRegisterName,
                                        const GGS_immediatSliceExpressionList & in_mSliceExpressionList,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mRegisterName (),
mProperty_mSliceExpressionList () {
  mProperty_mRegisterName = in_mRegisterName ;
  mProperty_mSliceExpressionList = in_mSliceExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_immediatSlice::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSlice ;
}

void cPtr_immediatSlice::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatSlice:") ;
  mProperty_mRegisterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSliceExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_immediatSlice::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatSlice (mProperty_mRegisterName, mProperty_mSliceExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatSlice::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterName.printNonNullClassInstanceProperties ("mRegisterName") ;
    mProperty_mSliceExpressionList.printNonNullClassInstanceProperties ("mSliceExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatSlice generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatSlice ("immediatSlice",
                                                                  & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatSlice::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSlice ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatSlice::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatSlice (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSlice GGS_immediatSlice::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_immediatSlice result ;
  const GGS_immediatSlice * p = (const GGS_immediatSlice *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatSlice *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatSlice", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

AbstractPtrClass * cPtr_bitNumberLiteralValue::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
// @bitNumberLabelValue reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bitNumberLabelValue::objectCompare (const GGS_bitNumberLabelValue & inOperand) const {
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

GGS_bitNumberLabelValue::GGS_bitNumberLabelValue (void) :
GGS_bitNumberExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_bitNumberLabelValue GGS_bitNumberLabelValue::
init_21__21_ (const GGS_lstring & in_mBitNumberLabelValue,
              const GGS_luint & in_mBitNumberIndexValue,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_bitNumberLabelValue * object = nullptr ;
  macroMyNew (object, cPtr_bitNumberLabelValue (inCompiler COMMA_THERE)) ;
  object->bitNumberLabelValue_init_21__21_ (in_mBitNumberLabelValue, in_mBitNumberIndexValue, inCompiler) ;
  const GGS_bitNumberLabelValue result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_bitNumberLabelValue::
bitNumberLabelValue_init_21__21_ (const GGS_lstring & in_mBitNumberLabelValue,
                                  const GGS_luint & in_mBitNumberIndexValue,
                                  Compiler * /* inCompiler */) {
  mProperty_mBitNumberLabelValue = in_mBitNumberLabelValue ;
  mProperty_mBitNumberIndexValue = in_mBitNumberIndexValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLabelValue::GGS_bitNumberLabelValue (const cPtr_bitNumberLabelValue * inSourcePtr) :
GGS_bitNumberExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitNumberLabelValue) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_bitNumberLabelValue::readProperty_mBitNumberLabelValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_bitNumberLabelValue * p = (cPtr_bitNumberLabelValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLabelValue) ;
    return p->mProperty_mBitNumberLabelValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_bitNumberLabelValue::readProperty_mBitNumberIndexValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_bitNumberLabelValue * p = (cPtr_bitNumberLabelValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLabelValue) ;
    return p->mProperty_mBitNumberIndexValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @bitNumberLabelValue class
//--------------------------------------------------------------------------------------------------

cPtr_bitNumberLabelValue::cPtr_bitNumberLabelValue (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_bitNumberExpression (inCompiler COMMA_THERE),
mProperty_mBitNumberLabelValue (),
mProperty_mBitNumberIndexValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_bitNumberLabelValue::cPtr_bitNumberLabelValue (const GGS_lstring & in_mBitNumberLabelValue,
                                                    const GGS_luint & in_mBitNumberIndexValue,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_bitNumberExpression (inCompiler COMMA_THERE),
mProperty_mBitNumberLabelValue (),
mProperty_mBitNumberIndexValue () {
  mProperty_mBitNumberLabelValue = in_mBitNumberLabelValue ;
  mProperty_mBitNumberIndexValue = in_mBitNumberIndexValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_bitNumberLabelValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLabelValue ;
}

void cPtr_bitNumberLabelValue::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@bitNumberLabelValue:") ;
  mProperty_mBitNumberLabelValue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitNumberIndexValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_bitNumberLabelValue::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bitNumberLabelValue (mProperty_mBitNumberLabelValue, mProperty_mBitNumberIndexValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bitNumberLabelValue::printNonNullClassInstanceProperties (void) const {
    cPtr_bitNumberExpression::printNonNullClassInstanceProperties () ;
    mProperty_mBitNumberLabelValue.printNonNullClassInstanceProperties ("mBitNumberLabelValue") ;
    mProperty_mBitNumberIndexValue.printNonNullClassInstanceProperties ("mBitNumberIndexValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @bitNumberLabelValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitNumberLabelValue ("bitNumberLabelValue",
                                                                        & kTypeDescriptor_GALGAS_bitNumberExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bitNumberLabelValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLabelValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitNumberLabelValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitNumberLabelValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLabelValue GGS_bitNumberLabelValue::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_bitNumberLabelValue result ;
  const GGS_bitNumberLabelValue * p = (const GGS_bitNumberLabelValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitNumberLabelValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberLabelValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
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
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 45)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 46)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GGS_lstring var_unusedRegister_1263 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 48)) ;
        ioArgument_unusedRegisterList.addAssignOperation (var_unusedRegister_1263  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 49)) ;
        if (select_pic_31__38__5F_syntax_1 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 51)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 54)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 55)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        GGS_lstring var_unusedRoutine_1429 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 57)) ;
        ioArgument_unusedRoutineList.addAssignOperation (var_unusedRoutine_1429  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 58)) ;
        if (select_pic_31__38__5F_syntax_2 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 60)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_inline COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 63)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        GGS_lstring var_inlinedRoutine_1578 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 65)) ;
        ioArgument_inlinedRoutineList.addAssignOperation (var_inlinedRoutine_1578  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 66)) ;
        if (select_pic_31__38__5F_syntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 68)) ;
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
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_include COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 91)) ;
      GGS_lstring var_includedFilePath_2222 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 92)) ;
      cGrammar_pic_31__38__5F_include_5F_grammar::_performSourceFileParsing_ (inCompiler, var_includedFilePath_2222, ioArgument_interruptDefinitionList, ioArgument_routineDefinitionList, ioArgument_ioMacroDefinitionList, ioArgument_unusedRoutineList, ioArgument_inlinedRoutineList, ioArgument_ramDefinitionList, ioArgument_unusedRegisterList, ioArgument_configDefinitionList, ioArgument_constantDefinitionList, ioArgument_ioCheckpicList, ioArgument_dataList, ioArgument_needsComputedGoto_32_, ioArgument_needsComputedGoto_34_  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 93)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 109)) ;
      GGS_lstring var_macroName_2695 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 110)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 111)) ;
      GGS_lstringlist var_constantNameList_2734 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        GGS_lstring var_constantName_2792 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 114)) ;
        var_constantNameList_2734.addAssignOperation (var_constantName_2792  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 115)) ;
        if (select_pic_31__38__5F_syntax_4 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 117)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 119)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 120)) ;
      GGS_labelMap var_labelMap_2907 = GGS_labelMap::init (inCompiler COMMA_HERE) ;
      GGS_pic_31__38_InstructionList var_instructionList_2978 ;
      nt_instruction_5F_list_ (var_instructionList_2978, ioArgument_needsComputedGoto_32_, ioArgument_needsComputedGoto_34_, var_labelMap_2907, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 127)) ;
      ioArgument_ioMacroDefinitionList.addAssignOperation (var_macroName_2695, var_constantNameList_2734, var_instructionList_2978  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 128)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_body_i0_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_pic_31__38__5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 45)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 46)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 48)) ;
        if (select_pic_31__38__5F_syntax_1 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 51)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 54)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 55)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 57)) ;
        if (select_pic_31__38__5F_syntax_2 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 60)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_inline COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 63)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 65)) ;
        if (select_pic_31__38__5F_syntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 68)) ;
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
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_include COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 91)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 92)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 109)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 110)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 111)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 114)) ;
        if (select_pic_31__38__5F_syntax_4 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 117)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 119)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 120)) ;
      nt_instruction_5F_list_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 127)) ;
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
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checkpic COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 139)) ;
  GGS_location var_loc_3315 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 140)) ;
  GGS_lstringlist var_valueList_3342 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_s_3413 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 143)) ;
    var_valueList_3342.addAssignOperation (var_s_3413  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 144)) ;
    if (select_pic_31__38__5F_syntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 146)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioList.addAssignOperation (var_loc_3315, var_valueList_3342  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 148)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checkpic COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 139)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 143)) ;
    if (select_pic_31__38__5F_syntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 146)) ;
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
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_data COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 155)) ;
    GenericArray <FixItDescription> fixItArray0 ;
    appendFixItActions (fixItArray0, EnumFixItKind::fixItReplace, GGS_string ("data16")) ;
    inCompiler->emitSemanticWarning (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 156)), GGS_string ("obsolete keyword"), fixItArray0  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 156)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_data_31__36_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 158)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_dataName_3728 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 160)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 161)) ;
  GGS_immediatExpressionList var_valueList_3773 = GGS_immediatExpressionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_immediatExpression var_expression_3850 ;
    nt_immediate_5F_expression_ (var_expression_3850, inCompiler) ;
    var_valueList_3773.addAssignOperation (var_expression_3850, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 165))  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 165)) ;
    if (select_pic_31__38__5F_syntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 167)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 169)) ;
  ioArgument_ioDataList.addAssignOperation (var_dataName_3728, var_valueList_3773, GGS_bool (false)  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 170)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i2_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_data COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 155)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_data_31__36_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 158)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 160)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 161)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_immediate_5F_expression_indexing (inCompiler) ;
    if (select_pic_31__38__5F_syntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 167)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 169)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i3_ (GGS_dataList & ioArgument_ioDataList,
                                                                                       Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_data_38_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 176)) ;
  GGS_lstring var_dataName_4125 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 177)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 178)) ;
  GGS_immediatExpressionList var_valueList_4170 = GGS_immediatExpressionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_immediatExpression var_expression_4247 ;
    nt_immediate_5F_expression_ (var_expression_4247, inCompiler) ;
    var_valueList_4170.addAssignOperation (var_expression_4247, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 182))  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 182)) ;
    if (select_pic_31__38__5F_syntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 184)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 186)) ;
  ioArgument_ioDataList.addAssignOperation (var_dataName_4125, var_valueList_4170, GGS_bool (true)  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 187)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_data_5F_definition_i3_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_data_38_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 176)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 177)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 178)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_immediate_5F_expression_indexing (inCompiler) ;
    if (select_pic_31__38__5F_syntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 184)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 186)) ;
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
      GGS_pic_31__38_PiccoloSimpleInstruction var_instruction_4717 ;
      nt_simple_5F_instruction_ (var_instruction_4717, inCompiler) ;
      outArgument_outInstructionList.addAssignOperation (var_instruction_4717  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 202)) ;
    } break ;
    case 3: {
      GGS_pic_31__38_PiccoloInstruction var_instruction_4816 ;
      nt_structured_5F_instruction_ (var_instruction_4816, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      outArgument_outInstructionList.addAssignOperation (var_instruction_4816  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 209)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
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
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 220)) ;
  GGS_lstring var_interruptName_5205 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 221)) ;
  GGS_bool var_isFast_5231 ;
  switch (select_pic_31__38__5F_syntax_10 (inCompiler)) {
  case 1: {
    var_isFast_5231 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_fast COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 226)) ;
    var_isFast_5231 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 229)) ;
  GGS_labelMap var_labelMap_5328 = GGS_labelMap::init (inCompiler COMMA_HERE) ;
  GGS_pic_31__38_InstructionList var_instructionList_5373 ;
  nt_instruction_5F_list_ (var_instructionList_5373, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, var_labelMap_5328, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 236)) ;
  ioArgument_ioInterruptDefinitionList.addAssignOperation (var_interruptName_5205, var_isFast_5231, var_instructionList_5373, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 237))  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 237)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 220)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 221)) ;
  switch (select_pic_31__38__5F_syntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_fast COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 226)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 229)) ;
  nt_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 236)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_routine_5F_definition_i6_ (GGS_pic_31__38_RoutineDefinitionList & ioArgument_ioRoutineDefinitionList,
                                                                                          GGS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                          GGS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                          Lexique_piccolo_5F_lexique * inCompiler) {
  GGS_bool var_noreturn_5769 ;
  switch (select_pic_31__38__5F_syntax_11 (inCompiler)) {
  case 1: {
    var_noreturn_5769 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 250)) ;
    var_noreturn_5769 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 253)) ;
  GGS_lstring var_routineName_5895 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 254)) ;
  GGS_luint var_requiredBank_5947 ;
  GGS_luint var_returnedBank_5973 ;
  GGS_bool var_preservesBank_5998 ;
  switch (select_pic_31__38__5F_syntax_12 (inCompiler)) {
  case 1: {
    var_requiredBank_5947 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_syntax.galgas3", 259)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 259)), inCompiler COMMA_HERE) ;
    var_returnedBank_5973 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_syntax.galgas3", 260)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 260)), inCompiler COMMA_HERE) ;
    var_preservesBank_5998 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 263)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 264)) ;
    switch (select_pic_31__38__5F_syntax_13 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 266)) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = var_noreturn_5769.boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 268)), GGS_string ("a \"noreturn\" routine cannot accept \"bank:preserved\" setting"), fixItArray1  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 268)) ;
        }
      }
      var_preservesBank_5998 = GGS_bool (true) ;
      var_requiredBank_5947 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_syntax.galgas3", 271)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 271)), inCompiler COMMA_HERE) ;
      var_returnedBank_5973 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_syntax.galgas3", 272)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 272)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 274)) ;
      var_requiredBank_5947 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 275)) ;
      var_preservesBank_5998 = GGS_bool (false) ;
      switch (select_pic_31__38__5F_syntax_14 (inCompiler)) {
      case 1: {
        var_returnedBank_5973 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_syntax.galgas3", 278)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 278)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 280)) ;
        var_returnedBank_5973 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 281)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_noreturn_5769.boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GenericArray <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 283)), GGS_string ("a \"noreturn\" routine cannot accept \"bank:returned\" setting"), fixItArray3  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 283)) ;
          }
        }
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 287)) ;
      var_returnedBank_5973 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 288)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_noreturn_5769.boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 290)), GGS_string ("a \"noreturn\" routine cannot accept \"bank:returned\" setting"), fixItArray5  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 290)) ;
        }
      }
      var_preservesBank_5998 = GGS_bool (false) ;
      var_requiredBank_5947 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_syntax.galgas3", 293)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 293)), inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 296)) ;
  GGS_labelMap var_labelMap_7160 = GGS_labelMap::init (inCompiler COMMA_HERE) ;
  GGS_pic_31__38_InstructionList var_instructionList_7227 ;
  nt_instruction_5F_list_ (var_instructionList_7227, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, var_labelMap_7160, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 303)) ;
  ioArgument_ioRoutineDefinitionList.addAssignOperation (var_routineName_5895, var_requiredBank_5947, var_returnedBank_5973, var_preservesBank_5998, var_noreturn_5769, var_instructionList_7227, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 304))  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 304)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_routine_5F_definition_i6_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 250)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 253)) ;
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 254)) ;
  switch (select_pic_31__38__5F_syntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 263)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 264)) ;
    switch (select_pic_31__38__5F_syntax_13 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 266)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 274)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 275)) ;
      switch (select_pic_31__38__5F_syntax_14 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 280)) ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 281)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 287)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 288)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 296)) ;
  nt_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 303)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i7_ (GGS_pic_31__38_ConditionExpression & outArgument_outCondition,
                                                                                        Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 311)) ;
  GGS_pic_31__38_ConditionExpression var_condition_7606 ;
  nt_condition_5F_factor_ (var_condition_7606, inCompiler) ;
  outArgument_outCondition = GGS_pic_31__38_NegateCondition::init_21_ (var_condition_7606, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i7_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 311)) ;
  nt_condition_5F_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i8_ (GGS_pic_31__38_ConditionExpression & outArgument_outCondition,
                                                                                        Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  nt_condition_5F_expression_ (outArgument_outCondition, inCompiler) ;
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
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 330)) ;
      var_isIncrement_7988 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 332)) ;
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
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 339)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 339)) ;
      var_W_5F_isDestination_8156 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_conditionString_8300 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 341)) ;
    GGS_string var_condition_8332 = var_conditionString_8300.readProperty_string ().getter_uppercased (SOURCE_FILE ("pic18_syntax.galgas3", 342)) ;
    GGS_bool var_branchIfZero_8392 ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_condition_8332.objectCompare (GGS_string ("Z"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_branchIfZero_8392 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, var_condition_8332.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          var_branchIfZero_8392 = GGS_bool (false) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_conditionString_8300.readProperty_location (), GGS_string ("invalid '").add_operation (var_conditionString_8300.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 349)).add_operation (GGS_string ("' condition; valid ones are: 'z' and 'nz'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 349)), fixItArray2  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 349)) ;
        var_branchIfZero_8392.drop () ; // Release error dropped variable
      }
    }
    outArgument_outCondition = GGS_pic_31__38_IncDecRegisterInCondition::init_21__21__21__21_ (var_registerExpression_8123, var_isIncrement_7988, var_W_5F_isDestination_8156, var_branchIfZero_8392, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    GGS_registerExpression var_registerExpression_8850 ;
    nt_register_5F_parsing_ (var_registerExpression_8850, inCompiler) ;
    GGS_pic_31__38_RegisterComparison var_comparison_8902 ;
    switch (select_pic_31__38__5F_syntax_18 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 362)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 362)) ;
      var_comparison_8902 = GGS_pic_31__38_RegisterComparison::class_func_notEqual (SOURCE_FILE ("pic18_syntax.galgas3", 362)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 364)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 364)) ;
      var_comparison_8902 = GGS_pic_31__38_RegisterComparison::class_func_equal (SOURCE_FILE ("pic18_syntax.galgas3", 364)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 366)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 366)) ;
      var_comparison_8902 = GGS_pic_31__38_RegisterComparison::class_func_lowerOrEqual (SOURCE_FILE ("pic18_syntax.galgas3", 366)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 368)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 368)) ;
      var_comparison_8902 = GGS_pic_31__38_RegisterComparison::class_func_greaterOrEqual (SOURCE_FILE ("pic18_syntax.galgas3", 368)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 370)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 370)) ;
      var_comparison_8902 = GGS_pic_31__38_RegisterComparison::class_func_lower (SOURCE_FILE ("pic18_syntax.galgas3", 370)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 372)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 372)) ;
      var_comparison_8902 = GGS_pic_31__38_RegisterComparison::class_func_greater (SOURCE_FILE ("pic18_syntax.galgas3", 372)) ;
    } break ;
    default:
      break ;
    }
    outArgument_outCondition = GGS_pic_31__38_RegisterComparisonCondition::init_21__21_ (var_registerExpression_8850, var_comparison_8902, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GGS_registerExpression var_registerExpression_9503 ;
    nt_register_5F_parsing_ (var_registerExpression_9503, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 379)) ;
    GGS_bitNumberExpression var_bitNumberExpression_9560 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_9560, inCompiler) ;
    outArgument_outCondition = GGS_pic_31__38_BitTestInStructuredCondition::init_21__21_ (var_registerExpression_9503, var_bitNumberExpression_9560, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GGS_registerExpression var_registerName_9728 ;
    nt_register_5F_parsing_ (var_registerName_9728, inCompiler) ;
    GGS_lstring var_conditionString_9772 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 387)) ;
    GGS_string var_condition_9804 = var_conditionString_9772.readProperty_string ().getter_uppercased (SOURCE_FILE ("pic18_syntax.galgas3", 388)) ;
    GGS_bool var_branchIfZero_9864 ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, var_condition_9804.objectCompare (GGS_string ("Z"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        var_branchIfZero_9864 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_condition_9804.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          var_branchIfZero_9864 = GGS_bool (false) ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (var_conditionString_9772.readProperty_location (), GGS_string ("invalid '").add_operation (var_conditionString_9772.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 395)).add_operation (GGS_string ("' condition; valid ones are: 'z' and 'nz'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 395)), fixItArray5  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 395)) ;
        var_branchIfZero_9864.drop () ; // Release error dropped variable
      }
    }
    outArgument_outCondition = GGS_pic_31__38_RegisterTestCondition::init_21__21_ (var_registerName_9728, var_branchIfZero_9864, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    GGS_conditional_5F_branch var_conditional_5F_branch_10258 ;
    GGS_lstring var_conditionString_10308 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 402)) ;
    GGS_string var_condition_10340 = var_conditionString_10308.readProperty_string ().getter_uppercased (SOURCE_FILE ("pic18_syntax.galgas3", 403)) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::equal, var_condition_10340.objectCompare (GGS_string ("Z"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        var_conditional_5F_branch_10258 = GGS_conditional_5F_branch::class_func_bz (SOURCE_FILE ("pic18_syntax.galgas3", 405)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = GGS_bool (ComparisonKind::equal, var_condition_10340.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          var_conditional_5F_branch_10258 = GGS_conditional_5F_branch::class_func_bnz (SOURCE_FILE ("pic18_syntax.galgas3", 407)) ;
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::equal, var_condition_10340.objectCompare (GGS_string ("NN"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            var_conditional_5F_branch_10258 = GGS_conditional_5F_branch::class_func_bnn (SOURCE_FILE ("pic18_syntax.galgas3", 409)) ;
          }
        }
        if (GalgasBool::boolFalse == test_8) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, var_condition_10340.objectCompare (GGS_string ("N"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              var_conditional_5F_branch_10258 = GGS_conditional_5F_branch::class_func_bn (SOURCE_FILE ("pic18_syntax.galgas3", 411)) ;
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::equal, var_condition_10340.objectCompare (GGS_string ("C"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                var_conditional_5F_branch_10258 = GGS_conditional_5F_branch::class_func_bc (SOURCE_FILE ("pic18_syntax.galgas3", 413)) ;
              }
            }
            if (GalgasBool::boolFalse == test_10) {
              GalgasBool test_11 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_11) {
                test_11 = GGS_bool (ComparisonKind::equal, var_condition_10340.objectCompare (GGS_string ("NC"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_11) {
                  var_conditional_5F_branch_10258 = GGS_conditional_5F_branch::class_func_bnc (SOURCE_FILE ("pic18_syntax.galgas3", 415)) ;
                }
              }
              if (GalgasBool::boolFalse == test_11) {
                GalgasBool test_12 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_12) {
                  test_12 = GGS_bool (ComparisonKind::equal, var_condition_10340.objectCompare (GGS_string ("OV"))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_12) {
                    var_conditional_5F_branch_10258 = GGS_conditional_5F_branch::class_func_bov (SOURCE_FILE ("pic18_syntax.galgas3", 417)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_12) {
                  GalgasBool test_13 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_13) {
                    test_13 = GGS_bool (ComparisonKind::equal, var_condition_10340.objectCompare (GGS_string ("NOV"))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_13) {
                      var_conditional_5F_branch_10258 = GGS_conditional_5F_branch::class_func_bnov (SOURCE_FILE ("pic18_syntax.galgas3", 419)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_13) {
                    GenericArray <FixItDescription> fixItArray14 ;
                    inCompiler->emitSemanticError (var_conditionString_10308.readProperty_location (), GGS_string ("invalid '").add_operation (var_conditionString_10308.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 421)).add_operation (GGS_string ("' condition; valid ones are: 'z', 'nz', 'n', 'nn', 'c', 'nc', 'ov' and 'nov'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 421)), fixItArray14  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 421)) ;
                    var_conditional_5F_branch_10258.drop () ; // Release error dropped variable
                  }
                }
              }
            }
          }
        }
      }
    }
    outArgument_outCondition = GGS_pic_31__38_BccInStructuredCondition::init_21__21_ (var_conditionString_10308.readProperty_location (), var_conditional_5F_branch_10258, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_factor_i9_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_15 (inCompiler)) {
  case 1: {
    switch (select_pic_31__38__5F_syntax_16 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 330)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 332)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_17 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 339)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 339)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 341)) ;
  } break ;
  case 2: {
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_18 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 362)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 362)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 364)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 364)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 366)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 366)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 368)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 368)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 370)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 370)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 372)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 372)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 379)) ;
    nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 4: {
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 387)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 402)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_expression_i10_ (GGS_pic_31__38_ConditionExpression & outArgument_outCondition,
                                                                                             Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 433)) ;
  nt_condition_5F_term_ (outArgument_outCondition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_pic_31__38__5F_syntax_19 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 437)) ;
      GGS_pic_31__38_ConditionExpression var_c_11583 ;
      nt_condition_5F_term_ (var_c_11583, inCompiler) ;
      GGS_pic_31__38_ConditionExpression var_rc_11619 = GGS_pic_31__38_NegateCondition::init_21_ (var_c_11583, inCompiler COMMA_HERE) ;
      GGS_pic_31__38_ConditionExpression var_lc_11686 = GGS_pic_31__38_NegateCondition::init_21_ (outArgument_outCondition, inCompiler COMMA_HERE) ;
      outArgument_outCondition = GGS_pic_31__38_NegateCondition::init_21_ (GGS_pic_31__38_AndCondition::init_21__21_ (var_lc_11686, var_rc_11619, inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 443)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_expression_i10_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 433)) ;
  nt_condition_5F_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_pic_31__38__5F_syntax_19 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 437)) ;
      nt_condition_5F_term_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 443)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_term_i11_ (GGS_pic_31__38_ConditionExpression & outArgument_outCondition,
                                                                                       Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  nt_condition_5F_factor_ (outArgument_outCondition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_pic_31__38__5F_syntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 453)) ;
      GGS_pic_31__38_ConditionExpression var_c_12058 ;
      nt_condition_5F_factor_ (var_c_12058, inCompiler) ;
      outArgument_outCondition = GGS_pic_31__38_AndCondition::init_21__21_ (outArgument_outCondition, var_c_12058, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_condition_5F_term_i11_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_pic_31__38__5F_syntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 453)) ;
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
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 463)) ;
  outArgument_outBlockTermination = GGS_exitBlockTerminationForBlockInstruction::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 464)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i12_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 463)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i13_ (GGS_abstractBlockTerminationForBlockInstruction & outArgument_outBlockTermination,
                                                                                          Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outBlockTermination.drop () ; // Release 'out' argument
  GGS_lstring var_nextBlockName_12553 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 471)) ;
  outArgument_outBlockTermination = GGS_gotoTerminationForBlockInstruction::init_21_ (var_nextBlockName_12553, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i13_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 471)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i14_ (GGS_abstractBlockTerminationForBlockInstruction & outArgument_outBlockTermination,
                                                                                          Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outBlockTermination.drop () ; // Release 'out' argument
  GGS_location var_location_12816 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 479)) ;
  GGS_pic_31__38_ConditionExpression var_condition_12899 ;
  nt_condition_5F_expression_ (var_condition_12899, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3F_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 481)) ;
  GGS_abstractBlockTerminationForBlockInstruction var_terminationIfTrue_12989 ;
  nt_block_5F_termination_ (var_terminationIfTrue_12989, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 483)) ;
  GGS_abstractBlockTerminationForBlockInstruction var_terminationIfFalse_13087 ;
  nt_block_5F_termination_ (var_terminationIfFalse_13087, inCompiler) ;
  outArgument_outBlockTermination = GGS_testTerminationForBlockInstruction::init_21__21__21__21_ (var_condition_12899, var_terminationIfTrue_12989, var_terminationIfFalse_13087, var_location_12816, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i14_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3F_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 481)) ;
  nt_block_5F_termination_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 483)) ;
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
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 497)) ;
    GGS_lstring var_switchLabel_13491 ;
    switch (select_pic_31__38__5F_syntax_22 (inCompiler)) {
    case 1: {
      var_switchLabel_13491 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 500)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_switchLabel_13491 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 502)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_switchLabel_13491, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 503)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_13642 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 505)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 506)) ;
    GGS_pic_31__38_SwitchInstructionCaseList var_caseList_13727 = GGS_pic_31__38_SwitchInstructionCaseList::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_case COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 509)) ;
      GGS_lstring var_caseLabel_13785 ;
      switch (select_pic_31__38__5F_syntax_24 (inCompiler)) {
      case 1: {
        var_caseLabel_13785 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 512)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        var_caseLabel_13785 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 514)) ;
      } break ;
      default:
        break ;
      }
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::notEqual, var_switchLabel_13491.readProperty_string ().objectCompare (var_caseLabel_13785.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GGS_string temp_2 ;
          const GalgasBool test_3 = GGS_bool (ComparisonKind::notEqual, var_switchLabel_13491.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            temp_2 = var_switchLabel_13491.readProperty_string () ;
          }else if (GalgasBool::boolFalse == test_3) {
            temp_2 = GGS_string ("empty") ;
          }
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_caseLabel_13785.readProperty_location (), GGS_string ("'case' label does not match 'switch' label, it should be ").add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 517)), fixItArray4  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 517)) ;
        }
      }
      GGS_location var_caseLocation_14143 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 520)) ;
      GGS_pic_31__38_CaseExpressionList var_caseExpressionList_14183 = GGS_pic_31__38_CaseExpressionList::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        switch (select_pic_31__38__5F_syntax_26 (inCompiler)) {
        case 1: {
          GGS_immediatExpression var_caseExpression_14317 ;
          nt_immediate_5F_expression_ (var_caseExpression_14317, inCompiler) ;
          var_caseExpressionList_14183.addAssignOperation (GGS_pic_31__38_SimpleConstantCaseItem::init_21__21_ (var_caseExpression_14317, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 525)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 525)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 527)) ;
          GGS_immediatExpression var_minExpression_14512 ;
          nt_immediate_5F_expression_ (var_minExpression_14512, inCompiler) ;
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 529)) ;
          GGS_immediatExpression var_maxExpression_14598 ;
          nt_immediate_5F_expression_ (var_maxExpression_14598, inCompiler) ;
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 531)) ;
          var_caseExpressionList_14183.addAssignOperation (GGS_pic_31__38_IntervalCaseItem::init_21__21__21_ (var_minExpression_14512, var_maxExpression_14598, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 532)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 532)) ;
        } break ;
        default:
          break ;
        }
        if (select_pic_31__38__5F_syntax_25 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 535)) ;
        }else{
          repeatFlag_5 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 537)) ;
      GGS_pic_31__38_InstructionList var_instructionList_14847 ;
      nt_instruction_5F_list_ (var_instructionList_14847, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      var_caseList_13727.addAssignOperation (var_caseLocation_14143, var_caseExpressionList_14183, var_instructionList_14847  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 543)) ;
      if (select_pic_31__38__5F_syntax_23 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    GGS_pic_31__38_InstructionList var_elseInstructionList_15063 ;
    GGS_location var_elseLocation_15101 ;
    switch (select_pic_31__38__5F_syntax_27 (inCompiler)) {
    case 1: {
      var_elseLocation_15101 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 549)) ;
      var_elseInstructionList_15063 = GGS_pic_31__38_InstructionList::init (inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 552)) ;
      GGS_lstring var_elseLabel_15253 ;
      switch (select_pic_31__38__5F_syntax_28 (inCompiler)) {
      case 1: {
        var_elseLabel_15253 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 555)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        var_elseLabel_15253 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 557)) ;
      } break ;
      default:
        break ;
      }
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, var_switchLabel_13491.readProperty_string ().objectCompare (var_elseLabel_15253.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GGS_string temp_7 ;
          const GalgasBool test_8 = GGS_bool (ComparisonKind::notEqual, var_switchLabel_13491.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            temp_7 = var_switchLabel_13491.readProperty_string () ;
          }else if (GalgasBool::boolFalse == test_8) {
            temp_7 = GGS_string ("empty") ;
          }
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_elseLabel_15253.readProperty_location (), GGS_string ("'else' label does not match 'switch' label, it should be ").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 560)), fixItArray9  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 560)) ;
        }
      }
      var_elseLocation_15101 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 563)) ;
      nt_instruction_5F_list_ (var_elseInstructionList_15063, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_switch::init_21__21__21__21_ (var_instructionLocation_13642, var_caseList_13727, var_elseLocation_15101, var_elseInstructionList_15063, inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 575)) ;
    GGS_lstring var_endSwitchLabel_15938 ;
    switch (select_pic_31__38__5F_syntax_29 (inCompiler)) {
    case 1: {
      var_endSwitchLabel_15938 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 578)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endSwitchLabel_15938 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 580)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = GGS_bool (ComparisonKind::notEqual, var_switchLabel_13491.readProperty_string ().objectCompare (var_endSwitchLabel_15938.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GGS_string temp_11 ;
        const GalgasBool test_12 = GGS_bool (ComparisonKind::notEqual, var_switchLabel_13491.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          temp_11 = var_switchLabel_13491.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_12) {
          temp_11 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (var_switchLabel_13491.readProperty_location (), GGS_string ("'end' label does not match 'switch' label, it should be ").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 583)), fixItArray13  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 583)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_block COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 587)) ;
    GGS_location var_instructionLocation_16314 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 588)) ;
    GGS_lstring var_startBlockName_16382 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 589)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 590)) ;
    GGS_pic_31__38_BlockInstructionBlockList var_blockList_16413 = GGS_pic_31__38_BlockInstructionBlockList::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_14 = true ;
    while (repeatFlag_14) {
      GGS_lstring var_blockName_16503 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 593)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 594)) ;
      GGS_pic_31__38_InstructionList var_instructionList_16583 ;
      nt_instruction_5F_list_ (var_instructionList_16583, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 600)) ;
      GGS_location var_endOfBlock_16712 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 601)) ;
      GGS_abstractBlockTerminationForBlockInstruction var_blockTermination_16816 ;
      nt_block_5F_termination_ (var_blockTermination_16816, inCompiler) ;
      var_blockList_16413.addAssignOperation (var_blockName_16503, var_instructionList_16583, var_blockTermination_16816, var_endOfBlock_16712  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 603)) ;
      if (select_pic_31__38__5F_syntax_30 (inCompiler) == 2) {
      }else{
        repeatFlag_14 = false ;
      }
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_block::init_21__21__21__21_ (var_instructionLocation_16314, var_startBlockName_16382, var_blockList_16413, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 610)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 611)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 613)) ;
    GGS_lstring var_doLabel_17105 ;
    switch (select_pic_31__38__5F_syntax_31 (inCompiler)) {
    case 1: {
      var_doLabel_17105 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 616)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_doLabel_17105 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 618)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_17105, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 619)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_17240 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 621)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 622)) ;
    GGS_lstring var_constantName_17307 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 623)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 624)) ;
    GGS_immediatExpression var_lowBoundExpression_17380 ;
    nt_immediate_5F_expression_ (var_lowBoundExpression_17380, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 626)) ;
    GGS_immediatExpression var_highBoundExpression_17461 ;
    nt_immediate_5F_expression_ (var_highBoundExpression_17461, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 628)) ;
    GGS_pic_31__38_InstructionList var_instructionList_17545 ;
    nt_instruction_5F_list_ (var_instructionList_17545, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_repetitionStatique::init_21__21__21__21__21__21_ (var_instructionLocation_17240, var_constantName_17307, var_lowBoundExpression_17380, var_highBoundExpression_17461, var_instructionList_17545, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 640)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 642)) ;
    GGS_lstring var_endDoLabel_17876 ;
    switch (select_pic_31__38__5F_syntax_32 (inCompiler)) {
    case 1: {
      var_endDoLabel_17876 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 645)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endDoLabel_17876 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 647)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = GGS_bool (ComparisonKind::notEqual, var_doLabel_17105.readProperty_string ().objectCompare (var_endDoLabel_17876.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GGS_string temp_16 ;
        const GalgasBool test_17 = GGS_bool (ComparisonKind::notEqual, var_doLabel_17105.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_17) {
          temp_16 = var_doLabel_17105.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_17) {
          temp_16 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (var_endDoLabel_17876.readProperty_location (), GGS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 650)), fixItArray18  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 650)) ;
      }
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checkbank COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 654)) ;
    GGS_luint var_bankIndex_18231 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 655)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_checkbank::init_21__21_ (var_bankIndex_18231.readProperty_location (), var_bankIndex_18231.readProperty_uint (), inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checknobank COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 658)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_checknobank::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 659)), inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    switch (select_pic_31__38__5F_syntax_33 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ldataptr COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 662)) ;
      GenericArray <FixItDescription> fixItArray19 ;
      appendFixItActions (fixItArray19, EnumFixItKind::fixItReplace, GGS_string ("ldata16ptr")) ;
      inCompiler->emitSemanticWarning (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 663)), GGS_string ("obsolete keyword"), fixItArray19  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 663)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ldata_31__36_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 665)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_18575 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 667)) ;
    GGS_lstring var_dataName_18634 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 668)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 669)) ;
    GGS_luint var_dataIndex_18677 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 670)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 671)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::init_21__21__21_ (var_instructionLocation_18575, var_dataName_18634, var_dataIndex_18677, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ldata_38_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 674)) ;
    GGS_location var_instructionLocation_18829 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 675)) ;
    GGS_lstring var_dataName_18888 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 676)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 677)) ;
    GGS_luint var_dataIndex_18931 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 678)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 679)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_LDATA_38_PTR::init_21__21__21_ (var_instructionLocation_18829, var_dataName_18888, var_dataIndex_18931, inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ltblptr COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 682)) ;
    GGS_location var_instructionLocation_19080 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 683)) ;
    GGS_immediatExpression var_expression_19169 ;
    nt_immediate_5F_expression_ (var_expression_19169, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_LTBLPTR::init_21__21_ (var_instructionLocation_19080, var_expression_19169, inCompiler COMMA_HERE) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 687)) ;
    GGS_location var_instructionLocation_19300 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 688)) ;
    GGS_luint var_bank_19363 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 689)) ;
    GGS_bool var_warningOnUselessBanksel_19382 ;
    switch (select_pic_31__38__5F_syntax_34 (inCompiler)) {
    case 1: {
      var_warningOnUselessBanksel_19382 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 694)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 695)) ;
      var_warningOnUselessBanksel_19382 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_banksel::init_21__21__21_ (var_instructionLocation_19300, var_bank_19363, var_warningOnUselessBanksel_19382, inCompiler COMMA_HERE) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 700)) ;
    GGS_location var_instructionLocation_19667 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 701)) ;
    GGS_registerExpression var_register_19752 ;
    nt_register_5F_parsing_ (var_register_19752, inCompiler) ;
    GGS_bool var_warningOnUselessBanksel_19775 ;
    switch (select_pic_31__38__5F_syntax_35 (inCompiler)) {
    case 1: {
      var_warningOnUselessBanksel_19775 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 707)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 708)) ;
      var_warningOnUselessBanksel_19775 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_banksel_5F_register::init_21__21__21_ (var_instructionLocation_19667, var_register_19752, var_warningOnUselessBanksel_19775, inCompiler COMMA_HERE) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nobank COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 713)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_nobanksel::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 714)), inCompiler COMMA_HERE) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksave COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 716)) ;
    GGS_location var_instructionLocation_20159 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 717)) ;
    GGS_registerExpression var_register_20244 ;
    nt_register_5F_parsing_ (var_register_20244, inCompiler) ;
    GGS_pic_31__38_InstructionList var_instructionList_20309 ;
    nt_instruction_5F_list_ (var_instructionList_20309, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 724)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_savebank::init_21__21__21__21_ (var_instructionLocation_20159, var_register_20244, var_instructionList_20309, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 729)), inCompiler COMMA_HERE) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 732)) ;
    GGS_location var_instructionLocation_20594 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 733)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 734)) ;
    GGS_immediatExpression var_sizeExpression_20671 ;
    nt_immediate_5F_expression_ (var_sizeExpression_20671, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 736)) ;
    switch (select_pic_31__38__5F_syntax_36 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_retlw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 738)) ;
      GGS_immediatExpressionList var_argumentList_20729 = GGS_immediatExpressionList::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_20 = true ;
      while (repeatFlag_20) {
        GGS_immediatExpression var_expression_20819 ;
        nt_immediate_5F_expression_ (var_expression_20819, inCompiler) ;
        var_argumentList_20729.addAssignOperation (var_expression_20819, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 742))  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 742)) ;
        if (select_pic_31__38__5F_syntax_37 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 744)) ;
        }else{
          repeatFlag_20 = false ;
        }
      }
      outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_computed_5F_retlw::init_21__21__21__21_ (var_instructionLocation_20594, var_sizeExpression_20671, var_argumentList_20729, GGS_bool (true), inCompiler COMMA_HERE) ;
      ioArgument_ioNeedsComputedGoto_32_ = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 753)) ;
      GGS_lstringlist var_argumentList_21127 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_21 = true ;
      while (repeatFlag_21) {
        GGS_lstring var_targetRoutine_21205 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 756)) ;
        var_argumentList_21127.addAssignOperation (var_targetRoutine_21205  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 757)) ;
        if (select_pic_31__38__5F_syntax_38 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 759)) ;
        }else{
          repeatFlag_21 = false ;
        }
      }
      outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_computed_5F_bra::init_21__21__21__21_ (var_instructionLocation_20594, var_sizeExpression_20671, var_argumentList_21127, GGS_bool (true), inCompiler COMMA_HERE) ;
      ioArgument_ioNeedsComputedGoto_32_ = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 768)) ;
      GGS_lstringlist var_argumentList_21524 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_22 = true ;
      while (repeatFlag_22) {
        GGS_lstring var_targetRoutine_21602 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 771)) ;
        var_argumentList_21524.addAssignOperation (var_targetRoutine_21602  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 772)) ;
        if (select_pic_31__38__5F_syntax_39 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 774)) ;
        }else{
          repeatFlag_22 = false ;
        }
      }
      outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_computed_5F_goto::init_21__21__21__21_ (var_instructionLocation_20594, var_sizeExpression_20671, var_argumentList_21524, GGS_bool (true), inCompiler COMMA_HERE) ;
      ioArgument_ioNeedsComputedGoto_34_ = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 783)) ;
      GGS_lstringlist var_argumentList_21923 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_23 = true ;
      while (repeatFlag_23) {
        GGS_lstring var_targetRoutine_22001 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 786)) ;
        var_argumentList_21923.addAssignOperation (var_targetRoutine_22001  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 787)) ;
        if (select_pic_31__38__5F_syntax_40 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 789)) ;
        }else{
          repeatFlag_23 = false ;
        }
      }
      outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_computed_5F_rcall::init_21__21__21__21_ (var_instructionLocation_20594, var_sizeExpression_20671, var_argumentList_21923, GGS_bool (true), inCompiler COMMA_HERE) ;
      ioArgument_ioNeedsComputedGoto_34_ = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 799)) ;
    GGS_lstring var_foreverLabel_22336 ;
    switch (select_pic_31__38__5F_syntax_41 (inCompiler)) {
    case 1: {
      var_foreverLabel_22336 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 802)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_foreverLabel_22336 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 804)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_foreverLabel_22336, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 805)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_22491 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 807)) ;
    GGS_pic_31__38_InstructionList var_instructionList_22562 ;
    nt_instruction_5F_list_ (var_instructionList_22562, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 813)) ;
    GGS_lstring var_endForeverLabel_22682 ;
    switch (select_pic_31__38__5F_syntax_42 (inCompiler)) {
    case 1: {
      var_endForeverLabel_22682 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 816)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endForeverLabel_22682 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 818)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_24 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_24) {
      test_24 = GGS_bool (ComparisonKind::notEqual, var_foreverLabel_22336.readProperty_string ().objectCompare (var_endForeverLabel_22682.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_24) {
        GGS_string temp_25 ;
        const GalgasBool test_26 = GGS_bool (ComparisonKind::notEqual, var_foreverLabel_22336.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_26) {
          temp_25 = var_foreverLabel_22336.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_26) {
          temp_25 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (var_endForeverLabel_22682.readProperty_location (), GGS_string ("'end' label does not match 'fovever' label, it should be ").add_operation (temp_25, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 821)), fixItArray27  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 821)) ;
      }
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_FOREVER::init_21__21__21_ (var_instructionLocation_22491, var_instructionList_22562, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 827)), inCompiler COMMA_HERE) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 830)) ;
    GGS_location var_instructionLocation_23194 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 831)) ;
    GGS_registerExpression var_registerName_23259 ;
    nt_register_5F_parsing_ (var_registerName_23259, inCompiler) ;
    GGS_if_5F_semi_5F_colon_5F_op var_opCode_23298 ;
    switch (select_pic_31__38__5F_syntax_43 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 835)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 835)) ;
      var_opCode_23298 = GGS_if_5F_semi_5F_colon_5F_op::class_func_CPFSEQ (SOURCE_FILE ("pic18_syntax.galgas3", 835)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 837)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 837)) ;
      var_opCode_23298 = GGS_if_5F_semi_5F_colon_5F_op::class_func_CPFSGT (SOURCE_FILE ("pic18_syntax.galgas3", 837)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 839)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 839)) ;
      var_opCode_23298 = GGS_if_5F_semi_5F_colon_5F_op::class_func_CPFSLT (SOURCE_FILE ("pic18_syntax.galgas3", 839)) ;
    } break ;
    case 4: {
      GGS_lstring var_conditionString_23532 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 841)) ;
      GGS_string var_condition_23566 = var_conditionString_23532.readProperty_string ().getter_uppercased (SOURCE_FILE ("pic18_syntax.galgas3", 842)) ;
      GalgasBool test_28 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_28) {
        test_28 = GGS_bool (ComparisonKind::notEqual, var_condition_23566.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_28) {
          GenericArray <FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticError (var_conditionString_23532.readProperty_location (), GGS_string ("invalid '").add_operation (var_condition_23566, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 844)).add_operation (GGS_string ("' condition; it should be 'nz'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 844)), fixItArray29  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 844)) ;
        }
      }
      var_opCode_23298 = GGS_if_5F_semi_5F_colon_5F_op::class_func_TSTFSZ (SOURCE_FILE ("pic18_syntax.galgas3", 846)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 848)) ;
    GGS_pic_31__38_PiccoloSimpleInstruction var_instruction_23863 ;
    nt_simple_5F_instruction_ (var_instruction_23863, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::init_21__21__21__21_ (var_instructionLocation_23194, var_instruction_23863, var_opCode_23298, var_registerName_23259, inCompiler COMMA_HERE) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 856)) ;
    GGS_location var_instructionLocation_24046 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 857)) ;
    GGS_registerExpression var_registerName_24111 ;
    GGS_bitNumberExpression var_bitNumber_24153 ;
    GGS_bool var_skipIfSet_24177 ;
    switch (select_pic_31__38__5F_syntax_44 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 862)) ;
      nt_register_5F_parsing_ (var_registerName_24111, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 864)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumber_24153, inCompiler) ;
      var_skipIfSet_24177 = GGS_bool (true) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_ (var_registerName_24111, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 869)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumber_24153, inCompiler) ;
      var_skipIfSet_24177 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 873)) ;
    GGS_pic_31__38_PiccoloSimpleInstruction var_instruction_24513 ;
    nt_simple_5F_instruction_ (var_instruction_24513, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_IF_5F_BitTest::init_21__21__21__21__21_ (var_instructionLocation_24046, var_instruction_24513, var_skipIfSet_24177, var_registerName_24111, var_bitNumber_24153, inCompiler COMMA_HERE) ;
  } break ;
  case 17: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 883)) ;
    GGS_location var_instructionLocation_24715 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 884)) ;
    GGS_bool var_increment_24766 ;
    switch (select_pic_31__38__5F_syntax_45 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 887)) ;
      var_increment_24766 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 889)) ;
      var_increment_24766 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_registerExpression var_registerName_24895 ;
    nt_register_5F_parsing_ (var_registerName_24895, inCompiler) ;
    GGS_bool var_w_5F_isTarget_24922 ;
    switch (select_pic_31__38__5F_syntax_46 (inCompiler)) {
    case 1: {
      var_w_5F_isTarget_24922 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 896)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 896)) ;
      var_w_5F_isTarget_24922 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_bool var_skipIfZero_25034 ;
    GGS_lstring var_conditionString_25076 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 899)) ;
    GGS_string var_condition_25108 = var_conditionString_25076.readProperty_string ().getter_uppercased (SOURCE_FILE ("pic18_syntax.galgas3", 900)) ;
    GalgasBool test_30 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_30) {
      test_30 = GGS_bool (ComparisonKind::equal, var_condition_25108.objectCompare (GGS_string ("Z"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_30) {
        var_skipIfZero_25034 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_30) {
      GalgasBool test_31 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_31) {
        test_31 = GGS_bool (ComparisonKind::equal, var_condition_25108.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_31) {
          var_skipIfZero_25034 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_31) {
        GenericArray <FixItDescription> fixItArray32 ;
        inCompiler->emitSemanticError (var_conditionString_25076.readProperty_location (), GGS_string ("invalid '").add_operation (var_condition_25108, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 906)).add_operation (GGS_string ("' condition; it should be 'z' or 'nz'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 906)), fixItArray32  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 906)) ;
        var_skipIfZero_25034.drop () ; // Release error dropped variable
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 908)) ;
    GGS_pic_31__38_PiccoloSimpleInstruction var_instruction_25464 ;
    nt_simple_5F_instruction_ (var_instruction_25464, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_IF_5F_IncDec::init_21__21__21__21__21__21_ (var_instructionLocation_24715, var_instruction_25464, var_increment_24766, var_skipIfZero_25034, var_registerName_24895, var_w_5F_isTarget_24922, inCompiler COMMA_HERE) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 918)) ;
    GGS_lstring var_ifLabel_25678 ;
    switch (select_pic_31__38__5F_syntax_47 (inCompiler)) {
    case 1: {
      var_ifLabel_25678 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 921)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_ifLabel_25678 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 923)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_ifLabel_25678, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 924)) ;
      }
    } break ;
    default:
      break ;
    }
    nt_structured_5F_if_5F_instruction_ (var_ifLabel_25678, outArgument_outInstruction, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 932)) ;
    GGS_lstring var_endIfLabel_25978 ;
    switch (select_pic_31__38__5F_syntax_48 (inCompiler)) {
    case 1: {
      var_endIfLabel_25978 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 935)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endIfLabel_25978 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 937)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_33 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_33) {
      test_33 = GGS_bool (ComparisonKind::notEqual, var_ifLabel_25678.readProperty_string ().objectCompare (var_endIfLabel_25978.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_33) {
        GGS_string temp_34 ;
        const GalgasBool test_35 = GGS_bool (ComparisonKind::notEqual, var_ifLabel_25678.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_35) {
          temp_34 = var_ifLabel_25678.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_35) {
          temp_34 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray36 ;
        inCompiler->emitSemanticError (var_endIfLabel_25978.readProperty_location (), GGS_string ("'end' label does not match 'if' label, it should be ").add_operation (temp_34, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 940)), fixItArray36  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 940)) ;
      }
    }
  } break ;
  case 19: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 944)) ;
    GGS_lstring var_doLabel_26317 ;
    switch (select_pic_31__38__5F_syntax_49 (inCompiler)) {
    case 1: {
      var_doLabel_26317 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 947)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_doLabel_26317 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 949)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_26317, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 950)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_26462 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 952)) ;
    GGS_pic_31__38_InstructionList var_repeatedInstructionList_26533 ;
    nt_instruction_5F_list_ (var_repeatedInstructionList_26533, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    GGS_location var_endOfRepeatedInstructionList_26642 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 958)) ;
    GGS_pic_31__38_DoWhilePartList var_whilePartList_26696 = GGS_pic_31__38_DoWhilePartList::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_37 = true ;
    while (repeatFlag_37) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 961)) ;
      GGS_lstring var_whileLabel_26780 ;
      switch (select_pic_31__38__5F_syntax_51 (inCompiler)) {
      case 1: {
        var_whileLabel_26780 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 964)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        var_whileLabel_26780 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 966)) ;
      } break ;
      default:
        break ;
      }
      GalgasBool test_38 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_38) {
        test_38 = GGS_bool (ComparisonKind::notEqual, var_doLabel_26317.readProperty_string ().objectCompare (var_whileLabel_26780.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_38) {
          GGS_string temp_39 ;
          const GalgasBool test_40 = GGS_bool (ComparisonKind::notEqual, var_doLabel_26317.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_40) {
            temp_39 = var_doLabel_26317.readProperty_string () ;
          }else if (GalgasBool::boolFalse == test_40) {
            temp_39 = GGS_string ("empty") ;
          }
          GenericArray <FixItDescription> fixItArray41 ;
          inCompiler->emitSemanticError (var_whileLabel_26780.readProperty_location (), GGS_string ("'while' label does not match 'do' label, it should be ").add_operation (temp_39, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 969)), fixItArray41  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 969)) ;
        }
      }
      GGS_pic_31__38_ConditionExpression var_whileCondition_27142 ;
      nt_condition_5F_expression_ (var_whileCondition_27142, inCompiler) ;
      GGS_pic_31__38_InstructionList var_instructionList_27195 ;
      nt_instruction_5F_list_ (var_instructionList_27195, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      var_whilePartList_26696.addAssignOperation (var_whileCondition_27142, var_instructionList_27195, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 978))  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 978)) ;
      if (select_pic_31__38__5F_syntax_50 (inCompiler) == 2) {
      }else{
        repeatFlag_37 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 981)) ;
    GGS_lstring var_endDoLabel_27411 ;
    switch (select_pic_31__38__5F_syntax_52 (inCompiler)) {
    case 1: {
      var_endDoLabel_27411 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 984)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endDoLabel_27411 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 986)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_42 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_42) {
      test_42 = GGS_bool (ComparisonKind::notEqual, var_doLabel_26317.readProperty_string ().objectCompare (var_endDoLabel_27411.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_42) {
        GGS_string temp_43 ;
        const GalgasBool test_44 = GGS_bool (ComparisonKind::notEqual, var_doLabel_26317.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_44) {
          temp_43 = var_doLabel_26317.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_44) {
          temp_43 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray45 ;
        inCompiler->emitSemanticError (var_endDoLabel_27411.readProperty_location (), GGS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_43, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 989)), fixItArray45  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 989)) ;
      }
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_do_5F_while::init_21__21__21__21_ (var_instructionLocation_26462, var_repeatedInstructionList_26533, var_endOfRepeatedInstructionList_26642, var_whilePartList_26696, inCompiler COMMA_HERE) ;
  } break ;
  case 20: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 999)) ;
    GGS_location var_instructionLocation_27924 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1000)) ;
    GGS_luint var_occurrenceFactor_27987 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1001)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_MNOP::init_21__21_ (var_instructionLocation_27924, var_occurrenceFactor_27987, inCompiler COMMA_HERE) ;
  } break ;
  case 21: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nopbra COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1004)) ;
    GGS_location var_instructionLocation_28116 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1005)) ;
    GGS_luint var_occurrenceFactor_28179 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1006)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_NOPBRA::init_21__21_ (var_instructionLocation_28116, var_occurrenceFactor_28179, inCompiler COMMA_HERE) ;
  } break ;
  case 22: {
    GGS_conditional_5F_branch var_condition_28316 ;
    switch (select_pic_31__38__5F_syntax_53 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bc COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1011)) ;
      var_condition_28316 = GGS_conditional_5F_branch::class_func_bc (SOURCE_FILE ("pic18_syntax.galgas3", 1011)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnc COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1013)) ;
      var_condition_28316 = GGS_conditional_5F_branch::class_func_bnc (SOURCE_FILE ("pic18_syntax.galgas3", 1013)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bn COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1015)) ;
      var_condition_28316 = GGS_conditional_5F_branch::class_func_bn (SOURCE_FILE ("pic18_syntax.galgas3", 1015)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnn COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1017)) ;
      var_condition_28316 = GGS_conditional_5F_branch::class_func_bnn (SOURCE_FILE ("pic18_syntax.galgas3", 1017)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bov COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1019)) ;
      var_condition_28316 = GGS_conditional_5F_branch::class_func_bov (SOURCE_FILE ("pic18_syntax.galgas3", 1019)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnov COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1021)) ;
      var_condition_28316 = GGS_conditional_5F_branch::class_func_bnov (SOURCE_FILE ("pic18_syntax.galgas3", 1021)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bz COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1023)) ;
      var_condition_28316 = GGS_conditional_5F_branch::class_func_bz (SOURCE_FILE ("pic18_syntax.galgas3", 1023)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnz COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1025)) ;
      var_condition_28316 = GGS_conditional_5F_branch::class_func_bnz (SOURCE_FILE ("pic18_syntax.galgas3", 1025)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_28816 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1027)) ;
    GGS_lstring var_targetLabelName_28884 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1028)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JUMPCC::init_21__21__21__21_ (var_instructionLocation_28816, var_targetLabelName_28884, var_condition_28316, GGS_bool (true), inCompiler COMMA_HERE) ;
  } break ;
  case 23: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1035)) ;
    GGS_location var_instructionLocation_29083 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1036)) ;
    GGS_conditional_5F_branch var_conditional_5F_branch_29148 ;
    GGS_lstring var_conditionString_29198 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1038)) ;
    GGS_string var_condition_29230 = var_conditionString_29198.readProperty_string ().getter_uppercased (SOURCE_FILE ("pic18_syntax.galgas3", 1039)) ;
    GalgasBool test_46 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_46) {
      test_46 = GGS_bool (ComparisonKind::equal, var_condition_29230.objectCompare (GGS_string ("Z"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_46) {
        var_conditional_5F_branch_29148 = GGS_conditional_5F_branch::class_func_bz (SOURCE_FILE ("pic18_syntax.galgas3", 1041)) ;
      }
    }
    if (GalgasBool::boolFalse == test_46) {
      GalgasBool test_47 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_47) {
        test_47 = GGS_bool (ComparisonKind::equal, var_condition_29230.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_47) {
          var_conditional_5F_branch_29148 = GGS_conditional_5F_branch::class_func_bnz (SOURCE_FILE ("pic18_syntax.galgas3", 1043)) ;
        }
      }
      if (GalgasBool::boolFalse == test_47) {
        GalgasBool test_48 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_48) {
          test_48 = GGS_bool (ComparisonKind::equal, var_condition_29230.objectCompare (GGS_string ("NN"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_48) {
            var_conditional_5F_branch_29148 = GGS_conditional_5F_branch::class_func_bnn (SOURCE_FILE ("pic18_syntax.galgas3", 1045)) ;
          }
        }
        if (GalgasBool::boolFalse == test_48) {
          GalgasBool test_49 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_49) {
            test_49 = GGS_bool (ComparisonKind::equal, var_condition_29230.objectCompare (GGS_string ("N"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_49) {
              var_conditional_5F_branch_29148 = GGS_conditional_5F_branch::class_func_bn (SOURCE_FILE ("pic18_syntax.galgas3", 1047)) ;
            }
          }
          if (GalgasBool::boolFalse == test_49) {
            GalgasBool test_50 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_50) {
              test_50 = GGS_bool (ComparisonKind::equal, var_condition_29230.objectCompare (GGS_string ("C"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_50) {
                var_conditional_5F_branch_29148 = GGS_conditional_5F_branch::class_func_bc (SOURCE_FILE ("pic18_syntax.galgas3", 1049)) ;
              }
            }
            if (GalgasBool::boolFalse == test_50) {
              GalgasBool test_51 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_51) {
                test_51 = GGS_bool (ComparisonKind::equal, var_condition_29230.objectCompare (GGS_string ("NC"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_51) {
                  var_conditional_5F_branch_29148 = GGS_conditional_5F_branch::class_func_bnc (SOURCE_FILE ("pic18_syntax.galgas3", 1051)) ;
                }
              }
              if (GalgasBool::boolFalse == test_51) {
                GalgasBool test_52 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_52) {
                  test_52 = GGS_bool (ComparisonKind::equal, var_condition_29230.objectCompare (GGS_string ("OV"))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_52) {
                    var_conditional_5F_branch_29148 = GGS_conditional_5F_branch::class_func_bov (SOURCE_FILE ("pic18_syntax.galgas3", 1053)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_52) {
                  GalgasBool test_53 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_53) {
                    test_53 = GGS_bool (ComparisonKind::equal, var_condition_29230.objectCompare (GGS_string ("NOV"))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_53) {
                      var_conditional_5F_branch_29148 = GGS_conditional_5F_branch::class_func_bnov (SOURCE_FILE ("pic18_syntax.galgas3", 1055)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_53) {
                    GenericArray <FixItDescription> fixItArray54 ;
                    inCompiler->emitSemanticError (var_conditionString_29198.readProperty_location (), GGS_string ("invalid '").add_operation (var_conditionString_29198.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1057)).add_operation (GGS_string ("' condition; valid ones are: 'z', 'nz', 'n', 'nn', 'c', 'nc', 'ov' and 'nov'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1057)), fixItArray54  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1057)) ;
                    var_conditional_5F_branch_29148.drop () ; // Release error dropped variable
                  }
                }
              }
            }
          }
        }
      }
    }
    GGS_lstring var_targetLabelName_30176 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1061)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JUMPCC::init_21__21__21__21_ (var_instructionLocation_29083, var_targetLabelName_30176, var_conditional_5F_branch_29148, GGS_bool (false), inCompiler COMMA_HERE) ;
  } break ;
  case 24: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1068)) ;
    GGS_location var_instructionLocation_30385 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1069)) ;
    GGS_lstring var_targetLabelName_30453 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1070)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JUMP::init_21__21__21_ (var_instructionLocation_30385, var_targetLabelName_30453, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("pic18_syntax.galgas3", 1074)), inCompiler COMMA_HERE) ;
  } break ;
  case 25: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1076)) ;
    GGS_location var_instructionLocation_30663 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1077)) ;
    GGS_lstring var_targetLabelName_30731 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1078)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JUMP::init_21__21__21_ (var_instructionLocation_30663, var_targetLabelName_30731, GGS_jumpInstructionKind::class_func_absolute (SOURCE_FILE ("pic18_syntax.galgas3", 1082)), inCompiler COMMA_HERE) ;
  } break ;
  case 26: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1084)) ;
    GGS_location var_instructionLocation_30926 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1085)) ;
    GGS_lstring var_targetLabelName_30994 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1086)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JUMP::init_21__21__21_ (var_instructionLocation_30926, var_targetLabelName_30994, GGS_jumpInstructionKind::class_func_relative (SOURCE_FILE ("pic18_syntax.galgas3", 1090)), inCompiler COMMA_HERE) ;
  } break ;
  case 27: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1093)) ;
    GGS_lstring var_macroName_31209 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1094)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1095)) ;
    GGS_immediatExpressionList var_immediatExpressionList_31259 = GGS_immediatExpressionList::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_55 = true ;
    while (repeatFlag_55) {
      GGS_immediatExpression var_constantExpression_31353 ;
      nt_immediate_5F_expression_ (var_constantExpression_31353, inCompiler) ;
      var_immediatExpressionList_31259.addAssignOperation (var_constantExpression_31353, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1099))  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1099)) ;
      if (select_pic_31__38__5F_syntax_54 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1101)) ;
      }else{
        repeatFlag_55 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1103)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_macro::init_21__21__21_ (var_macroName_31209.readProperty_location (), var_macroName_31209, var_immediatExpressionList_31259, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 497)) ;
    switch (select_pic_31__38__5F_syntax_22 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 502)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 506)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_case COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 509)) ;
      switch (select_pic_31__38__5F_syntax_24 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 514)) ;
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
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 527)) ;
          nt_immediate_5F_expression_indexing (inCompiler) ;
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 529)) ;
          nt_immediate_5F_expression_indexing (inCompiler) ;
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 531)) ;
        } break ;
        default:
          break ;
        }
        if (select_pic_31__38__5F_syntax_25 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 535)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 537)) ;
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
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 552)) ;
      switch (select_pic_31__38__5F_syntax_28 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 557)) ;
      } break ;
      default:
        break ;
      }
      nt_instruction_5F_list_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 575)) ;
    switch (select_pic_31__38__5F_syntax_29 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 580)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_block COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 587)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 589)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 590)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 593)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 594)) ;
      nt_instruction_5F_list_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 600)) ;
      nt_block_5F_termination_indexing (inCompiler) ;
      if (select_pic_31__38__5F_syntax_30 (inCompiler) == 2) {
      }else{
        repeatFlag_2 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 611)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 613)) ;
    switch (select_pic_31__38__5F_syntax_31 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 618)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 622)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 623)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 624)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 626)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 628)) ;
    nt_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 642)) ;
    switch (select_pic_31__38__5F_syntax_32 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 647)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checkbank COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 654)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 655)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checknobank COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 658)) ;
  } break ;
  case 6: {
    switch (select_pic_31__38__5F_syntax_33 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ldataptr COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 662)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ldata_31__36_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 665)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 668)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 669)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 670)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 671)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ldata_38_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 674)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 676)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 677)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 678)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 679)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ltblptr COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 682)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 687)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 689)) ;
    switch (select_pic_31__38__5F_syntax_34 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 694)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 695)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 700)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 707)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 708)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nobank COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 713)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksave COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 716)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    nt_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 724)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 732)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 734)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 736)) ;
    switch (select_pic_31__38__5F_syntax_36 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_retlw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 738)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        nt_immediate_5F_expression_indexing (inCompiler) ;
        if (select_pic_31__38__5F_syntax_37 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 744)) ;
        }else{
          repeatFlag_3 = false ;
        }
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 753)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 756)) ;
        if (select_pic_31__38__5F_syntax_38 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 759)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 768)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 771)) ;
        if (select_pic_31__38__5F_syntax_39 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 774)) ;
        }else{
          repeatFlag_5 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 783)) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 786)) ;
        if (select_pic_31__38__5F_syntax_40 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 789)) ;
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
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 799)) ;
    switch (select_pic_31__38__5F_syntax_41 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 804)) ;
    } break ;
    default:
      break ;
    }
    nt_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 813)) ;
    switch (select_pic_31__38__5F_syntax_42 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 818)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 15: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 830)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_43 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 835)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 835)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 837)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 837)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 839)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 839)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 841)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 848)) ;
    nt_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 856)) ;
    switch (select_pic_31__38__5F_syntax_44 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 862)) ;
      nt_register_5F_parsing_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 864)) ;
      nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 869)) ;
      nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 873)) ;
    nt_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 17: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 883)) ;
    switch (select_pic_31__38__5F_syntax_45 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 887)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 889)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_pic_31__38__5F_syntax_46 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 896)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 896)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 899)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 908)) ;
    nt_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 918)) ;
    switch (select_pic_31__38__5F_syntax_47 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 923)) ;
    } break ;
    default:
      break ;
    }
    nt_structured_5F_if_5F_instruction_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 932)) ;
    switch (select_pic_31__38__5F_syntax_48 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 937)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 19: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 944)) ;
    switch (select_pic_31__38__5F_syntax_49 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 949)) ;
    } break ;
    default:
      break ;
    }
    nt_instruction_5F_list_indexing (inCompiler) ;
    bool repeatFlag_7 = true ;
    while (repeatFlag_7) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 961)) ;
      switch (select_pic_31__38__5F_syntax_51 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 966)) ;
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
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 981)) ;
    switch (select_pic_31__38__5F_syntax_52 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 986)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 20: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 999)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1001)) ;
  } break ;
  case 21: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nopbra COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1004)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1006)) ;
  } break ;
  case 22: {
    switch (select_pic_31__38__5F_syntax_53 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bc COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1011)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnc COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1013)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bn COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1015)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnn COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1017)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bov COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1019)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnov COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1021)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bz COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1023)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnz COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1025)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1028)) ;
  } break ;
  case 23: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1035)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1038)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1061)) ;
  } break ;
  case 24: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1068)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1070)) ;
  } break ;
  case 25: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1076)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1078)) ;
  } break ;
  case 26: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1084)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1086)) ;
  } break ;
  case 27: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1093)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1094)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1095)) ;
    bool repeatFlag_8 = true ;
    while (repeatFlag_8) {
      nt_immediate_5F_expression_indexing (inCompiler) ;
      if (select_pic_31__38__5F_syntax_54 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1101)) ;
      }else{
        repeatFlag_8 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1103)) ;
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
  GGS_location var_instructionLocation_31864 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1121)) ;
  GGS_pic_31__38_ConditionExpression var_structured_5F_if_5F_condition_31931 ;
  nt_condition_5F_expression_ (var_structured_5F_if_5F_condition_31931, inCompiler) ;
  GGS_pic_31__38_InstructionList var_thenInstructionList_31985 ;
  nt_instruction_5F_list_ (var_thenInstructionList_31985, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
  GGS_pic_31__38_InstructionList var_elseInstructionList_32104 ;
  switch (select_pic_31__38__5F_syntax_55 (inCompiler)) {
  case 1: {
    var_elseInstructionList_32104 = GGS_pic_31__38_InstructionList::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1132)) ;
    GGS_lstring var_elsifIfLabel_32218 ;
    switch (select_pic_31__38__5F_syntax_56 (inCompiler)) {
    case 1: {
      var_elsifIfLabel_32218 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1135)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_elsifIfLabel_32218 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1137)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elsifIfLabel_32218.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = constinArgument_ifLabel.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_elsifIfLabel_32218.readProperty_location (), GGS_string ("'elsif' label does not match 'if' label, it should be ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1140)), fixItArray3  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1140)) ;
      }
    }
    GGS_pic_31__38_PiccoloInstruction var_elsifPartInstruction_32596 ;
    nt_structured_5F_if_5F_instruction_ (constinArgument_ifLabel, var_elsifPartInstruction_32596, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    var_elseInstructionList_32104 = GGS_pic_31__38_InstructionList::init (inCompiler COMMA_HERE) ;
    var_elseInstructionList_32104.addAssignOperation (var_elsifPartInstruction_32596  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1150)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1152)) ;
    GGS_lstring var_elsifLabel_32827 ;
    switch (select_pic_31__38__5F_syntax_57 (inCompiler)) {
    case 1: {
      var_elsifLabel_32827 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1155)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_elsifLabel_32827 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1157)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elsifLabel_32827.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_ifLabel.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_elsifLabel_32827.readProperty_location (), GGS_string ("'else' label does not match 'if' label, it should be ").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1160)), fixItArray7  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1160)) ;
      }
    }
    nt_instruction_5F_list_ (var_elseInstructionList_32104, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfElsePartLocation_33285 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1169)) ;
  outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_structured_5F_if::init_21__21__21__21__21_ (var_instructionLocation_31864, var_structured_5F_if_5F_condition_31931, var_thenInstructionList_31985, var_elseInstructionList_32104, var_endOfElsePartLocation_33285, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_condition_5F_expression_indexing (inCompiler) ;
  nt_instruction_5F_list_indexing (inCompiler) ;
  switch (select_pic_31__38__5F_syntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1132)) ;
    switch (select_pic_31__38__5F_syntax_56 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1137)) ;
    } break ;
    default:
      break ;
    }
    nt_structured_5F_if_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1152)) ;
    switch (select_pic_31__38__5F_syntax_57 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1157)) ;
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
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1184)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWF (SOURCE_FILE ("pic18_syntax.galgas3", 1185)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwfc COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1187)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWFC (SOURCE_FILE ("pic18_syntax.galgas3", 1188)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1190)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ANDWF (SOURCE_FILE ("pic18_syntax.galgas3", 1191)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1193)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_COMF (SOURCE_FILE ("pic18_syntax.galgas3", 1194)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1196)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_DECF (SOURCE_FILE ("pic18_syntax.galgas3", 1197)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1199)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_INCF (SOURCE_FILE ("pic18_syntax.galgas3", 1200)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1202)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_IORWF (SOURCE_FILE ("pic18_syntax.galgas3", 1203)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1205)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_MOVF (SOURCE_FILE ("pic18_syntax.galgas3", 1206)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlcf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1208)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RLCF (SOURCE_FILE ("pic18_syntax.galgas3", 1209)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlncf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1211)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RLNCF (SOURCE_FILE ("pic18_syntax.galgas3", 1212)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrcf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1214)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RRCF (SOURCE_FILE ("pic18_syntax.galgas3", 1215)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrncf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1217)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RRNCF (SOURCE_FILE ("pic18_syntax.galgas3", 1218)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subfwb COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1220)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SUBFWB (SOURCE_FILE ("pic18_syntax.galgas3", 1221)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1223)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SUBWF (SOURCE_FILE ("pic18_syntax.galgas3", 1224)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwfb COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1226)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SUBWFB (SOURCE_FILE ("pic18_syntax.galgas3", 1227)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1229)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SWAPF (SOURCE_FILE ("pic18_syntax.galgas3", 1230)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1232)) ;
      var_baseCode_33697 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_XORWF (SOURCE_FILE ("pic18_syntax.galgas3", 1233)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_34495 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1235)) ;
    GGS_registerExpression var_registerName_34551 ;
    nt_register_5F_parsing_ (var_registerName_34551, inCompiler) ;
    GGS_bool var_W_5F_isDestination_34594 ;
    nt_optional_5F_w_5F_as_5F_dest_ (var_W_5F_isDestination_34594, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_FDA::init_21__21__21__21_ (var_instructionLocation_34495, var_baseCode_33697, var_registerName_34551, var_W_5F_isDestination_34594, inCompiler COMMA_HERE) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_bool test_1 = GGS_bool (ComparisonKind::equal, var_baseCode_33697.objectCompare (GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_MOVF (SOURCE_FILE ("pic18_syntax.galgas3", 1245)))) ;
      if (GalgasBool::boolTrue == test_1.boolEnum ()) {
        test_1 = var_W_5F_isDestination_34594.operator_not (SOURCE_FILE ("pic18_syntax.galgas3", 1245)) ;
      }
      test_0 = test_1.boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticWarning (var_instructionLocation_34495, GGS_string ("This instruction does not move data, it only sets flags. Use 'movf *, reg' instead of 'movf reg' to suppress this warning"), fixItArray2  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1246)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1250)) ;
    GGS_location var_instructionLocation_35089 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1251)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1252)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1253)) ;
    GGS_registerExpression var_registerName_35161 ;
    nt_register_5F_parsing_ (var_registerName_35161, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_FDA::init_21__21__21__21_ (var_instructionLocation_35089, GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_MOVF (SOURCE_FILE ("pic18_syntax.galgas3", 1257)), var_registerName_35161, GGS_bool (false), inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GGS_FA_5F_instruction_5F_base_5F_code var_FAinstruction_35361 ;
    switch (select_pic_31__38__5F_syntax_60 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1264)) ;
      var_FAinstruction_35361 = GGS_FA_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("pic18_syntax.galgas3", 1265)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1267)) ;
      var_FAinstruction_35361 = GGS_FA_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("pic18_syntax.galgas3", 1268)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mulwf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1270)) ;
      var_FAinstruction_35361 = GGS_FA_5F_instruction_5F_base_5F_code::class_func_MULWF (SOURCE_FILE ("pic18_syntax.galgas3", 1271)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_negf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1273)) ;
      var_FAinstruction_35361 = GGS_FA_5F_instruction_5F_base_5F_code::class_func_NEGF (SOURCE_FILE ("pic18_syntax.galgas3", 1274)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_setf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1276)) ;
      var_FAinstruction_35361 = GGS_FA_5F_instruction_5F_base_5F_code::class_func_SETF (SOURCE_FILE ("pic18_syntax.galgas3", 1277)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_35779 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1279)) ;
    GGS_registerExpression var_registerName_35844 ;
    nt_register_5F_parsing_ (var_registerName_35844, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_FA::init_21__21__21_ (var_instructionLocation_35779, var_FAinstruction_35361, var_registerName_35844, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movff COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1286)) ;
    GGS_location var_instructionLocation_36005 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1287)) ;
    GGS_registerExpression var_sourceRegisterName_36070 ;
    nt_register_5F_parsing_ (var_sourceRegisterName_36070, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1289)) ;
    GGS_registerExpression var_destinationRegisterName_36125 ;
    nt_register_5F_parsing_ (var_destinationRegisterName_36125, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_MOVFF::init_21__21__21_ (var_instructionLocation_36005, var_sourceRegisterName_36070, var_destinationRegisterName_36125, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    GGS_bit_5F_oriented_5F_op var_bitOrientedOp_36311 ;
    switch (select_pic_31__38__5F_syntax_61 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1298)) ;
      var_bitOrientedOp_36311 = GGS_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("pic18_syntax.galgas3", 1298)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1300)) ;
      var_bitOrientedOp_36311 = GGS_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("pic18_syntax.galgas3", 1300)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_btg COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1302)) ;
      var_bitOrientedOp_36311 = GGS_bit_5F_oriented_5F_op::class_func_BTG (SOURCE_FILE ("pic18_syntax.galgas3", 1302)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_36532 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1304)) ;
    GGS_registerExpression var_registerName_36617 ;
    nt_register_5F_parsing_ (var_registerName_36617, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1306)) ;
    GGS_bitNumberExpression var_bitNumber_36689 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumber_36689, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_FBA::init_21__21__21__21_ (var_instructionLocation_36532, var_bitOrientedOp_36311, var_registerName_36617, var_bitNumber_36689, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1315)) ;
    GGS_location var_instructionLocation_36868 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1316)) ;
    GGS_lstring var_targetLabelName_36936 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1317)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JSR::init_21__21__21_ (var_instructionLocation_36868, var_targetLabelName_36936, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("pic18_syntax.galgas3", 1321)), inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1323)) ;
    GGS_location var_instructionLocation_37145 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1324)) ;
    GGS_lstring var_targetLabelName_37213 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1325)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JSR::init_21__21__21_ (var_instructionLocation_37145, var_targetLabelName_37213, GGS_jumpInstructionKind::class_func_absolute (SOURCE_FILE ("pic18_syntax.galgas3", 1329)), inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1331)) ;
    GGS_location var_instructionLocation_37419 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1332)) ;
    GGS_lstring var_targetLabelName_37487 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1333)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JSR::init_21__21__21_ (var_instructionLocation_37419, var_targetLabelName_37487, GGS_jumpInstructionKind::class_func_relative (SOURCE_FILE ("pic18_syntax.galgas3", 1337)), inCompiler COMMA_HERE) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1339)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_withNoOperand::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1340)), GGS_pic_31__38_InstructionWithNoOperandKind::class_func_CLRWDT (SOURCE_FILE ("pic18_syntax.galgas3", 1340)), inCompiler COMMA_HERE) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_daw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1342)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_withNoOperand::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1343)), GGS_pic_31__38_InstructionWithNoOperandKind::class_func_DAW (SOURCE_FILE ("pic18_syntax.galgas3", 1343)), inCompiler COMMA_HERE) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1345)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_withNoOperand::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1346)), GGS_pic_31__38_InstructionWithNoOperandKind::class_func_NOP (SOURCE_FILE ("pic18_syntax.galgas3", 1346)), inCompiler COMMA_HERE) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_pop COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1348)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_withNoOperand::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1349)), GGS_pic_31__38_InstructionWithNoOperandKind::class_func_POP (SOURCE_FILE ("pic18_syntax.galgas3", 1349)), inCompiler COMMA_HERE) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_push COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1351)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_withNoOperand::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1352)), GGS_pic_31__38_InstructionWithNoOperandKind::class_func_PUSH (SOURCE_FILE ("pic18_syntax.galgas3", 1352)), inCompiler COMMA_HERE) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_reset COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1354)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_withNoOperand::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1355)), GGS_pic_31__38_InstructionWithNoOperandKind::class_func_RESET (SOURCE_FILE ("pic18_syntax.galgas3", 1355)), inCompiler COMMA_HERE) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1357)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_withNoOperand::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1358)), GGS_pic_31__38_InstructionWithNoOperandKind::class_func_SLEEP (SOURCE_FILE ("pic18_syntax.galgas3", 1358)), inCompiler COMMA_HERE) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_fnop COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1360)) ;
    GGS_location var_instructionLocation_38604 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1361)) ;
    GGS_immediatExpression var_expression_38693 ;
    nt_immediate_5F_expression_ (var_expression_38693, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_fnop::init_21__21_ (var_instructionLocation_38604, var_expression_38693, inCompiler COMMA_HERE) ;
  } break ;
  case 17: {
    GGS_literal_5F_instruction_5F_opcode var_literalInstruction_38837 ;
    switch (select_pic_31__38__5F_syntax_62 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addlw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1369)) ;
      var_literalInstruction_38837 = GGS_literal_5F_instruction_5F_opcode::class_func_ADDLW (SOURCE_FILE ("pic18_syntax.galgas3", 1369)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1371)) ;
      var_literalInstruction_38837 = GGS_literal_5F_instruction_5F_opcode::class_func_ANDLW (SOURCE_FILE ("pic18_syntax.galgas3", 1371)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1373)) ;
      var_literalInstruction_38837 = GGS_literal_5F_instruction_5F_opcode::class_func_IORLW (SOURCE_FILE ("pic18_syntax.galgas3", 1373)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1375)) ;
      var_literalInstruction_38837 = GGS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("pic18_syntax.galgas3", 1375)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mullw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1377)) ;
      var_literalInstruction_38837 = GGS_literal_5F_instruction_5F_opcode::class_func_MULLW (SOURCE_FILE ("pic18_syntax.galgas3", 1377)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sublw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1379)) ;
      var_literalInstruction_38837 = GGS_literal_5F_instruction_5F_opcode::class_func_SUBLW (SOURCE_FILE ("pic18_syntax.galgas3", 1379)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1381)) ;
      var_literalInstruction_38837 = GGS_literal_5F_instruction_5F_opcode::class_func_XORLW (SOURCE_FILE ("pic18_syntax.galgas3", 1381)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_39439 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1383)) ;
    GGS_immediatExpression var_expression_39528 ;
    nt_immediate_5F_expression_ (var_expression_39528, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_literalOperation::init_21__21__21_ (var_instructionLocation_39439, var_literalInstruction_38837, var_expression_39528, inCompiler COMMA_HERE) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_lfsr COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1390)) ;
    GGS_location var_instructionLocation_39703 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1391)) ;
    GGS_luint var_FSRindex_39766 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1392)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1393)) ;
    GGS_immediatExpression var_expression_39815 ;
    nt_immediate_5F_expression_ (var_expression_39815, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_LFSR::init_21__21__21_ (var_instructionLocation_39703, var_FSRindex_39766, var_expression_39815, inCompiler COMMA_HERE) ;
  } break ;
  case 19: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_tblrd COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1397)) ;
    GGS_location var_instructionLocation_39951 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1398)) ;
    GGS_tableAccessOption var_accessOption_40015 ;
    switch (select_pic_31__38__5F_syntax_63 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1401)) ;
      var_accessOption_40015 = GGS_tableAccessOption::class_func_simpleAccess (SOURCE_FILE ("pic18_syntax.galgas3", 1402)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1404)) ;
      var_accessOption_40015 = GGS_tableAccessOption::class_func_postIncrement (SOURCE_FILE ("pic18_syntax.galgas3", 1405)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1407)) ;
      var_accessOption_40015 = GGS_tableAccessOption::class_func_postDecrement (SOURCE_FILE ("pic18_syntax.galgas3", 1408)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1410)) ;
      var_accessOption_40015 = GGS_tableAccessOption::class_func_preIncrement (SOURCE_FILE ("pic18_syntax.galgas3", 1411)) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_TBLRD::init_21__21_ (var_instructionLocation_39951, var_accessOption_40015, inCompiler COMMA_HERE) ;
  } break ;
  case 20: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_tblwt COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1415)) ;
    GGS_location var_instructionLocation_40447 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1416)) ;
    GGS_tableAccessOption var_accessOption_40511 ;
    switch (select_pic_31__38__5F_syntax_64 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1419)) ;
      var_accessOption_40511 = GGS_tableAccessOption::class_func_simpleAccess (SOURCE_FILE ("pic18_syntax.galgas3", 1420)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1422)) ;
      var_accessOption_40511 = GGS_tableAccessOption::class_func_postIncrement (SOURCE_FILE ("pic18_syntax.galgas3", 1423)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1425)) ;
      var_accessOption_40511 = GGS_tableAccessOption::class_func_postDecrement (SOURCE_FILE ("pic18_syntax.galgas3", 1426)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1428)) ;
      var_accessOption_40511 = GGS_tableAccessOption::class_func_preIncrement (SOURCE_FILE ("pic18_syntax.galgas3", 1429)) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_TBLWT::init_21__21_ (var_instructionLocation_40447, var_accessOption_40511, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_syntax_58 (inCompiler)) {
  case 1: {
    switch (select_pic_31__38__5F_syntax_59 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1184)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwfc COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1187)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1190)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1193)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1196)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1199)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1202)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1205)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlcf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1208)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlncf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1211)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrcf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1214)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrncf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1217)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subfwb COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1220)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1223)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwfb COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1226)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1229)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1232)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    nt_optional_5F_w_5F_as_5F_dest_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1250)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1252)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1253)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 3: {
    switch (select_pic_31__38__5F_syntax_60 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1264)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1267)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mulwf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1270)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_negf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1273)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_setf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1276)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movff COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1286)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1289)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 5: {
    switch (select_pic_31__38__5F_syntax_61 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1298)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1300)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_btg COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1302)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1306)) ;
    nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1315)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1317)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1323)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1325)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1331)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1333)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1339)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_daw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1342)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1345)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_pop COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1348)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_push COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1351)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_reset COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1354)) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1357)) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_fnop COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1360)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
  } break ;
  case 17: {
    switch (select_pic_31__38__5F_syntax_62 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addlw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1369)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1371)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1373)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1375)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mullw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1377)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sublw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1379)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1381)) ;
    } break ;
    default:
      break ;
    }
    nt_immediate_5F_expression_indexing (inCompiler) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_lfsr COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1390)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1392)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1393)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
  } break ;
  case 19: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_tblrd COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1397)) ;
    switch (select_pic_31__38__5F_syntax_63 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1401)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1404)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1407)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1410)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 20: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_tblwt COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1415)) ;
    switch (select_pic_31__38__5F_syntax_64 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1419)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1422)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1425)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1428)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}



//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_start_5F_symbol::rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_ (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_pic_31__38_ COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 23)) ;
  GGS_lstring var_programName_759 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 24)) ;
  GGS_lstring var_deviceNameOrBootloaderReference_786 ;
  GGS_programKind var_programKind_837 ;
  switch (select_pic_31__38__5F_start_5F_symbol_0 (inCompiler)) {
  case 1: {
    var_programKind_837 = GGS_programKind::class_func_regularProgram (SOURCE_FILE ("pic18_start_symbol.galgas3", 28)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_implements COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 30)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 31)) ;
    var_programKind_837 = GGS_programKind::class_func_bootloaderProgram (SOURCE_FILE ("pic18_start_symbol.galgas3", 32)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_uses COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 34)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 35)) ;
    var_programKind_837 = GGS_programKind::class_func_userProgram (SOURCE_FILE ("pic18_start_symbol.galgas3", 36)) ;
  } break ;
  default:
    break ;
  }
  var_deviceNameOrBootloaderReference_786 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 38)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 39)) ;
  GGS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList_1142 = GGS_pic_31__38_InterruptDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_pic_31__38_RoutineDefinitionList var_routineDefinitionList_1206 = GGS_pic_31__38_RoutineDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_pic_31__38_MacroDefinitionList var_macroDefinitionList_1292 = GGS_pic_31__38_MacroDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_lstringlist var_unusedRoutineList_1324 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_ramDefinitionList var_ramDefinitionList_1365 = GGS_ramDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_lstringlist var_unusedRegisterList_1412 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_configDefinitionList var_configDefinitionList_1454 = GGS_configDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_constantDefinitionList var_constantDefinitionList_1507 = GGS_constantDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_dataList var_dataList_1564 = GGS_dataList::init (inCompiler COMMA_HERE) ;
  GGS_checkpicList var_checkpicList_1594 = GGS_checkpicList::init (inCompiler COMMA_HERE) ;
  GGS_lstringlist var_inlinedRoutineList_1631 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_bool var_needsComputedGoto_32__1679 = GGS_bool (false) ;
  GGS_bool var_needsComputedGoto_34__1718 = GGS_bool (false) ;
  nt_body_ (var_interruptDefinitionList_1142, var_routineDefinitionList_1206, var_macroDefinitionList_1292, var_unusedRoutineList_1324, var_inlinedRoutineList_1631, var_ramDefinitionList_1365, var_unusedRegisterList_1412, var_configDefinitionList_1454, var_constantDefinitionList_1507, var_checkpicList_1594, var_dataList_1564, var_needsComputedGoto_32__1679, var_needsComputedGoto_34__1718, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 67)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("pic18_start_symbol.galgas3", 69)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_pic_31__38_AST var_piccoloModel_2149 = GGS_pic_31__38_AST::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (var_programName_759, var_programKind_837, var_deviceNameOrBootloaderReference_786, var_configDefinitionList_1454, var_ramDefinitionList_1365, var_unusedRegisterList_1412, var_checkpicList_1594, var_dataList_1564, var_interruptDefinitionList_1142, var_constantDefinitionList_1507, var_routineDefinitionList_1206, var_macroDefinitionList_1292, var_unusedRoutineList_1324, var_inlinedRoutineList_1631, var_needsComputedGoto_32__1679, var_needsComputedGoto_34__1718, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 87)), inCompiler COMMA_HERE) ;
      {
      routine_pic_31__38__5F_analyze_3F__3F_ (var_piccoloModel_2149, GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 89)), inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 89)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_string var_hexDestinationFile_2707 = GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 91)).getter_deletingPathExtension (SOURCE_FILE ("pic18_start_symbol.galgas3", 91)).add_operation (GGS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 91)) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_hexDestinationFile_2707.getter_fileExists (SOURCE_FILE ("pic18_start_symbol.galgas3", 92)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        {
        GGS_string::class_method_deleteFile (var_hexDestinationFile_2707, inCompiler COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 93)) ;
        }
      }
    }
    GGS_string var_asmDestinationFile_2905 = GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 95)).getter_deletingPathExtension (SOURCE_FILE ("pic18_start_symbol.galgas3", 95)).add_operation (GGS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 95)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_asmDestinationFile_2905.getter_fileExists (SOURCE_FILE ("pic18_start_symbol.galgas3", 96)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        {
        GGS_string::class_method_deleteFile (var_asmDestinationFile_2905, inCompiler COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 97)) ;
        }
      }
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_start_5F_symbol::rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_importBootloaderSpecification (GGS_piccoloDeviceModel & outArgument_outPiccoloDeviceModel,
                                                                                                                                   GGS_string & outArgument_outDeviceName,
                                                                                                                                   GGS_uint & outArgument_outAccessBankSplitOffset,
                                                                                                                                   GGS_ramBankTable & outArgument_outRamBank,
                                                                                                                                   GGS_registerTable & outArgument_outRegisterTable,
                                                                                                                                   GGS_bootloaderReservedRAMmap & outArgument_outBootloaderReservedRAMmap,
                                                                                                                                   GGS_routineDeclarationList & outArgument_outBootloaderRoutineDeclarationList,
                                                                                                                                   GGS_routineDeclarationList & outArgument_outUserRoutineDeclarationList,
                                                                                                                                   GGS_luint & outArgument_outBootloaderReservedROMsize,
                                                                                                                                   Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outPiccoloDeviceModel.drop () ; // Release 'out' argument
  outArgument_outDeviceName.drop () ; // Release 'out' argument
  outArgument_outAccessBankSplitOffset.drop () ; // Release 'out' argument
  outArgument_outRamBank.drop () ; // Release 'out' argument
  outArgument_outRegisterTable.drop () ; // Release 'out' argument
  outArgument_outBootloaderReservedRAMmap.drop () ; // Release 'out' argument
  outArgument_outBootloaderRoutineDeclarationList.drop () ; // Release 'out' argument
  outArgument_outUserRoutineDeclarationList.drop () ; // Release 'out' argument
  outArgument_outBootloaderReservedROMsize.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_pic_31__38_ COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 111)) ;
  GGS_lstring var_programName_3555 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 112)) ;
  GenericArray <FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (var_programName_3555.readProperty_location (), GGS_string ("this file does not define a bootloader specification"), fixItArray0  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 113)) ;
  outArgument_outPiccoloDeviceModel.drop () ; // Release error dropped variable
  outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
  outArgument_outRamBank.drop () ; // Release error dropped variable
  outArgument_outRegisterTable.drop () ; // Release error dropped variable
  outArgument_outBootloaderReservedRAMmap.drop () ; // Release error dropped variable
  outArgument_outDeviceName.drop () ; // Release error dropped variable
  outArgument_outBootloaderRoutineDeclarationList.drop () ; // Release error dropped variable
  outArgument_outUserRoutineDeclarationList.drop () ; // Release error dropped variable
  outArgument_outBootloaderReservedROMsize.drop () ; // Release error dropped variable
  switch (select_pic_31__38__5F_start_5F_symbol_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_implements COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 121)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 122)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_uses COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 124)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 125)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 127)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 128)) ;
  GGS_pic_31__38_InterruptDefinitionList joker_4041 = GGS_pic_31__38_InterruptDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_pic_31__38_RoutineDefinitionList joker_4053 = GGS_pic_31__38_RoutineDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_pic_31__38_MacroDefinitionList joker_4065 = GGS_pic_31__38_MacroDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_lstringlist joker_4077 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_lstringlist joker_4089 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_ramDefinitionList joker_4101 = GGS_ramDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_lstringlist joker_4113 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_configDefinitionList joker_4125 = GGS_configDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_constantDefinitionList joker_4137 = GGS_constantDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_checkpicList joker_4149 = GGS_checkpicList::init (inCompiler COMMA_HERE) ;
  GGS_dataList joker_4161 = GGS_dataList::init (inCompiler COMMA_HERE) ;
  GGS_bool joker_4173 = GGS_bool (false) ;
  GGS_bool joker_4187 = GGS_bool (false) ;
  nt_body_ (joker_4041, joker_4053, joker_4065, joker_4077, joker_4089, joker_4101, joker_4113, joker_4125, joker_4137, joker_4149, joker_4161, joker_4173, joker_4187, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 131)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_start_5F_symbol::rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_pic_31__38_ COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 23)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 24)) ;
  switch (select_pic_31__38__5F_start_5F_symbol_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_implements COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 30)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 31)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_uses COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 34)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 38)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 39)) ;
  nt_body_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 67)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_start_5F_symbol_i0_ (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_midrange COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 32)) ;
  GGS_lstring var_programName_770 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 33)) ;
  GGS_lstring var_deviceName_815 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 34)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 35)) ;
  GGS_midrange_5F_interruptDefinitionList var_interruptDefinitionList_838 = GGS_midrange_5F_interruptDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_midrange_5F_routineDefinitionList var_routineDefinitionList_906 = GGS_midrange_5F_routineDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_ramDefinitionList var_ramDefinitionList_970 = GGS_ramDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_lstringlist var_unusedRegisterList_1017 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_lstringlist var_unusedRoutineList_1059 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_configDefinitionList var_configDefinitionList_1100 = GGS_configDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_constantDefinitionList var_constantDefinitionList_1153 = GGS_constantDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_bool var_needsComputedGoto_32__1216 = GGS_bool (false) ;
  GGS_bool var_needsComputedGoto_34__1255 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_midrange_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 47)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 48)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GGS_lstring var_unusedRegister_1367 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 50)) ;
        var_unusedRegisterList_1017.addAssignOperation (var_unusedRegister_1367  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 51)) ;
        if (select_midrange_5F_syntax_1 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 53)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 56)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 57)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        GGS_lstring var_unusedRoutine_1533 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 59)) ;
        var_unusedRoutineList_1059.addAssignOperation (var_unusedRoutine_1533  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 60)) ;
        if (select_midrange_5F_syntax_2 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 62)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      nt_configuration_5F_definition_ (var_configDefinitionList_1100, inCompiler) ;
    } break ;
    case 5: {
      nt_ram_5F_definition_ (var_ramDefinitionList_970, inCompiler) ;
    } break ;
    case 6: {
      nt_constant_5F_definition_ (var_constantDefinitionList_1153, inCompiler) ;
    } break ;
    case 7: {
      nt_midrange_5F_interrupt_5F_definition_ (var_interruptDefinitionList_838, var_needsComputedGoto_32__1216, var_needsComputedGoto_34__1255, inCompiler) ;
    } break ;
    case 8: {
      nt_midrange_5F_routine_5F_definition_ (var_routineDefinitionList_906, var_needsComputedGoto_32__1216, var_needsComputedGoto_34__1255, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 81)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_syntax.galgas3", 83)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GGS_midrange_5F_model var_piccoloModel_2122 = GGS_midrange_5F_model::init_21__21__21__21__21__21__21__21__21__21__21__21_ (var_programName_770, var_deviceName_815, var_configDefinitionList_1100, var_ramDefinitionList_970, var_unusedRegisterList_1017, var_interruptDefinitionList_838, var_constantDefinitionList_1153, var_routineDefinitionList_906, var_unusedRoutineList_1059, var_needsComputedGoto_32__1216, var_needsComputedGoto_34__1255, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 96)), inCompiler COMMA_HERE) ;
      {
      routine_midrange_5F_analyze_3F__3F_ (var_piccoloModel_2122, GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 98)), inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 98)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GGS_string var_hexDestinationFile_2563 = GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 100)).getter_deletingPathExtension (SOURCE_FILE ("midrange_syntax.galgas3", 100)).add_operation (GGS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 100)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_hexDestinationFile_2563.getter_fileExists (SOURCE_FILE ("midrange_syntax.galgas3", 101)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        {
        GGS_string::class_method_deleteFile (var_hexDestinationFile_2563, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 102)) ;
        }
      }
    }
    GGS_string var_asmDestinationFile_2761 = GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 104)).getter_deletingPathExtension (SOURCE_FILE ("midrange_syntax.galgas3", 104)).add_operation (GGS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 104)) ;
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = var_asmDestinationFile_2761.getter_fileExists (SOURCE_FILE ("midrange_syntax.galgas3", 105)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        {
        GGS_string::class_method_deleteFile (var_asmDestinationFile_2761, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 106)) ;
        }
      }
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_start_5F_symbol_i0_importBootloaderSpecification (GGS_piccoloDeviceModel & outArgument_outPiccoloDeviceModel,
                                                                                                           GGS_string & outArgument_outDeviceName,
                                                                                                           GGS_uint & outArgument_outAccessBankSplitOffset,
                                                                                                           GGS_ramBankTable & outArgument_outRamBank,
                                                                                                           GGS_registerTable & outArgument_outRegisterTable,
                                                                                                           GGS_bootloaderReservedRAMmap & outArgument_outBootloaderReservedRAMmap,
                                                                                                           GGS_routineDeclarationList & outArgument_outBootloaderRoutineDeclarationList,
                                                                                                           GGS_routineDeclarationList & outArgument_outUserRoutineDeclarationList,
                                                                                                           GGS_luint & outArgument_outBootloaderReservedROMsize,
                                                                                                           Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outPiccoloDeviceModel.drop () ; // Release 'out' argument
  outArgument_outDeviceName.drop () ; // Release 'out' argument
  outArgument_outAccessBankSplitOffset.drop () ; // Release 'out' argument
  outArgument_outRamBank.drop () ; // Release 'out' argument
  outArgument_outRegisterTable.drop () ; // Release 'out' argument
  outArgument_outBootloaderReservedRAMmap.drop () ; // Release 'out' argument
  outArgument_outBootloaderRoutineDeclarationList.drop () ; // Release 'out' argument
  outArgument_outUserRoutineDeclarationList.drop () ; // Release 'out' argument
  outArgument_outBootloaderReservedROMsize.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_midrange COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 120)) ;
  GGS_lstring var_programName_3414 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 121)) ;
  GenericArray <FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (var_programName_3414.readProperty_location (), GGS_string ("this file does not define a bootloader specification"), fixItArray0  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 122)) ;
  outArgument_outPiccoloDeviceModel.drop () ; // Release error dropped variable
  outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
  outArgument_outRamBank.drop () ; // Release error dropped variable
  outArgument_outRegisterTable.drop () ; // Release error dropped variable
  outArgument_outBootloaderReservedRAMmap.drop () ; // Release error dropped variable
  outArgument_outBootloaderRoutineDeclarationList.drop () ; // Release error dropped variable
  outArgument_outUserRoutineDeclarationList.drop () ; // Release error dropped variable
  outArgument_outDeviceName.drop () ; // Release error dropped variable
  outArgument_outBootloaderReservedROMsize.drop () ; // Release error dropped variable
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 127)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 128)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_midrange_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 131)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 132)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 134)) ;
        if (select_midrange_5F_syntax_1 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 136)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 139)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 140)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 142)) ;
        if (select_midrange_5F_syntax_2 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 144)) ;
        }else{
          repeatFlag_3 = false ;
        }
      }
    } break ;
    case 4: {
      GGS_configDefinitionList joker_4056 = GGS_configDefinitionList::init (inCompiler COMMA_HERE) ;
      nt_configuration_5F_definition_ (joker_4056, inCompiler) ;
    } break ;
    case 5: {
      GGS_ramDefinitionList joker_4125 = GGS_ramDefinitionList::init (inCompiler COMMA_HERE) ;
      nt_ram_5F_definition_ (joker_4125, inCompiler) ;
    } break ;
    case 6: {
      GGS_constantDefinitionList joker_4204 = GGS_constantDefinitionList::init (inCompiler COMMA_HERE) ;
      nt_constant_5F_definition_ (joker_4204, inCompiler) ;
    } break ;
    case 7: {
      GGS_midrange_5F_interruptDefinitionList joker_4303 = GGS_midrange_5F_interruptDefinitionList::init (inCompiler COMMA_HERE) ;
      GGS_bool joker_4315 = GGS_bool (false) ;
      GGS_bool joker_4329 = GGS_bool (false) ;
      nt_midrange_5F_interrupt_5F_definition_ (joker_4303, joker_4315, joker_4329, inCompiler) ;
    } break ;
    case 8: {
      GGS_midrange_5F_routineDefinitionList joker_4426 = GGS_midrange_5F_routineDefinitionList::init (inCompiler COMMA_HERE) ;
      GGS_bool joker_4438 = GGS_bool (false) ;
      GGS_bool joker_4452 = GGS_bool (false) ;
      nt_midrange_5F_routine_5F_definition_ (joker_4426, joker_4438, joker_4452, inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 162)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_start_5F_symbol_i0_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_midrange COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 32)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 33)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 34)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 35)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_midrange_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 47)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 48)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 50)) ;
        if (select_midrange_5F_syntax_1 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 53)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 56)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 57)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 59)) ;
        if (select_midrange_5F_syntax_2 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 62)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      nt_configuration_5F_definition_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_ram_5F_definition_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_constant_5F_definition_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_midrange_5F_interrupt_5F_definition_indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_midrange_5F_routine_5F_definition_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_ (GGS_midrange_5F_instructionList & outArgument_outInstructionList,
                                                                                              GGS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                              GGS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                              GGS_labelMap & ioArgument_ioLabelMap,
                                                                                              Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GGS_midrange_5F_instructionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_midrange_5F_syntax_3 (inCompiler)) {
    case 2: {
      GGS_midrange_5F_instruction var_instruction_4820 ;
      nt_midrange_5F_simple_5F_instruction_ (var_instruction_4820, inCompiler) ;
      outArgument_outInstructionList.addAssignOperation (var_instruction_4820  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 177)) ;
    } break ;
    case 3: {
      GGS_midrange_5F_instruction var_instruction_4928 ;
      nt_midrange_5F_structured_5F_instruction_ (var_instruction_4928, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      outArgument_outInstructionList.addAssignOperation (var_instruction_4928  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 184)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_midrange_5F_syntax_3 (inCompiler)) {
    case 2: {
      nt_midrange_5F_simple_5F_instruction_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_midrange_5F_structured_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_ (GGS_midrange_5F_interruptDefinitionList & ioArgument_ioInterruptDefinitionList,
                                                                                                  GGS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                                  GGS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                                  Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 194)) ;
  GGS_location var_interruptionLocation_5317 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 195)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_contextsave COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 196)) ;
  GGS_lstring var_firstSaveRegister_5400 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 197)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 198)) ;
  GGS_lstring var_secondSaveRegister_5453 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 199)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 200)) ;
  GGS_labelMap var_labelMap_5494 = GGS_labelMap::init (inCompiler COMMA_HERE) ;
  GGS_midrange_5F_instructionList var_instructionList_5548 ;
  nt_midrange_5F_instruction_5F_list_ (var_instructionList_5548, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, var_labelMap_5494, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 207)) ;
  ioArgument_ioInterruptDefinitionList.addAssignOperation (var_interruptionLocation_5317, var_instructionList_5548, var_firstSaveRegister_5400, var_secondSaveRegister_5453, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 213))  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 208)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 194)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_contextsave COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 196)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 197)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 198)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 199)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 200)) ;
  nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 207)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_ (GGS_midrange_5F_routineDefinitionList & ioArgument_ioRoutineDefinitionList,
                                                                                                GGS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                                GGS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                                Lexique_piccolo_5F_lexique * inCompiler) {
  GGS_bool var_noreturn_6001 ;
  switch (select_midrange_5F_syntax_4 (inCompiler)) {
  case 1: {
    var_noreturn_6001 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 227)) ;
    var_noreturn_6001 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 230)) ;
  GGS_lstring var_routineName_6127 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 231)) ;
  GGS_luint var_page_6190 ;
  switch (select_midrange_5F_syntax_5 (inCompiler)) {
  case 1: {
    var_page_6190 = GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 235)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_page COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 237)) ;
    var_page_6190 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 238)) ;
  } break ;
  default:
    break ;
  }
  GGS_luint var_requiredBank_6311 ;
  GGS_luint var_returnedBank_6337 ;
  GGS_bool var_preservesBank_6362 ;
  switch (select_midrange_5F_syntax_6 (inCompiler)) {
  case 1: {
    var_requiredBank_6311 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("midrange_syntax.galgas3", 245)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 245)), inCompiler COMMA_HERE) ;
    var_returnedBank_6337 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("midrange_syntax.galgas3", 246)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 246)), inCompiler COMMA_HERE) ;
    var_preservesBank_6362 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 249)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 250)) ;
    switch (select_midrange_5F_syntax_7 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 252)) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = var_noreturn_6001.boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 254)), GGS_string ("a \"noreturn\" routine cannot accept \"bank:preserved\" setting"), fixItArray1  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 254)) ;
        }
      }
      var_preservesBank_6362 = GGS_bool (true) ;
      var_requiredBank_6311 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("midrange_syntax.galgas3", 257)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 257)), inCompiler COMMA_HERE) ;
      var_returnedBank_6337 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("midrange_syntax.galgas3", 258)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 258)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 260)) ;
      var_requiredBank_6311 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 261)) ;
      var_preservesBank_6362 = GGS_bool (false) ;
      switch (select_midrange_5F_syntax_8 (inCompiler)) {
      case 1: {
        var_returnedBank_6337 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("midrange_syntax.galgas3", 264)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 264)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 266)) ;
        var_returnedBank_6337 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 267)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_noreturn_6001.boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GenericArray <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 269)), GGS_string ("a \"noreturn\" routine cannot accept \"bank:returned\" setting"), fixItArray3  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 269)) ;
          }
        }
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 273)) ;
      var_returnedBank_6337 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 274)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_noreturn_6001.boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 276)), GGS_string ("a \"noreturn\" routine cannot accept \"bank:returned\" setting"), fixItArray5  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 276)) ;
        }
      }
      var_preservesBank_6362 = GGS_bool (false) ;
      var_requiredBank_6311 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("midrange_syntax.galgas3", 279)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 279)), inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 282)) ;
  GGS_labelMap var_labelMap_7524 = GGS_labelMap::init (inCompiler COMMA_HERE) ;
  GGS_midrange_5F_instructionList var_instructionList_7578 ;
  nt_midrange_5F_instruction_5F_list_ (var_instructionList_7578, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, var_labelMap_7524, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 289)) ;
  ioArgument_ioRoutineDefinitionList.addAssignOperation (var_routineName_6127, var_page_6190, var_requiredBank_6311, var_returnedBank_6337, var_preservesBank_6362, var_noreturn_6001, var_instructionList_7578, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 298))  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 290)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_midrange_5F_syntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 227)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 230)) ;
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 231)) ;
  switch (select_midrange_5F_syntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_page COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 237)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 238)) ;
  } break ;
  default:
    break ;
  }
  switch (select_midrange_5F_syntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 249)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 250)) ;
    switch (select_midrange_5F_syntax_7 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 252)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 260)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 261)) ;
      switch (select_midrange_5F_syntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 266)) ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 267)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 273)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 274)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 282)) ;
  nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 289)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_ (GGS_midrange_5F_instruction & outArgument_outInstruction,
                                                                                                    GGS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                                    GGS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                                    GGS_labelMap & ioArgument_ioLabelMap,
                                                                                                    Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  switch (select_midrange_5F_syntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 310)) ;
    GGS_lstring var_doLabel_8099 ;
    switch (select_midrange_5F_syntax_10 (inCompiler)) {
    case 1: {
      var_doLabel_8099 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 313)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_doLabel_8099 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 315)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_8099, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 316)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_8234 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 318)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 319)) ;
    GGS_lstring var_constantName_8301 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 320)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 321)) ;
    GGS_immediatExpression var_lowBoundExpression_8374 ;
    nt_immediate_5F_expression_ (var_lowBoundExpression_8374, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 323)) ;
    GGS_immediatExpression var_highBoundExpression_8455 ;
    nt_immediate_5F_expression_ (var_highBoundExpression_8455, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 325)) ;
    GGS_midrange_5F_instructionList var_instructionList_8552 ;
    nt_midrange_5F_instruction_5F_list_ (var_instructionList_8552, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::init_21__21__21__21__21__21_ (var_instructionLocation_8234, var_constantName_8301, var_lowBoundExpression_8374, var_highBoundExpression_8455, var_instructionList_8552, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 337)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 338)) ;
    GGS_lstring var_endDoLabel_8877 ;
    switch (select_midrange_5F_syntax_11 (inCompiler)) {
    case 1: {
      var_endDoLabel_8877 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 341)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endDoLabel_8877 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 343)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, var_doLabel_8099.readProperty_string ().objectCompare (var_endDoLabel_8877.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::notEqual, var_doLabel_8099.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = var_doLabel_8099.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_endDoLabel_8877.readProperty_location (), GGS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 346)), fixItArray3  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 346)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checkbank COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 350)) ;
    GGS_luint var_bankIndex_9232 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 351)) ;
    outArgument_outInstruction = GGS_midrangeInstruction_5F_checkbank::init_21__21_ (var_bankIndex_9232.readProperty_location (), var_bankIndex_9232.readProperty_uint (), inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checknobank COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 354)) ;
    outArgument_outInstruction = GGS_midrangeInstruction_5F_checknobank::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 355)), inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 357)) ;
    GGS_location var_instructionLocation_9466 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 358)) ;
    GGS_registerExpression var_register_9551 ;
    nt_register_5F_parsing_ (var_register_9551, inCompiler) ;
    GGS_bool var_warningOnUselessBanksel_9574 ;
    switch (select_midrange_5F_syntax_12 (inCompiler)) {
    case 1: {
      var_warningOnUselessBanksel_9574 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 364)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 365)) ;
      var_warningOnUselessBanksel_9574 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_banksel_5F_register::init_21__21__21_ (var_instructionLocation_9466, var_register_9551, var_warningOnUselessBanksel_9574, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 370)) ;
    GGS_location var_instructionLocation_9875 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 371)) ;
    GGS_luint var_bank_9938 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 372)) ;
    GGS_bool var_warningOnUselessBanksel_9957 ;
    switch (select_midrange_5F_syntax_13 (inCompiler)) {
    case 1: {
      var_warningOnUselessBanksel_9957 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 377)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 378)) ;
      var_warningOnUselessBanksel_9957 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_banksel::init_21__21__21_ (var_instructionLocation_9875, var_bank_9938, var_warningOnUselessBanksel_9957, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksave COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 383)) ;
    GGS_location var_instructionLocation_10246 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 384)) ;
    GGS_registerExpression var_register_10331 ;
    nt_register_5F_parsing_ (var_register_10331, inCompiler) ;
    GGS_midrange_5F_instructionList var_instructionList_10383 ;
    nt_midrange_5F_instruction_5F_list_ (var_instructionList_10383, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 391)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_savebank::init_21__21__21__21_ (var_instructionLocation_10246, var_register_10331, var_instructionList_10383, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 396)), inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nobank COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 398)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_nobanksel::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 399)), inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 401)) ;
    GGS_lstring var_foreverLabel_10755 ;
    switch (select_midrange_5F_syntax_14 (inCompiler)) {
    case 1: {
      var_foreverLabel_10755 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 404)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_foreverLabel_10755 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 406)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_foreverLabel_10755, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 407)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_10920 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 409)) ;
    GGS_midrange_5F_instructionList var_instructionList_11000 ;
    nt_midrange_5F_instruction_5F_list_ (var_instructionList_11000, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 415)) ;
    GGS_lstring var_endForeverLabel_11120 ;
    switch (select_midrange_5F_syntax_15 (inCompiler)) {
    case 1: {
      var_endForeverLabel_11120 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 418)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endForeverLabel_11120 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 420)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::notEqual, var_foreverLabel_10755.readProperty_string ().objectCompare (var_endForeverLabel_11120.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, var_foreverLabel_10755.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = var_foreverLabel_10755.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_endForeverLabel_11120.readProperty_location (), GGS_string ("'end' label does not match 'fovever' label, it should be ").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 423)), fixItArray7  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 423)) ;
      }
    }
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_FOREVER::init_21__21__21_ (var_instructionLocation_10920, var_instructionList_11000, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 429)), inCompiler COMMA_HERE) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 431)) ;
    GGS_location var_instructionLocation_11631 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 432)) ;
    GGS_registerExpression var_registerExpression_11696 ;
    GGS_bitNumberExpression var_bitNumberExpression_11744 ;
    GGS_bool var_skipIfSet_11778 ;
    switch (select_midrange_5F_syntax_16 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 437)) ;
      nt_register_5F_parsing_ (var_registerExpression_11696, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 439)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_11744, inCompiler) ;
      var_skipIfSet_11778 = GGS_bool (true) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_ (var_registerExpression_11696, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 444)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_11744, inCompiler) ;
      var_skipIfSet_11778 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 448)) ;
    GGS_midrange_5F_instruction var_instruction_12128 ;
    nt_midrange_5F_simple_5F_instruction_ (var_instruction_12128, inCompiler) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_IF_5F_BitTest::init_21__21__21__21__21_ (var_instructionLocation_11631, var_instruction_12128, var_skipIfSet_11778, var_registerExpression_11696, var_bitNumberExpression_11744, inCompiler COMMA_HERE) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 457)) ;
    GGS_location var_instructionLocation_12345 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 458)) ;
    GGS_bool var_increment_12396 ;
    switch (select_midrange_5F_syntax_17 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 461)) ;
      var_increment_12396 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 463)) ;
      var_increment_12396 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_registerExpression var_registerExpression_12525 ;
    nt_register_5F_parsing_ (var_registerExpression_12525, inCompiler) ;
    GGS_bool var_w_5F_isTarget_12558 ;
    switch (select_midrange_5F_syntax_18 (inCompiler)) {
    case 1: {
      var_w_5F_isTarget_12558 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 470)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 470)) ;
      var_w_5F_isTarget_12558 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_conditionString_12687 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 472)) ;
    GGS_string var_condition_12719 = var_conditionString_12687.readProperty_string ().getter_uppercased (SOURCE_FILE ("midrange_syntax.galgas3", 473)) ;
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = GGS_bool (ComparisonKind::notEqual, var_condition_12719.objectCompare (GGS_string ("NZ"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_conditionString_12687.readProperty_location (), GGS_string ("invalid '").add_operation (var_condition_12719, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 475)).add_operation (GGS_string ("' condition; it should be 'nz'"), inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 475)), fixItArray9  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 475)) ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 477)) ;
    GGS_midrange_5F_instruction var_instruction_12939 ;
    nt_midrange_5F_simple_5F_instruction_ (var_instruction_12939, inCompiler) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_IF_5F_IncDec::init_21__21__21__21__21_ (var_instructionLocation_12345, var_instruction_12939, var_increment_12396, var_registerExpression_12525, var_w_5F_isTarget_12558, inCompiler COMMA_HERE) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 487)) ;
    GGS_lstring var_ifLabel_13150 ;
    switch (select_midrange_5F_syntax_19 (inCompiler)) {
    case 1: {
      var_ifLabel_13150 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 490)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_ifLabel_13150 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 492)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_ifLabel_13150, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 493)) ;
      }
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_structured_5F_if_5F_instruction_ (var_ifLabel_13150, outArgument_outInstruction, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 501)) ;
    GGS_lstring var_endIfLabel_13459 ;
    switch (select_midrange_5F_syntax_20 (inCompiler)) {
    case 1: {
      var_endIfLabel_13459 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 504)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endIfLabel_13459 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 506)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = GGS_bool (ComparisonKind::notEqual, var_ifLabel_13150.readProperty_string ().objectCompare (var_endIfLabel_13459.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GGS_string temp_11 ;
        const GalgasBool test_12 = GGS_bool (ComparisonKind::notEqual, var_ifLabel_13150.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          temp_11 = var_ifLabel_13150.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_12) {
          temp_11 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (var_endIfLabel_13459.readProperty_location (), GGS_string ("'end' label does not match 'if' label, it should be ").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 509)), fixItArray13  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 509)) ;
      }
    }
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 513)) ;
    GGS_lstring var_doLabel_13798 ;
    switch (select_midrange_5F_syntax_21 (inCompiler)) {
    case 1: {
      var_doLabel_13798 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 516)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_doLabel_13798 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 518)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_13798, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 519)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_13943 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 521)) ;
    GGS_midrange_5F_instructionList var_repeatedInstructionList_14023 ;
    nt_midrange_5F_instruction_5F_list_ (var_repeatedInstructionList_14023, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    GGS_location var_endOfRepeatedInstructionList_14142 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 527)) ;
    GGS_midrange_5F_partList var_whilePartList_14196 = GGS_midrange_5F_partList::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_14 = true ;
    while (repeatFlag_14) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 530)) ;
      GGS_lstring var_whileLabel_14277 ;
      switch (select_midrange_5F_syntax_23 (inCompiler)) {
      case 1: {
        var_whileLabel_14277 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 533)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        var_whileLabel_14277 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 535)) ;
      } break ;
      default:
        break ;
      }
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::notEqual, var_doLabel_13798.readProperty_string ().objectCompare (var_whileLabel_14277.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          GGS_string temp_16 ;
          const GalgasBool test_17 = GGS_bool (ComparisonKind::notEqual, var_doLabel_13798.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            temp_16 = var_doLabel_13798.readProperty_string () ;
          }else if (GalgasBool::boolFalse == test_17) {
            temp_16 = GGS_string ("empty") ;
          }
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (var_whileLabel_14277.readProperty_location (), GGS_string ("'while' label does not match 'do' label, it should be ").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 538)), fixItArray18  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 538)) ;
        }
      }
      GGS_midrange_5F_conditionExpression var_whileCondition_14648 ;
      nt_midrange_5F_condition_5F_expression_ (var_whileCondition_14648, inCompiler) ;
      GGS_midrange_5F_instructionList var_instructionList_14710 ;
      nt_midrange_5F_instruction_5F_list_ (var_instructionList_14710, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      var_whilePartList_14196.addAssignOperation (var_whileCondition_14648, var_instructionList_14710, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 547))  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 547)) ;
      if (select_midrange_5F_syntax_22 (inCompiler) == 2) {
      }else{
        repeatFlag_14 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 550)) ;
    GGS_lstring var_endDoLabel_14924 ;
    switch (select_midrange_5F_syntax_24 (inCompiler)) {
    case 1: {
      var_endDoLabel_14924 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 553)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endDoLabel_14924 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 555)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_19 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_19) {
      test_19 = GGS_bool (ComparisonKind::notEqual, var_doLabel_13798.readProperty_string ().objectCompare (var_endDoLabel_14924.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        GGS_string temp_20 ;
        const GalgasBool test_21 = GGS_bool (ComparisonKind::notEqual, var_doLabel_13798.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_21) {
          temp_20 = var_doLabel_13798.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_21) {
          temp_20 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (var_endDoLabel_14924.readProperty_location (), GGS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_20, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 558)), fixItArray22  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 558)) ;
      }
    }
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_do_5F_while::init_21__21__21__21_ (var_instructionLocation_13943, var_repeatedInstructionList_14023, var_endOfRepeatedInstructionList_14142, var_whilePartList_14196, inCompiler COMMA_HERE) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 567)) ;
    GGS_location var_instructionLocation_15436 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 568)) ;
    GGS_luint var_occurrenceFactor_15499 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 569)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_MNOP::init_21__21_ (var_instructionLocation_15436, var_occurrenceFactor_15499, inCompiler COMMA_HERE) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 572)) ;
    GGS_location var_instructionLocation_15639 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 573)) ;
    GGS_lstring var_targetLabelName_15707 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 574)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_JSR::init_21__21_ (var_instructionLocation_15639, var_targetLabelName_15707, inCompiler COMMA_HERE) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 579)) ;
    GGS_location var_instructionLocation_15857 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 580)) ;
    GGS_lstring var_targetLabelName_15925 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 581)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_JUMP::init_21__21_ (var_instructionLocation_15857, var_targetLabelName_15925, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_midrange_5F_syntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 310)) ;
    switch (select_midrange_5F_syntax_10 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 315)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 319)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 320)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 321)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 323)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 325)) ;
    nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 338)) ;
    switch (select_midrange_5F_syntax_11 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 343)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checkbank COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 350)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 351)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checknobank COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 354)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 357)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_midrange_5F_syntax_12 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 364)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 365)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 370)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 372)) ;
    switch (select_midrange_5F_syntax_13 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 377)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 378)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksave COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 383)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 391)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nobank COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 398)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 401)) ;
    switch (select_midrange_5F_syntax_14 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 406)) ;
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 415)) ;
    switch (select_midrange_5F_syntax_15 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 420)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 431)) ;
    switch (select_midrange_5F_syntax_16 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 437)) ;
      nt_register_5F_parsing_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 439)) ;
      nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 444)) ;
      nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 448)) ;
    nt_midrange_5F_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 457)) ;
    switch (select_midrange_5F_syntax_17 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 461)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 463)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_midrange_5F_syntax_18 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 470)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 470)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 472)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 477)) ;
    nt_midrange_5F_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 487)) ;
    switch (select_midrange_5F_syntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 492)) ;
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_structured_5F_if_5F_instruction_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 501)) ;
    switch (select_midrange_5F_syntax_20 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 506)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 513)) ;
    switch (select_midrange_5F_syntax_21 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 518)) ;
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 530)) ;
      switch (select_midrange_5F_syntax_23 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 535)) ;
      } break ;
      default:
        break ;
      }
      nt_midrange_5F_condition_5F_expression_indexing (inCompiler) ;
      nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
      if (select_midrange_5F_syntax_22 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 550)) ;
    switch (select_midrange_5F_syntax_24 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 555)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 567)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 569)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 572)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 574)) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 579)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 581)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_ (const GGS_lstring constinArgument_ifLabel,
                                                                                                          GGS_midrange_5F_instruction & outArgument_outInstruction,
                                                                                                          GGS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                                          GGS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                                          GGS_labelMap & ioArgument_ioLabelMap,
                                                                                                          Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_location var_instructionLocation_16320 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 598)) ;
  GGS_midrange_5F_conditionExpression var_structured_5F_if_5F_condition_16396 ;
  nt_midrange_5F_condition_5F_expression_ (var_structured_5F_if_5F_condition_16396, inCompiler) ;
  GGS_midrange_5F_instructionList var_thenInstructionList_16459 ;
  nt_midrange_5F_instruction_5F_list_ (var_thenInstructionList_16459, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
  GGS_midrange_5F_instructionList var_elseInstructionList_16582 ;
  switch (select_midrange_5F_syntax_25 (inCompiler)) {
  case 1: {
    var_elseInstructionList_16582 = GGS_midrange_5F_instructionList::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 609)) ;
    GGS_lstring var_elsifIfLabel_16700 ;
    switch (select_midrange_5F_syntax_26 (inCompiler)) {
    case 1: {
      var_elsifIfLabel_16700 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 612)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_elsifIfLabel_16700 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 614)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elsifIfLabel_16700.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = constinArgument_ifLabel.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_elsifIfLabel_16700.readProperty_location (), GGS_string ("'elsif' label does not match 'if' label, it should be ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 617)), fixItArray3  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 617)) ;
      }
    }
    GGS_midrange_5F_instruction var_elsifPartInstruction_17087 ;
    nt_midrange_5F_structured_5F_if_5F_instruction_ (constinArgument_ifLabel, var_elsifPartInstruction_17087, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    var_elseInstructionList_16582 = GGS_midrange_5F_instructionList::init (inCompiler COMMA_HERE) ;
    var_elseInstructionList_16582.addAssignOperation (var_elsifPartInstruction_17087  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 627)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 629)) ;
    GGS_lstring var_elseLabel_17322 ;
    switch (select_midrange_5F_syntax_27 (inCompiler)) {
    case 1: {
      var_elseLabel_17322 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 632)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_elseLabel_17322 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 634)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elseLabel_17322.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_ifLabel.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_elseLabel_17322.readProperty_location (), GGS_string ("'else' label does not match 'if' label, it should be ").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 637)), fixItArray7  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 637)) ;
      }
    }
    nt_midrange_5F_instruction_5F_list_ (var_elseInstructionList_16582, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfElsePartLocation_17784 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 646)) ;
  outArgument_outInstruction = GGS_midrange_5F_instruction_5F_structured_5F_if::init_21__21__21__21__21_ (var_instructionLocation_16320, var_structured_5F_if_5F_condition_16396, var_thenInstructionList_16459, var_elseInstructionList_16582, var_endOfElsePartLocation_17784, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_midrange_5F_condition_5F_expression_indexing (inCompiler) ;
  nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_midrange_5F_syntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 609)) ;
    switch (select_midrange_5F_syntax_26 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 614)) ;
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_structured_5F_if_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 629)) ;
    switch (select_midrange_5F_syntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 634)) ;
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_ (GGS_midrange_5F_instruction & outArgument_outInstruction,
                                                                                                Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  switch (select_midrange_5F_syntax_28 (inCompiler)) {
  case 1: {
    GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code var_baseCode_18199 ;
    switch (select_midrange_5F_syntax_29 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 661)) ;
      var_baseCode_18199 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_ADDWF (SOURCE_FILE ("midrange_syntax.galgas3", 662)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 664)) ;
      var_baseCode_18199 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_ANDWF (SOURCE_FILE ("midrange_syntax.galgas3", 665)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 667)) ;
      var_baseCode_18199 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_COMF (SOURCE_FILE ("midrange_syntax.galgas3", 668)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 670)) ;
      var_baseCode_18199 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_DECF (SOURCE_FILE ("midrange_syntax.galgas3", 671)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 673)) ;
      var_baseCode_18199 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_INCF (SOURCE_FILE ("midrange_syntax.galgas3", 674)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 676)) ;
      var_baseCode_18199 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_IORWF (SOURCE_FILE ("midrange_syntax.galgas3", 677)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 679)) ;
      var_baseCode_18199 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_syntax.galgas3", 680)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 682)) ;
      var_baseCode_18199 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_RLF (SOURCE_FILE ("midrange_syntax.galgas3", 683)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 685)) ;
      var_baseCode_18199 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_RRF (SOURCE_FILE ("midrange_syntax.galgas3", 686)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 688)) ;
      var_baseCode_18199 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SUBWF (SOURCE_FILE ("midrange_syntax.galgas3", 689)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 691)) ;
      var_baseCode_18199 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_syntax.galgas3", 692)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 694)) ;
      var_baseCode_18199 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_XORWF (SOURCE_FILE ("midrange_syntax.galgas3", 695)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_18752 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 697)) ;
    GGS_registerExpression var_registerExpression_18817 ;
    nt_register_5F_parsing_ (var_registerExpression_18817, inCompiler) ;
    GGS_bool var_W_5F_isDestination_18866 ;
    nt_optional_5F_w_5F_as_5F_dest_ (var_W_5F_isDestination_18866, inCompiler) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_FD::init_21__21__21__21_ (var_instructionLocation_18752, var_baseCode_18199, var_registerExpression_18817, var_W_5F_isDestination_18866, inCompiler COMMA_HERE) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_bool test_1 = GGS_bool (ComparisonKind::equal, var_baseCode_18199.objectCompare (GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_syntax.galgas3", 707)))) ;
      if (GalgasBool::boolTrue == test_1.boolEnum ()) {
        test_1 = var_W_5F_isDestination_18866.operator_not (SOURCE_FILE ("midrange_syntax.galgas3", 707)) ;
      }
      test_0 = test_1.boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticWarning (var_instructionLocation_18752, GGS_string ("This instruction does not move data, it only sets flags. Use 'movf *, reg' instead of 'movf reg' to suppress this warning"), fixItArray2  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 708)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 712)) ;
    GGS_location var_instructionLocation_19370 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 713)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 714)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 715)) ;
    GGS_registerExpression var_registerName_19442 ;
    nt_register_5F_parsing_ (var_registerName_19442, inCompiler) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_FD::init_21__21__21__21_ (var_instructionLocation_19370, GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_syntax.galgas3", 719)), var_registerName_19442, GGS_bool (false), inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GGS_midrange_5F_F_5F_instruction_5F_base_5F_code var_FAinstruction_19653 ;
    switch (select_midrange_5F_syntax_30 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 726)) ;
      var_FAinstruction_19653 = GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("midrange_syntax.galgas3", 727)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 729)) ;
      var_FAinstruction_19653 = GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_syntax.galgas3", 730)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_19863 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 732)) ;
    GGS_registerExpression var_registerExpression_19928 ;
    nt_register_5F_parsing_ (var_registerExpression_19928, inCompiler) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_F::init_21__21__21_ (var_instructionLocation_19863, var_FAinstruction_19653, var_registerExpression_19928, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GGS_midrange_5F_bit_5F_oriented_5F_op var_bitOrientedOp_20108 ;
    switch (select_midrange_5F_syntax_31 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 741)) ;
      var_bitOrientedOp_20108 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("midrange_syntax.galgas3", 741)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 743)) ;
      var_bitOrientedOp_20108 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("midrange_syntax.galgas3", 743)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_20288 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 745)) ;
    GGS_registerExpression var_registerExpression_20353 ;
    nt_register_5F_parsing_ (var_registerExpression_20353, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 747)) ;
    GGS_bitNumberExpression var_bitNumberExpression_20410 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_20410, inCompiler) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_FB::init_21__21__21__21_ (var_instructionLocation_20288, var_bitOrientedOp_20108, var_registerExpression_20353, var_bitNumberExpression_20410, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 755)) ;
    GGS_location var_instructionLocation_20614 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 756)) ;
    GGS_lstring var_targetLabelName_20682 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 757)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_GOTO::init_21__21_ (var_instructionLocation_20614, var_targetLabelName_20682, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 762)) ;
    GGS_location var_instructionLocation_20854 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 763)) ;
    GGS_lstring var_targetLabelName_20922 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 764)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_CALL::init_21__21_ (var_instructionLocation_20854, var_targetLabelName_20922, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrw COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 769)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_CLRW::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 770)), inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 772)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_CLRWDT::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 773)), inCompiler COMMA_HERE) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 775)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_NOP::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 776)), inCompiler COMMA_HERE) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 778)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_SLEEP::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 779)), inCompiler COMMA_HERE) ;
  } break ;
  case 11: {
    GGS_midrange_5F_literal_5F_instruction_5F_opcode var_literalInstruction_21446 ;
    switch (select_midrange_5F_syntax_32 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addlw COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 783)) ;
      var_literalInstruction_21446 = GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_ADDLW (SOURCE_FILE ("midrange_syntax.galgas3", 783)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 785)) ;
      var_literalInstruction_21446 = GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_ANDLW (SOURCE_FILE ("midrange_syntax.galgas3", 785)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 787)) ;
      var_literalInstruction_21446 = GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_IORLW (SOURCE_FILE ("midrange_syntax.galgas3", 787)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 789)) ;
      var_literalInstruction_21446 = GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("midrange_syntax.galgas3", 789)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sublw COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 791)) ;
      var_literalInstruction_21446 = GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_SUBLW (SOURCE_FILE ("midrange_syntax.galgas3", 791)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 793)) ;
      var_literalInstruction_21446 = GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_XORLW (SOURCE_FILE ("midrange_syntax.galgas3", 793)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_22023 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 795)) ;
    GGS_immediatExpression var_expression_22092 ;
    nt_immediate_5F_expression_ (var_expression_22092, inCompiler) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_literalOperation::init_21__21__21_ (var_instructionLocation_22023, var_literalInstruction_21446, var_expression_22092, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_midrange_5F_syntax_28 (inCompiler)) {
  case 1: {
    switch (select_midrange_5F_syntax_29 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 661)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 664)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 667)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 670)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 673)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 676)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 679)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 682)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 685)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 688)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 691)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 694)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    nt_optional_5F_w_5F_as_5F_dest_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 712)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 714)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 715)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 3: {
    switch (select_midrange_5F_syntax_30 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 726)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 729)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 4: {
    switch (select_midrange_5F_syntax_31 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 741)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 743)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 747)) ;
    nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 755)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 757)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 762)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 764)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrw COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 769)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 772)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 775)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 778)) ;
  } break ;
  case 11: {
    switch (select_midrange_5F_syntax_32 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addlw COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 783)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 785)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 787)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 789)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sublw COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 791)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 793)) ;
    } break ;
    default:
      break ;
    }
    nt_immediate_5F_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_ (GGS_midrange_5F_conditionExpression & outArgument_outCondition,
                                                                                              Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 808)) ;
  GGS_midrange_5F_conditionExpression var_condition_22425 ;
  nt_midrange_5F_condition_5F_factor_ (var_condition_22425, inCompiler) ;
  outArgument_outCondition = GGS_midrange_5F_negateCondition::init_21_ (var_condition_22425, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 808)) ;
  nt_midrange_5F_condition_5F_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_ (GGS_midrange_5F_conditionExpression & outArgument_outCondition,
                                                                                              Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  nt_midrange_5F_condition_5F_expression_ (outArgument_outCondition, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_midrange_5F_condition_5F_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_ (GGS_midrange_5F_conditionExpression & outArgument_outCondition,
                                                                                              Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  switch (select_midrange_5F_syntax_33 (inCompiler)) {
  case 1: {
    GGS_bool var_isIncrement_22846 ;
    switch (select_midrange_5F_syntax_34 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 827)) ;
      var_isIncrement_22846 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 829)) ;
      var_isIncrement_22846 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GGS_registerExpression var_registerExpression_22981 ;
    nt_register_5F_parsing_ (var_registerExpression_22981, inCompiler) ;
    GGS_bool var_W_5F_isDestination_23014 ;
    switch (select_midrange_5F_syntax_35 (inCompiler)) {
    case 1: {
      var_W_5F_isDestination_23014 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 836)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 836)) ;
      var_W_5F_isDestination_23014 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_conditionString_23158 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 838)) ;
    GGS_string var_condition_23190 = var_conditionString_23158.readProperty_string ().getter_uppercased (SOURCE_FILE ("midrange_syntax.galgas3", 839)) ;
    GGS_bool var_branchIfZero_23250 ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_condition_23190.objectCompare (GGS_string ("Z"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_branchIfZero_23250 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, var_condition_23190.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          var_branchIfZero_23250 = GGS_bool (false) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_conditionString_23158.readProperty_location (), GGS_string ("invalid '").add_operation (var_conditionString_23158.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 846)).add_operation (GGS_string ("' condition; valid ones are: 'z' and 'nz'"), inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 846)), fixItArray2  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 846)) ;
        var_branchIfZero_23250.drop () ; // Release error dropped variable
      }
    }
    outArgument_outCondition = GGS_midrange_5F_incDecRegisterInCondition::init_21__21__21__21_ (var_registerExpression_22981, var_isIncrement_22846, var_W_5F_isDestination_23014, var_branchIfZero_23250, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    GGS_registerExpression var_registerExpression_23712 ;
    nt_register_5F_parsing_ (var_registerExpression_23712, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 857)) ;
    GGS_bitNumberExpression var_bitNumberExpression_23769 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_23769, inCompiler) ;
    outArgument_outCondition = GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::init_21__21_ (var_registerExpression_23712, var_bitNumberExpression_23769, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_midrange_5F_syntax_33 (inCompiler)) {
  case 1: {
    switch (select_midrange_5F_syntax_34 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 827)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 829)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_midrange_5F_syntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 836)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 836)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 838)) ;
  } break ;
  case 2: {
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 857)) ;
    nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_ (GGS_midrange_5F_conditionExpression & outArgument_outCondition,
                                                                                                   Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 870)) ;
  nt_midrange_5F_condition_5F_term_ (outArgument_outCondition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_midrange_5F_syntax_36 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 874)) ;
      GGS_midrange_5F_conditionExpression var_c_24174 ;
      nt_midrange_5F_condition_5F_term_ (var_c_24174, inCompiler) ;
      GGS_midrange_5F_conditionExpression var_rc_24214 = GGS_midrange_5F_negateCondition::init_21_ (var_c_24174, inCompiler COMMA_HERE) ;
      GGS_midrange_5F_conditionExpression var_lc_24289 = GGS_midrange_5F_negateCondition::init_21_ (outArgument_outCondition, inCompiler COMMA_HERE) ;
      outArgument_outCondition = GGS_midrange_5F_negateCondition::init_21_ (GGS_midrange_5F_andCondition::init_21__21_ (var_lc_24289, var_rc_24214, inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 880)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 870)) ;
  nt_midrange_5F_condition_5F_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_midrange_5F_syntax_36 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 874)) ;
      nt_midrange_5F_condition_5F_term_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 880)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_ (GGS_midrange_5F_conditionExpression & outArgument_outCondition,
                                                                                             Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  nt_midrange_5F_condition_5F_factor_ (outArgument_outCondition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_midrange_5F_syntax_37 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 890)) ;
      GGS_midrange_5F_conditionExpression var_c_24678 ;
      nt_midrange_5F_condition_5F_factor_ (var_c_24678, inCompiler) ;
      outArgument_outCondition = GGS_midrange_5F_andCondition::init_21__21_ (outArgument_outCondition, var_c_24678, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_midrange_5F_condition_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_midrange_5F_syntax_37 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 890)) ;
      nt_midrange_5F_condition_5F_factor_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}



//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_section_5F_list_i0_ (GGS_baseline_5F_routineDefinitionList & ioArgument_ioRoutineDefinitionList,
                                                                              GGS_lstringlist & ioArgument_ioUnusedRoutineList,
                                                                              GGS_ramDefinitionList & ioArgument_ioRamDefinitionList,
                                                                              GGS_lstringlist & ioArgument_unusedRegisterList,
                                                                              GGS_configDefinitionList & ioArgument_ioConfigDefinitionList,
                                                                              GGS_constantDefinitionList & ioArgument_ioConstantDefinitionList,
                                                                              Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 37)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 38)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GGS_lstring var_unusedRegister_1028 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 40)) ;
        ioArgument_unusedRegisterList.addAssignOperation (var_unusedRegister_1028  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 41)) ;
        if (select_baseline_5F_syntax_1 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 43)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 46)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 47)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        GGS_lstring var_unusedRoutine_1194 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 49)) ;
        ioArgument_ioUnusedRoutineList.addAssignOperation (var_unusedRoutine_1194  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 50)) ;
        if (select_baseline_5F_syntax_2 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 52)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      nt_configuration_5F_definition_ (ioArgument_ioConfigDefinitionList, inCompiler) ;
    } break ;
    case 5: {
      nt_ram_5F_definition_ (ioArgument_ioRamDefinitionList, inCompiler) ;
    } break ;
    case 6: {
      nt_constant_5F_definition_ (ioArgument_ioConstantDefinitionList, inCompiler) ;
    } break ;
    case 7: {
      nt_baseline_5F_routine_5F_definition_ (ioArgument_ioRoutineDefinitionList, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_section_5F_list_i0_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 37)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 38)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 40)) ;
        if (select_baseline_5F_syntax_1 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 43)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 46)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 47)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 49)) ;
        if (select_baseline_5F_syntax_2 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 52)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      nt_configuration_5F_definition_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_ram_5F_definition_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_constant_5F_definition_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_baseline_5F_routine_5F_definition_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_ (GGS_baseline_5F_instructionList & outArgument_outInstructionList,
                                                                                              GGS_labelMap & ioArgument_ioLabelMap,
                                                                                              Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GGS_baseline_5F_instructionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_3 (inCompiler)) {
    case 2: {
      GGS_baseline_5F_instruction var_instruction_1806 ;
      nt_baseline_5F_simple_5F_instruction_ (var_instruction_1806, inCompiler) ;
      outArgument_outInstructionList.addAssignOperation (var_instruction_1806  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 75)) ;
    } break ;
    case 3: {
      GGS_baseline_5F_instruction var_instruction_1914 ;
      nt_baseline_5F_structured_5F_instruction_ (var_instruction_1914, ioArgument_ioLabelMap, inCompiler) ;
      outArgument_outInstructionList.addAssignOperation (var_instruction_1914  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 80)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_3 (inCompiler)) {
    case 2: {
      nt_baseline_5F_simple_5F_instruction_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_baseline_5F_structured_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_ (GGS_baseline_5F_routineDefinitionList & ioArgument_ioRoutineDefinitionList,
                                                                                                Lexique_piccolo_5F_lexique * inCompiler) {
  GGS_bool var_noreturn_2159 ;
  switch (select_baseline_5F_syntax_4 (inCompiler)) {
  case 1: {
    var_noreturn_2159 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 92)) ;
    var_noreturn_2159 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 95)) ;
  GGS_lstring var_routineName_2285 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 96)) ;
  GGS_luint var_page_2348 ;
  switch (select_baseline_5F_syntax_5 (inCompiler)) {
  case 1: {
    var_page_2348 = GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 100)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_page COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 102)) ;
    var_page_2348 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 103)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 106)) ;
  GGS_labelMap var_labelMap_2473 = GGS_labelMap::init (inCompiler COMMA_HERE) ;
  GGS_baseline_5F_instructionList var_instructionList_2527 ;
  nt_baseline_5F_instruction_5F_list_ (var_instructionList_2527, var_labelMap_2473, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 111)) ;
  ioArgument_ioRoutineDefinitionList.addAssignOperation (var_routineName_2285, var_page_2348, var_noreturn_2159, var_instructionList_2527, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 117))  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 112)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_baseline_5F_syntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 92)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 95)) ;
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 96)) ;
  switch (select_baseline_5F_syntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_page COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 102)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 103)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 106)) ;
  nt_baseline_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 111)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_ (GGS_baseline_5F_instruction & outArgument_outInstruction,
                                                                                                    GGS_labelMap & ioArgument_ioLabelMap,
                                                                                                    Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  switch (select_baseline_5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 127)) ;
    GGS_lstring var_doLabel_2876 ;
    switch (select_baseline_5F_syntax_7 (inCompiler)) {
    case 1: {
      var_doLabel_2876 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 130)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_doLabel_2876 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 132)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_2876, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 133)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_3021 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 135)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 136)) ;
    GGS_lstring var_constantName_3088 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 137)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 138)) ;
    GGS_immediatExpression var_lowBoundExpression_3161 ;
    nt_immediate_5F_expression_ (var_lowBoundExpression_3161, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 140)) ;
    GGS_immediatExpression var_highBoundExpression_3242 ;
    nt_immediate_5F_expression_ (var_highBoundExpression_3242, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 142)) ;
    GGS_baseline_5F_instructionList var_instructionList_3333 ;
    nt_baseline_5F_instruction_5F_list_ (var_instructionList_3333, ioArgument_ioLabelMap, inCompiler) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::init_21__21__21__21__21__21_ (var_instructionLocation_3021, var_constantName_3088, var_lowBoundExpression_3161, var_highBoundExpression_3242, var_instructionList_3333, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 150)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 152)) ;
    GGS_lstring var_endDoLabel_3590 ;
    switch (select_baseline_5F_syntax_8 (inCompiler)) {
    case 1: {
      var_endDoLabel_3590 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 155)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endDoLabel_3590 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 157)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, var_doLabel_2876.readProperty_string ().objectCompare (var_endDoLabel_3590.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::notEqual, var_doLabel_2876.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = var_doLabel_2876.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_endDoLabel_3590.readProperty_location (), GGS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 160)), fixItArray3  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 160)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 164)) ;
    GGS_location var_instructionLocation_3932 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 165)) ;
    GGS_lstring var_targetLabelName_4000 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 166)) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_JUMP::init_21__21_ (var_instructionLocation_3932, var_targetLabelName_4000, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 171)) ;
    GGS_location var_instructionLocation_4150 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 172)) ;
    GGS_lstring var_targetLabelName_4218 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 173)) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_JSR::init_21__21_ (var_instructionLocation_4150, var_targetLabelName_4218, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 178)) ;
    GGS_lstring var_foreverLabel_4370 ;
    switch (select_baseline_5F_syntax_9 (inCompiler)) {
    case 1: {
      var_foreverLabel_4370 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 181)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_foreverLabel_4370 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 183)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_foreverLabel_4370, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 184)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_4525 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 186)) ;
    GGS_baseline_5F_instructionList var_instructionList_4599 ;
    nt_baseline_5F_instruction_5F_list_ (var_instructionList_4599, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 188)) ;
    GGS_lstring var_endForeverLabel_4655 ;
    switch (select_baseline_5F_syntax_10 (inCompiler)) {
    case 1: {
      var_endForeverLabel_4655 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 191)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endForeverLabel_4655 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 193)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::notEqual, var_foreverLabel_4370.readProperty_string ().objectCompare (var_endForeverLabel_4655.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, var_foreverLabel_4370.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = var_foreverLabel_4370.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_endForeverLabel_4655.readProperty_location (), GGS_string ("'end' label does not match 'fovever' label, it should be ").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 196)), fixItArray7  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 196)) ;
      }
    }
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_FOREVER::init_21__21__21_ (var_instructionLocation_4525, var_instructionList_4599, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 202)), inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 205)) ;
    GGS_location var_instructionLocation_5171 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 206)) ;
    GGS_registerExpression var_registerExpression_5236 ;
    GGS_bitNumberExpression var_bitNumberExpression_5284 ;
    GGS_bool var_skipIfSet_5318 ;
    switch (select_baseline_5F_syntax_11 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 211)) ;
      nt_register_5F_parsing_ (var_registerExpression_5236, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 213)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_5284, inCompiler) ;
      var_skipIfSet_5318 = GGS_bool (true) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_ (var_registerExpression_5236, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 218)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_5284, inCompiler) ;
      var_skipIfSet_5318 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 222)) ;
    GGS_baseline_5F_instruction var_instruction_5668 ;
    nt_baseline_5F_simple_5F_instruction_ (var_instruction_5668, inCompiler) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_IF_5F_BitTest::init_21__21__21__21__21_ (var_instructionLocation_5171, var_instruction_5668, var_skipIfSet_5318, var_registerExpression_5236, var_bitNumberExpression_5284, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 231)) ;
    GGS_location var_instructionLocation_5885 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 232)) ;
    GGS_bool var_increment_5936 ;
    switch (select_baseline_5F_syntax_12 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 235)) ;
      var_increment_5936 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 237)) ;
      var_increment_5936 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_registerExpression var_registerExpression_6065 ;
    nt_register_5F_parsing_ (var_registerExpression_6065, inCompiler) ;
    GGS_bool var_w_5F_isTarget_6098 ;
    switch (select_baseline_5F_syntax_13 (inCompiler)) {
    case 1: {
      var_w_5F_isTarget_6098 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 244)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 244)) ;
      var_w_5F_isTarget_6098 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_conditionString_6227 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 246)) ;
    GGS_string var_condition_6259 = var_conditionString_6227.readProperty_string ().getter_uppercased (SOURCE_FILE ("baseline_syntax.galgas3", 247)) ;
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = GGS_bool (ComparisonKind::notEqual, var_condition_6259.objectCompare (GGS_string ("NZ"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_conditionString_6227.readProperty_location (), GGS_string ("invalid '").add_operation (var_condition_6259, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 249)).add_operation (GGS_string ("' condition; it should be 'nz'"), inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 249)), fixItArray9  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 249)) ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 251)) ;
    GGS_baseline_5F_instruction var_instruction_6479 ;
    nt_baseline_5F_simple_5F_instruction_ (var_instruction_6479, inCompiler) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_IF_5F_IncDec::init_21__21__21__21__21_ (var_instructionLocation_5885, var_instruction_6479, var_increment_5936, var_registerExpression_6065, var_w_5F_isTarget_6098, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 261)) ;
    GGS_lstring var_ifLabel_6690 ;
    switch (select_baseline_5F_syntax_14 (inCompiler)) {
    case 1: {
      var_ifLabel_6690 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 264)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_ifLabel_6690 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 266)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_ifLabel_6690, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 267)) ;
      }
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_structured_5F_if_5F_instruction_ (var_ifLabel_6690, outArgument_outInstruction, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 270)) ;
    GGS_lstring var_endIfLabel_6923 ;
    switch (select_baseline_5F_syntax_15 (inCompiler)) {
    case 1: {
      var_endIfLabel_6923 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 273)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endIfLabel_6923 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 275)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = GGS_bool (ComparisonKind::notEqual, var_ifLabel_6690.readProperty_string ().objectCompare (var_endIfLabel_6923.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GGS_string temp_11 ;
        const GalgasBool test_12 = GGS_bool (ComparisonKind::notEqual, var_ifLabel_6690.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          temp_11 = var_ifLabel_6690.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_12) {
          temp_11 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (var_endIfLabel_6923.readProperty_location (), GGS_string ("'end' label does not match 'if' label, it should be ").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 278)), fixItArray13  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 278)) ;
      }
    }
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 282)) ;
    GGS_lstring var_doLabel_7262 ;
    switch (select_baseline_5F_syntax_16 (inCompiler)) {
    case 1: {
      var_doLabel_7262 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 285)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_doLabel_7262 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 287)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_7262, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 288)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_7397 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 290)) ;
    GGS_baseline_5F_instructionList var_repeatedInstructionList_7471 ;
    nt_baseline_5F_instruction_5F_list_ (var_repeatedInstructionList_7471, ioArgument_ioLabelMap, inCompiler) ;
    GGS_location var_endOfRepeatedInstructionList_7516 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 292)) ;
    GGS_baseline_5F_partList var_whilePartList_7570 = GGS_baseline_5F_partList::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_14 = true ;
    while (repeatFlag_14) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 295)) ;
      GGS_lstring var_whileLabel_7652 ;
      switch (select_baseline_5F_syntax_18 (inCompiler)) {
      case 1: {
        var_whileLabel_7652 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 298)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        var_whileLabel_7652 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 300)) ;
      } break ;
      default:
        break ;
      }
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::notEqual, var_doLabel_7262.readProperty_string ().objectCompare (var_whileLabel_7652.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          GGS_string temp_16 ;
          const GalgasBool test_17 = GGS_bool (ComparisonKind::notEqual, var_doLabel_7262.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            temp_16 = var_doLabel_7262.readProperty_string () ;
          }else if (GalgasBool::boolFalse == test_17) {
            temp_16 = GGS_string ("empty") ;
          }
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (var_whileLabel_7652.readProperty_location (), GGS_string ("'while' label does not match 'do' label, it should be ").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 303)), fixItArray18  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 303)) ;
        }
      }
      GGS_baseline_5F_conditionExpression var_whileCondition_8023 ;
      nt_baseline_5F_condition_5F_expression_ (var_whileCondition_8023, inCompiler) ;
      GGS_baseline_5F_instructionList var_instructionList_8077 ;
      nt_baseline_5F_instruction_5F_list_ (var_instructionList_8077, ioArgument_ioLabelMap, inCompiler) ;
      var_whilePartList_7570.addAssignOperation (var_whileCondition_8023, var_instructionList_8077, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 308))  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 308)) ;
      if (select_baseline_5F_syntax_17 (inCompiler) == 2) {
      }else{
        repeatFlag_14 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 311)) ;
    GGS_lstring var_endDoLabel_8223 ;
    switch (select_baseline_5F_syntax_19 (inCompiler)) {
    case 1: {
      var_endDoLabel_8223 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 314)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endDoLabel_8223 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 316)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_19 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_19) {
      test_19 = GGS_bool (ComparisonKind::notEqual, var_doLabel_7262.readProperty_string ().objectCompare (var_endDoLabel_8223.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        GGS_string temp_20 ;
        const GalgasBool test_21 = GGS_bool (ComparisonKind::notEqual, var_doLabel_7262.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_21) {
          temp_20 = var_doLabel_7262.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_21) {
          temp_20 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (var_endDoLabel_8223.readProperty_location (), GGS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_20, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 319)), fixItArray22  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 319)) ;
      }
    }
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_do_5F_while::init_21__21__21__21_ (var_instructionLocation_7397, var_repeatedInstructionList_7471, var_endOfRepeatedInstructionList_7516, var_whilePartList_7570, inCompiler COMMA_HERE) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 328)) ;
    GGS_location var_instructionLocation_8735 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 329)) ;
    GGS_luint var_occurrenceFactor_8798 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 330)) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_MNOP::init_21__21_ (var_instructionLocation_8735, var_occurrenceFactor_8798, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_baseline_5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 127)) ;
    switch (select_baseline_5F_syntax_7 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 132)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 136)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 137)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 138)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 140)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 142)) ;
    nt_baseline_5F_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 152)) ;
    switch (select_baseline_5F_syntax_8 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 157)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 164)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 166)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 171)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 173)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 178)) ;
    switch (select_baseline_5F_syntax_9 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 183)) ;
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 188)) ;
    switch (select_baseline_5F_syntax_10 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 193)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 205)) ;
    switch (select_baseline_5F_syntax_11 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 211)) ;
      nt_register_5F_parsing_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 213)) ;
      nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 218)) ;
      nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 222)) ;
    nt_baseline_5F_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 231)) ;
    switch (select_baseline_5F_syntax_12 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 235)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 237)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_baseline_5F_syntax_13 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 244)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 244)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 246)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 251)) ;
    nt_baseline_5F_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 261)) ;
    switch (select_baseline_5F_syntax_14 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 266)) ;
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_structured_5F_if_5F_instruction_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 270)) ;
    switch (select_baseline_5F_syntax_15 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 275)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 282)) ;
    switch (select_baseline_5F_syntax_16 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 287)) ;
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_instruction_5F_list_indexing (inCompiler) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 295)) ;
      switch (select_baseline_5F_syntax_18 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 300)) ;
      } break ;
      default:
        break ;
      }
      nt_baseline_5F_condition_5F_expression_indexing (inCompiler) ;
      nt_baseline_5F_instruction_5F_list_indexing (inCompiler) ;
      if (select_baseline_5F_syntax_17 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 311)) ;
    switch (select_baseline_5F_syntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 316)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 328)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 330)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_ (const GGS_lstring constinArgument_ifLabel,
                                                                                                          GGS_baseline_5F_instruction & outArgument_outInstruction,
                                                                                                          GGS_labelMap & ioArgument_ioLabelMap,
                                                                                                          Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_location var_instructionLocation_9121 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 342)) ;
  GGS_baseline_5F_conditionExpression var_structured_5F_if_5F_condition_9197 ;
  nt_baseline_5F_condition_5F_expression_ (var_structured_5F_if_5F_condition_9197, inCompiler) ;
  GGS_baseline_5F_instructionList var_thenInstructionList_9256 ;
  nt_baseline_5F_instruction_5F_list_ (var_thenInstructionList_9256, ioArgument_ioLabelMap, inCompiler) ;
  GGS_baseline_5F_instructionList var_elseInstructionList_9321 ;
  switch (select_baseline_5F_syntax_20 (inCompiler)) {
  case 1: {
    var_elseInstructionList_9321 = GGS_baseline_5F_instructionList::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 349)) ;
    GGS_lstring var_elsifIfLabel_9439 ;
    switch (select_baseline_5F_syntax_21 (inCompiler)) {
    case 1: {
      var_elsifIfLabel_9439 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 352)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_elsifIfLabel_9439 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 354)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elsifIfLabel_9439.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = constinArgument_ifLabel.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_elsifIfLabel_9439.readProperty_location (), GGS_string ("'elsif' label does not match 'if' label, it should be ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 357)), fixItArray3  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 357)) ;
      }
    }
    GGS_baseline_5F_instruction var_elsifPartInstruction_9814 ;
    nt_baseline_5F_structured_5F_if_5F_instruction_ (constinArgument_ifLabel, var_elsifPartInstruction_9814, ioArgument_ioLabelMap, inCompiler) ;
    var_elseInstructionList_9321 = GGS_baseline_5F_instructionList::init (inCompiler COMMA_HERE) ;
    var_elseInstructionList_9321.addAssignOperation (var_elsifPartInstruction_9814  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 362)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 364)) ;
    GGS_lstring var_elseLabel_9985 ;
    switch (select_baseline_5F_syntax_22 (inCompiler)) {
    case 1: {
      var_elseLabel_9985 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 367)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_elseLabel_9985 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 369)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elseLabel_9985.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_ifLabel.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_elseLabel_9985.readProperty_location (), GGS_string ("'else' label does not match 'if' label, it should be ").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 372)), fixItArray7  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 372)) ;
      }
    }
    nt_baseline_5F_instruction_5F_list_ (var_elseInstructionList_9321, ioArgument_ioLabelMap, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfElsePartLocation_10377 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 377)) ;
  outArgument_outInstruction = GGS_baseline_5F_instruction_5F_structured_5F_if::init_21__21__21__21__21_ (var_instructionLocation_9121, var_structured_5F_if_5F_condition_9197, var_thenInstructionList_9256, var_elseInstructionList_9321, var_endOfElsePartLocation_10377, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_baseline_5F_condition_5F_expression_indexing (inCompiler) ;
  nt_baseline_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_baseline_5F_syntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 349)) ;
    switch (select_baseline_5F_syntax_21 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 354)) ;
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_structured_5F_if_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 364)) ;
    switch (select_baseline_5F_syntax_22 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 369)) ;
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_ (GGS_baseline_5F_instruction & outArgument_outInstruction,
                                                                                                Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  switch (select_baseline_5F_syntax_23 (inCompiler)) {
  case 1: {
    GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code var_baseCode_10792 ;
    switch (select_baseline_5F_syntax_24 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 392)) ;
      var_baseCode_10792 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_ADDWF (SOURCE_FILE ("baseline_syntax.galgas3", 393)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 395)) ;
      var_baseCode_10792 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_ANDWF (SOURCE_FILE ("baseline_syntax.galgas3", 396)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 398)) ;
      var_baseCode_10792 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_COMF (SOURCE_FILE ("baseline_syntax.galgas3", 399)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 401)) ;
      var_baseCode_10792 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_DECF (SOURCE_FILE ("baseline_syntax.galgas3", 402)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 404)) ;
      var_baseCode_10792 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_INCF (SOURCE_FILE ("baseline_syntax.galgas3", 405)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 407)) ;
      var_baseCode_10792 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_IORWF (SOURCE_FILE ("baseline_syntax.galgas3", 408)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 410)) ;
      var_baseCode_10792 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("baseline_syntax.galgas3", 411)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 413)) ;
      var_baseCode_10792 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_RLF (SOURCE_FILE ("baseline_syntax.galgas3", 414)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 416)) ;
      var_baseCode_10792 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_RRF (SOURCE_FILE ("baseline_syntax.galgas3", 417)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 419)) ;
      var_baseCode_10792 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_SUBWF (SOURCE_FILE ("baseline_syntax.galgas3", 420)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 422)) ;
      var_baseCode_10792 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("baseline_syntax.galgas3", 423)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 425)) ;
      var_baseCode_10792 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_XORWF (SOURCE_FILE ("baseline_syntax.galgas3", 426)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_11345 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 428)) ;
    GGS_registerExpression var_registerExpression_11410 ;
    nt_register_5F_parsing_ (var_registerExpression_11410, inCompiler) ;
    GGS_bool var_W_5F_isDestination_11459 ;
    nt_optional_5F_w_5F_as_5F_dest_ (var_W_5F_isDestination_11459, inCompiler) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_FD::init_21__21__21__21_ (var_instructionLocation_11345, var_baseCode_10792, var_registerExpression_11410, var_W_5F_isDestination_11459, inCompiler COMMA_HERE) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_bool test_1 = GGS_bool (ComparisonKind::equal, var_baseCode_10792.objectCompare (GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("baseline_syntax.galgas3", 438)))) ;
      if (GalgasBool::boolTrue == test_1.boolEnum ()) {
        test_1 = var_W_5F_isDestination_11459.operator_not (SOURCE_FILE ("baseline_syntax.galgas3", 438)) ;
      }
      test_0 = test_1.boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticWarning (var_instructionLocation_11345, GGS_string ("This instruction does not move data, it only sets flags. Use 'movf *, reg' instead of 'movf reg' to suppress this warning"), fixItArray2  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 439)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 443)) ;
    GGS_location var_instructionLocation_11963 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 444)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 445)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 446)) ;
    GGS_registerExpression var_registerName_12035 ;
    nt_register_5F_parsing_ (var_registerName_12035, inCompiler) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_FD::init_21__21__21__21_ (var_instructionLocation_11963, GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("baseline_syntax.galgas3", 450)), var_registerName_12035, GGS_bool (false), inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GGS_baseline_5F_F_5F_instruction_5F_base_5F_code var_FAinstruction_12246 ;
    switch (select_baseline_5F_syntax_25 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 457)) ;
      var_FAinstruction_12246 = GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("baseline_syntax.galgas3", 458)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 460)) ;
      var_FAinstruction_12246 = GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("baseline_syntax.galgas3", 461)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_12456 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 463)) ;
    GGS_registerExpression var_registerExpression_12521 ;
    nt_register_5F_parsing_ (var_registerExpression_12521, inCompiler) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_F::init_21__21__21_ (var_instructionLocation_12456, var_FAinstruction_12246, var_registerExpression_12521, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GGS_baseline_5F_bit_5F_oriented_5F_op var_bitOrientedOp_12701 ;
    switch (select_baseline_5F_syntax_26 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 472)) ;
      var_bitOrientedOp_12701 = GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("baseline_syntax.galgas3", 472)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 474)) ;
      var_bitOrientedOp_12701 = GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("baseline_syntax.galgas3", 474)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_12881 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 476)) ;
    GGS_registerExpression var_registerExpression_12946 ;
    nt_register_5F_parsing_ (var_registerExpression_12946, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 478)) ;
    GGS_bitNumberExpression var_bitNumberExpression_13003 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_13003, inCompiler) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_FB::init_21__21__21__21_ (var_instructionLocation_12881, var_bitOrientedOp_12701, var_registerExpression_12946, var_bitNumberExpression_13003, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 486)) ;
    GGS_location var_instructionLocation_13207 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 487)) ;
    GGS_lstring var_targetLabelName_13275 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 488)) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_GOTO::init_21__21_ (var_instructionLocation_13207, var_targetLabelName_13275, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 493)) ;
    GGS_location var_instructionLocation_13447 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 494)) ;
    GGS_lstring var_targetLabelName_13515 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 495)) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_CALL::init_21__21_ (var_instructionLocation_13447, var_targetLabelName_13515, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrw COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 500)) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_WO_5F_OPERAND::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 501)), GGS_baseline_5F_WO_5F_OPERAND_5F_group::class_func_CLRW (SOURCE_FILE ("baseline_syntax.galgas3", 501)), inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 503)) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_WO_5F_OPERAND::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 504)), GGS_baseline_5F_WO_5F_OPERAND_5F_group::class_func_CLRWDT (SOURCE_FILE ("baseline_syntax.galgas3", 504)), inCompiler COMMA_HERE) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 506)) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_WO_5F_OPERAND::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 507)), GGS_baseline_5F_WO_5F_OPERAND_5F_group::class_func_NOP (SOURCE_FILE ("baseline_syntax.galgas3", 507)), inCompiler COMMA_HERE) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_option COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 509)) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_WO_5F_OPERAND::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 510)), GGS_baseline_5F_WO_5F_OPERAND_5F_group::class_func_OPTION_5F_ (SOURCE_FILE ("baseline_syntax.galgas3", 510)), inCompiler COMMA_HERE) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 512)) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_WO_5F_OPERAND::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 513)), GGS_baseline_5F_WO_5F_OPERAND_5F_group::class_func_SLEEP (SOURCE_FILE ("baseline_syntax.galgas3", 513)), inCompiler COMMA_HERE) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_tris COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 515)) ;
    GGS_lstring var_operand_14324 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 516)) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_TRIS::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 517)), var_operand_14324, inCompiler COMMA_HERE) ;
  } break ;
  case 13: {
    GGS_baseline_5F_literal_5F_instruction_5F_opcode var_literalInstruction_14458 ;
    switch (select_baseline_5F_syntax_27 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 521)) ;
      var_literalInstruction_14458 = GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_ANDLW (SOURCE_FILE ("baseline_syntax.galgas3", 521)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 523)) ;
      var_literalInstruction_14458 = GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_IORLW (SOURCE_FILE ("baseline_syntax.galgas3", 523)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 525)) ;
      var_literalInstruction_14458 = GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("baseline_syntax.galgas3", 525)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 527)) ;
      var_literalInstruction_14458 = GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_XORLW (SOURCE_FILE ("baseline_syntax.galgas3", 527)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_14859 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 529)) ;
    GGS_immediatExpression var_expression_14928 ;
    nt_immediate_5F_expression_ (var_expression_14928, inCompiler) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_literalOperation::init_21__21__21_ (var_instructionLocation_14859, var_literalInstruction_14458, var_expression_14928, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_baseline_5F_syntax_23 (inCompiler)) {
  case 1: {
    switch (select_baseline_5F_syntax_24 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 392)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 395)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 398)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 401)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 404)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 407)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 410)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 413)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 416)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 419)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 422)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 425)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    nt_optional_5F_w_5F_as_5F_dest_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 443)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 445)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 446)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 3: {
    switch (select_baseline_5F_syntax_25 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 457)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 460)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 4: {
    switch (select_baseline_5F_syntax_26 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 472)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 474)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 478)) ;
    nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 486)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 488)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 493)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 495)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrw COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 500)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 503)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 506)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_option COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 509)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 512)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_tris COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 515)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 516)) ;
  } break ;
  case 13: {
    switch (select_baseline_5F_syntax_27 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 521)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 523)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 525)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 527)) ;
    } break ;
    default:
      break ;
    }
    nt_immediate_5F_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_ (GGS_baseline_5F_conditionExpression & outArgument_outCondition,
                                                                                              Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 542)) ;
  GGS_baseline_5F_conditionExpression var_condition_15261 ;
  nt_baseline_5F_condition_5F_factor_ (var_condition_15261, inCompiler) ;
  outArgument_outCondition = GGS_baseline_5F_negateCondition::init_21_ (var_condition_15261, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 542)) ;
  nt_baseline_5F_condition_5F_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_ (GGS_baseline_5F_conditionExpression & outArgument_outCondition,
                                                                                              Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  nt_baseline_5F_condition_5F_expression_ (outArgument_outCondition, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_baseline_5F_condition_5F_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_ (GGS_baseline_5F_conditionExpression & outArgument_outCondition,
                                                                                              Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  switch (select_baseline_5F_syntax_28 (inCompiler)) {
  case 1: {
    GGS_bool var_isIncrement_15682 ;
    switch (select_baseline_5F_syntax_29 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 561)) ;
      var_isIncrement_15682 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 563)) ;
      var_isIncrement_15682 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GGS_registerExpression var_registerExpression_15817 ;
    nt_register_5F_parsing_ (var_registerExpression_15817, inCompiler) ;
    GGS_bool var_W_5F_isDestination_15850 ;
    switch (select_baseline_5F_syntax_30 (inCompiler)) {
    case 1: {
      var_W_5F_isDestination_15850 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 570)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 570)) ;
      var_W_5F_isDestination_15850 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_conditionString_15994 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 572)) ;
    GGS_string var_condition_16026 = var_conditionString_15994.readProperty_string ().getter_uppercased (SOURCE_FILE ("baseline_syntax.galgas3", 573)) ;
    GGS_bool var_branchIfZero_16086 ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_condition_16026.objectCompare (GGS_string ("Z"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_branchIfZero_16086 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, var_condition_16026.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          var_branchIfZero_16086 = GGS_bool (false) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_conditionString_15994.readProperty_location (), GGS_string ("invalid '").add_operation (var_conditionString_15994.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 580)).add_operation (GGS_string ("' condition; valid ones are: 'z' and 'nz'"), inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 580)), fixItArray2  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 580)) ;
        var_branchIfZero_16086.drop () ; // Release error dropped variable
      }
    }
    outArgument_outCondition = GGS_baseline_5F_incDecRegisterInCondition::init_21__21__21__21_ (var_registerExpression_15817, var_isIncrement_15682, var_W_5F_isDestination_15850, var_branchIfZero_16086, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    GGS_registerExpression var_registerExpression_16548 ;
    nt_register_5F_parsing_ (var_registerExpression_16548, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 591)) ;
    GGS_bitNumberExpression var_bitNumberExpression_16605 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_16605, inCompiler) ;
    outArgument_outCondition = GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::init_21__21_ (var_registerExpression_16548, var_bitNumberExpression_16605, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_baseline_5F_syntax_28 (inCompiler)) {
  case 1: {
    switch (select_baseline_5F_syntax_29 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 561)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 563)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_baseline_5F_syntax_30 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 570)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 570)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 572)) ;
  } break ;
  case 2: {
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 591)) ;
    nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_ (GGS_baseline_5F_conditionExpression & outArgument_outCondition,
                                                                                                  Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 604)) ;
  nt_baseline_5F_condition_5F_term_ (outArgument_outCondition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_baseline_5F_syntax_31 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 608)) ;
      GGS_baseline_5F_conditionExpression var_c_17010 ;
      nt_baseline_5F_condition_5F_term_ (var_c_17010, inCompiler) ;
      GGS_baseline_5F_conditionExpression var_rc_17050 = GGS_baseline_5F_negateCondition::init_21_ (var_c_17010, inCompiler COMMA_HERE) ;
      GGS_baseline_5F_conditionExpression var_lc_17125 = GGS_baseline_5F_negateCondition::init_21_ (outArgument_outCondition, inCompiler COMMA_HERE) ;
      outArgument_outCondition = GGS_baseline_5F_negateCondition::init_21_ (GGS_baseline_5F_andCondition::init_21__21_ (var_lc_17125, var_rc_17050, inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 614)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 604)) ;
  nt_baseline_5F_condition_5F_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_baseline_5F_syntax_31 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 608)) ;
      nt_baseline_5F_condition_5F_term_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 614)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_ (GGS_baseline_5F_conditionExpression & outArgument_outCondition,
                                                                                             Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  nt_baseline_5F_condition_5F_factor_ (outArgument_outCondition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_baseline_5F_syntax_32 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 624)) ;
      GGS_baseline_5F_conditionExpression var_c_17514 ;
      nt_baseline_5F_condition_5F_factor_ (var_c_17514, inCompiler) ;
      outArgument_outCondition = GGS_baseline_5F_andCondition::init_21__21_ (outArgument_outCondition, var_c_17514, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_baseline_5F_condition_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_baseline_5F_syntax_32 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 624)) ;
      nt_baseline_5F_condition_5F_factor_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

