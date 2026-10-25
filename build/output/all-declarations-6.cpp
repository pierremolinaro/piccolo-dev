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
//Abstract extension func '@baseline_assembly_instruction length'
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
//Extension proc '@midrange_intermediate_instruction setCurrentAddress'
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
//Abstract extension proc '@ipic18AbstractBlockTerminator terminatorMinMaxDuration'
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
//--- Find proc
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
//Extension proc '@ipic18SequentialInstruction minMaxDuration'
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
//Abstract extension proc '@immediatExpression eval'
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
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_immediatExpression) ;
    inObject->method_eval (constin_inRegisterTable, constin_inConstantMap, out_outResult, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@bitNumberExpression getBitNumber'
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
//--- Find proc
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
  GGS_lstring var_deviceName_344 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 12)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 13)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_processor COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 14)) ;
  GGS_processorType var_processorType_397 ;
  GGS_lstring var_processorName_437 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 16)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_processorName_437.readProperty_string ().objectCompare (GGS_string ("pic18_60"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_processorType_397 = GGS_processorType::class_func_pic_31__38__5F__36__30_ (SOURCE_FILE ("piccoloDevice_syntax.galgas3", 18)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, var_processorName_437.readProperty_string ().objectCompare (GGS_string ("pic18_80"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_processorType_397 = GGS_processorType::class_func_pic_31__38__5F__38__30_ (SOURCE_FILE ("piccoloDevice_syntax.galgas3", 20)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::equal, var_processorName_437.readProperty_string ().objectCompare (GGS_string ("mid-range"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          var_processorType_397 = GGS_processorType::class_func_midrange (SOURCE_FILE ("piccoloDevice_syntax.galgas3", 22)) ;
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::equal, var_processorName_437.readProperty_string ().objectCompare (GGS_string ("baseline"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            var_processorType_397 = GGS_processorType::class_func_baseline (SOURCE_FILE ("piccoloDevice_syntax.galgas3", 24)) ;
          }
        }
        if (GalgasBool::boolFalse == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 26)), GGS_string ("The '").add_operation (var_processorName_437.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 26)).add_operation (GGS_string ("' processor is not handled"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 26)), fixItArray4  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 26)) ;
          var_processorType_397.drop () ; // Release error dropped variable
        }
      }
    }
  }
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_romsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 29)) ;
  GGS_luint var_romSize_982 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 30)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 31)) ;
  GGS_uint var_eepromSize_1009 ;
  GGS_uint var_eepromAddress_1032 ;
  switch (select_piccoloDevice_5F_syntax_0 (inCompiler)) {
  case 1: {
    var_eepromSize_1009 = GGS_uint (uint32_t (0U)) ;
    var_eepromAddress_1032 = GGS_uint (uint32_t (0U)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_eepromsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 38)) ;
    GGS_luint var_l_5F_eepromSize_1145 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 39)) ;
    var_eepromSize_1009 = var_l_5F_eepromSize_1145.readProperty_uint () ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 41)) ;
    GGS_luint var_l_5F_eepromAddress_1230 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 42)) ;
    var_eepromAddress_1032 = var_l_5F_eepromAddress_1230.readProperty_uint () ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 44)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 46)) ;
  GGS_luint var_bankCount_1336 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
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
  GGS_ramBankTable var_ramBankTable_1552 = GGS_ramBankTable::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_6 = true ;
  while (repeatFlag_6) {
    if (select_piccoloDevice_5F_syntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_ram COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 63)) ;
      GGS_lstring var_ramName_1642 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 64)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 65)) ;
      GGS_luint var_ramStart_1686 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 66)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 67)) ;
      GGS_luint var_ramEnd_1732 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 68)) ;
      GGS_uintlist var_mirrorOffsetList_1748 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
      switch (select_piccoloDevice_5F_syntax_4 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mirrorat COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 72)) ;
        bool repeatFlag_7 = true ;
        while (repeatFlag_7) {
          GGS_luint var_mirrorStartAddress_1858 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 74)) ;
          var_mirrorOffsetList_1748.addAssignOperation (var_mirrorStartAddress_1858.readProperty_uint ().substract_operation (var_ramStart_1686.readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 75))  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 75)) ;
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
      var_ramBankTable_1552.setter_insertKey (var_ramName_1642, var_ramStart_1686.readProperty_uint (), var_ramStart_1686.readProperty_uint (), var_ramEnd_1732.readProperty_uint ().add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 85)), var_mirrorOffsetList_1748, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 81)) ;
      }
    }else{
      repeatFlag_6 = false ;
    }
  }
  GGS_registerTable var_registerTable_2194 = GGS_registerTable::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_8 = true ;
  while (repeatFlag_8) {
    if (select_piccoloDevice_5F_syntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_register COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 92)) ;
      GGS_lstring var_registerName_2291 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 93)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 94)) ;
      GGS_uintlist var_registerAddressList_2322 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_9 = true ;
      while (repeatFlag_9) {
        GGS_luint var_registerAddress_2396 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 97)) ;
        var_registerAddressList_2322.addAssignOperation (var_registerAddress_2396.readProperty_uint ()  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 98)) ;
        if (select_piccoloDevice_5F_syntax_7 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 100)) ;
        }else{
          repeatFlag_9 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 102)) ;
      GGS_uint var_sliceIndex_2514 = GGS_uint (uint32_t (8U)) ;
      GGS_bitSliceTable var_bitSliceTable_2537 = GGS_bitSliceTable::init (inCompiler COMMA_HERE) ;
      GGS_string var_bitDefinitionString_2586 = GGS_string (" <") ;
      bool repeatFlag_10 = true ;
      while (repeatFlag_10) {
        switch (select_piccoloDevice_5F_syntax_9 (inCompiler)) {
        case 1: {
          GGS_uint var_sliceWidth_2655 = GGS_uint (uint32_t (0U)) ;
          bool repeatFlag_11 = true ;
          while (repeatFlag_11) {
            GGS_uint var_sliceBase_2724 = var_sliceIndex_2514 ;
            GGS_lstring var_sliceName_2785 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 111)) ;
            switch (select_piccoloDevice_5F_syntax_11 (inCompiler)) {
            case 1: {
              GalgasBool test_12 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_12) {
                test_12 = GGS_bool (ComparisonKind::notEqual, var_sliceWidth_2655.objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_sliceWidth_2655.objectCompare (GGS_uint (uint32_t (1U)))) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 113)).boolEnum () ;
                if (GalgasBool::boolTrue == test_12) {
                  GenericArray <FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (var_sliceName_2785.readProperty_location (), GGS_string ("a slice of 1 bit is expected for '").add_operation (var_sliceName_2785.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 114)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 114)), fixItArray13  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 114)) ;
                }
              }
              var_sliceWidth_2655 = GGS_uint (uint32_t (1U)) ;
              var_bitDefinitionString_2586.plusAssignOperation(var_sliceName_2785.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 117)) ;
            } break ;
            case 2: {
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 119)) ;
              GGS_luint var_sliceSize_3117 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 120)) ;
              GalgasBool test_14 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_14) {
                test_14 = GGS_bool (ComparisonKind::notEqual, var_sliceWidth_2655.objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_sliceWidth_2655.objectCompare (var_sliceSize_3117.readProperty_uint ())) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 121)).boolEnum () ;
                if (GalgasBool::boolTrue == test_14) {
                  GenericArray <FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (var_sliceName_2785.readProperty_location (), GGS_string ("a slice of ").add_operation (var_sliceWidth_2655.getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas3", 122)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 122)).add_operation (GGS_string (" bits is expected for '"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 122)).add_operation (var_sliceName_2785.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 122)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 122)), fixItArray15  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 122)) ;
                }
              }
              var_sliceWidth_2655 = var_sliceSize_3117.readProperty_uint () ;
              var_sliceBase_2724 = var_sliceBase_2724.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 125)).substract_operation (var_sliceSize_3117.readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 125)) ;
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 126)) ;
              var_bitDefinitionString_2586.plusAssignOperation(var_sliceName_2785.readProperty_string ().add_operation (GGS_string ("["), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 127)).add_operation (var_sliceSize_3117.readProperty_uint ().getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas3", 127)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 127)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 127)), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 127)) ;
            } break ;
            default:
              break ;
            }
            {
            var_bitSliceTable_2537.setter_insertKey (var_sliceName_2785, var_sliceIndex_2514.substract_operation (var_sliceWidth_2655, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 129)), var_sliceWidth_2655, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 129)) ;
            }
            if (select_piccoloDevice_5F_syntax_10 (inCompiler) == 2) {
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 131)) ;
              var_bitDefinitionString_2586.plusAssignOperation(GGS_string ("/"), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 132)) ;
            }else{
              repeatFlag_11 = false ;
            }
          }
          var_sliceIndex_2514 = var_sliceIndex_2514.substract_operation (var_sliceWidth_2655, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 134)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 136)) ;
          var_bitDefinitionString_2586.plusAssignOperation(GGS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 137)) ;
          var_sliceIndex_2514.minusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 138)) ;
        } break ;
        default:
          break ;
        }
        if (select_piccoloDevice_5F_syntax_8 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 141)) ;
          var_bitDefinitionString_2586.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 142)) ;
        }else{
          repeatFlag_10 = false ;
        }
      }
      GalgasBool test_16 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_16) {
        test_16 = GGS_bool (ComparisonKind::notEqual, var_sliceIndex_2514.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          GenericArray <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (var_registerName_2291.readProperty_location (), GGS_string ("Incorrect bit definition for register '").add_operation (var_registerName_2291.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 145)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 145)), fixItArray17  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 145)) ;
        }
      }
      var_bitDefinitionString_2586.plusAssignOperation(GGS_string (">"), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 147)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 148)) ;
      {
      var_registerTable_2194.setter_insertKey (var_registerName_2291, var_registerAddressList_2322, GGS_uint (uint32_t (1U)), var_bitSliceTable_2537, var_bitDefinitionString_2586, GGS_registerProtection::class_func_publicRegister (SOURCE_FILE ("piccoloDevice_syntax.galgas3", 149)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 149)) ;
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 150)) ;
    }else{
      repeatFlag_8 = false ;
    }
  }
  GGS_configRegisterMap var_configRegisterMap_4213 = GGS_configRegisterMap::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_18 = true ;
  while (repeatFlag_18) {
    if (select_piccoloDevice_5F_syntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_configuration COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 155)) ;
      GGS_lstring var_configRegisterName_4323 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 156)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 157)) ;
      GGS_luint var_configRegisterAddress_4379 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 158)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_width COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 159)) ;
      GGS_luint var_configRegisterWidth_4441 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 160)) ;
      GGS_illegalMaskList var_illegalMaskList_4470 = GGS_illegalMaskList::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_19 = true ;
      while (repeatFlag_19) {
        if (select_piccoloDevice_5F_syntax_13 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_illegal COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 164)) ;
          GGS_luint var_illegalValue_4573 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 165)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 166)) ;
          GGS_luint var_illegalMask_4629 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 167)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_message COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 168)) ;
          GGS_lstring var_illegalDescriptionString_4688 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 169)) ;
          var_illegalMaskList_4470.addAssignOperation (var_illegalValue_4573, var_illegalMask_4629, var_illegalDescriptionString_4688  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 170)) ;
        }else{
          repeatFlag_19 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 172)) ;
      GGS_configRegisterMaskMap var_configRegisterMaskMap_4816 = GGS_configRegisterMaskMap::init (inCompiler COMMA_HERE) ;
      GGS_stringset var_settingNameSet_4873 = GGS_stringset::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_20 = true ;
      while (repeatFlag_20) {
        if (select_piccoloDevice_5F_syntax_14 (inCompiler) == 2) {
          GGS_lstring var_maskName_4958 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 177)) ;
          GalgasBool test_21 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_21) {
            test_21 = var_settingNameSet_4873.getter_hasKey (var_maskName_4958.readProperty_string () COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 178)).boolEnum () ;
            if (GalgasBool::boolTrue == test_21) {
              GenericArray <FixItDescription> fixItArray22 ;
              inCompiler->emitSemanticError (var_maskName_4958.readProperty_location (), GGS_string ("The '").add_operation (var_maskName_4958.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 179)).add_operation (GGS_string ("' setting is already defined"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 179)), fixItArray22  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 179)) ;
            }
          }
          var_settingNameSet_4873.plusPlusAssignOperation (var_maskName_4958.readProperty_string ()  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 181)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 182)) ;
          GGS_luint var_maskValue_5193 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 183)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 184)) ;
          GGS_lstring var_maskDescriptionString_5254 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 185)) ;
          GGS_fieldSettingMap var_fieldSettingMap_5287 = GGS_fieldSettingMap::init (inCompiler COMMA_HERE) ;
          bool repeatFlag_23 = true ;
          while (repeatFlag_23) {
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_setting COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 188)) ;
            GGS_luint var_value_5386 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 189)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 190)) ;
            GGS_luint var_mask_5439 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 191)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 192)) ;
            GGS_lstring var_descriptionString_5499 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 193)) ;
            {
            var_fieldSettingMap_5287.setter_insertKey (var_descriptionString_5499, var_value_5386.readProperty_uint (), var_mask_5439.readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 194)) ;
            }
            if (select_piccoloDevice_5F_syntax_15 (inCompiler) == 2) {
            }else{
              repeatFlag_23 = false ;
            }
          }
          {
          var_configRegisterMaskMap_4816.setter_insertKey (var_maskName_4958, var_maskValue_5193, var_maskDescriptionString_5254, var_fieldSettingMap_5287, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 197)) ;
          }
        }else{
          repeatFlag_20 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 199)) ;
      {
      var_configRegisterMap_4213.setter_insertKey (var_configRegisterName_4323, var_configRegisterAddress_4379, var_configRegisterWidth_4441, var_configRegisterMaskMap_4816, var_illegalMaskList_4470, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 200)) ;
      }
    }else{
      repeatFlag_18 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 208)) ;
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    test_24 = GGS_bool (ComparisonKind::equal, var_processorName_437.readProperty_string ().objectCompare (GGS_string ("pic18_60"))).operator_or (GGS_bool (ComparisonKind::equal, var_processorName_437.readProperty_string ().objectCompare (GGS_string ("pic18_80"))) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 210)).boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      GGS_uintlist joker_6133_5 ; // Joker input parameter
      GGS_uint joker_6133_4 ; // Joker input parameter
      GGS_bitSliceTable joker_6133_3 ; // Joker input parameter
      GGS_string joker_6133_2 ; // Joker input parameter
      GGS_registerProtection joker_6133_1 ; // Joker input parameter
      var_registerTable_2194.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("BSR"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 211)), inCompiler COMMA_HERE), joker_6133_5, joker_6133_4, joker_6133_3, joker_6133_2, joker_6133_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 211)) ;
      GGS_uintlist joker_6205_5 ; // Joker input parameter
      GGS_uint joker_6205_4 ; // Joker input parameter
      GGS_bitSliceTable joker_6205_3 ; // Joker input parameter
      GGS_string joker_6205_2 ; // Joker input parameter
      GGS_registerProtection joker_6205_1 ; // Joker input parameter
      var_registerTable_2194.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("TOSL"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 212)), inCompiler COMMA_HERE), joker_6205_5, joker_6205_4, joker_6205_3, joker_6205_2, joker_6205_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 212)) ;
      GGS_uintlist joker_6277_5 ; // Joker input parameter
      GGS_uint joker_6277_4 ; // Joker input parameter
      GGS_bitSliceTable joker_6277_3 ; // Joker input parameter
      GGS_string joker_6277_2 ; // Joker input parameter
      GGS_registerProtection joker_6277_1 ; // Joker input parameter
      var_registerTable_2194.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("TOSH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 213)), inCompiler COMMA_HERE), joker_6277_5, joker_6277_4, joker_6277_3, joker_6277_2, joker_6277_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 213)) ;
      GGS_uintlist joker_6349_5 ; // Joker input parameter
      GGS_uint joker_6349_4 ; // Joker input parameter
      GGS_bitSliceTable joker_6349_3 ; // Joker input parameter
      GGS_string joker_6349_2 ; // Joker input parameter
      GGS_registerProtection joker_6349_1 ; // Joker input parameter
      var_registerTable_2194.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("TOSU"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 214)), inCompiler COMMA_HERE), joker_6349_5, joker_6349_4, joker_6349_3, joker_6349_2, joker_6349_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 214)) ;
    }
  }
  GGS_string var_sharedBankName_6418 = GGS_string::makeEmptyString () ;
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    test_25 = GGS_bool (ComparisonKind::equal, var_processorName_437.readProperty_string ().objectCompare (GGS_string ("mid-range"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      UpEnumerator_ramBankTable enumerator_6549 (var_ramBankTable_1552) ;
      bool bool_26 = GGS_bool (ComparisonKind::equal, var_sharedBankName_6418.objectCompare (GGS_string::makeEmptyString ())).isValidAndTrue () ;
      if (enumerator_6549.hasCurrentObject () && bool_26) {
        while (enumerator_6549.hasCurrentObject () && bool_26) {
          GGS_uint var_bankAccessibility_6632 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 220)).left_shift_operation (enumerator_6549.current_mFirstFreeAddress (HERE).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 220)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 220)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 220)).getter_uint (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 220)) ;
          UpEnumerator_uintlist enumerator_6693 (enumerator_6549.current_mMirrorOffsetList (HERE)) ;
          while (enumerator_6693.hasCurrentObject ()) {
            var_bankAccessibility_6632 = var_bankAccessibility_6632.operator_or (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 222)).left_shift_operation (enumerator_6549.current_mFirstFreeAddress (HERE).add_operation (enumerator_6693.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 222)).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 222)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 222)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 222)).getter_uint (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 222)) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 222)) ;
            enumerator_6693.gotoNextObject () ;
          }
          GalgasBool test_27 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_27) {
            test_27 = GGS_bool (ComparisonKind::equal, GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 224)).left_shift_operation (var_bankCount_1336.readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 224)).objectCompare (var_bankAccessibility_6632.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas3", 224)).getter_bigint (SOURCE_FILE ("piccoloDevice_syntax.galgas3", 224)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_27) {
              var_sharedBankName_6418 = enumerator_6549.current_lkey (HERE).readProperty_string () ;
            }
          }
          enumerator_6549.gotoNextObject () ;
          if (enumerator_6549.hasCurrentObject ()) {
            bool_26 = GGS_bool (ComparisonKind::equal, var_sharedBankName_6418.objectCompare (GGS_string::makeEmptyString ())).isValidAndTrue () ;
          }
        }
      }
    }
  }
  outArgument_outPiccoloDeviceModel = GGS_piccoloDeviceModel::init_21__21__21__21__21__21__21__21__21__21_ (var_deviceName_344, var_processorType_397, var_romSize_982, var_bankCount_1336, var_registerTable_2194, var_ramBankTable_1552, var_eepromSize_1009, var_eepromAddress_1032, var_configRegisterMap_4213, var_sharedBankName_6418, inCompiler COMMA_HERE) ;
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
//Abstract extension func '@ipic18AbstractBlockTerminator terminatorDisplay'
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
//Abstract extension func '@ipic18AbstractBlockTerminator terminatorSize'
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
//Extension proc '@baseline_intermediate_instruction setCurrentAddress'
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
        GGS_lstring var_unusedRegister_1293 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 48)) ;
        ioArgument_unusedRegisterList.addAssignOperation (var_unusedRegister_1293  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 49)) ;
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
        GGS_lstring var_unusedRoutine_1461 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 57)) ;
        ioArgument_unusedRoutineList.addAssignOperation (var_unusedRoutine_1461  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 58)) ;
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
        GGS_lstring var_inlinedRoutine_1612 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 65)) ;
        ioArgument_inlinedRoutineList.addAssignOperation (var_inlinedRoutine_1612  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 66)) ;
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
      GGS_lstring var_includedFilePath_2276 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 92)) ;
      cGrammar_pic_31__38__5F_include_5F_grammar::_performSourceFileParsing_ (inCompiler, var_includedFilePath_2276, ioArgument_interruptDefinitionList, ioArgument_routineDefinitionList, ioArgument_ioMacroDefinitionList, ioArgument_unusedRoutineList, ioArgument_inlinedRoutineList, ioArgument_ramDefinitionList, ioArgument_unusedRegisterList, ioArgument_configDefinitionList, ioArgument_constantDefinitionList, ioArgument_ioCheckpicList, ioArgument_dataList, ioArgument_needsComputedGoto_32_, ioArgument_needsComputedGoto_34_  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 93)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 109)) ;
      GGS_lstring var_macroName_2763 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 110)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 111)) ;
      GGS_lstringlist var_constantNameList_2803 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        GGS_lstring var_constantName_2862 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 114)) ;
        var_constantNameList_2803.addAssignOperation (var_constantName_2862  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 115)) ;
        if (select_pic_31__38__5F_syntax_4 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 117)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 119)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 120)) ;
      GGS_labelMap var_labelMap_2978 = GGS_labelMap::init (inCompiler COMMA_HERE) ;
      GGS_pic_31__38_InstructionList var_instructionList_3050 ;
      nt_instruction_5F_list_ (var_instructionList_3050, ioArgument_needsComputedGoto_32_, ioArgument_needsComputedGoto_34_, var_labelMap_2978, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 127)) ;
      ioArgument_ioMacroDefinitionList.addAssignOperation (var_macroName_2763, var_constantNameList_2803, var_instructionList_3050  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 128)) ;
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
  GGS_location var_loc_3394 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 140)) ;
  GGS_lstringlist var_valueList_3421 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_s_3493 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 143)) ;
    var_valueList_3421.addAssignOperation (var_s_3493  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 144)) ;
    if (select_pic_31__38__5F_syntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 146)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioList.addAssignOperation (var_loc_3394, var_valueList_3421  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 148)) ;
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
  GGS_lstring var_dataName_3813 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 160)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 161)) ;
  GGS_immediatExpressionList var_valueList_3859 = GGS_immediatExpressionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_immediatExpression var_expression_3937 ;
    nt_immediate_5F_expression_ (var_expression_3937, inCompiler) ;
    var_valueList_3859.addAssignOperation (var_expression_3937, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 165))  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 165)) ;
    if (select_pic_31__38__5F_syntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 167)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 169)) ;
  ioArgument_ioDataList.addAssignOperation (var_dataName_3813, var_valueList_3859, GGS_bool (false)  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 170)) ;
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
  GGS_lstring var_dataName_4217 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 177)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 178)) ;
  GGS_immediatExpressionList var_valueList_4263 = GGS_immediatExpressionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_immediatExpression var_expression_4341 ;
    nt_immediate_5F_expression_ (var_expression_4341, inCompiler) ;
    var_valueList_4263.addAssignOperation (var_expression_4341, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 182))  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 182)) ;
    if (select_pic_31__38__5F_syntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 184)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 186)) ;
  ioArgument_ioDataList.addAssignOperation (var_dataName_4217, var_valueList_4263, GGS_bool (true)  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 187)) ;
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
      GGS_pic_31__38_PiccoloSimpleInstruction var_instruction_4819 ;
      nt_simple_5F_instruction_ (var_instruction_4819, inCompiler) ;
      outArgument_outInstructionList.addAssignOperation (var_instruction_4819  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 202)) ;
    } break ;
    case 3: {
      GGS_pic_31__38_PiccoloInstruction var_instruction_4920 ;
      nt_structured_5F_instruction_ (var_instruction_4920, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      outArgument_outInstructionList.addAssignOperation (var_instruction_4920  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 209)) ;
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
  GGS_lstring var_interruptName_5319 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 221)) ;
  GGS_bool var_isFast_5346 ;
  switch (select_pic_31__38__5F_syntax_10 (inCompiler)) {
  case 1: {
    var_isFast_5346 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_fast COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 226)) ;
    var_isFast_5346 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 229)) ;
  GGS_labelMap var_labelMap_5443 = GGS_labelMap::init (inCompiler COMMA_HERE) ;
  GGS_pic_31__38_InstructionList var_instructionList_5489 ;
  nt_instruction_5F_list_ (var_instructionList_5489, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, var_labelMap_5443, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 236)) ;
  ioArgument_ioInterruptDefinitionList.addAssignOperation (var_interruptName_5319, var_isFast_5346, var_instructionList_5489, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 237))  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 237)) ;
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
  GGS_bool var_noreturn_5894 ;
  switch (select_pic_31__38__5F_syntax_11 (inCompiler)) {
  case 1: {
    var_noreturn_5894 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 250)) ;
    var_noreturn_5894 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 253)) ;
  GGS_lstring var_routineName_6021 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 254)) ;
  GGS_luint var_requiredBank_6076 ;
  GGS_luint var_returnedBank_6102 ;
  GGS_bool var_preservesBank_6127 ;
  switch (select_pic_31__38__5F_syntax_12 (inCompiler)) {
  case 1: {
    var_requiredBank_6076 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_syntax.galgas3", 259)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 259)), inCompiler COMMA_HERE) ;
    var_returnedBank_6102 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_syntax.galgas3", 260)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 260)), inCompiler COMMA_HERE) ;
    var_preservesBank_6127 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 263)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 264)) ;
    switch (select_pic_31__38__5F_syntax_13 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 266)) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = var_noreturn_5894.boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 268)), GGS_string ("a \"noreturn\" routine cannot accept \"bank:preserved\" setting"), fixItArray1  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 268)) ;
        }
      }
      var_preservesBank_6127 = GGS_bool (true) ;
      var_requiredBank_6076 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_syntax.galgas3", 271)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 271)), inCompiler COMMA_HERE) ;
      var_returnedBank_6102 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_syntax.galgas3", 272)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 272)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 274)) ;
      var_requiredBank_6076 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 275)) ;
      var_preservesBank_6127 = GGS_bool (false) ;
      switch (select_pic_31__38__5F_syntax_14 (inCompiler)) {
      case 1: {
        var_returnedBank_6102 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_syntax.galgas3", 278)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 278)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 280)) ;
        var_returnedBank_6102 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 281)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_noreturn_5894.boolEnum () ;
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
      var_returnedBank_6102 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 288)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_noreturn_5894.boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 290)), GGS_string ("a \"noreturn\" routine cannot accept \"bank:returned\" setting"), fixItArray5  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 290)) ;
        }
      }
      var_preservesBank_6127 = GGS_bool (false) ;
      var_requiredBank_6076 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_syntax.galgas3", 293)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 293)), inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 296)) ;
  GGS_labelMap var_labelMap_7295 = GGS_labelMap::init (inCompiler COMMA_HERE) ;
  GGS_pic_31__38_InstructionList var_instructionList_7363 ;
  nt_instruction_5F_list_ (var_instructionList_7363, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, var_labelMap_7295, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 303)) ;
  ioArgument_ioRoutineDefinitionList.addAssignOperation (var_routineName_6021, var_requiredBank_6076, var_returnedBank_6102, var_preservesBank_6127, var_noreturn_5894, var_instructionList_7363, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 304))  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 304)) ;
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
  GGS_pic_31__38_ConditionExpression var_condition_7750 ;
  nt_condition_5F_factor_ (var_condition_7750, inCompiler) ;
  outArgument_outCondition = GGS_pic_31__38_NegateCondition::init_21_ (var_condition_7750, inCompiler COMMA_HERE) ;
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
    GGS_bool var_isIncrement_8141 ;
    switch (select_pic_31__38__5F_syntax_16 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 330)) ;
      var_isIncrement_8141 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 332)) ;
      var_isIncrement_8141 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GGS_registerExpression var_registerExpression_8277 ;
    nt_register_5F_parsing_ (var_registerExpression_8277, inCompiler) ;
    GGS_bool var_W_5F_isDestination_8311 ;
    switch (select_pic_31__38__5F_syntax_17 (inCompiler)) {
    case 1: {
      var_W_5F_isDestination_8311 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 339)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 339)) ;
      var_W_5F_isDestination_8311 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_conditionString_8456 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 341)) ;
    GGS_string var_condition_8489 = var_conditionString_8456.readProperty_string ().getter_uppercased (SOURCE_FILE ("pic18_syntax.galgas3", 342)) ;
    GGS_bool var_branchIfZero_8549 ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_condition_8489.objectCompare (GGS_string ("Z"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_branchIfZero_8549 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, var_condition_8489.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          var_branchIfZero_8549 = GGS_bool (false) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_conditionString_8456.readProperty_location (), GGS_string ("invalid '").add_operation (var_conditionString_8456.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 349)).add_operation (GGS_string ("' condition; valid ones are: 'z' and 'nz'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 349)), fixItArray2  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 349)) ;
        var_branchIfZero_8549.drop () ; // Release error dropped variable
      }
    }
    outArgument_outCondition = GGS_pic_31__38_IncDecRegisterInCondition::init_21__21__21__21_ (var_registerExpression_8277, var_isIncrement_8141, var_W_5F_isDestination_8311, var_branchIfZero_8549, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    GGS_registerExpression var_registerExpression_9008 ;
    nt_register_5F_parsing_ (var_registerExpression_9008, inCompiler) ;
    GGS_pic_31__38_RegisterComparison var_comparison_9061 ;
    switch (select_pic_31__38__5F_syntax_18 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 362)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 362)) ;
      var_comparison_9061 = GGS_pic_31__38_RegisterComparison::class_func_notEqual (SOURCE_FILE ("pic18_syntax.galgas3", 362)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 364)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 364)) ;
      var_comparison_9061 = GGS_pic_31__38_RegisterComparison::class_func_equal (SOURCE_FILE ("pic18_syntax.galgas3", 364)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 366)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 366)) ;
      var_comparison_9061 = GGS_pic_31__38_RegisterComparison::class_func_lowerOrEqual (SOURCE_FILE ("pic18_syntax.galgas3", 366)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 368)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 368)) ;
      var_comparison_9061 = GGS_pic_31__38_RegisterComparison::class_func_greaterOrEqual (SOURCE_FILE ("pic18_syntax.galgas3", 368)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 370)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 370)) ;
      var_comparison_9061 = GGS_pic_31__38_RegisterComparison::class_func_lower (SOURCE_FILE ("pic18_syntax.galgas3", 370)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 372)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 372)) ;
      var_comparison_9061 = GGS_pic_31__38_RegisterComparison::class_func_greater (SOURCE_FILE ("pic18_syntax.galgas3", 372)) ;
    } break ;
    default:
      break ;
    }
    outArgument_outCondition = GGS_pic_31__38_RegisterComparisonCondition::init_21__21_ (var_registerExpression_9008, var_comparison_9061, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GGS_registerExpression var_registerExpression_9663 ;
    nt_register_5F_parsing_ (var_registerExpression_9663, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 379)) ;
    GGS_bitNumberExpression var_bitNumberExpression_9722 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_9722, inCompiler) ;
    outArgument_outCondition = GGS_pic_31__38_BitTestInStructuredCondition::init_21__21_ (var_registerExpression_9663, var_bitNumberExpression_9722, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GGS_registerExpression var_registerName_9892 ;
    nt_register_5F_parsing_ (var_registerName_9892, inCompiler) ;
    GGS_lstring var_conditionString_9938 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 387)) ;
    GGS_string var_condition_9971 = var_conditionString_9938.readProperty_string ().getter_uppercased (SOURCE_FILE ("pic18_syntax.galgas3", 388)) ;
    GGS_bool var_branchIfZero_10031 ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, var_condition_9971.objectCompare (GGS_string ("Z"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        var_branchIfZero_10031 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_condition_9971.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          var_branchIfZero_10031 = GGS_bool (false) ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (var_conditionString_9938.readProperty_location (), GGS_string ("invalid '").add_operation (var_conditionString_9938.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 395)).add_operation (GGS_string ("' condition; valid ones are: 'z' and 'nz'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 395)), fixItArray5  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 395)) ;
        var_branchIfZero_10031.drop () ; // Release error dropped variable
      }
    }
    outArgument_outCondition = GGS_pic_31__38_RegisterTestCondition::init_21__21_ (var_registerName_9892, var_branchIfZero_10031, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    GGS_conditional_5F_branch var_conditional_5F_branch_10425 ;
    GGS_lstring var_conditionString_10476 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 402)) ;
    GGS_string var_condition_10509 = var_conditionString_10476.readProperty_string ().getter_uppercased (SOURCE_FILE ("pic18_syntax.galgas3", 403)) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::equal, var_condition_10509.objectCompare (GGS_string ("Z"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        var_conditional_5F_branch_10425 = GGS_conditional_5F_branch::class_func_bz (SOURCE_FILE ("pic18_syntax.galgas3", 405)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = GGS_bool (ComparisonKind::equal, var_condition_10509.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          var_conditional_5F_branch_10425 = GGS_conditional_5F_branch::class_func_bnz (SOURCE_FILE ("pic18_syntax.galgas3", 407)) ;
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::equal, var_condition_10509.objectCompare (GGS_string ("NN"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            var_conditional_5F_branch_10425 = GGS_conditional_5F_branch::class_func_bnn (SOURCE_FILE ("pic18_syntax.galgas3", 409)) ;
          }
        }
        if (GalgasBool::boolFalse == test_8) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, var_condition_10509.objectCompare (GGS_string ("N"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              var_conditional_5F_branch_10425 = GGS_conditional_5F_branch::class_func_bn (SOURCE_FILE ("pic18_syntax.galgas3", 411)) ;
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::equal, var_condition_10509.objectCompare (GGS_string ("C"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                var_conditional_5F_branch_10425 = GGS_conditional_5F_branch::class_func_bc (SOURCE_FILE ("pic18_syntax.galgas3", 413)) ;
              }
            }
            if (GalgasBool::boolFalse == test_10) {
              GalgasBool test_11 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_11) {
                test_11 = GGS_bool (ComparisonKind::equal, var_condition_10509.objectCompare (GGS_string ("NC"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_11) {
                  var_conditional_5F_branch_10425 = GGS_conditional_5F_branch::class_func_bnc (SOURCE_FILE ("pic18_syntax.galgas3", 415)) ;
                }
              }
              if (GalgasBool::boolFalse == test_11) {
                GalgasBool test_12 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_12) {
                  test_12 = GGS_bool (ComparisonKind::equal, var_condition_10509.objectCompare (GGS_string ("OV"))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_12) {
                    var_conditional_5F_branch_10425 = GGS_conditional_5F_branch::class_func_bov (SOURCE_FILE ("pic18_syntax.galgas3", 417)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_12) {
                  GalgasBool test_13 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_13) {
                    test_13 = GGS_bool (ComparisonKind::equal, var_condition_10509.objectCompare (GGS_string ("NOV"))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_13) {
                      var_conditional_5F_branch_10425 = GGS_conditional_5F_branch::class_func_bnov (SOURCE_FILE ("pic18_syntax.galgas3", 419)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_13) {
                    GenericArray <FixItDescription> fixItArray14 ;
                    inCompiler->emitSemanticError (var_conditionString_10476.readProperty_location (), GGS_string ("invalid '").add_operation (var_conditionString_10476.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 421)).add_operation (GGS_string ("' condition; valid ones are: 'z', 'nz', 'n', 'nn', 'c', 'nc', 'ov' and 'nov'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 421)), fixItArray14  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 421)) ;
                    var_conditional_5F_branch_10425.drop () ; // Release error dropped variable
                  }
                }
              }
            }
          }
        }
      }
    }
    outArgument_outCondition = GGS_pic_31__38_BccInStructuredCondition::init_21__21_ (var_conditionString_10476.readProperty_location (), var_conditional_5F_branch_10425, inCompiler COMMA_HERE) ;
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
      GGS_pic_31__38_ConditionExpression var_c_11758 ;
      nt_condition_5F_term_ (var_c_11758, inCompiler) ;
      GGS_pic_31__38_ConditionExpression var_rc_11795 = GGS_pic_31__38_NegateCondition::init_21_ (var_c_11758, inCompiler COMMA_HERE) ;
      GGS_pic_31__38_ConditionExpression var_lc_11862 = GGS_pic_31__38_NegateCondition::init_21_ (outArgument_outCondition, inCompiler COMMA_HERE) ;
      outArgument_outCondition = GGS_pic_31__38_NegateCondition::init_21_ (GGS_pic_31__38_AndCondition::init_21__21_ (var_lc_11862, var_rc_11795, inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
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
      GGS_pic_31__38_ConditionExpression var_c_12240 ;
      nt_condition_5F_factor_ (var_c_12240, inCompiler) ;
      outArgument_outCondition = GGS_pic_31__38_AndCondition::init_21__21_ (outArgument_outCondition, var_c_12240, inCompiler COMMA_HERE) ;
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
  GGS_lstring var_nextBlockName_12743 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 471)) ;
  outArgument_outBlockTermination = GGS_gotoTerminationForBlockInstruction::init_21_ (var_nextBlockName_12743, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i13_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 471)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_syntax::rule_pic_31__38__5F_syntax_block_5F_termination_i14_ (GGS_abstractBlockTerminationForBlockInstruction & outArgument_outBlockTermination,
                                                                                          Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outBlockTermination.drop () ; // Release 'out' argument
  GGS_location var_location_13010 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 479)) ;
  GGS_pic_31__38_ConditionExpression var_condition_13094 ;
  nt_condition_5F_expression_ (var_condition_13094, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3F_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 481)) ;
  GGS_abstractBlockTerminationForBlockInstruction var_terminationIfTrue_13186 ;
  nt_block_5F_termination_ (var_terminationIfTrue_13186, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 483)) ;
  GGS_abstractBlockTerminationForBlockInstruction var_terminationIfFalse_13286 ;
  nt_block_5F_termination_ (var_terminationIfFalse_13286, inCompiler) ;
  outArgument_outBlockTermination = GGS_testTerminationForBlockInstruction::init_21__21__21__21_ (var_condition_13094, var_terminationIfTrue_13186, var_terminationIfFalse_13286, var_location_13010, inCompiler COMMA_HERE) ;
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
    GGS_lstring var_switchLabel_13697 ;
    switch (select_pic_31__38__5F_syntax_22 (inCompiler)) {
    case 1: {
      var_switchLabel_13697 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 500)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_switchLabel_13697 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 502)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_switchLabel_13697, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 503)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_13850 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 505)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 506)) ;
    GGS_pic_31__38_SwitchInstructionCaseList var_caseList_13935 = GGS_pic_31__38_SwitchInstructionCaseList::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_case COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 509)) ;
      GGS_lstring var_caseLabel_13993 ;
      switch (select_pic_31__38__5F_syntax_24 (inCompiler)) {
      case 1: {
        var_caseLabel_13993 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 512)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        var_caseLabel_13993 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 514)) ;
      } break ;
      default:
        break ;
      }
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::notEqual, var_switchLabel_13697.readProperty_string ().objectCompare (var_caseLabel_13993.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GGS_string temp_2 ;
          const GalgasBool test_3 = GGS_bool (ComparisonKind::notEqual, var_switchLabel_13697.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            temp_2 = var_switchLabel_13697.readProperty_string () ;
          }else if (GalgasBool::boolFalse == test_3) {
            temp_2 = GGS_string ("empty") ;
          }
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_caseLabel_13993.readProperty_location (), GGS_string ("'case' label does not match 'switch' label, it should be ").add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 517)), fixItArray4  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 517)) ;
        }
      }
      GGS_location var_caseLocation_14353 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 520)) ;
      GGS_pic_31__38_CaseExpressionList var_caseExpressionList_14393 = GGS_pic_31__38_CaseExpressionList::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        switch (select_pic_31__38__5F_syntax_26 (inCompiler)) {
        case 1: {
          GGS_immediatExpression var_caseExpression_14528 ;
          nt_immediate_5F_expression_ (var_caseExpression_14528, inCompiler) ;
          var_caseExpressionList_14393.addAssignOperation (GGS_pic_31__38_SimpleConstantCaseItem::init_21__21_ (var_caseExpression_14528, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 525)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 525)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 527)) ;
          GGS_immediatExpression var_minExpression_14725 ;
          nt_immediate_5F_expression_ (var_minExpression_14725, inCompiler) ;
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 529)) ;
          GGS_immediatExpression var_maxExpression_14813 ;
          nt_immediate_5F_expression_ (var_maxExpression_14813, inCompiler) ;
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 531)) ;
          var_caseExpressionList_14393.addAssignOperation (GGS_pic_31__38_IntervalCaseItem::init_21__21__21_ (var_minExpression_14725, var_maxExpression_14813, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 532)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 532)) ;
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
      GGS_pic_31__38_InstructionList var_instructionList_15064 ;
      nt_instruction_5F_list_ (var_instructionList_15064, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      var_caseList_13935.addAssignOperation (var_caseLocation_14353, var_caseExpressionList_14393, var_instructionList_15064  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 543)) ;
      if (select_pic_31__38__5F_syntax_23 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    GGS_pic_31__38_InstructionList var_elseInstructionList_15284 ;
    GGS_location var_elseLocation_15322 ;
    switch (select_pic_31__38__5F_syntax_27 (inCompiler)) {
    case 1: {
      var_elseLocation_15322 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 549)) ;
      var_elseInstructionList_15284 = GGS_pic_31__38_InstructionList::init (inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 552)) ;
      GGS_lstring var_elseLabel_15474 ;
      switch (select_pic_31__38__5F_syntax_28 (inCompiler)) {
      case 1: {
        var_elseLabel_15474 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 555)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        var_elseLabel_15474 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 557)) ;
      } break ;
      default:
        break ;
      }
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, var_switchLabel_13697.readProperty_string ().objectCompare (var_elseLabel_15474.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GGS_string temp_7 ;
          const GalgasBool test_8 = GGS_bool (ComparisonKind::notEqual, var_switchLabel_13697.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            temp_7 = var_switchLabel_13697.readProperty_string () ;
          }else if (GalgasBool::boolFalse == test_8) {
            temp_7 = GGS_string ("empty") ;
          }
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_elseLabel_15474.readProperty_location (), GGS_string ("'else' label does not match 'switch' label, it should be ").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 560)), fixItArray9  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 560)) ;
        }
      }
      var_elseLocation_15322 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 563)) ;
      nt_instruction_5F_list_ (var_elseInstructionList_15284, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_switch::init_21__21__21__21_ (var_instructionLocation_13850, var_caseList_13935, var_elseLocation_15322, var_elseInstructionList_15284, inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 575)) ;
    GGS_lstring var_endSwitchLabel_16166 ;
    switch (select_pic_31__38__5F_syntax_29 (inCompiler)) {
    case 1: {
      var_endSwitchLabel_16166 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 578)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endSwitchLabel_16166 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 580)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = GGS_bool (ComparisonKind::notEqual, var_switchLabel_13697.readProperty_string ().objectCompare (var_endSwitchLabel_16166.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GGS_string temp_11 ;
        const GalgasBool test_12 = GGS_bool (ComparisonKind::notEqual, var_switchLabel_13697.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          temp_11 = var_switchLabel_13697.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_12) {
          temp_11 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (var_switchLabel_13697.readProperty_location (), GGS_string ("'end' label does not match 'switch' label, it should be ").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 583)), fixItArray13  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 583)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_block COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 587)) ;
    GGS_location var_instructionLocation_16544 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 588)) ;
    GGS_lstring var_startBlockName_16613 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 589)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 590)) ;
    GGS_pic_31__38_BlockInstructionBlockList var_blockList_16645 = GGS_pic_31__38_BlockInstructionBlockList::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_14 = true ;
    while (repeatFlag_14) {
      GGS_lstring var_blockName_16736 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 593)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 594)) ;
      GGS_pic_31__38_InstructionList var_instructionList_16818 ;
      nt_instruction_5F_list_ (var_instructionList_16818, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 600)) ;
      GGS_location var_endOfBlock_16951 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 601)) ;
      GGS_abstractBlockTerminationForBlockInstruction var_blockTermination_17056 ;
      nt_block_5F_termination_ (var_blockTermination_17056, inCompiler) ;
      var_blockList_16645.addAssignOperation (var_blockName_16736, var_instructionList_16818, var_blockTermination_17056, var_endOfBlock_16951  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 603)) ;
      if (select_pic_31__38__5F_syntax_30 (inCompiler) == 2) {
      }else{
        repeatFlag_14 = false ;
      }
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_block::init_21__21__21__21_ (var_instructionLocation_16544, var_startBlockName_16613, var_blockList_16645, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 610)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 611)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 613)) ;
    GGS_lstring var_doLabel_17346 ;
    switch (select_pic_31__38__5F_syntax_31 (inCompiler)) {
    case 1: {
      var_doLabel_17346 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 616)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_doLabel_17346 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 618)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_17346, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 619)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_17483 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 621)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 622)) ;
    GGS_lstring var_constantName_17551 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 623)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 624)) ;
    GGS_immediatExpression var_lowBoundExpression_17626 ;
    nt_immediate_5F_expression_ (var_lowBoundExpression_17626, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 626)) ;
    GGS_immediatExpression var_highBoundExpression_17709 ;
    nt_immediate_5F_expression_ (var_highBoundExpression_17709, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 628)) ;
    GGS_pic_31__38_InstructionList var_instructionList_17795 ;
    nt_instruction_5F_list_ (var_instructionList_17795, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_repetitionStatique::init_21__21__21__21__21__21_ (var_instructionLocation_17483, var_constantName_17551, var_lowBoundExpression_17626, var_highBoundExpression_17709, var_instructionList_17795, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 640)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 642)) ;
    GGS_lstring var_endDoLabel_18130 ;
    switch (select_pic_31__38__5F_syntax_32 (inCompiler)) {
    case 1: {
      var_endDoLabel_18130 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 645)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endDoLabel_18130 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 647)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = GGS_bool (ComparisonKind::notEqual, var_doLabel_17346.readProperty_string ().objectCompare (var_endDoLabel_18130.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GGS_string temp_16 ;
        const GalgasBool test_17 = GGS_bool (ComparisonKind::notEqual, var_doLabel_17346.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_17) {
          temp_16 = var_doLabel_17346.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_17) {
          temp_16 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (var_endDoLabel_18130.readProperty_location (), GGS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 650)), fixItArray18  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 650)) ;
      }
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checkbank COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 654)) ;
    GGS_luint var_bankIndex_18488 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 655)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_checkbank::init_21__21_ (var_bankIndex_18488.readProperty_location (), var_bankIndex_18488.readProperty_uint (), inCompiler COMMA_HERE) ;
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
    GGS_location var_instructionLocation_18833 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 667)) ;
    GGS_lstring var_dataName_18893 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 668)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 669)) ;
    GGS_luint var_dataIndex_18938 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 670)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 671)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::init_21__21__21_ (var_instructionLocation_18833, var_dataName_18893, var_dataIndex_18938, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ldata_38_ptr COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 674)) ;
    GGS_location var_instructionLocation_19091 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 675)) ;
    GGS_lstring var_dataName_19151 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 676)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 677)) ;
    GGS_luint var_dataIndex_19196 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 678)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 679)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_LDATA_38_PTR::init_21__21__21_ (var_instructionLocation_19091, var_dataName_19151, var_dataIndex_19196, inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ltblptr COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 682)) ;
    GGS_location var_instructionLocation_19346 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 683)) ;
    GGS_immediatExpression var_expression_19436 ;
    nt_immediate_5F_expression_ (var_expression_19436, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_LTBLPTR::init_21__21_ (var_instructionLocation_19346, var_expression_19436, inCompiler COMMA_HERE) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 687)) ;
    GGS_location var_instructionLocation_19568 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 688)) ;
    GGS_luint var_bank_19632 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 689)) ;
    GGS_bool var_warningOnUselessBanksel_19652 ;
    switch (select_pic_31__38__5F_syntax_34 (inCompiler)) {
    case 1: {
      var_warningOnUselessBanksel_19652 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 694)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 695)) ;
      var_warningOnUselessBanksel_19652 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_banksel::init_21__21__21_ (var_instructionLocation_19568, var_bank_19632, var_warningOnUselessBanksel_19652, inCompiler COMMA_HERE) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 700)) ;
    GGS_location var_instructionLocation_19937 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 701)) ;
    GGS_registerExpression var_register_20023 ;
    nt_register_5F_parsing_ (var_register_20023, inCompiler) ;
    GGS_bool var_warningOnUselessBanksel_20047 ;
    switch (select_pic_31__38__5F_syntax_35 (inCompiler)) {
    case 1: {
      var_warningOnUselessBanksel_20047 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 707)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 708)) ;
      var_warningOnUselessBanksel_20047 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_banksel_5F_register::init_21__21__21_ (var_instructionLocation_19937, var_register_20023, var_warningOnUselessBanksel_20047, inCompiler COMMA_HERE) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nobank COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 713)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_nobanksel::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 714)), inCompiler COMMA_HERE) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksave COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 716)) ;
    GGS_location var_instructionLocation_20431 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 717)) ;
    GGS_registerExpression var_register_20517 ;
    nt_register_5F_parsing_ (var_register_20517, inCompiler) ;
    GGS_pic_31__38_InstructionList var_instructionList_20584 ;
    nt_instruction_5F_list_ (var_instructionList_20584, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 724)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_savebank::init_21__21__21__21_ (var_instructionLocation_20431, var_register_20517, var_instructionList_20584, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 729)), inCompiler COMMA_HERE) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 732)) ;
    GGS_location var_instructionLocation_20873 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 733)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 734)) ;
    GGS_immediatExpression var_sizeExpression_20951 ;
    nt_immediate_5F_expression_ (var_sizeExpression_20951, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 736)) ;
    switch (select_pic_31__38__5F_syntax_36 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_retlw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 738)) ;
      GGS_immediatExpressionList var_argumentList_21010 = GGS_immediatExpressionList::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_20 = true ;
      while (repeatFlag_20) {
        GGS_immediatExpression var_expression_21101 ;
        nt_immediate_5F_expression_ (var_expression_21101, inCompiler) ;
        var_argumentList_21010.addAssignOperation (var_expression_21101, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 742))  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 742)) ;
        if (select_pic_31__38__5F_syntax_37 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 744)) ;
        }else{
          repeatFlag_20 = false ;
        }
      }
      outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_computed_5F_retlw::init_21__21__21__21_ (var_instructionLocation_20873, var_sizeExpression_20951, var_argumentList_21010, GGS_bool (true), inCompiler COMMA_HERE) ;
      ioArgument_ioNeedsComputedGoto_32_ = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 753)) ;
      GGS_lstringlist var_argumentList_21410 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_21 = true ;
      while (repeatFlag_21) {
        GGS_lstring var_targetRoutine_21489 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 756)) ;
        var_argumentList_21410.addAssignOperation (var_targetRoutine_21489  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 757)) ;
        if (select_pic_31__38__5F_syntax_38 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 759)) ;
        }else{
          repeatFlag_21 = false ;
        }
      }
      outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_computed_5F_bra::init_21__21__21__21_ (var_instructionLocation_20873, var_sizeExpression_20951, var_argumentList_21410, GGS_bool (true), inCompiler COMMA_HERE) ;
      ioArgument_ioNeedsComputedGoto_32_ = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 768)) ;
      GGS_lstringlist var_argumentList_21811 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_22 = true ;
      while (repeatFlag_22) {
        GGS_lstring var_targetRoutine_21890 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 771)) ;
        var_argumentList_21811.addAssignOperation (var_targetRoutine_21890  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 772)) ;
        if (select_pic_31__38__5F_syntax_39 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 774)) ;
        }else{
          repeatFlag_22 = false ;
        }
      }
      outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_computed_5F_goto::init_21__21__21__21_ (var_instructionLocation_20873, var_sizeExpression_20951, var_argumentList_21811, GGS_bool (true), inCompiler COMMA_HERE) ;
      ioArgument_ioNeedsComputedGoto_34_ = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 783)) ;
      GGS_lstringlist var_argumentList_22214 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_23 = true ;
      while (repeatFlag_23) {
        GGS_lstring var_targetRoutine_22293 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 786)) ;
        var_argumentList_22214.addAssignOperation (var_targetRoutine_22293  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 787)) ;
        if (select_pic_31__38__5F_syntax_40 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 789)) ;
        }else{
          repeatFlag_23 = false ;
        }
      }
      outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_computed_5F_rcall::init_21__21__21__21_ (var_instructionLocation_20873, var_sizeExpression_20951, var_argumentList_22214, GGS_bool (true), inCompiler COMMA_HERE) ;
      ioArgument_ioNeedsComputedGoto_34_ = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 799)) ;
    GGS_lstring var_foreverLabel_22631 ;
    switch (select_pic_31__38__5F_syntax_41 (inCompiler)) {
    case 1: {
      var_foreverLabel_22631 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 802)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_foreverLabel_22631 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 804)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_foreverLabel_22631, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 805)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_22788 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 807)) ;
    GGS_pic_31__38_InstructionList var_instructionList_22860 ;
    nt_instruction_5F_list_ (var_instructionList_22860, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 813)) ;
    GGS_lstring var_endForeverLabel_22984 ;
    switch (select_pic_31__38__5F_syntax_42 (inCompiler)) {
    case 1: {
      var_endForeverLabel_22984 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 816)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endForeverLabel_22984 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 818)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_24 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_24) {
      test_24 = GGS_bool (ComparisonKind::notEqual, var_foreverLabel_22631.readProperty_string ().objectCompare (var_endForeverLabel_22984.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_24) {
        GGS_string temp_25 ;
        const GalgasBool test_26 = GGS_bool (ComparisonKind::notEqual, var_foreverLabel_22631.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_26) {
          temp_25 = var_foreverLabel_22631.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_26) {
          temp_25 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (var_endForeverLabel_22984.readProperty_location (), GGS_string ("'end' label does not match 'fovever' label, it should be ").add_operation (temp_25, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 821)), fixItArray27  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 821)) ;
      }
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_FOREVER::init_21__21__21_ (var_instructionLocation_22788, var_instructionList_22860, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 827)), inCompiler COMMA_HERE) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 830)) ;
    GGS_location var_instructionLocation_23498 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 831)) ;
    GGS_registerExpression var_registerName_23564 ;
    nt_register_5F_parsing_ (var_registerName_23564, inCompiler) ;
    GGS_if_5F_semi_5F_colon_5F_op var_opCode_23604 ;
    switch (select_pic_31__38__5F_syntax_43 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 835)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 835)) ;
      var_opCode_23604 = GGS_if_5F_semi_5F_colon_5F_op::class_func_CPFSEQ (SOURCE_FILE ("pic18_syntax.galgas3", 835)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 837)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 837)) ;
      var_opCode_23604 = GGS_if_5F_semi_5F_colon_5F_op::class_func_CPFSGT (SOURCE_FILE ("pic18_syntax.galgas3", 837)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 839)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 839)) ;
      var_opCode_23604 = GGS_if_5F_semi_5F_colon_5F_op::class_func_CPFSLT (SOURCE_FILE ("pic18_syntax.galgas3", 839)) ;
    } break ;
    case 4: {
      GGS_lstring var_conditionString_23839 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 841)) ;
      GGS_string var_condition_23874 = var_conditionString_23839.readProperty_string ().getter_uppercased (SOURCE_FILE ("pic18_syntax.galgas3", 842)) ;
      GalgasBool test_28 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_28) {
        test_28 = GGS_bool (ComparisonKind::notEqual, var_condition_23874.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_28) {
          GenericArray <FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticError (var_conditionString_23839.readProperty_location (), GGS_string ("invalid '").add_operation (var_condition_23874, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 844)).add_operation (GGS_string ("' condition; it should be 'nz'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 844)), fixItArray29  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 844)) ;
        }
      }
      var_opCode_23604 = GGS_if_5F_semi_5F_colon_5F_op::class_func_TSTFSZ (SOURCE_FILE ("pic18_syntax.galgas3", 846)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 848)) ;
    GGS_pic_31__38_PiccoloSimpleInstruction var_instruction_24172 ;
    nt_simple_5F_instruction_ (var_instruction_24172, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::init_21__21__21__21_ (var_instructionLocation_23498, var_instruction_24172, var_opCode_23604, var_registerName_23564, inCompiler COMMA_HERE) ;
  } break ;
  case 16: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 856)) ;
    GGS_location var_instructionLocation_24356 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 857)) ;
    GGS_registerExpression var_registerName_24421 ;
    GGS_bitNumberExpression var_bitNumber_24463 ;
    GGS_bool var_skipIfSet_24487 ;
    switch (select_pic_31__38__5F_syntax_44 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 862)) ;
      nt_register_5F_parsing_ (var_registerName_24421, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 864)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumber_24463, inCompiler) ;
      var_skipIfSet_24487 = GGS_bool (true) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_ (var_registerName_24421, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 869)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumber_24463, inCompiler) ;
      var_skipIfSet_24487 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 873)) ;
    GGS_pic_31__38_PiccoloSimpleInstruction var_instruction_24832 ;
    nt_simple_5F_instruction_ (var_instruction_24832, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_IF_5F_BitTest::init_21__21__21__21__21_ (var_instructionLocation_24356, var_instruction_24832, var_skipIfSet_24487, var_registerName_24421, var_bitNumber_24463, inCompiler COMMA_HERE) ;
  } break ;
  case 17: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 883)) ;
    GGS_location var_instructionLocation_25035 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 884)) ;
    GGS_bool var_increment_25086 ;
    switch (select_pic_31__38__5F_syntax_45 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 887)) ;
      var_increment_25086 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 889)) ;
      var_increment_25086 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_registerExpression var_registerName_25216 ;
    nt_register_5F_parsing_ (var_registerName_25216, inCompiler) ;
    GGS_bool var_w_5F_isTarget_25244 ;
    switch (select_pic_31__38__5F_syntax_46 (inCompiler)) {
    case 1: {
      var_w_5F_isTarget_25244 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 896)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 896)) ;
      var_w_5F_isTarget_25244 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_bool var_skipIfZero_25356 ;
    GGS_lstring var_conditionString_25399 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 899)) ;
    GGS_string var_condition_25432 = var_conditionString_25399.readProperty_string ().getter_uppercased (SOURCE_FILE ("pic18_syntax.galgas3", 900)) ;
    GalgasBool test_30 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_30) {
      test_30 = GGS_bool (ComparisonKind::equal, var_condition_25432.objectCompare (GGS_string ("Z"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_30) {
        var_skipIfZero_25356 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_30) {
      GalgasBool test_31 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_31) {
        test_31 = GGS_bool (ComparisonKind::equal, var_condition_25432.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_31) {
          var_skipIfZero_25356 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_31) {
        GenericArray <FixItDescription> fixItArray32 ;
        inCompiler->emitSemanticError (var_conditionString_25399.readProperty_location (), GGS_string ("invalid '").add_operation (var_condition_25432, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 906)).add_operation (GGS_string ("' condition; it should be 'z' or 'nz'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 906)), fixItArray32  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 906)) ;
        var_skipIfZero_25356.drop () ; // Release error dropped variable
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 908)) ;
    GGS_pic_31__38_PiccoloSimpleInstruction var_instruction_25789 ;
    nt_simple_5F_instruction_ (var_instruction_25789, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_IF_5F_IncDec::init_21__21__21__21__21__21_ (var_instructionLocation_25035, var_instruction_25789, var_increment_25086, var_skipIfZero_25356, var_registerName_25216, var_w_5F_isTarget_25244, inCompiler COMMA_HERE) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 918)) ;
    GGS_lstring var_ifLabel_26004 ;
    switch (select_pic_31__38__5F_syntax_47 (inCompiler)) {
    case 1: {
      var_ifLabel_26004 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 921)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_ifLabel_26004 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 923)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_ifLabel_26004, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 924)) ;
      }
    } break ;
    default:
      break ;
    }
    nt_structured_5F_if_5F_instruction_ (var_ifLabel_26004, outArgument_outInstruction, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 932)) ;
    GGS_lstring var_endIfLabel_26312 ;
    switch (select_pic_31__38__5F_syntax_48 (inCompiler)) {
    case 1: {
      var_endIfLabel_26312 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 935)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endIfLabel_26312 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 937)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_33 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_33) {
      test_33 = GGS_bool (ComparisonKind::notEqual, var_ifLabel_26004.readProperty_string ().objectCompare (var_endIfLabel_26312.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_33) {
        GGS_string temp_34 ;
        const GalgasBool test_35 = GGS_bool (ComparisonKind::notEqual, var_ifLabel_26004.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_35) {
          temp_34 = var_ifLabel_26004.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_35) {
          temp_34 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray36 ;
        inCompiler->emitSemanticError (var_endIfLabel_26312.readProperty_location (), GGS_string ("'end' label does not match 'if' label, it should be ").add_operation (temp_34, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 940)), fixItArray36  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 940)) ;
      }
    }
  } break ;
  case 19: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 944)) ;
    GGS_lstring var_doLabel_26653 ;
    switch (select_pic_31__38__5F_syntax_49 (inCompiler)) {
    case 1: {
      var_doLabel_26653 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 947)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_doLabel_26653 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 949)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_26653, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 950)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_26800 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 952)) ;
    GGS_pic_31__38_InstructionList var_repeatedInstructionList_26872 ;
    nt_instruction_5F_list_ (var_repeatedInstructionList_26872, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    GGS_location var_endOfRepeatedInstructionList_26985 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 958)) ;
    GGS_pic_31__38_DoWhilePartList var_whilePartList_27039 = GGS_pic_31__38_DoWhilePartList::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_37 = true ;
    while (repeatFlag_37) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 961)) ;
      GGS_lstring var_whileLabel_27123 ;
      switch (select_pic_31__38__5F_syntax_51 (inCompiler)) {
      case 1: {
        var_whileLabel_27123 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 964)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        var_whileLabel_27123 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 966)) ;
      } break ;
      default:
        break ;
      }
      GalgasBool test_38 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_38) {
        test_38 = GGS_bool (ComparisonKind::notEqual, var_doLabel_26653.readProperty_string ().objectCompare (var_whileLabel_27123.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_38) {
          GGS_string temp_39 ;
          const GalgasBool test_40 = GGS_bool (ComparisonKind::notEqual, var_doLabel_26653.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_40) {
            temp_39 = var_doLabel_26653.readProperty_string () ;
          }else if (GalgasBool::boolFalse == test_40) {
            temp_39 = GGS_string ("empty") ;
          }
          GenericArray <FixItDescription> fixItArray41 ;
          inCompiler->emitSemanticError (var_whileLabel_27123.readProperty_location (), GGS_string ("'while' label does not match 'do' label, it should be ").add_operation (temp_39, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 969)), fixItArray41  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 969)) ;
        }
      }
      GGS_pic_31__38_ConditionExpression var_whileCondition_27488 ;
      nt_condition_5F_expression_ (var_whileCondition_27488, inCompiler) ;
      GGS_pic_31__38_InstructionList var_instructionList_27543 ;
      nt_instruction_5F_list_ (var_instructionList_27543, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      var_whilePartList_27039.addAssignOperation (var_whileCondition_27488, var_instructionList_27543, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 978))  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 978)) ;
      if (select_pic_31__38__5F_syntax_50 (inCompiler) == 2) {
      }else{
        repeatFlag_37 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 981)) ;
    GGS_lstring var_endDoLabel_27763 ;
    switch (select_pic_31__38__5F_syntax_52 (inCompiler)) {
    case 1: {
      var_endDoLabel_27763 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 984)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endDoLabel_27763 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 986)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_42 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_42) {
      test_42 = GGS_bool (ComparisonKind::notEqual, var_doLabel_26653.readProperty_string ().objectCompare (var_endDoLabel_27763.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_42) {
        GGS_string temp_43 ;
        const GalgasBool test_44 = GGS_bool (ComparisonKind::notEqual, var_doLabel_26653.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_44) {
          temp_43 = var_doLabel_26653.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_44) {
          temp_43 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray45 ;
        inCompiler->emitSemanticError (var_endDoLabel_27763.readProperty_location (), GGS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_43, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 989)), fixItArray45  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 989)) ;
      }
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_do_5F_while::init_21__21__21__21_ (var_instructionLocation_26800, var_repeatedInstructionList_26872, var_endOfRepeatedInstructionList_26985, var_whilePartList_27039, inCompiler COMMA_HERE) ;
  } break ;
  case 20: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 999)) ;
    GGS_location var_instructionLocation_28278 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1000)) ;
    GGS_luint var_occurrenceFactor_28342 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1001)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_MNOP::init_21__21_ (var_instructionLocation_28278, var_occurrenceFactor_28342, inCompiler COMMA_HERE) ;
  } break ;
  case 21: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nopbra COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1004)) ;
    GGS_location var_instructionLocation_28472 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1005)) ;
    GGS_luint var_occurrenceFactor_28536 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1006)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_NOPBRA::init_21__21_ (var_instructionLocation_28472, var_occurrenceFactor_28536, inCompiler COMMA_HERE) ;
  } break ;
  case 22: {
    GGS_conditional_5F_branch var_condition_28674 ;
    switch (select_pic_31__38__5F_syntax_53 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bc COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1011)) ;
      var_condition_28674 = GGS_conditional_5F_branch::class_func_bc (SOURCE_FILE ("pic18_syntax.galgas3", 1011)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnc COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1013)) ;
      var_condition_28674 = GGS_conditional_5F_branch::class_func_bnc (SOURCE_FILE ("pic18_syntax.galgas3", 1013)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bn COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1015)) ;
      var_condition_28674 = GGS_conditional_5F_branch::class_func_bn (SOURCE_FILE ("pic18_syntax.galgas3", 1015)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnn COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1017)) ;
      var_condition_28674 = GGS_conditional_5F_branch::class_func_bnn (SOURCE_FILE ("pic18_syntax.galgas3", 1017)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bov COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1019)) ;
      var_condition_28674 = GGS_conditional_5F_branch::class_func_bov (SOURCE_FILE ("pic18_syntax.galgas3", 1019)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnov COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1021)) ;
      var_condition_28674 = GGS_conditional_5F_branch::class_func_bnov (SOURCE_FILE ("pic18_syntax.galgas3", 1021)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bz COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1023)) ;
      var_condition_28674 = GGS_conditional_5F_branch::class_func_bz (SOURCE_FILE ("pic18_syntax.galgas3", 1023)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bnz COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1025)) ;
      var_condition_28674 = GGS_conditional_5F_branch::class_func_bnz (SOURCE_FILE ("pic18_syntax.galgas3", 1025)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_29174 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1027)) ;
    GGS_lstring var_targetLabelName_29243 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1028)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JUMPCC::init_21__21__21__21_ (var_instructionLocation_29174, var_targetLabelName_29243, var_condition_28674, GGS_bool (true), inCompiler COMMA_HERE) ;
  } break ;
  case 23: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1035)) ;
    GGS_location var_instructionLocation_29445 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1036)) ;
    GGS_conditional_5F_branch var_conditional_5F_branch_29510 ;
    GGS_lstring var_conditionString_29561 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1038)) ;
    GGS_string var_condition_29594 = var_conditionString_29561.readProperty_string ().getter_uppercased (SOURCE_FILE ("pic18_syntax.galgas3", 1039)) ;
    GalgasBool test_46 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_46) {
      test_46 = GGS_bool (ComparisonKind::equal, var_condition_29594.objectCompare (GGS_string ("Z"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_46) {
        var_conditional_5F_branch_29510 = GGS_conditional_5F_branch::class_func_bz (SOURCE_FILE ("pic18_syntax.galgas3", 1041)) ;
      }
    }
    if (GalgasBool::boolFalse == test_46) {
      GalgasBool test_47 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_47) {
        test_47 = GGS_bool (ComparisonKind::equal, var_condition_29594.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_47) {
          var_conditional_5F_branch_29510 = GGS_conditional_5F_branch::class_func_bnz (SOURCE_FILE ("pic18_syntax.galgas3", 1043)) ;
        }
      }
      if (GalgasBool::boolFalse == test_47) {
        GalgasBool test_48 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_48) {
          test_48 = GGS_bool (ComparisonKind::equal, var_condition_29594.objectCompare (GGS_string ("NN"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_48) {
            var_conditional_5F_branch_29510 = GGS_conditional_5F_branch::class_func_bnn (SOURCE_FILE ("pic18_syntax.galgas3", 1045)) ;
          }
        }
        if (GalgasBool::boolFalse == test_48) {
          GalgasBool test_49 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_49) {
            test_49 = GGS_bool (ComparisonKind::equal, var_condition_29594.objectCompare (GGS_string ("N"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_49) {
              var_conditional_5F_branch_29510 = GGS_conditional_5F_branch::class_func_bn (SOURCE_FILE ("pic18_syntax.galgas3", 1047)) ;
            }
          }
          if (GalgasBool::boolFalse == test_49) {
            GalgasBool test_50 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_50) {
              test_50 = GGS_bool (ComparisonKind::equal, var_condition_29594.objectCompare (GGS_string ("C"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_50) {
                var_conditional_5F_branch_29510 = GGS_conditional_5F_branch::class_func_bc (SOURCE_FILE ("pic18_syntax.galgas3", 1049)) ;
              }
            }
            if (GalgasBool::boolFalse == test_50) {
              GalgasBool test_51 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_51) {
                test_51 = GGS_bool (ComparisonKind::equal, var_condition_29594.objectCompare (GGS_string ("NC"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_51) {
                  var_conditional_5F_branch_29510 = GGS_conditional_5F_branch::class_func_bnc (SOURCE_FILE ("pic18_syntax.galgas3", 1051)) ;
                }
              }
              if (GalgasBool::boolFalse == test_51) {
                GalgasBool test_52 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_52) {
                  test_52 = GGS_bool (ComparisonKind::equal, var_condition_29594.objectCompare (GGS_string ("OV"))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_52) {
                    var_conditional_5F_branch_29510 = GGS_conditional_5F_branch::class_func_bov (SOURCE_FILE ("pic18_syntax.galgas3", 1053)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_52) {
                  GalgasBool test_53 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_53) {
                    test_53 = GGS_bool (ComparisonKind::equal, var_condition_29594.objectCompare (GGS_string ("NOV"))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_53) {
                      var_conditional_5F_branch_29510 = GGS_conditional_5F_branch::class_func_bnov (SOURCE_FILE ("pic18_syntax.galgas3", 1055)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_53) {
                    GenericArray <FixItDescription> fixItArray54 ;
                    inCompiler->emitSemanticError (var_conditionString_29561.readProperty_location (), GGS_string ("invalid '").add_operation (var_conditionString_29561.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1057)).add_operation (GGS_string ("' condition; valid ones are: 'z', 'nz', 'n', 'nn', 'c', 'nc', 'ov' and 'nov'"), inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1057)), fixItArray54  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1057)) ;
                    var_conditional_5F_branch_29510.drop () ; // Release error dropped variable
                  }
                }
              }
            }
          }
        }
      }
    }
    GGS_lstring var_targetLabelName_30541 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1061)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JUMPCC::init_21__21__21__21_ (var_instructionLocation_29445, var_targetLabelName_30541, var_conditional_5F_branch_29510, GGS_bool (false), inCompiler COMMA_HERE) ;
  } break ;
  case 24: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1068)) ;
    GGS_location var_instructionLocation_30753 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1069)) ;
    GGS_lstring var_targetLabelName_30822 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1070)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JUMP::init_21__21__21_ (var_instructionLocation_30753, var_targetLabelName_30822, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("pic18_syntax.galgas3", 1074)), inCompiler COMMA_HERE) ;
  } break ;
  case 25: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1076)) ;
    GGS_location var_instructionLocation_31035 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1077)) ;
    GGS_lstring var_targetLabelName_31104 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1078)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JUMP::init_21__21__21_ (var_instructionLocation_31035, var_targetLabelName_31104, GGS_jumpInstructionKind::class_func_absolute (SOURCE_FILE ("pic18_syntax.galgas3", 1082)), inCompiler COMMA_HERE) ;
  } break ;
  case 26: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bra COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1084)) ;
    GGS_location var_instructionLocation_31302 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1085)) ;
    GGS_lstring var_targetLabelName_31371 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1086)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JUMP::init_21__21__21_ (var_instructionLocation_31302, var_targetLabelName_31371, GGS_jumpInstructionKind::class_func_relative (SOURCE_FILE ("pic18_syntax.galgas3", 1090)), inCompiler COMMA_HERE) ;
  } break ;
  case 27: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_macro COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1093)) ;
    GGS_lstring var_macroName_31590 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1094)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1095)) ;
    GGS_immediatExpressionList var_immediatExpressionList_31641 = GGS_immediatExpressionList::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_55 = true ;
    while (repeatFlag_55) {
      GGS_immediatExpression var_constantExpression_31736 ;
      nt_immediate_5F_expression_ (var_constantExpression_31736, inCompiler) ;
      var_immediatExpressionList_31641.addAssignOperation (var_constantExpression_31736, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1099))  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1099)) ;
      if (select_pic_31__38__5F_syntax_54 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1101)) ;
      }else{
        repeatFlag_55 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1103)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_macro::init_21__21__21_ (var_macroName_31590.readProperty_location (), var_macroName_31590, var_immediatExpressionList_31641, inCompiler COMMA_HERE) ;
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
  GGS_location var_instructionLocation_32255 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1121)) ;
  GGS_pic_31__38_ConditionExpression var_structured_5F_if_5F_condition_32323 ;
  nt_condition_5F_expression_ (var_structured_5F_if_5F_condition_32323, inCompiler) ;
  GGS_pic_31__38_InstructionList var_thenInstructionList_32379 ;
  nt_instruction_5F_list_ (var_thenInstructionList_32379, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
  GGS_pic_31__38_InstructionList var_elseInstructionList_32502 ;
  switch (select_pic_31__38__5F_syntax_55 (inCompiler)) {
  case 1: {
    var_elseInstructionList_32502 = GGS_pic_31__38_InstructionList::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1132)) ;
    GGS_lstring var_elsifIfLabel_32616 ;
    switch (select_pic_31__38__5F_syntax_56 (inCompiler)) {
    case 1: {
      var_elsifIfLabel_32616 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1135)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_elsifIfLabel_32616 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1137)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elsifIfLabel_32616.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = constinArgument_ifLabel.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_elsifIfLabel_32616.readProperty_location (), GGS_string ("'elsif' label does not match 'if' label, it should be ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1140)), fixItArray3  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1140)) ;
      }
    }
    GGS_pic_31__38_PiccoloInstruction var_elsifPartInstruction_32998 ;
    nt_structured_5F_if_5F_instruction_ (constinArgument_ifLabel, var_elsifPartInstruction_32998, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    var_elseInstructionList_32502 = GGS_pic_31__38_InstructionList::init (inCompiler COMMA_HERE) ;
    var_elseInstructionList_32502.addAssignOperation (var_elsifPartInstruction_32998  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1150)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1152)) ;
    GGS_lstring var_elsifLabel_33233 ;
    switch (select_pic_31__38__5F_syntax_57 (inCompiler)) {
    case 1: {
      var_elsifLabel_33233 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1155)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_elsifLabel_33233 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1157)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elsifLabel_33233.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_ifLabel.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_elsifLabel_33233.readProperty_location (), GGS_string ("'else' label does not match 'if' label, it should be ").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1160)), fixItArray7  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1160)) ;
      }
    }
    nt_instruction_5F_list_ (var_elseInstructionList_32502, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfElsePartLocation_33698 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1169)) ;
  outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_structured_5F_if::init_21__21__21__21__21_ (var_instructionLocation_32255, var_structured_5F_if_5F_condition_32323, var_thenInstructionList_32379, var_elseInstructionList_32502, var_endOfElsePartLocation_33698, inCompiler COMMA_HERE) ;
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
    GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST var_baseCode_34113 ;
    switch (select_pic_31__38__5F_syntax_59 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1184)) ;
      var_baseCode_34113 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWF (SOURCE_FILE ("pic18_syntax.galgas3", 1185)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwfc COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1187)) ;
      var_baseCode_34113 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWFC (SOURCE_FILE ("pic18_syntax.galgas3", 1188)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1190)) ;
      var_baseCode_34113 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ANDWF (SOURCE_FILE ("pic18_syntax.galgas3", 1191)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1193)) ;
      var_baseCode_34113 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_COMF (SOURCE_FILE ("pic18_syntax.galgas3", 1194)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1196)) ;
      var_baseCode_34113 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_DECF (SOURCE_FILE ("pic18_syntax.galgas3", 1197)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1199)) ;
      var_baseCode_34113 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_INCF (SOURCE_FILE ("pic18_syntax.galgas3", 1200)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1202)) ;
      var_baseCode_34113 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_IORWF (SOURCE_FILE ("pic18_syntax.galgas3", 1203)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1205)) ;
      var_baseCode_34113 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_MOVF (SOURCE_FILE ("pic18_syntax.galgas3", 1206)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlcf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1208)) ;
      var_baseCode_34113 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RLCF (SOURCE_FILE ("pic18_syntax.galgas3", 1209)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlncf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1211)) ;
      var_baseCode_34113 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RLNCF (SOURCE_FILE ("pic18_syntax.galgas3", 1212)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrcf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1214)) ;
      var_baseCode_34113 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RRCF (SOURCE_FILE ("pic18_syntax.galgas3", 1215)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrncf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1217)) ;
      var_baseCode_34113 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RRNCF (SOURCE_FILE ("pic18_syntax.galgas3", 1218)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subfwb COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1220)) ;
      var_baseCode_34113 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SUBFWB (SOURCE_FILE ("pic18_syntax.galgas3", 1221)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1223)) ;
      var_baseCode_34113 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SUBWF (SOURCE_FILE ("pic18_syntax.galgas3", 1224)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwfb COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1226)) ;
      var_baseCode_34113 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SUBWFB (SOURCE_FILE ("pic18_syntax.galgas3", 1227)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1229)) ;
      var_baseCode_34113 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SWAPF (SOURCE_FILE ("pic18_syntax.galgas3", 1230)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1232)) ;
      var_baseCode_34113 = GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_XORWF (SOURCE_FILE ("pic18_syntax.galgas3", 1233)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_34911 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1235)) ;
    GGS_registerExpression var_registerName_34968 ;
    nt_register_5F_parsing_ (var_registerName_34968, inCompiler) ;
    GGS_bool var_W_5F_isDestination_35013 ;
    nt_optional_5F_w_5F_as_5F_dest_ (var_W_5F_isDestination_35013, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_FDA::init_21__21__21__21_ (var_instructionLocation_34911, var_baseCode_34113, var_registerName_34968, var_W_5F_isDestination_35013, inCompiler COMMA_HERE) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_bool test_1 = GGS_bool (ComparisonKind::equal, var_baseCode_34113.objectCompare (GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_MOVF (SOURCE_FILE ("pic18_syntax.galgas3", 1245)))) ;
      if (GalgasBool::boolTrue == test_1.boolEnum ()) {
        test_1 = var_W_5F_isDestination_35013.operator_not (SOURCE_FILE ("pic18_syntax.galgas3", 1245)) ;
      }
      test_0 = test_1.boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticWarning (var_instructionLocation_34911, GGS_string ("This instruction does not move data, it only sets flags. Use 'movf *, reg' instead of 'movf reg' to suppress this warning"), fixItArray2  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1246)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1250)) ;
    GGS_location var_instructionLocation_35509 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1251)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1252)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1253)) ;
    GGS_registerExpression var_registerName_35582 ;
    nt_register_5F_parsing_ (var_registerName_35582, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_FDA::init_21__21__21__21_ (var_instructionLocation_35509, GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_MOVF (SOURCE_FILE ("pic18_syntax.galgas3", 1257)), var_registerName_35582, GGS_bool (false), inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GGS_FA_5F_instruction_5F_base_5F_code var_FAinstruction_35783 ;
    switch (select_pic_31__38__5F_syntax_60 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1264)) ;
      var_FAinstruction_35783 = GGS_FA_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("pic18_syntax.galgas3", 1265)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1267)) ;
      var_FAinstruction_35783 = GGS_FA_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("pic18_syntax.galgas3", 1268)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mulwf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1270)) ;
      var_FAinstruction_35783 = GGS_FA_5F_instruction_5F_base_5F_code::class_func_MULWF (SOURCE_FILE ("pic18_syntax.galgas3", 1271)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_negf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1273)) ;
      var_FAinstruction_35783 = GGS_FA_5F_instruction_5F_base_5F_code::class_func_NEGF (SOURCE_FILE ("pic18_syntax.galgas3", 1274)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_setf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1276)) ;
      var_FAinstruction_35783 = GGS_FA_5F_instruction_5F_base_5F_code::class_func_SETF (SOURCE_FILE ("pic18_syntax.galgas3", 1277)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_36201 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1279)) ;
    GGS_registerExpression var_registerName_36267 ;
    nt_register_5F_parsing_ (var_registerName_36267, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_FA::init_21__21__21_ (var_instructionLocation_36201, var_FAinstruction_35783, var_registerName_36267, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movff COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1286)) ;
    GGS_location var_instructionLocation_36429 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1287)) ;
    GGS_registerExpression var_sourceRegisterName_36495 ;
    nt_register_5F_parsing_ (var_sourceRegisterName_36495, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1289)) ;
    GGS_registerExpression var_destinationRegisterName_36552 ;
    nt_register_5F_parsing_ (var_destinationRegisterName_36552, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_MOVFF::init_21__21__21_ (var_instructionLocation_36429, var_sourceRegisterName_36495, var_destinationRegisterName_36552, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    GGS_bit_5F_oriented_5F_op var_bitOrientedOp_36739 ;
    switch (select_pic_31__38__5F_syntax_61 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1298)) ;
      var_bitOrientedOp_36739 = GGS_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("pic18_syntax.galgas3", 1298)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1300)) ;
      var_bitOrientedOp_36739 = GGS_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("pic18_syntax.galgas3", 1300)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_btg COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1302)) ;
      var_bitOrientedOp_36739 = GGS_bit_5F_oriented_5F_op::class_func_BTG (SOURCE_FILE ("pic18_syntax.galgas3", 1302)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_36960 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1304)) ;
    GGS_registerExpression var_registerName_37046 ;
    nt_register_5F_parsing_ (var_registerName_37046, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1306)) ;
    GGS_bitNumberExpression var_bitNumber_37120 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumber_37120, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_FBA::init_21__21__21__21_ (var_instructionLocation_36960, var_bitOrientedOp_36739, var_registerName_37046, var_bitNumber_37120, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1315)) ;
    GGS_location var_instructionLocation_37300 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1316)) ;
    GGS_lstring var_targetLabelName_37369 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1317)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JSR::init_21__21__21_ (var_instructionLocation_37300, var_targetLabelName_37369, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("pic18_syntax.galgas3", 1321)), inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1323)) ;
    GGS_location var_instructionLocation_37581 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1324)) ;
    GGS_lstring var_targetLabelName_37650 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1325)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JSR::init_21__21__21_ (var_instructionLocation_37581, var_targetLabelName_37650, GGS_jumpInstructionKind::class_func_absolute (SOURCE_FILE ("pic18_syntax.galgas3", 1329)), inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rcall COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1331)) ;
    GGS_location var_instructionLocation_37859 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1332)) ;
    GGS_lstring var_targetLabelName_37928 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1333)) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_JSR::init_21__21__21_ (var_instructionLocation_37859, var_targetLabelName_37928, GGS_jumpInstructionKind::class_func_relative (SOURCE_FILE ("pic18_syntax.galgas3", 1337)), inCompiler COMMA_HERE) ;
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
    GGS_location var_instructionLocation_39048 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1361)) ;
    GGS_immediatExpression var_expression_39138 ;
    nt_immediate_5F_expression_ (var_expression_39138, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_fnop::init_21__21_ (var_instructionLocation_39048, var_expression_39138, inCompiler COMMA_HERE) ;
  } break ;
  case 17: {
    GGS_literal_5F_instruction_5F_opcode var_literalInstruction_39283 ;
    switch (select_pic_31__38__5F_syntax_62 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addlw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1369)) ;
      var_literalInstruction_39283 = GGS_literal_5F_instruction_5F_opcode::class_func_ADDLW (SOURCE_FILE ("pic18_syntax.galgas3", 1369)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1371)) ;
      var_literalInstruction_39283 = GGS_literal_5F_instruction_5F_opcode::class_func_ANDLW (SOURCE_FILE ("pic18_syntax.galgas3", 1371)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1373)) ;
      var_literalInstruction_39283 = GGS_literal_5F_instruction_5F_opcode::class_func_IORLW (SOURCE_FILE ("pic18_syntax.galgas3", 1373)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1375)) ;
      var_literalInstruction_39283 = GGS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("pic18_syntax.galgas3", 1375)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mullw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1377)) ;
      var_literalInstruction_39283 = GGS_literal_5F_instruction_5F_opcode::class_func_MULLW (SOURCE_FILE ("pic18_syntax.galgas3", 1377)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sublw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1379)) ;
      var_literalInstruction_39283 = GGS_literal_5F_instruction_5F_opcode::class_func_SUBLW (SOURCE_FILE ("pic18_syntax.galgas3", 1379)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1381)) ;
      var_literalInstruction_39283 = GGS_literal_5F_instruction_5F_opcode::class_func_XORLW (SOURCE_FILE ("pic18_syntax.galgas3", 1381)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_39885 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1383)) ;
    GGS_immediatExpression var_expression_39975 ;
    nt_immediate_5F_expression_ (var_expression_39975, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_literalOperation::init_21__21__21_ (var_instructionLocation_39885, var_literalInstruction_39283, var_expression_39975, inCompiler COMMA_HERE) ;
  } break ;
  case 18: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_lfsr COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1390)) ;
    GGS_location var_instructionLocation_40151 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1391)) ;
    GGS_luint var_FSRindex_40215 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1392)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1393)) ;
    GGS_immediatExpression var_expression_40266 ;
    nt_immediate_5F_expression_ (var_expression_40266, inCompiler) ;
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_LFSR::init_21__21__21_ (var_instructionLocation_40151, var_FSRindex_40215, var_expression_40266, inCompiler COMMA_HERE) ;
  } break ;
  case 19: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_tblrd COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1397)) ;
    GGS_location var_instructionLocation_40403 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1398)) ;
    GGS_tableAccessOption var_accessOption_40467 ;
    switch (select_pic_31__38__5F_syntax_63 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1401)) ;
      var_accessOption_40467 = GGS_tableAccessOption::class_func_simpleAccess (SOURCE_FILE ("pic18_syntax.galgas3", 1402)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1404)) ;
      var_accessOption_40467 = GGS_tableAccessOption::class_func_postIncrement (SOURCE_FILE ("pic18_syntax.galgas3", 1405)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1407)) ;
      var_accessOption_40467 = GGS_tableAccessOption::class_func_postDecrement (SOURCE_FILE ("pic18_syntax.galgas3", 1408)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1410)) ;
      var_accessOption_40467 = GGS_tableAccessOption::class_func_preIncrement (SOURCE_FILE ("pic18_syntax.galgas3", 1411)) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_TBLRD::init_21__21_ (var_instructionLocation_40403, var_accessOption_40467, inCompiler COMMA_HERE) ;
  } break ;
  case 20: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_tblwt COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1415)) ;
    GGS_location var_instructionLocation_40899 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1416)) ;
    GGS_tableAccessOption var_accessOption_40963 ;
    switch (select_pic_31__38__5F_syntax_64 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1419)) ;
      var_accessOption_40963 = GGS_tableAccessOption::class_func_simpleAccess (SOURCE_FILE ("pic18_syntax.galgas3", 1420)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2B_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1422)) ;
      var_accessOption_40963 = GGS_tableAccessOption::class_func_postIncrement (SOURCE_FILE ("pic18_syntax.galgas3", 1423)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A__2D_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1425)) ;
      var_accessOption_40963 = GGS_tableAccessOption::class_func_postDecrement (SOURCE_FILE ("pic18_syntax.galgas3", 1426)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2B__2A_ COMMA_SOURCE_FILE ("pic18_syntax.galgas3", 1428)) ;
      var_accessOption_40963 = GGS_tableAccessOption::class_func_preIncrement (SOURCE_FILE ("pic18_syntax.galgas3", 1429)) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_pic_31__38_Instruction_5F_TBLWT::init_21__21_ (var_instructionLocation_40899, var_accessOption_40963, inCompiler COMMA_HERE) ;
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
  GGS_lstring var_programName_777 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 24)) ;
  GGS_lstring var_deviceNameOrBootloaderReference_805 ;
  GGS_programKind var_programKind_856 ;
  switch (select_pic_31__38__5F_start_5F_symbol_0 (inCompiler)) {
  case 1: {
    var_programKind_856 = GGS_programKind::class_func_regularProgram (SOURCE_FILE ("pic18_start_symbol.galgas3", 28)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_implements COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 30)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 31)) ;
    var_programKind_856 = GGS_programKind::class_func_bootloaderProgram (SOURCE_FILE ("pic18_start_symbol.galgas3", 32)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_uses COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 34)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 35)) ;
    var_programKind_856 = GGS_programKind::class_func_userProgram (SOURCE_FILE ("pic18_start_symbol.galgas3", 36)) ;
  } break ;
  default:
    break ;
  }
  var_deviceNameOrBootloaderReference_805 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 38)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 39)) ;
  GGS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList_1163 = GGS_pic_31__38_InterruptDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_pic_31__38_RoutineDefinitionList var_routineDefinitionList_1227 = GGS_pic_31__38_RoutineDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_pic_31__38_MacroDefinitionList var_macroDefinitionList_1313 = GGS_pic_31__38_MacroDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_lstringlist var_unusedRoutineList_1345 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_ramDefinitionList var_ramDefinitionList_1386 = GGS_ramDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_lstringlist var_unusedRegisterList_1433 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_configDefinitionList var_configDefinitionList_1475 = GGS_configDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_constantDefinitionList var_constantDefinitionList_1528 = GGS_constantDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_dataList var_dataList_1585 = GGS_dataList::init (inCompiler COMMA_HERE) ;
  GGS_checkpicList var_checkpicList_1615 = GGS_checkpicList::init (inCompiler COMMA_HERE) ;
  GGS_lstringlist var_inlinedRoutineList_1652 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_bool var_needsComputedGoto_32__1700 = GGS_bool (false) ;
  GGS_bool var_needsComputedGoto_34__1739 = GGS_bool (false) ;
  nt_body_ (var_interruptDefinitionList_1163, var_routineDefinitionList_1227, var_macroDefinitionList_1313, var_unusedRoutineList_1345, var_inlinedRoutineList_1652, var_ramDefinitionList_1386, var_unusedRegisterList_1433, var_configDefinitionList_1475, var_constantDefinitionList_1528, var_checkpicList_1615, var_dataList_1585, var_needsComputedGoto_32__1700, var_needsComputedGoto_34__1739, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 67)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("pic18_start_symbol.galgas3", 69)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_pic_31__38_AST var_piccoloModel_2184 = GGS_pic_31__38_AST::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (var_programName_777, var_programKind_856, var_deviceNameOrBootloaderReference_805, var_configDefinitionList_1475, var_ramDefinitionList_1386, var_unusedRegisterList_1433, var_checkpicList_1615, var_dataList_1585, var_interruptDefinitionList_1163, var_constantDefinitionList_1528, var_routineDefinitionList_1227, var_macroDefinitionList_1313, var_unusedRoutineList_1345, var_inlinedRoutineList_1652, var_needsComputedGoto_32__1700, var_needsComputedGoto_34__1739, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 87)), inCompiler COMMA_HERE) ;
      {
      routine_pic_31__38__5F_analyze_3F__3F_ (var_piccoloModel_2184, GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 89)), inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 89)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_string var_hexDestinationFile_2743 = GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 91)).getter_deletingPathExtension (SOURCE_FILE ("pic18_start_symbol.galgas3", 91)).add_operation (GGS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 91)) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_hexDestinationFile_2743.getter_fileExists (SOURCE_FILE ("pic18_start_symbol.galgas3", 92)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        {
        GGS_string::class_method_deleteFile (var_hexDestinationFile_2743, inCompiler COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 93)) ;
        }
      }
    }
    GGS_string var_asmDestinationFile_2941 = GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 95)).getter_deletingPathExtension (SOURCE_FILE ("pic18_start_symbol.galgas3", 95)).add_operation (GGS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 95)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_asmDestinationFile_2941.getter_fileExists (SOURCE_FILE ("pic18_start_symbol.galgas3", 96)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        {
        GGS_string::class_method_deleteFile (var_asmDestinationFile_2941, inCompiler COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 97)) ;
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
  GGS_lstring var_programName_3603 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 112)) ;
  GenericArray <FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (var_programName_3603.readProperty_location (), GGS_string ("this file does not define a bootloader specification"), fixItArray0  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas3", 113)) ;
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
  GGS_pic_31__38_InterruptDefinitionList joker_4093 = GGS_pic_31__38_InterruptDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_pic_31__38_RoutineDefinitionList joker_4106 = GGS_pic_31__38_RoutineDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_pic_31__38_MacroDefinitionList joker_4119 = GGS_pic_31__38_MacroDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_lstringlist joker_4132 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_lstringlist joker_4145 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_ramDefinitionList joker_4158 = GGS_ramDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_lstringlist joker_4171 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_configDefinitionList joker_4184 = GGS_configDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_constantDefinitionList joker_4197 = GGS_constantDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_checkpicList joker_4210 = GGS_checkpicList::init (inCompiler COMMA_HERE) ;
  GGS_dataList joker_4223 = GGS_dataList::init (inCompiler COMMA_HERE) ;
  GGS_bool joker_4236 = GGS_bool (false) ;
  GGS_bool joker_4251 = GGS_bool (false) ;
  nt_body_ (joker_4093, joker_4106, joker_4119, joker_4132, joker_4145, joker_4158, joker_4171, joker_4184, joker_4197, joker_4210, joker_4223, joker_4236, joker_4251, inCompiler) ;
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
  GGS_lstring var_programName_790 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 33)) ;
  GGS_lstring var_deviceName_837 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 34)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 35)) ;
  GGS_midrange_5F_interruptDefinitionList var_interruptDefinitionList_861 = GGS_midrange_5F_interruptDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_midrange_5F_routineDefinitionList var_routineDefinitionList_929 = GGS_midrange_5F_routineDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_ramDefinitionList var_ramDefinitionList_993 = GGS_ramDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_lstringlist var_unusedRegisterList_1040 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_lstringlist var_unusedRoutineList_1082 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_configDefinitionList var_configDefinitionList_1123 = GGS_configDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_constantDefinitionList var_constantDefinitionList_1176 = GGS_constantDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_bool var_needsComputedGoto_32__1239 = GGS_bool (false) ;
  GGS_bool var_needsComputedGoto_34__1278 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_midrange_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 47)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 48)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GGS_lstring var_unusedRegister_1391 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 50)) ;
        var_unusedRegisterList_1040.addAssignOperation (var_unusedRegister_1391  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 51)) ;
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
        GGS_lstring var_unusedRoutine_1559 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 59)) ;
        var_unusedRoutineList_1082.addAssignOperation (var_unusedRoutine_1559  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 60)) ;
        if (select_midrange_5F_syntax_2 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 62)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      nt_configuration_5F_definition_ (var_configDefinitionList_1123, inCompiler) ;
    } break ;
    case 5: {
      nt_ram_5F_definition_ (var_ramDefinitionList_993, inCompiler) ;
    } break ;
    case 6: {
      nt_constant_5F_definition_ (var_constantDefinitionList_1176, inCompiler) ;
    } break ;
    case 7: {
      nt_midrange_5F_interrupt_5F_definition_ (var_interruptDefinitionList_861, var_needsComputedGoto_32__1239, var_needsComputedGoto_34__1278, inCompiler) ;
    } break ;
    case 8: {
      nt_midrange_5F_routine_5F_definition_ (var_routineDefinitionList_929, var_needsComputedGoto_32__1239, var_needsComputedGoto_34__1278, inCompiler) ;
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
      GGS_midrange_5F_model var_piccoloModel_2163 = GGS_midrange_5F_model::init_21__21__21__21__21__21__21__21__21__21__21__21_ (var_programName_790, var_deviceName_837, var_configDefinitionList_1123, var_ramDefinitionList_993, var_unusedRegisterList_1040, var_interruptDefinitionList_861, var_constantDefinitionList_1176, var_routineDefinitionList_929, var_unusedRoutineList_1082, var_needsComputedGoto_32__1239, var_needsComputedGoto_34__1278, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 96)), inCompiler COMMA_HERE) ;
      {
      routine_midrange_5F_analyze_3F__3F_ (var_piccoloModel_2163, GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 98)), inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 98)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GGS_string var_hexDestinationFile_2605 = GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 100)).getter_deletingPathExtension (SOURCE_FILE ("midrange_syntax.galgas3", 100)).add_operation (GGS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 100)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_hexDestinationFile_2605.getter_fileExists (SOURCE_FILE ("midrange_syntax.galgas3", 101)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        {
        GGS_string::class_method_deleteFile (var_hexDestinationFile_2605, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 102)) ;
        }
      }
    }
    GGS_string var_asmDestinationFile_2803 = GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 104)).getter_deletingPathExtension (SOURCE_FILE ("midrange_syntax.galgas3", 104)).add_operation (GGS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 104)) ;
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = var_asmDestinationFile_2803.getter_fileExists (SOURCE_FILE ("midrange_syntax.galgas3", 105)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        {
        GGS_string::class_method_deleteFile (var_asmDestinationFile_2803, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 106)) ;
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
  GGS_lstring var_programName_3468 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 121)) ;
  GenericArray <FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (var_programName_3468.readProperty_location (), GGS_string ("this file does not define a bootloader specification"), fixItArray0  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 122)) ;
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
      GGS_configDefinitionList joker_4118 = GGS_configDefinitionList::init (inCompiler COMMA_HERE) ;
      nt_configuration_5F_definition_ (joker_4118, inCompiler) ;
    } break ;
    case 5: {
      GGS_ramDefinitionList joker_4189 = GGS_ramDefinitionList::init (inCompiler COMMA_HERE) ;
      nt_ram_5F_definition_ (joker_4189, inCompiler) ;
    } break ;
    case 6: {
      GGS_constantDefinitionList joker_4270 = GGS_constantDefinitionList::init (inCompiler COMMA_HERE) ;
      nt_constant_5F_definition_ (joker_4270, inCompiler) ;
    } break ;
    case 7: {
      GGS_midrange_5F_interruptDefinitionList joker_4371 = GGS_midrange_5F_interruptDefinitionList::init (inCompiler COMMA_HERE) ;
      GGS_bool joker_4384 = GGS_bool (false) ;
      GGS_bool joker_4399 = GGS_bool (false) ;
      nt_midrange_5F_interrupt_5F_definition_ (joker_4371, joker_4384, joker_4399, inCompiler) ;
    } break ;
    case 8: {
      GGS_midrange_5F_routineDefinitionList joker_4498 = GGS_midrange_5F_routineDefinitionList::init (inCompiler COMMA_HERE) ;
      GGS_bool joker_4511 = GGS_bool (false) ;
      GGS_bool joker_4526 = GGS_bool (false) ;
      nt_midrange_5F_routine_5F_definition_ (joker_4498, joker_4511, joker_4526, inCompiler) ;
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
      GGS_midrange_5F_instruction var_instruction_4902 ;
      nt_midrange_5F_simple_5F_instruction_ (var_instruction_4902, inCompiler) ;
      outArgument_outInstructionList.addAssignOperation (var_instruction_4902  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 177)) ;
    } break ;
    case 3: {
      GGS_midrange_5F_instruction var_instruction_5012 ;
      nt_midrange_5F_structured_5F_instruction_ (var_instruction_5012, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      outArgument_outInstructionList.addAssignOperation (var_instruction_5012  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 184)) ;
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
  GGS_location var_interruptionLocation_5410 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 195)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_contextsave COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 196)) ;
  GGS_lstring var_firstSaveRegister_5494 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 197)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 198)) ;
  GGS_lstring var_secondSaveRegister_5549 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 199)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 200)) ;
  GGS_labelMap var_labelMap_5591 = GGS_labelMap::init (inCompiler COMMA_HERE) ;
  GGS_midrange_5F_instructionList var_instructionList_5646 ;
  nt_midrange_5F_instruction_5F_list_ (var_instructionList_5646, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, var_labelMap_5591, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 207)) ;
  ioArgument_ioInterruptDefinitionList.addAssignOperation (var_interruptionLocation_5410, var_instructionList_5646, var_firstSaveRegister_5494, var_secondSaveRegister_5549, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 213))  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 208)) ;
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
  GGS_bool var_noreturn_6108 ;
  switch (select_midrange_5F_syntax_4 (inCompiler)) {
  case 1: {
    var_noreturn_6108 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 227)) ;
    var_noreturn_6108 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 230)) ;
  GGS_lstring var_routineName_6235 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 231)) ;
  GGS_luint var_page_6301 ;
  switch (select_midrange_5F_syntax_5 (inCompiler)) {
  case 1: {
    var_page_6301 = GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 235)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_page COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 237)) ;
    var_page_6301 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 238)) ;
  } break ;
  default:
    break ;
  }
  GGS_luint var_requiredBank_6424 ;
  GGS_luint var_returnedBank_6450 ;
  GGS_bool var_preservesBank_6475 ;
  switch (select_midrange_5F_syntax_6 (inCompiler)) {
  case 1: {
    var_requiredBank_6424 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("midrange_syntax.galgas3", 245)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 245)), inCompiler COMMA_HERE) ;
    var_returnedBank_6450 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("midrange_syntax.galgas3", 246)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 246)), inCompiler COMMA_HERE) ;
    var_preservesBank_6475 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 249)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 250)) ;
    switch (select_midrange_5F_syntax_7 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 252)) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = var_noreturn_6108.boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 254)), GGS_string ("a \"noreturn\" routine cannot accept \"bank:preserved\" setting"), fixItArray1  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 254)) ;
        }
      }
      var_preservesBank_6475 = GGS_bool (true) ;
      var_requiredBank_6424 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("midrange_syntax.galgas3", 257)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 257)), inCompiler COMMA_HERE) ;
      var_returnedBank_6450 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("midrange_syntax.galgas3", 258)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 258)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 260)) ;
      var_requiredBank_6424 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 261)) ;
      var_preservesBank_6475 = GGS_bool (false) ;
      switch (select_midrange_5F_syntax_8 (inCompiler)) {
      case 1: {
        var_returnedBank_6450 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("midrange_syntax.galgas3", 264)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 264)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 266)) ;
        var_returnedBank_6450 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 267)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_noreturn_6108.boolEnum () ;
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
      var_returnedBank_6450 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 274)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_noreturn_6108.boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 276)), GGS_string ("a \"noreturn\" routine cannot accept \"bank:returned\" setting"), fixItArray5  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 276)) ;
        }
      }
      var_preservesBank_6475 = GGS_bool (false) ;
      var_requiredBank_6424 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("midrange_syntax.galgas3", 279)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 279)), inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 282)) ;
  GGS_labelMap var_labelMap_7643 = GGS_labelMap::init (inCompiler COMMA_HERE) ;
  GGS_midrange_5F_instructionList var_instructionList_7698 ;
  nt_midrange_5F_instruction_5F_list_ (var_instructionList_7698, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, var_labelMap_7643, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 289)) ;
  ioArgument_ioRoutineDefinitionList.addAssignOperation (var_routineName_6235, var_page_6301, var_requiredBank_6424, var_returnedBank_6450, var_preservesBank_6475, var_noreturn_6108, var_instructionList_7698, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 298))  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 290)) ;
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
    GGS_lstring var_doLabel_8229 ;
    switch (select_midrange_5F_syntax_10 (inCompiler)) {
    case 1: {
      var_doLabel_8229 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 313)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_doLabel_8229 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 315)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_8229, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 316)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_8366 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 318)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 319)) ;
    GGS_lstring var_constantName_8434 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 320)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 321)) ;
    GGS_immediatExpression var_lowBoundExpression_8509 ;
    nt_immediate_5F_expression_ (var_lowBoundExpression_8509, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 323)) ;
    GGS_immediatExpression var_highBoundExpression_8592 ;
    nt_immediate_5F_expression_ (var_highBoundExpression_8592, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 325)) ;
    GGS_midrange_5F_instructionList var_instructionList_8691 ;
    nt_midrange_5F_instruction_5F_list_ (var_instructionList_8691, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::init_21__21__21__21__21__21_ (var_instructionLocation_8366, var_constantName_8434, var_lowBoundExpression_8509, var_highBoundExpression_8592, var_instructionList_8691, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 337)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 338)) ;
    GGS_lstring var_endDoLabel_9020 ;
    switch (select_midrange_5F_syntax_11 (inCompiler)) {
    case 1: {
      var_endDoLabel_9020 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 341)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endDoLabel_9020 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 343)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, var_doLabel_8229.readProperty_string ().objectCompare (var_endDoLabel_9020.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::notEqual, var_doLabel_8229.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = var_doLabel_8229.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_endDoLabel_9020.readProperty_location (), GGS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 346)), fixItArray3  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 346)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checkbank COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 350)) ;
    GGS_luint var_bankIndex_9378 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 351)) ;
    outArgument_outInstruction = GGS_midrangeInstruction_5F_checkbank::init_21__21_ (var_bankIndex_9378.readProperty_location (), var_bankIndex_9378.readProperty_uint (), inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checknobank COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 354)) ;
    outArgument_outInstruction = GGS_midrangeInstruction_5F_checknobank::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 355)), inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 357)) ;
    GGS_location var_instructionLocation_9613 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 358)) ;
    GGS_registerExpression var_register_9699 ;
    nt_register_5F_parsing_ (var_register_9699, inCompiler) ;
    GGS_bool var_warningOnUselessBanksel_9723 ;
    switch (select_midrange_5F_syntax_12 (inCompiler)) {
    case 1: {
      var_warningOnUselessBanksel_9723 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 364)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 365)) ;
      var_warningOnUselessBanksel_9723 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_banksel_5F_register::init_21__21__21_ (var_instructionLocation_9613, var_register_9699, var_warningOnUselessBanksel_9723, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 370)) ;
    GGS_location var_instructionLocation_10024 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 371)) ;
    GGS_luint var_bank_10088 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 372)) ;
    GGS_bool var_warningOnUselessBanksel_10108 ;
    switch (select_midrange_5F_syntax_13 (inCompiler)) {
    case 1: {
      var_warningOnUselessBanksel_10108 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 377)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 378)) ;
      var_warningOnUselessBanksel_10108 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_banksel::init_21__21__21_ (var_instructionLocation_10024, var_bank_10088, var_warningOnUselessBanksel_10108, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksave COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 383)) ;
    GGS_location var_instructionLocation_10397 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 384)) ;
    GGS_registerExpression var_register_10483 ;
    nt_register_5F_parsing_ (var_register_10483, inCompiler) ;
    GGS_midrange_5F_instructionList var_instructionList_10537 ;
    nt_midrange_5F_instruction_5F_list_ (var_instructionList_10537, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 391)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_savebank::init_21__21__21__21_ (var_instructionLocation_10397, var_register_10483, var_instructionList_10537, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 396)), inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nobank COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 398)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_nobanksel::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 399)), inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 401)) ;
    GGS_lstring var_foreverLabel_10913 ;
    switch (select_midrange_5F_syntax_14 (inCompiler)) {
    case 1: {
      var_foreverLabel_10913 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 404)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_foreverLabel_10913 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 406)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_foreverLabel_10913, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 407)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_11080 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 409)) ;
    GGS_midrange_5F_instructionList var_instructionList_11161 ;
    nt_midrange_5F_instruction_5F_list_ (var_instructionList_11161, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 415)) ;
    GGS_lstring var_endForeverLabel_11285 ;
    switch (select_midrange_5F_syntax_15 (inCompiler)) {
    case 1: {
      var_endForeverLabel_11285 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 418)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endForeverLabel_11285 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 420)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::notEqual, var_foreverLabel_10913.readProperty_string ().objectCompare (var_endForeverLabel_11285.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, var_foreverLabel_10913.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = var_foreverLabel_10913.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_endForeverLabel_11285.readProperty_location (), GGS_string ("'end' label does not match 'fovever' label, it should be ").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 423)), fixItArray7  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 423)) ;
      }
    }
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_FOREVER::init_21__21__21_ (var_instructionLocation_11080, var_instructionList_11161, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 429)), inCompiler COMMA_HERE) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 431)) ;
    GGS_location var_instructionLocation_11798 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 432)) ;
    GGS_registerExpression var_registerExpression_11863 ;
    GGS_bitNumberExpression var_bitNumberExpression_11911 ;
    GGS_bool var_skipIfSet_11945 ;
    switch (select_midrange_5F_syntax_16 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 437)) ;
      nt_register_5F_parsing_ (var_registerExpression_11863, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 439)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_11911, inCompiler) ;
      var_skipIfSet_11945 = GGS_bool (true) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_ (var_registerExpression_11863, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 444)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_11911, inCompiler) ;
      var_skipIfSet_11945 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 448)) ;
    GGS_midrange_5F_instruction var_instruction_12304 ;
    nt_midrange_5F_simple_5F_instruction_ (var_instruction_12304, inCompiler) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_IF_5F_BitTest::init_21__21__21__21__21_ (var_instructionLocation_11798, var_instruction_12304, var_skipIfSet_11945, var_registerExpression_11863, var_bitNumberExpression_11911, inCompiler COMMA_HERE) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 457)) ;
    GGS_location var_instructionLocation_12522 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 458)) ;
    GGS_bool var_increment_12573 ;
    switch (select_midrange_5F_syntax_17 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 461)) ;
      var_increment_12573 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 463)) ;
      var_increment_12573 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_registerExpression var_registerExpression_12703 ;
    nt_register_5F_parsing_ (var_registerExpression_12703, inCompiler) ;
    GGS_bool var_w_5F_isTarget_12737 ;
    switch (select_midrange_5F_syntax_18 (inCompiler)) {
    case 1: {
      var_w_5F_isTarget_12737 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 470)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 470)) ;
      var_w_5F_isTarget_12737 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_conditionString_12867 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 472)) ;
    GGS_string var_condition_12900 = var_conditionString_12867.readProperty_string ().getter_uppercased (SOURCE_FILE ("midrange_syntax.galgas3", 473)) ;
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = GGS_bool (ComparisonKind::notEqual, var_condition_12900.objectCompare (GGS_string ("NZ"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_conditionString_12867.readProperty_location (), GGS_string ("invalid '").add_operation (var_condition_12900, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 475)).add_operation (GGS_string ("' condition; it should be 'nz'"), inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 475)), fixItArray9  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 475)) ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 477)) ;
    GGS_midrange_5F_instruction var_instruction_13121 ;
    nt_midrange_5F_simple_5F_instruction_ (var_instruction_13121, inCompiler) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_IF_5F_IncDec::init_21__21__21__21__21_ (var_instructionLocation_12522, var_instruction_13121, var_increment_12573, var_registerExpression_12703, var_w_5F_isTarget_12737, inCompiler COMMA_HERE) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 487)) ;
    GGS_lstring var_ifLabel_13333 ;
    switch (select_midrange_5F_syntax_19 (inCompiler)) {
    case 1: {
      var_ifLabel_13333 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 490)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_ifLabel_13333 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 492)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_ifLabel_13333, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 493)) ;
      }
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_structured_5F_if_5F_instruction_ (var_ifLabel_13333, outArgument_outInstruction, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 501)) ;
    GGS_lstring var_endIfLabel_13650 ;
    switch (select_midrange_5F_syntax_20 (inCompiler)) {
    case 1: {
      var_endIfLabel_13650 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 504)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endIfLabel_13650 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 506)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = GGS_bool (ComparisonKind::notEqual, var_ifLabel_13333.readProperty_string ().objectCompare (var_endIfLabel_13650.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GGS_string temp_11 ;
        const GalgasBool test_12 = GGS_bool (ComparisonKind::notEqual, var_ifLabel_13333.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          temp_11 = var_ifLabel_13333.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_12) {
          temp_11 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (var_endIfLabel_13650.readProperty_location (), GGS_string ("'end' label does not match 'if' label, it should be ").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 509)), fixItArray13  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 509)) ;
      }
    }
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 513)) ;
    GGS_lstring var_doLabel_13991 ;
    switch (select_midrange_5F_syntax_21 (inCompiler)) {
    case 1: {
      var_doLabel_13991 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 516)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_doLabel_13991 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 518)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_13991, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 519)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_14138 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 521)) ;
    GGS_midrange_5F_instructionList var_repeatedInstructionList_14219 ;
    nt_midrange_5F_instruction_5F_list_ (var_repeatedInstructionList_14219, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    GGS_location var_endOfRepeatedInstructionList_14342 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 527)) ;
    GGS_midrange_5F_partList var_whilePartList_14396 = GGS_midrange_5F_partList::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_14 = true ;
    while (repeatFlag_14) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 530)) ;
      GGS_lstring var_whileLabel_14477 ;
      switch (select_midrange_5F_syntax_23 (inCompiler)) {
      case 1: {
        var_whileLabel_14477 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 533)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        var_whileLabel_14477 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 535)) ;
      } break ;
      default:
        break ;
      }
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::notEqual, var_doLabel_13991.readProperty_string ().objectCompare (var_whileLabel_14477.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          GGS_string temp_16 ;
          const GalgasBool test_17 = GGS_bool (ComparisonKind::notEqual, var_doLabel_13991.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            temp_16 = var_doLabel_13991.readProperty_string () ;
          }else if (GalgasBool::boolFalse == test_17) {
            temp_16 = GGS_string ("empty") ;
          }
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (var_whileLabel_14477.readProperty_location (), GGS_string ("'while' label does not match 'do' label, it should be ").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 538)), fixItArray18  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 538)) ;
        }
      }
      GGS_midrange_5F_conditionExpression var_whileCondition_14851 ;
      nt_midrange_5F_condition_5F_expression_ (var_whileCondition_14851, inCompiler) ;
      GGS_midrange_5F_instructionList var_instructionList_14915 ;
      nt_midrange_5F_instruction_5F_list_ (var_instructionList_14915, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      var_whilePartList_14396.addAssignOperation (var_whileCondition_14851, var_instructionList_14915, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 547))  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 547)) ;
      if (select_midrange_5F_syntax_22 (inCompiler) == 2) {
      }else{
        repeatFlag_14 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 550)) ;
    GGS_lstring var_endDoLabel_15133 ;
    switch (select_midrange_5F_syntax_24 (inCompiler)) {
    case 1: {
      var_endDoLabel_15133 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 553)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endDoLabel_15133 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 555)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_19 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_19) {
      test_19 = GGS_bool (ComparisonKind::notEqual, var_doLabel_13991.readProperty_string ().objectCompare (var_endDoLabel_15133.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        GGS_string temp_20 ;
        const GalgasBool test_21 = GGS_bool (ComparisonKind::notEqual, var_doLabel_13991.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_21) {
          temp_20 = var_doLabel_13991.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_21) {
          temp_20 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (var_endDoLabel_15133.readProperty_location (), GGS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_20, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 558)), fixItArray22  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 558)) ;
      }
    }
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_do_5F_while::init_21__21__21__21_ (var_instructionLocation_14138, var_repeatedInstructionList_14219, var_endOfRepeatedInstructionList_14342, var_whilePartList_14396, inCompiler COMMA_HERE) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 567)) ;
    GGS_location var_instructionLocation_15647 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 568)) ;
    GGS_luint var_occurrenceFactor_15711 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 569)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_MNOP::init_21__21_ (var_instructionLocation_15647, var_occurrenceFactor_15711, inCompiler COMMA_HERE) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 572)) ;
    GGS_location var_instructionLocation_15852 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 573)) ;
    GGS_lstring var_targetLabelName_15921 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 574)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_JSR::init_21__21_ (var_instructionLocation_15852, var_targetLabelName_15921, inCompiler COMMA_HERE) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 579)) ;
    GGS_location var_instructionLocation_16072 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 580)) ;
    GGS_lstring var_targetLabelName_16141 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 581)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_JUMP::init_21__21_ (var_instructionLocation_16072, var_targetLabelName_16141, inCompiler COMMA_HERE) ;
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
  GGS_location var_instructionLocation_16544 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 598)) ;
  GGS_midrange_5F_conditionExpression var_structured_5F_if_5F_condition_16621 ;
  nt_midrange_5F_condition_5F_expression_ (var_structured_5F_if_5F_condition_16621, inCompiler) ;
  GGS_midrange_5F_instructionList var_thenInstructionList_16686 ;
  nt_midrange_5F_instruction_5F_list_ (var_thenInstructionList_16686, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
  GGS_midrange_5F_instructionList var_elseInstructionList_16813 ;
  switch (select_midrange_5F_syntax_25 (inCompiler)) {
  case 1: {
    var_elseInstructionList_16813 = GGS_midrange_5F_instructionList::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 609)) ;
    GGS_lstring var_elsifIfLabel_16931 ;
    switch (select_midrange_5F_syntax_26 (inCompiler)) {
    case 1: {
      var_elsifIfLabel_16931 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 612)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_elsifIfLabel_16931 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 614)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elsifIfLabel_16931.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = constinArgument_ifLabel.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_elsifIfLabel_16931.readProperty_location (), GGS_string ("'elsif' label does not match 'if' label, it should be ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 617)), fixItArray3  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 617)) ;
      }
    }
    GGS_midrange_5F_instruction var_elsifPartInstruction_17322 ;
    nt_midrange_5F_structured_5F_if_5F_instruction_ (constinArgument_ifLabel, var_elsifPartInstruction_17322, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    var_elseInstructionList_16813 = GGS_midrange_5F_instructionList::init (inCompiler COMMA_HERE) ;
    var_elseInstructionList_16813.addAssignOperation (var_elsifPartInstruction_17322  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 627)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 629)) ;
    GGS_lstring var_elseLabel_17561 ;
    switch (select_midrange_5F_syntax_27 (inCompiler)) {
    case 1: {
      var_elseLabel_17561 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 632)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_elseLabel_17561 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 634)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elseLabel_17561.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_ifLabel.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_elseLabel_17561.readProperty_location (), GGS_string ("'else' label does not match 'if' label, it should be ").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 637)), fixItArray7  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 637)) ;
      }
    }
    nt_midrange_5F_instruction_5F_list_ (var_elseInstructionList_16813, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfElsePartLocation_18030 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 646)) ;
  outArgument_outInstruction = GGS_midrange_5F_instruction_5F_structured_5F_if::init_21__21__21__21__21_ (var_instructionLocation_16544, var_structured_5F_if_5F_condition_16621, var_thenInstructionList_16686, var_elseInstructionList_16813, var_endOfElsePartLocation_18030, inCompiler COMMA_HERE) ;
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
    GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code var_baseCode_18448 ;
    switch (select_midrange_5F_syntax_29 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 661)) ;
      var_baseCode_18448 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_ADDWF (SOURCE_FILE ("midrange_syntax.galgas3", 662)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 664)) ;
      var_baseCode_18448 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_ANDWF (SOURCE_FILE ("midrange_syntax.galgas3", 665)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 667)) ;
      var_baseCode_18448 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_COMF (SOURCE_FILE ("midrange_syntax.galgas3", 668)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 670)) ;
      var_baseCode_18448 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_DECF (SOURCE_FILE ("midrange_syntax.galgas3", 671)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 673)) ;
      var_baseCode_18448 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_INCF (SOURCE_FILE ("midrange_syntax.galgas3", 674)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 676)) ;
      var_baseCode_18448 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_IORWF (SOURCE_FILE ("midrange_syntax.galgas3", 677)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 679)) ;
      var_baseCode_18448 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_syntax.galgas3", 680)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 682)) ;
      var_baseCode_18448 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_RLF (SOURCE_FILE ("midrange_syntax.galgas3", 683)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 685)) ;
      var_baseCode_18448 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_RRF (SOURCE_FILE ("midrange_syntax.galgas3", 686)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 688)) ;
      var_baseCode_18448 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SUBWF (SOURCE_FILE ("midrange_syntax.galgas3", 689)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 691)) ;
      var_baseCode_18448 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_syntax.galgas3", 692)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 694)) ;
      var_baseCode_18448 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_XORWF (SOURCE_FILE ("midrange_syntax.galgas3", 695)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_19001 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 697)) ;
    GGS_registerExpression var_registerExpression_19067 ;
    nt_register_5F_parsing_ (var_registerExpression_19067, inCompiler) ;
    GGS_bool var_W_5F_isDestination_19118 ;
    nt_optional_5F_w_5F_as_5F_dest_ (var_W_5F_isDestination_19118, inCompiler) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_FD::init_21__21__21__21_ (var_instructionLocation_19001, var_baseCode_18448, var_registerExpression_19067, var_W_5F_isDestination_19118, inCompiler COMMA_HERE) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_bool test_1 = GGS_bool (ComparisonKind::equal, var_baseCode_18448.objectCompare (GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_syntax.galgas3", 707)))) ;
      if (GalgasBool::boolTrue == test_1.boolEnum ()) {
        test_1 = var_W_5F_isDestination_19118.operator_not (SOURCE_FILE ("midrange_syntax.galgas3", 707)) ;
      }
      test_0 = test_1.boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticWarning (var_instructionLocation_19001, GGS_string ("This instruction does not move data, it only sets flags. Use 'movf *, reg' instead of 'movf reg' to suppress this warning"), fixItArray2  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 708)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 712)) ;
    GGS_location var_instructionLocation_19623 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 713)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 714)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 715)) ;
    GGS_registerExpression var_registerName_19696 ;
    nt_register_5F_parsing_ (var_registerName_19696, inCompiler) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_FD::init_21__21__21__21_ (var_instructionLocation_19623, GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_syntax.galgas3", 719)), var_registerName_19696, GGS_bool (false), inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GGS_midrange_5F_F_5F_instruction_5F_base_5F_code var_FAinstruction_19908 ;
    switch (select_midrange_5F_syntax_30 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 726)) ;
      var_FAinstruction_19908 = GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("midrange_syntax.galgas3", 727)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 729)) ;
      var_FAinstruction_19908 = GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_syntax.galgas3", 730)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_20118 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 732)) ;
    GGS_registerExpression var_registerExpression_20184 ;
    nt_register_5F_parsing_ (var_registerExpression_20184, inCompiler) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_F::init_21__21__21_ (var_instructionLocation_20118, var_FAinstruction_19908, var_registerExpression_20184, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GGS_midrange_5F_bit_5F_oriented_5F_op var_bitOrientedOp_20365 ;
    switch (select_midrange_5F_syntax_31 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 741)) ;
      var_bitOrientedOp_20365 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("midrange_syntax.galgas3", 741)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 743)) ;
      var_bitOrientedOp_20365 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("midrange_syntax.galgas3", 743)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_20545 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 745)) ;
    GGS_registerExpression var_registerExpression_20611 ;
    nt_register_5F_parsing_ (var_registerExpression_20611, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 747)) ;
    GGS_bitNumberExpression var_bitNumberExpression_20670 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_20670, inCompiler) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_FB::init_21__21__21__21_ (var_instructionLocation_20545, var_bitOrientedOp_20365, var_registerExpression_20611, var_bitNumberExpression_20670, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 755)) ;
    GGS_location var_instructionLocation_20875 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 756)) ;
    GGS_lstring var_targetLabelName_20944 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 757)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_GOTO::init_21__21_ (var_instructionLocation_20875, var_targetLabelName_20944, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 762)) ;
    GGS_location var_instructionLocation_21119 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 763)) ;
    GGS_lstring var_targetLabelName_21188 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 764)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_CALL::init_21__21_ (var_instructionLocation_21119, var_targetLabelName_21188, inCompiler COMMA_HERE) ;
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
    GGS_midrange_5F_literal_5F_instruction_5F_opcode var_literalInstruction_21715 ;
    switch (select_midrange_5F_syntax_32 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addlw COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 783)) ;
      var_literalInstruction_21715 = GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_ADDLW (SOURCE_FILE ("midrange_syntax.galgas3", 783)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 785)) ;
      var_literalInstruction_21715 = GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_ANDLW (SOURCE_FILE ("midrange_syntax.galgas3", 785)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 787)) ;
      var_literalInstruction_21715 = GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_IORLW (SOURCE_FILE ("midrange_syntax.galgas3", 787)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 789)) ;
      var_literalInstruction_21715 = GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("midrange_syntax.galgas3", 789)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sublw COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 791)) ;
      var_literalInstruction_21715 = GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_SUBLW (SOURCE_FILE ("midrange_syntax.galgas3", 791)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 793)) ;
      var_literalInstruction_21715 = GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_XORLW (SOURCE_FILE ("midrange_syntax.galgas3", 793)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_22292 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 795)) ;
    GGS_immediatExpression var_expression_22362 ;
    nt_immediate_5F_expression_ (var_expression_22362, inCompiler) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_literalOperation::init_21__21__21_ (var_instructionLocation_22292, var_literalInstruction_21715, var_expression_22362, inCompiler COMMA_HERE) ;
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
  GGS_midrange_5F_conditionExpression var_condition_22700 ;
  nt_midrange_5F_condition_5F_factor_ (var_condition_22700, inCompiler) ;
  outArgument_outCondition = GGS_midrange_5F_negateCondition::init_21_ (var_condition_22700, inCompiler COMMA_HERE) ;
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
    GGS_bool var_isIncrement_23130 ;
    switch (select_midrange_5F_syntax_34 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 827)) ;
      var_isIncrement_23130 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 829)) ;
      var_isIncrement_23130 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GGS_registerExpression var_registerExpression_23266 ;
    nt_register_5F_parsing_ (var_registerExpression_23266, inCompiler) ;
    GGS_bool var_W_5F_isDestination_23300 ;
    switch (select_midrange_5F_syntax_35 (inCompiler)) {
    case 1: {
      var_W_5F_isDestination_23300 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 836)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 836)) ;
      var_W_5F_isDestination_23300 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_conditionString_23445 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 838)) ;
    GGS_string var_condition_23478 = var_conditionString_23445.readProperty_string ().getter_uppercased (SOURCE_FILE ("midrange_syntax.galgas3", 839)) ;
    GGS_bool var_branchIfZero_23538 ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_condition_23478.objectCompare (GGS_string ("Z"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_branchIfZero_23538 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, var_condition_23478.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          var_branchIfZero_23538 = GGS_bool (false) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_conditionString_23445.readProperty_location (), GGS_string ("invalid '").add_operation (var_conditionString_23445.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 846)).add_operation (GGS_string ("' condition; valid ones are: 'z' and 'nz'"), inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 846)), fixItArray2  COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 846)) ;
        var_branchIfZero_23538.drop () ; // Release error dropped variable
      }
    }
    outArgument_outCondition = GGS_midrange_5F_incDecRegisterInCondition::init_21__21__21__21_ (var_registerExpression_23266, var_isIncrement_23130, var_W_5F_isDestination_23300, var_branchIfZero_23538, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    GGS_registerExpression var_registerExpression_24001 ;
    nt_register_5F_parsing_ (var_registerExpression_24001, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas3", 857)) ;
    GGS_bitNumberExpression var_bitNumberExpression_24060 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_24060, inCompiler) ;
    outArgument_outCondition = GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::init_21__21_ (var_registerExpression_24001, var_bitNumberExpression_24060, inCompiler COMMA_HERE) ;
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
      GGS_midrange_5F_conditionExpression var_c_24472 ;
      nt_midrange_5F_condition_5F_term_ (var_c_24472, inCompiler) ;
      GGS_midrange_5F_conditionExpression var_rc_24513 = GGS_midrange_5F_negateCondition::init_21_ (var_c_24472, inCompiler COMMA_HERE) ;
      GGS_midrange_5F_conditionExpression var_lc_24588 = GGS_midrange_5F_negateCondition::init_21_ (outArgument_outCondition, inCompiler COMMA_HERE) ;
      outArgument_outCondition = GGS_midrange_5F_negateCondition::init_21_ (GGS_midrange_5F_andCondition::init_21__21_ (var_lc_24588, var_rc_24513, inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
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
      GGS_midrange_5F_conditionExpression var_c_24983 ;
      nt_midrange_5F_condition_5F_factor_ (var_c_24983, inCompiler) ;
      outArgument_outCondition = GGS_midrange_5F_andCondition::init_21__21_ (outArgument_outCondition, var_c_24983, inCompiler COMMA_HERE) ;
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
        GGS_lstring var_unusedRegister_1051 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 40)) ;
        ioArgument_unusedRegisterList.addAssignOperation (var_unusedRegister_1051  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 41)) ;
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
        GGS_lstring var_unusedRoutine_1219 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 49)) ;
        ioArgument_ioUnusedRoutineList.addAssignOperation (var_unusedRoutine_1219  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 50)) ;
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
      GGS_baseline_5F_instruction var_instruction_1845 ;
      nt_baseline_5F_simple_5F_instruction_ (var_instruction_1845, inCompiler) ;
      outArgument_outInstructionList.addAssignOperation (var_instruction_1845  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 75)) ;
    } break ;
    case 3: {
      GGS_baseline_5F_instruction var_instruction_1955 ;
      nt_baseline_5F_structured_5F_instruction_ (var_instruction_1955, ioArgument_ioLabelMap, inCompiler) ;
      outArgument_outInstructionList.addAssignOperation (var_instruction_1955  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 80)) ;
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
  GGS_bool var_noreturn_2205 ;
  switch (select_baseline_5F_syntax_4 (inCompiler)) {
  case 1: {
    var_noreturn_2205 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 92)) ;
    var_noreturn_2205 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 95)) ;
  GGS_lstring var_routineName_2332 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 96)) ;
  GGS_luint var_page_2398 ;
  switch (select_baseline_5F_syntax_5 (inCompiler)) {
  case 1: {
    var_page_2398 = GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 100)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_page COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 102)) ;
    var_page_2398 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 103)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 106)) ;
  GGS_labelMap var_labelMap_2525 = GGS_labelMap::init (inCompiler COMMA_HERE) ;
  GGS_baseline_5F_instructionList var_instructionList_2580 ;
  nt_baseline_5F_instruction_5F_list_ (var_instructionList_2580, var_labelMap_2525, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 111)) ;
  ioArgument_ioRoutineDefinitionList.addAssignOperation (var_routineName_2332, var_page_2398, var_noreturn_2205, var_instructionList_2580, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 117))  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 112)) ;
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
    GGS_lstring var_doLabel_2935 ;
    switch (select_baseline_5F_syntax_7 (inCompiler)) {
    case 1: {
      var_doLabel_2935 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 130)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_doLabel_2935 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 132)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_2935, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 133)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_3082 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 135)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 136)) ;
    GGS_lstring var_constantName_3150 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 137)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 138)) ;
    GGS_immediatExpression var_lowBoundExpression_3225 ;
    nt_immediate_5F_expression_ (var_lowBoundExpression_3225, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 140)) ;
    GGS_immediatExpression var_highBoundExpression_3308 ;
    nt_immediate_5F_expression_ (var_highBoundExpression_3308, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 142)) ;
    GGS_baseline_5F_instructionList var_instructionList_3401 ;
    nt_baseline_5F_instruction_5F_list_ (var_instructionList_3401, ioArgument_ioLabelMap, inCompiler) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::init_21__21__21__21__21__21_ (var_instructionLocation_3082, var_constantName_3150, var_lowBoundExpression_3225, var_highBoundExpression_3308, var_instructionList_3401, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 150)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 152)) ;
    GGS_lstring var_endDoLabel_3660 ;
    switch (select_baseline_5F_syntax_8 (inCompiler)) {
    case 1: {
      var_endDoLabel_3660 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 155)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endDoLabel_3660 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 157)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, var_doLabel_2935.readProperty_string ().objectCompare (var_endDoLabel_3660.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::notEqual, var_doLabel_2935.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = var_doLabel_2935.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_endDoLabel_3660.readProperty_location (), GGS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 160)), fixItArray3  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 160)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 164)) ;
    GGS_location var_instructionLocation_4004 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 165)) ;
    GGS_lstring var_targetLabelName_4073 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 166)) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_JUMP::init_21__21_ (var_instructionLocation_4004, var_targetLabelName_4073, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 171)) ;
    GGS_location var_instructionLocation_4224 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 172)) ;
    GGS_lstring var_targetLabelName_4293 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 173)) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_JSR::init_21__21_ (var_instructionLocation_4224, var_targetLabelName_4293, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 178)) ;
    GGS_lstring var_foreverLabel_4446 ;
    switch (select_baseline_5F_syntax_9 (inCompiler)) {
    case 1: {
      var_foreverLabel_4446 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 181)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_foreverLabel_4446 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 183)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_foreverLabel_4446, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 184)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_4603 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 186)) ;
    GGS_baseline_5F_instructionList var_instructionList_4678 ;
    nt_baseline_5F_instruction_5F_list_ (var_instructionList_4678, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 188)) ;
    GGS_lstring var_endForeverLabel_4736 ;
    switch (select_baseline_5F_syntax_10 (inCompiler)) {
    case 1: {
      var_endForeverLabel_4736 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 191)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endForeverLabel_4736 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 193)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::notEqual, var_foreverLabel_4446.readProperty_string ().objectCompare (var_endForeverLabel_4736.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, var_foreverLabel_4446.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = var_foreverLabel_4446.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_endForeverLabel_4736.readProperty_location (), GGS_string ("'end' label does not match 'fovever' label, it should be ").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 196)), fixItArray7  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 196)) ;
      }
    }
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_FOREVER::init_21__21__21_ (var_instructionLocation_4603, var_instructionList_4678, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 202)), inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 205)) ;
    GGS_location var_instructionLocation_5254 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 206)) ;
    GGS_registerExpression var_registerExpression_5319 ;
    GGS_bitNumberExpression var_bitNumberExpression_5367 ;
    GGS_bool var_skipIfSet_5401 ;
    switch (select_baseline_5F_syntax_11 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 211)) ;
      nt_register_5F_parsing_ (var_registerExpression_5319, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 213)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_5367, inCompiler) ;
      var_skipIfSet_5401 = GGS_bool (true) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_ (var_registerExpression_5319, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 218)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_5367, inCompiler) ;
      var_skipIfSet_5401 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 222)) ;
    GGS_baseline_5F_instruction var_instruction_5760 ;
    nt_baseline_5F_simple_5F_instruction_ (var_instruction_5760, inCompiler) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_IF_5F_BitTest::init_21__21__21__21__21_ (var_instructionLocation_5254, var_instruction_5760, var_skipIfSet_5401, var_registerExpression_5319, var_bitNumberExpression_5367, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 231)) ;
    GGS_location var_instructionLocation_5978 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 232)) ;
    GGS_bool var_increment_6029 ;
    switch (select_baseline_5F_syntax_12 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 235)) ;
      var_increment_6029 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 237)) ;
      var_increment_6029 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_registerExpression var_registerExpression_6159 ;
    nt_register_5F_parsing_ (var_registerExpression_6159, inCompiler) ;
    GGS_bool var_w_5F_isTarget_6193 ;
    switch (select_baseline_5F_syntax_13 (inCompiler)) {
    case 1: {
      var_w_5F_isTarget_6193 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 244)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 244)) ;
      var_w_5F_isTarget_6193 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_conditionString_6323 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 246)) ;
    GGS_string var_condition_6356 = var_conditionString_6323.readProperty_string ().getter_uppercased (SOURCE_FILE ("baseline_syntax.galgas3", 247)) ;
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = GGS_bool (ComparisonKind::notEqual, var_condition_6356.objectCompare (GGS_string ("NZ"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_conditionString_6323.readProperty_location (), GGS_string ("invalid '").add_operation (var_condition_6356, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 249)).add_operation (GGS_string ("' condition; it should be 'nz'"), inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 249)), fixItArray9  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 249)) ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 251)) ;
    GGS_baseline_5F_instruction var_instruction_6577 ;
    nt_baseline_5F_simple_5F_instruction_ (var_instruction_6577, inCompiler) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_IF_5F_IncDec::init_21__21__21__21__21_ (var_instructionLocation_5978, var_instruction_6577, var_increment_6029, var_registerExpression_6159, var_w_5F_isTarget_6193, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 261)) ;
    GGS_lstring var_ifLabel_6789 ;
    switch (select_baseline_5F_syntax_14 (inCompiler)) {
    case 1: {
      var_ifLabel_6789 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 264)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_ifLabel_6789 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 266)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_ifLabel_6789, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 267)) ;
      }
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_structured_5F_if_5F_instruction_ (var_ifLabel_6789, outArgument_outInstruction, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 270)) ;
    GGS_lstring var_endIfLabel_7028 ;
    switch (select_baseline_5F_syntax_15 (inCompiler)) {
    case 1: {
      var_endIfLabel_7028 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 273)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endIfLabel_7028 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 275)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = GGS_bool (ComparisonKind::notEqual, var_ifLabel_6789.readProperty_string ().objectCompare (var_endIfLabel_7028.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GGS_string temp_11 ;
        const GalgasBool test_12 = GGS_bool (ComparisonKind::notEqual, var_ifLabel_6789.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          temp_11 = var_ifLabel_6789.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_12) {
          temp_11 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (var_endIfLabel_7028.readProperty_location (), GGS_string ("'end' label does not match 'if' label, it should be ").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 278)), fixItArray13  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 278)) ;
      }
    }
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 282)) ;
    GGS_lstring var_doLabel_7369 ;
    switch (select_baseline_5F_syntax_16 (inCompiler)) {
    case 1: {
      var_doLabel_7369 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 285)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_doLabel_7369 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 287)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_7369, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 288)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_7506 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 290)) ;
    GGS_baseline_5F_instructionList var_repeatedInstructionList_7581 ;
    nt_baseline_5F_instruction_5F_list_ (var_repeatedInstructionList_7581, ioArgument_ioLabelMap, inCompiler) ;
    GGS_location var_endOfRepeatedInstructionList_7628 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 292)) ;
    GGS_baseline_5F_partList var_whilePartList_7682 = GGS_baseline_5F_partList::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_14 = true ;
    while (repeatFlag_14) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 295)) ;
      GGS_lstring var_whileLabel_7764 ;
      switch (select_baseline_5F_syntax_18 (inCompiler)) {
      case 1: {
        var_whileLabel_7764 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 298)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        var_whileLabel_7764 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 300)) ;
      } break ;
      default:
        break ;
      }
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::notEqual, var_doLabel_7369.readProperty_string ().objectCompare (var_whileLabel_7764.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          GGS_string temp_16 ;
          const GalgasBool test_17 = GGS_bool (ComparisonKind::notEqual, var_doLabel_7369.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            temp_16 = var_doLabel_7369.readProperty_string () ;
          }else if (GalgasBool::boolFalse == test_17) {
            temp_16 = GGS_string ("empty") ;
          }
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (var_whileLabel_7764.readProperty_location (), GGS_string ("'while' label does not match 'do' label, it should be ").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 303)), fixItArray18  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 303)) ;
        }
      }
      GGS_baseline_5F_conditionExpression var_whileCondition_8138 ;
      nt_baseline_5F_condition_5F_expression_ (var_whileCondition_8138, inCompiler) ;
      GGS_baseline_5F_instructionList var_instructionList_8194 ;
      nt_baseline_5F_instruction_5F_list_ (var_instructionList_8194, ioArgument_ioLabelMap, inCompiler) ;
      var_whilePartList_7682.addAssignOperation (var_whileCondition_8138, var_instructionList_8194, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 308))  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 308)) ;
      if (select_baseline_5F_syntax_17 (inCompiler) == 2) {
      }else{
        repeatFlag_14 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 311)) ;
    GGS_lstring var_endDoLabel_8342 ;
    switch (select_baseline_5F_syntax_19 (inCompiler)) {
    case 1: {
      var_endDoLabel_8342 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 314)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endDoLabel_8342 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 316)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_19 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_19) {
      test_19 = GGS_bool (ComparisonKind::notEqual, var_doLabel_7369.readProperty_string ().objectCompare (var_endDoLabel_8342.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        GGS_string temp_20 ;
        const GalgasBool test_21 = GGS_bool (ComparisonKind::notEqual, var_doLabel_7369.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_21) {
          temp_20 = var_doLabel_7369.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_21) {
          temp_20 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (var_endDoLabel_8342.readProperty_location (), GGS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_20, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 319)), fixItArray22  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 319)) ;
      }
    }
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_do_5F_while::init_21__21__21__21_ (var_instructionLocation_7506, var_repeatedInstructionList_7581, var_endOfRepeatedInstructionList_7628, var_whilePartList_7682, inCompiler COMMA_HERE) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 328)) ;
    GGS_location var_instructionLocation_8856 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 329)) ;
    GGS_luint var_occurrenceFactor_8920 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 330)) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_MNOP::init_21__21_ (var_instructionLocation_8856, var_occurrenceFactor_8920, inCompiler COMMA_HERE) ;
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
  GGS_location var_instructionLocation_9249 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 342)) ;
  GGS_baseline_5F_conditionExpression var_structured_5F_if_5F_condition_9326 ;
  nt_baseline_5F_condition_5F_expression_ (var_structured_5F_if_5F_condition_9326, inCompiler) ;
  GGS_baseline_5F_instructionList var_thenInstructionList_9387 ;
  nt_baseline_5F_instruction_5F_list_ (var_thenInstructionList_9387, ioArgument_ioLabelMap, inCompiler) ;
  GGS_baseline_5F_instructionList var_elseInstructionList_9454 ;
  switch (select_baseline_5F_syntax_20 (inCompiler)) {
  case 1: {
    var_elseInstructionList_9454 = GGS_baseline_5F_instructionList::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 349)) ;
    GGS_lstring var_elsifIfLabel_9572 ;
    switch (select_baseline_5F_syntax_21 (inCompiler)) {
    case 1: {
      var_elsifIfLabel_9572 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 352)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_elsifIfLabel_9572 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 354)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elsifIfLabel_9572.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = constinArgument_ifLabel.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_elsifIfLabel_9572.readProperty_location (), GGS_string ("'elsif' label does not match 'if' label, it should be ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 357)), fixItArray3  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 357)) ;
      }
    }
    GGS_baseline_5F_instruction var_elsifPartInstruction_9951 ;
    nt_baseline_5F_structured_5F_if_5F_instruction_ (constinArgument_ifLabel, var_elsifPartInstruction_9951, ioArgument_ioLabelMap, inCompiler) ;
    var_elseInstructionList_9454 = GGS_baseline_5F_instructionList::init (inCompiler COMMA_HERE) ;
    var_elseInstructionList_9454.addAssignOperation (var_elsifPartInstruction_9951  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 362)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 364)) ;
    GGS_lstring var_elseLabel_10124 ;
    switch (select_baseline_5F_syntax_22 (inCompiler)) {
    case 1: {
      var_elseLabel_10124 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 367)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_elseLabel_10124 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 369)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elseLabel_10124.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_ifLabel.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_elseLabel_10124.readProperty_location (), GGS_string ("'else' label does not match 'if' label, it should be ").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 372)), fixItArray7  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 372)) ;
      }
    }
    nt_baseline_5F_instruction_5F_list_ (var_elseInstructionList_9454, ioArgument_ioLabelMap, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfElsePartLocation_10521 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 377)) ;
  outArgument_outInstruction = GGS_baseline_5F_instruction_5F_structured_5F_if::init_21__21__21__21__21_ (var_instructionLocation_9249, var_structured_5F_if_5F_condition_9326, var_thenInstructionList_9387, var_elseInstructionList_9454, var_endOfElsePartLocation_10521, inCompiler COMMA_HERE) ;
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
    GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code var_baseCode_10939 ;
    switch (select_baseline_5F_syntax_24 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 392)) ;
      var_baseCode_10939 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_ADDWF (SOURCE_FILE ("baseline_syntax.galgas3", 393)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 395)) ;
      var_baseCode_10939 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_ANDWF (SOURCE_FILE ("baseline_syntax.galgas3", 396)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 398)) ;
      var_baseCode_10939 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_COMF (SOURCE_FILE ("baseline_syntax.galgas3", 399)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 401)) ;
      var_baseCode_10939 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_DECF (SOURCE_FILE ("baseline_syntax.galgas3", 402)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 404)) ;
      var_baseCode_10939 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_INCF (SOURCE_FILE ("baseline_syntax.galgas3", 405)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 407)) ;
      var_baseCode_10939 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_IORWF (SOURCE_FILE ("baseline_syntax.galgas3", 408)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 410)) ;
      var_baseCode_10939 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("baseline_syntax.galgas3", 411)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 413)) ;
      var_baseCode_10939 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_RLF (SOURCE_FILE ("baseline_syntax.galgas3", 414)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 416)) ;
      var_baseCode_10939 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_RRF (SOURCE_FILE ("baseline_syntax.galgas3", 417)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 419)) ;
      var_baseCode_10939 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_SUBWF (SOURCE_FILE ("baseline_syntax.galgas3", 420)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 422)) ;
      var_baseCode_10939 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("baseline_syntax.galgas3", 423)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 425)) ;
      var_baseCode_10939 = GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_XORWF (SOURCE_FILE ("baseline_syntax.galgas3", 426)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_11492 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 428)) ;
    GGS_registerExpression var_registerExpression_11558 ;
    nt_register_5F_parsing_ (var_registerExpression_11558, inCompiler) ;
    GGS_bool var_W_5F_isDestination_11609 ;
    nt_optional_5F_w_5F_as_5F_dest_ (var_W_5F_isDestination_11609, inCompiler) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_FD::init_21__21__21__21_ (var_instructionLocation_11492, var_baseCode_10939, var_registerExpression_11558, var_W_5F_isDestination_11609, inCompiler COMMA_HERE) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_bool test_1 = GGS_bool (ComparisonKind::equal, var_baseCode_10939.objectCompare (GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("baseline_syntax.galgas3", 438)))) ;
      if (GalgasBool::boolTrue == test_1.boolEnum ()) {
        test_1 = var_W_5F_isDestination_11609.operator_not (SOURCE_FILE ("baseline_syntax.galgas3", 438)) ;
      }
      test_0 = test_1.boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticWarning (var_instructionLocation_11492, GGS_string ("This instruction does not move data, it only sets flags. Use 'movf *, reg' instead of 'movf reg' to suppress this warning"), fixItArray2  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 439)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 443)) ;
    GGS_location var_instructionLocation_12114 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 444)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 445)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 446)) ;
    GGS_registerExpression var_registerName_12187 ;
    nt_register_5F_parsing_ (var_registerName_12187, inCompiler) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_FD::init_21__21__21__21_ (var_instructionLocation_12114, GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("baseline_syntax.galgas3", 450)), var_registerName_12187, GGS_bool (false), inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GGS_baseline_5F_F_5F_instruction_5F_base_5F_code var_FAinstruction_12399 ;
    switch (select_baseline_5F_syntax_25 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 457)) ;
      var_FAinstruction_12399 = GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("baseline_syntax.galgas3", 458)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 460)) ;
      var_FAinstruction_12399 = GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("baseline_syntax.galgas3", 461)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_12609 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 463)) ;
    GGS_registerExpression var_registerExpression_12675 ;
    nt_register_5F_parsing_ (var_registerExpression_12675, inCompiler) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_F::init_21__21__21_ (var_instructionLocation_12609, var_FAinstruction_12399, var_registerExpression_12675, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GGS_baseline_5F_bit_5F_oriented_5F_op var_bitOrientedOp_12856 ;
    switch (select_baseline_5F_syntax_26 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 472)) ;
      var_bitOrientedOp_12856 = GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("baseline_syntax.galgas3", 472)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 474)) ;
      var_bitOrientedOp_12856 = GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("baseline_syntax.galgas3", 474)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_13036 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 476)) ;
    GGS_registerExpression var_registerExpression_13102 ;
    nt_register_5F_parsing_ (var_registerExpression_13102, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 478)) ;
    GGS_bitNumberExpression var_bitNumberExpression_13161 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_13161, inCompiler) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_FB::init_21__21__21__21_ (var_instructionLocation_13036, var_bitOrientedOp_12856, var_registerExpression_13102, var_bitNumberExpression_13161, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 486)) ;
    GGS_location var_instructionLocation_13366 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 487)) ;
    GGS_lstring var_targetLabelName_13435 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 488)) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_GOTO::init_21__21_ (var_instructionLocation_13366, var_targetLabelName_13435, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 493)) ;
    GGS_location var_instructionLocation_13610 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 494)) ;
    GGS_lstring var_targetLabelName_13679 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 495)) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_CALL::init_21__21_ (var_instructionLocation_13610, var_targetLabelName_13679, inCompiler COMMA_HERE) ;
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
    GGS_lstring var_operand_14492 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 516)) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_TRIS::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 517)), var_operand_14492, inCompiler COMMA_HERE) ;
  } break ;
  case 13: {
    GGS_baseline_5F_literal_5F_instruction_5F_opcode var_literalInstruction_14627 ;
    switch (select_baseline_5F_syntax_27 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 521)) ;
      var_literalInstruction_14627 = GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_ANDLW (SOURCE_FILE ("baseline_syntax.galgas3", 521)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 523)) ;
      var_literalInstruction_14627 = GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_IORLW (SOURCE_FILE ("baseline_syntax.galgas3", 523)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 525)) ;
      var_literalInstruction_14627 = GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("baseline_syntax.galgas3", 525)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 527)) ;
      var_literalInstruction_14627 = GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_XORLW (SOURCE_FILE ("baseline_syntax.galgas3", 527)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_15028 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 529)) ;
    GGS_immediatExpression var_expression_15098 ;
    nt_immediate_5F_expression_ (var_expression_15098, inCompiler) ;
    outArgument_outInstruction = GGS_baseline_5F_instruction_5F_literalOperation::init_21__21__21_ (var_instructionLocation_15028, var_literalInstruction_14627, var_expression_15098, inCompiler COMMA_HERE) ;
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
  GGS_baseline_5F_conditionExpression var_condition_15436 ;
  nt_baseline_5F_condition_5F_factor_ (var_condition_15436, inCompiler) ;
  outArgument_outCondition = GGS_baseline_5F_negateCondition::init_21_ (var_condition_15436, inCompiler COMMA_HERE) ;
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
    GGS_bool var_isIncrement_15866 ;
    switch (select_baseline_5F_syntax_29 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 561)) ;
      var_isIncrement_15866 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 563)) ;
      var_isIncrement_15866 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GGS_registerExpression var_registerExpression_16002 ;
    nt_register_5F_parsing_ (var_registerExpression_16002, inCompiler) ;
    GGS_bool var_W_5F_isDestination_16036 ;
    switch (select_baseline_5F_syntax_30 (inCompiler)) {
    case 1: {
      var_W_5F_isDestination_16036 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 570)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 570)) ;
      var_W_5F_isDestination_16036 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_conditionString_16181 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 572)) ;
    GGS_string var_condition_16214 = var_conditionString_16181.readProperty_string ().getter_uppercased (SOURCE_FILE ("baseline_syntax.galgas3", 573)) ;
    GGS_bool var_branchIfZero_16274 ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_condition_16214.objectCompare (GGS_string ("Z"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_branchIfZero_16274 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, var_condition_16214.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          var_branchIfZero_16274 = GGS_bool (false) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_conditionString_16181.readProperty_location (), GGS_string ("invalid '").add_operation (var_conditionString_16181.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 580)).add_operation (GGS_string ("' condition; valid ones are: 'z' and 'nz'"), inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 580)), fixItArray2  COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 580)) ;
        var_branchIfZero_16274.drop () ; // Release error dropped variable
      }
    }
    outArgument_outCondition = GGS_baseline_5F_incDecRegisterInCondition::init_21__21__21__21_ (var_registerExpression_16002, var_isIncrement_15866, var_W_5F_isDestination_16036, var_branchIfZero_16274, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    GGS_registerExpression var_registerExpression_16737 ;
    nt_register_5F_parsing_ (var_registerExpression_16737, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("baseline_syntax.galgas3", 591)) ;
    GGS_bitNumberExpression var_bitNumberExpression_16796 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_16796, inCompiler) ;
    outArgument_outCondition = GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::init_21__21_ (var_registerExpression_16737, var_bitNumberExpression_16796, inCompiler COMMA_HERE) ;
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
      GGS_baseline_5F_conditionExpression var_c_17208 ;
      nt_baseline_5F_condition_5F_term_ (var_c_17208, inCompiler) ;
      GGS_baseline_5F_conditionExpression var_rc_17249 = GGS_baseline_5F_negateCondition::init_21_ (var_c_17208, inCompiler COMMA_HERE) ;
      GGS_baseline_5F_conditionExpression var_lc_17324 = GGS_baseline_5F_negateCondition::init_21_ (outArgument_outCondition, inCompiler COMMA_HERE) ;
      outArgument_outCondition = GGS_baseline_5F_negateCondition::init_21_ (GGS_baseline_5F_andCondition::init_21__21_ (var_lc_17324, var_rc_17249, inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
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
      GGS_baseline_5F_conditionExpression var_c_17719 ;
      nt_baseline_5F_condition_5F_factor_ (var_c_17719, inCompiler) ;
      outArgument_outCondition = GGS_baseline_5F_andCondition::init_21__21_ (outArgument_outCondition, var_c_17719, inCompiler COMMA_HERE) ;
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

