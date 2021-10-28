#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationInRamList_2D_element::GALGAS_declarationInRamList_2D_element (void) :
mProperty_mDeclarationInRAM () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationInRamList_2D_element::~ GALGAS_declarationInRamList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationInRamList_2D_element::GALGAS_declarationInRamList_2D_element (const GALGAS_declarationInRam & inOperand0) :
mProperty_mDeclarationInRAM (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationInRamList_2D_element GALGAS_declarationInRamList_2D_element::constructor_new (const GALGAS_declarationInRam & inOperand0 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declarationInRamList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_declarationInRamList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_declarationInRamList_2D_element::objectCompare (const GALGAS_declarationInRamList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDeclarationInRAM.objectCompare (inOperand.mProperty_mDeclarationInRAM) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_declarationInRamList_2D_element::isValid (void) const {
  return mProperty_mDeclarationInRAM.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationInRamList_2D_element::drop (void) {
  mProperty_mDeclarationInRAM.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationInRamList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @declarationInRamList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDeclarationInRAM.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationInRam GALGAS_declarationInRamList_2D_element::getter_mDeclarationInRAM (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDeclarationInRAM ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@declarationInRamList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declarationInRamList_2D_element ("declarationInRamList-element",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_declarationInRamList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationInRamList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_declarationInRamList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationInRamList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationInRamList_2D_element GALGAS_declarationInRamList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_declarationInRamList_2D_element result ;
  const GALGAS_declarationInRamList_2D_element * p = (const GALGAS_declarationInRamList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declarationInRamList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationInRamList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configDefinitionList_2D_element::GALGAS_configDefinitionList_2D_element (void) :
mProperty_mDefinitionLocation (),
mProperty_mSettingList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configDefinitionList_2D_element::~ GALGAS_configDefinitionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configDefinitionList_2D_element::GALGAS_configDefinitionList_2D_element (const GALGAS_location & inOperand0,
                                                                                const GALGAS_configSettingList & inOperand1) :
mProperty_mDefinitionLocation (inOperand0),
mProperty_mSettingList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configDefinitionList_2D_element GALGAS_configDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_configDefinitionList_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                                 GALGAS_configSettingList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configDefinitionList_2D_element GALGAS_configDefinitionList_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                                                const GALGAS_configSettingList & inOperand1 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_configDefinitionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_configDefinitionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_configDefinitionList_2D_element::isValid (void) const {
  return mProperty_mDefinitionLocation.isValid () && mProperty_mSettingList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configDefinitionList_2D_element::drop (void) {
  mProperty_mDefinitionLocation.drop () ;
  mProperty_mSettingList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configDefinitionList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @configDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDefinitionLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSettingList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_configDefinitionList_2D_element::getter_mDefinitionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefinitionLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configSettingList GALGAS_configDefinitionList_2D_element::getter_mSettingList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSettingList ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@configDefinitionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configDefinitionList_2D_element ("configDefinitionList-element",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_configDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configDefinitionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_configDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configDefinitionList_2D_element GALGAS_configDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_configDefinitionList_2D_element result ;
  const GALGAS_configDefinitionList_2D_element * p = (const GALGAS_configDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_configDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList_2D_element::GALGAS_immediatExpressionList_2D_element (void) :
mProperty_mExpression (),
mProperty_mErrorLocation () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList_2D_element::~ GALGAS_immediatExpressionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList_2D_element::GALGAS_immediatExpressionList_2D_element (const GALGAS_immediatExpression & inOperand0,
                                                                                    const GALGAS_location & inOperand1) :
mProperty_mExpression (inOperand0),
mProperty_mErrorLocation (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList_2D_element GALGAS_immediatExpressionList_2D_element::constructor_new (const GALGAS_immediatExpression & inOperand0,
                                                                                                    const GALGAS_location & inOperand1 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_immediatExpressionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_immediatExpressionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_immediatExpressionList_2D_element::isValid (void) const {
  return mProperty_mExpression.isValid () && mProperty_mErrorLocation.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_immediatExpressionList_2D_element::drop (void) {
  mProperty_mExpression.drop () ;
  mProperty_mErrorLocation.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_immediatExpressionList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @immediatExpressionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatExpressionList_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_immediatExpressionList_2D_element::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mErrorLocation ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@immediatExpressionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatExpressionList_2D_element ("immediatExpressionList-element",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatExpressionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatExpressionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatExpressionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatExpressionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList_2D_element GALGAS_immediatExpressionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_immediatExpressionList_2D_element result ;
  const GALGAS_immediatExpressionList_2D_element * p = (const GALGAS_immediatExpressionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_immediatExpressionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatExpressionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList_2D_element::GALGAS_baseline_5F_instructionList_2D_element (void) :
mProperty_mInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList_2D_element::~ GALGAS_baseline_5F_instructionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList_2D_element::GALGAS_baseline_5F_instructionList_2D_element (const GALGAS_baseline_5F_instruction & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList_2D_element GALGAS_baseline_5F_instructionList_2D_element::constructor_new (const GALGAS_baseline_5F_instruction & inOperand0 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instructionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_baseline_5F_instructionList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_instructionList_2D_element::objectCompare (const GALGAS_baseline_5F_instructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_instructionList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instructionList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instructionList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @baseline_instructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction GALGAS_baseline_5F_instructionList_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_instructionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instructionList_2D_element ("baseline_instructionList-element",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instructionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instructionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList_2D_element GALGAS_baseline_5F_instructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instructionList_2D_element result ;
  const GALGAS_baseline_5F_instructionList_2D_element * p = (const GALGAS_baseline_5F_instructionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_partList_2D_element::GALGAS_baseline_5F_partList_2D_element (void) :
mProperty_mCondition (),
mProperty_mInstructionList (),
mProperty_mEndOfPartLocation () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_partList_2D_element::~ GALGAS_baseline_5F_partList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_partList_2D_element::GALGAS_baseline_5F_partList_2D_element (const GALGAS_baseline_5F_conditionExpression & inOperand0,
                                                                                const GALGAS_baseline_5F_instructionList & inOperand1,
                                                                                const GALGAS_location & inOperand2) :
mProperty_mCondition (inOperand0),
mProperty_mInstructionList (inOperand1),
mProperty_mEndOfPartLocation (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_partList_2D_element GALGAS_baseline_5F_partList_2D_element::constructor_new (const GALGAS_baseline_5F_conditionExpression & inOperand0,
                                                                                                const GALGAS_baseline_5F_instructionList & inOperand1,
                                                                                                const GALGAS_location & inOperand2 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_partList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_baseline_5F_partList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_partList_2D_element::isValid (void) const {
  return mProperty_mCondition.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfPartLocation.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_partList_2D_element::drop (void) {
  mProperty_mCondition.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfPartLocation.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_partList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @baseline_partList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mCondition.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfPartLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_conditionExpression GALGAS_baseline_5F_partList_2D_element::getter_mCondition (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCondition ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_partList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_baseline_5F_partList_2D_element::getter_mEndOfPartLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfPartLocation ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_partList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_partList_2D_element ("baseline_partList-element",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_partList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_partList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_partList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_partList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_partList_2D_element GALGAS_baseline_5F_partList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_partList_2D_element result ;
  const GALGAS_baseline_5F_partList_2D_element * p = (const GALGAS_baseline_5F_partList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_partList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_partList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element (void) :
mProperty_mInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::~ GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element (const GALGAS_baseline_5F_intermediate_5F_instruction & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::constructor_new (const GALGAS_baseline_5F_intermediate_5F_instruction & inOperand0 
                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "<struct @baseline_intermediate_instructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instruction GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_intermediate_instructionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element ("baseline_intermediate_instructionList-element",
                                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element result ;
  const GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element * p = (const GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::GALGAS_baseline_5F_assembly_5F_instructionList_2D_element (void) :
mProperty_mInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::~ GALGAS_baseline_5F_assembly_5F_instructionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::GALGAS_baseline_5F_assembly_5F_instructionList_2D_element (const GALGAS_baseline_5F_assembly_5F_instruction & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instructionList_2D_element GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::constructor_new (const GALGAS_baseline_5F_assembly_5F_instruction & inOperand0 
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instructionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_baseline_5F_assembly_5F_instructionList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::objectCompare (const GALGAS_baseline_5F_assembly_5F_instructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "<struct @baseline_assembly_instructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_assembly_instructionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instructionList_2D_element ("baseline_assembly_instructionList-element",
                                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instructionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instructionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instructionList_2D_element GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instructionList_2D_element result ;
  const GALGAS_baseline_5F_assembly_5F_instructionList_2D_element * p = (const GALGAS_baseline_5F_assembly_5F_instructionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList_2D_element::GALGAS_midrange_5F_instructionList_2D_element (void) :
mProperty_mInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList_2D_element::~ GALGAS_midrange_5F_instructionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList_2D_element::GALGAS_midrange_5F_instructionList_2D_element (const GALGAS_midrange_5F_instruction & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList_2D_element GALGAS_midrange_5F_instructionList_2D_element::constructor_new (const GALGAS_midrange_5F_instruction & inOperand0 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instructionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_midrange_5F_instructionList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_midrange_5F_instructionList_2D_element::objectCompare (const GALGAS_midrange_5F_instructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_instructionList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instructionList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instructionList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @midrange_instructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction GALGAS_midrange_5F_instructionList_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_instructionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instructionList_2D_element ("midrange_instructionList-element",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instructionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instructionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList_2D_element GALGAS_midrange_5F_instructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instructionList_2D_element result ;
  const GALGAS_midrange_5F_instructionList_2D_element * p = (const GALGAS_midrange_5F_instructionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_partList_2D_element::GALGAS_midrange_5F_partList_2D_element (void) :
mProperty_mCondition (),
mProperty_mInstructionList (),
mProperty_mEndOfPartLocation () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_partList_2D_element::~ GALGAS_midrange_5F_partList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_partList_2D_element::GALGAS_midrange_5F_partList_2D_element (const GALGAS_midrange_5F_conditionExpression & inOperand0,
                                                                                const GALGAS_midrange_5F_instructionList & inOperand1,
                                                                                const GALGAS_location & inOperand2) :
mProperty_mCondition (inOperand0),
mProperty_mInstructionList (inOperand1),
mProperty_mEndOfPartLocation (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_partList_2D_element GALGAS_midrange_5F_partList_2D_element::constructor_new (const GALGAS_midrange_5F_conditionExpression & inOperand0,
                                                                                                const GALGAS_midrange_5F_instructionList & inOperand1,
                                                                                                const GALGAS_location & inOperand2 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_partList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_midrange_5F_partList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_partList_2D_element::isValid (void) const {
  return mProperty_mCondition.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfPartLocation.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_partList_2D_element::drop (void) {
  mProperty_mCondition.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfPartLocation.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_partList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @midrange_partList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mCondition.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfPartLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_conditionExpression GALGAS_midrange_5F_partList_2D_element::getter_mCondition (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCondition ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_partList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_midrange_5F_partList_2D_element::getter_mEndOfPartLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfPartLocation ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_partList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_partList_2D_element ("midrange_partList-element",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_partList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_partList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_partList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_partList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_partList_2D_element GALGAS_midrange_5F_partList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_partList_2D_element result ;
  const GALGAS_midrange_5F_partList_2D_element * p = (const GALGAS_midrange_5F_partList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_partList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_partList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element (void) :
mProperty_mInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::~ GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element (const GALGAS_midrange_5F_intermediate_5F_instruction & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::constructor_new (const GALGAS_midrange_5F_intermediate_5F_instruction & inOperand0 
                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "<struct @midrange_intermediate_instructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_intermediate_instructionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element ("midrange_intermediate_instructionList-element",
                                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element result ;
  const GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element * p = (const GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList_2D_element::GALGAS_pic_31__38_InstructionList_2D_element (void) :
mProperty_mInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList_2D_element::~ GALGAS_pic_31__38_InstructionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList_2D_element::GALGAS_pic_31__38_InstructionList_2D_element (const GALGAS_pic_31__38_PiccoloInstruction & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList_2D_element GALGAS_pic_31__38_InstructionList_2D_element::constructor_new (const GALGAS_pic_31__38_PiccoloInstruction & inOperand0 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_pic_31__38_InstructionList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_InstructionList_2D_element::objectCompare (const GALGAS_pic_31__38_InstructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_InstructionList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InstructionList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InstructionList_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @pic18InstructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_PiccoloInstruction GALGAS_pic_31__38_InstructionList_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@pic18InstructionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_InstructionList_2D_element ("pic18InstructionList-element",
                                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_InstructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_InstructionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_InstructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_InstructionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList_2D_element GALGAS_pic_31__38_InstructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionList_2D_element result ;
  const GALGAS_pic_31__38_InstructionList_2D_element * p = (const GALGAS_pic_31__38_InstructionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_InstructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18InstructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList_2D_element::GALGAS_pic_31__38_DoWhilePartList_2D_element (void) :
mProperty_mCondition (),
mProperty_mInstructionList (),
mProperty_mEndOfPartLocation () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList_2D_element::~ GALGAS_pic_31__38_DoWhilePartList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList_2D_element::GALGAS_pic_31__38_DoWhilePartList_2D_element (const GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                                                            const GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                            const GALGAS_location & inOperand2) :
mProperty_mCondition (inOperand0),
mProperty_mInstructionList (inOperand1),
mProperty_mEndOfPartLocation (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList_2D_element GALGAS_pic_31__38_DoWhilePartList_2D_element::constructor_new (const GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                                                                            const GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                                            const GALGAS_location & inOperand2 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_DoWhilePartList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_pic_31__38_DoWhilePartList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_DoWhilePartList_2D_element::isValid (void) const {
  return mProperty_mCondition.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfPartLocation.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_DoWhilePartList_2D_element::drop (void) {
  mProperty_mCondition.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfPartLocation.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_DoWhilePartList_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @pic18DoWhilePartList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mCondition.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfPartLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_ConditionExpression GALGAS_pic_31__38_DoWhilePartList_2D_element::getter_mCondition (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCondition ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_DoWhilePartList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_DoWhilePartList_2D_element::getter_mEndOfPartLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfPartLocation ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@pic18DoWhilePartList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList_2D_element ("pic18DoWhilePartList-element",
                                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_DoWhilePartList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_DoWhilePartList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_DoWhilePartList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_DoWhilePartList_2D_element GALGAS_pic_31__38_DoWhilePartList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_DoWhilePartList_2D_element result ;
  const GALGAS_pic_31__38_DoWhilePartList_2D_element * p = (const GALGAS_pic_31__38_DoWhilePartList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_DoWhilePartList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18DoWhilePartList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkpicList_2D_element::GALGAS_checkpicList_2D_element (void) :
mProperty_mErrorLocation (),
mProperty_mValueList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkpicList_2D_element::~ GALGAS_checkpicList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkpicList_2D_element::GALGAS_checkpicList_2D_element (const GALGAS_location & inOperand0,
                                                                const GALGAS_lstringlist & inOperand1) :
mProperty_mErrorLocation (inOperand0),
mProperty_mValueList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkpicList_2D_element GALGAS_checkpicList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_checkpicList_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                         GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkpicList_2D_element GALGAS_checkpicList_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                                const GALGAS_lstringlist & inOperand1 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_checkpicList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_checkpicList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_checkpicList_2D_element::isValid (void) const {
  return mProperty_mErrorLocation.isValid () && mProperty_mValueList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkpicList_2D_element::drop (void) {
  mProperty_mErrorLocation.drop () ;
  mProperty_mValueList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkpicList_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @checkpicList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mValueList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_checkpicList_2D_element::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mErrorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_checkpicList_2D_element::getter_mValueList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValueList ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@checkpicList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_checkpicList_2D_element ("checkpicList-element",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_checkpicList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkpicList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_checkpicList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_checkpicList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkpicList_2D_element GALGAS_checkpicList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_checkpicList_2D_element result ;
  const GALGAS_checkpicList_2D_element * p = (const GALGAS_checkpicList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_checkpicList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkpicList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList_2D_element::GALGAS_pic_31__38_CaseExpressionList_2D_element (void) :
mProperty_mCaseItem () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList_2D_element::~ GALGAS_pic_31__38_CaseExpressionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList_2D_element::GALGAS_pic_31__38_CaseExpressionList_2D_element (const GALGAS_pic_31__38_AbstractCaseItem & inOperand0) :
mProperty_mCaseItem (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList_2D_element GALGAS_pic_31__38_CaseExpressionList_2D_element::constructor_new (const GALGAS_pic_31__38_AbstractCaseItem & inOperand0 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_CaseExpressionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_pic_31__38_CaseExpressionList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_CaseExpressionList_2D_element::objectCompare (const GALGAS_pic_31__38_CaseExpressionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mCaseItem.objectCompare (inOperand.mProperty_mCaseItem) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_CaseExpressionList_2D_element::isValid (void) const {
  return mProperty_mCaseItem.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_CaseExpressionList_2D_element::drop (void) {
  mProperty_mCaseItem.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_CaseExpressionList_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @pic18CaseExpressionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mCaseItem.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AbstractCaseItem GALGAS_pic_31__38_CaseExpressionList_2D_element::getter_mCaseItem (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCaseItem ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@pic18CaseExpressionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList_2D_element ("pic18CaseExpressionList-element",
                                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_CaseExpressionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_CaseExpressionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_CaseExpressionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList_2D_element GALGAS_pic_31__38_CaseExpressionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_CaseExpressionList_2D_element result ;
  const GALGAS_pic_31__38_CaseExpressionList_2D_element * p = (const GALGAS_pic_31__38_CaseExpressionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_CaseExpressionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18CaseExpressionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element (void) :
mProperty_mStartOfCase (),
mProperty_mCaseExpressionList (),
mProperty_mInstructionList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::~ GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element (const GALGAS_location & inOperand0,
                                                                                                                const GALGAS_pic_31__38_CaseExpressionList & inOperand1,
                                                                                                                const GALGAS_pic_31__38_InstructionList & inOperand2) :
mProperty_mStartOfCase (inOperand0),
mProperty_mCaseExpressionList (inOperand1),
mProperty_mInstructionList (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                                                 GALGAS_pic_31__38_CaseExpressionList::constructor_emptyList (HERE),
                                                                 GALGAS_pic_31__38_InstructionList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                                                                                const GALGAS_pic_31__38_CaseExpressionList & inOperand1,
                                                                                                                                const GALGAS_pic_31__38_InstructionList & inOperand2 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::isValid (void) const {
  return mProperty_mStartOfCase.isValid () && mProperty_mCaseExpressionList.isValid () && mProperty_mInstructionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::drop (void) {
  mProperty_mStartOfCase.drop () ;
  mProperty_mCaseExpressionList.drop () ;
  mProperty_mInstructionList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @pic18SwitchInstructionCaseList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mStartOfCase.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCaseExpressionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::getter_mStartOfCase (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStartOfCase ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::getter_mCaseExpressionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCaseExpressionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@pic18SwitchInstructionCaseList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element ("pic18SwitchInstructionCaseList-element",
                                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element result ;
  const GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element * p = (const GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18SwitchInstructionCaseList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList_2D_element::GALGAS_ipic_31__38_SequentialInstructionList_2D_element (void) :
mProperty_mInstruction (),
mProperty_mMin (),
mProperty_mMax () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList_2D_element::~ GALGAS_ipic_31__38_SequentialInstructionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList_2D_element::GALGAS_ipic_31__38_SequentialInstructionList_2D_element (const GALGAS_ipic_31__38_SequentialInstruction & inOperand0,
                                                                                                                  const GALGAS_uint & inOperand1,
                                                                                                                  const GALGAS_uint & inOperand2) :
mProperty_mInstruction (inOperand0),
mProperty_mMin (inOperand1),
mProperty_mMax (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList_2D_element GALGAS_ipic_31__38_SequentialInstructionList_2D_element::constructor_new (const GALGAS_ipic_31__38_SequentialInstruction & inOperand0,
                                                                                                                                  const GALGAS_uint & inOperand1,
                                                                                                                                  const GALGAS_uint & inOperand2 
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38_SequentialInstructionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_ipic_31__38_SequentialInstructionList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ipic_31__38_SequentialInstructionList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () && mProperty_mMin.isValid () && mProperty_mMax.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
  mProperty_mMin.drop () ;
  mProperty_mMax.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @ipic18SequentialInstructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMin.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMax.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstruction GALGAS_ipic_31__38_SequentialInstructionList_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38_SequentialInstructionList_2D_element::getter_mMin (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMin ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38_SequentialInstructionList_2D_element::getter_mMax (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMax ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18SequentialInstructionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList_2D_element ("ipic18SequentialInstructionList-element",
                                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_SequentialInstructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_SequentialInstructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_SequentialInstructionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList_2D_element GALGAS_ipic_31__38_SequentialInstructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_SequentialInstructionList_2D_element result ;
  const GALGAS_ipic_31__38_SequentialInstructionList_2D_element * p = (const GALGAS_ipic_31__38_SequentialInstructionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38_SequentialInstructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18SequentialInstructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchOverflowMap_2D_element::GALGAS_branchOverflowMap_2D_element (void) :
mProperty_key (),
mProperty_mList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchOverflowMap_2D_element::~ GALGAS_branchOverflowMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchOverflowMap_2D_element::GALGAS_branchOverflowMap_2D_element (const GALGAS_string & inOperand0,
                                                                          const GALGAS_stringlist & inOperand1) :
mProperty_key (inOperand0),
mProperty_mList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchOverflowMap_2D_element GALGAS_branchOverflowMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_branchOverflowMap_2D_element (GALGAS_string::constructor_default (HERE),
                                              GALGAS_stringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchOverflowMap_2D_element GALGAS_branchOverflowMap_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                          const GALGAS_stringlist & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_branchOverflowMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_branchOverflowMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_branchOverflowMap_2D_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_mList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_branchOverflowMap_2D_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_mList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_branchOverflowMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @branchOverflowMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_key.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_branchOverflowMap_2D_element::getter_key (UNUSED_LOCATION_ARGS) const {
  return mProperty_key ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_branchOverflowMap_2D_element::getter_mList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mList ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@branchOverflowMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_branchOverflowMap_2D_element ("branchOverflowMap-element",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_branchOverflowMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchOverflowMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_branchOverflowMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_branchOverflowMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchOverflowMap_2D_element GALGAS_branchOverflowMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_branchOverflowMap_2D_element result ;
  const GALGAS_branchOverflowMap_2D_element * p = (const GALGAS_branchOverflowMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_branchOverflowMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("branchOverflowMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_codeList_2D_element::GALGAS_codeList_2D_element (void) :
mProperty_mAssemblyCode (),
mProperty_mBinaryCode () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_codeList_2D_element::~ GALGAS_codeList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_codeList_2D_element::GALGAS_codeList_2D_element (const GALGAS_string & inOperand0,
                                                        const GALGAS_uintlist & inOperand1) :
mProperty_mAssemblyCode (inOperand0),
mProperty_mBinaryCode (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_codeList_2D_element GALGAS_codeList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_codeList_2D_element (GALGAS_string::constructor_default (HERE),
                                     GALGAS_uintlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_codeList_2D_element GALGAS_codeList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                        const GALGAS_uintlist & inOperand1 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_codeList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_codeList_2D_element::isValid (void) const {
  return mProperty_mAssemblyCode.isValid () && mProperty_mBinaryCode.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_codeList_2D_element::drop (void) {
  mProperty_mAssemblyCode.drop () ;
  mProperty_mBinaryCode.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_codeList_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @codeList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mAssemblyCode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBinaryCode.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_codeList_2D_element::getter_mAssemblyCode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssemblyCode ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintlist GALGAS_codeList_2D_element::getter_mBinaryCode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBinaryCode ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@codeList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_codeList_2D_element ("codeList-element",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_codeList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_codeList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_codeList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_codeList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_codeList_2D_element GALGAS_codeList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_codeList_2D_element result ;
  const GALGAS_codeList_2D_element * p = (const GALGAS_codeList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_codeList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("codeList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_clusterList_2D_element::GALGAS_clusterList_2D_element (void) :
mProperty_mBlockList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_clusterList_2D_element::~ GALGAS_clusterList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_clusterList_2D_element::GALGAS_clusterList_2D_element (const GALGAS_ipic_31__38_BlockList & inOperand0) :
mProperty_mBlockList (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_clusterList_2D_element GALGAS_clusterList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_clusterList_2D_element (GALGAS_ipic_31__38_BlockList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_clusterList_2D_element GALGAS_clusterList_2D_element::constructor_new (const GALGAS_ipic_31__38_BlockList & inOperand0 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_clusterList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_clusterList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_clusterList_2D_element::objectCompare (const GALGAS_clusterList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mBlockList.objectCompare (inOperand.mProperty_mBlockList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_clusterList_2D_element::isValid (void) const {
  return mProperty_mBlockList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_clusterList_2D_element::drop (void) {
  mProperty_mBlockList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_clusterList_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @clusterList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mBlockList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList GALGAS_clusterList_2D_element::getter_mBlockList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBlockList ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@clusterList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_clusterList_2D_element ("clusterList-element",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_clusterList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_clusterList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_clusterList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_clusterList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_clusterList_2D_element GALGAS_clusterList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_clusterList_2D_element result ;
  const GALGAS_clusterList_2D_element * p = (const GALGAS_clusterList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_clusterList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("clusterList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_byteDeclarationInRam::getter_mName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_byteDeclarationInRam * p = (const cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    result = p->mProperty_mName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_byteDeclarationInRam::getter_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_byteDeclarationInRam * p = (const cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    result = p->mProperty_mSizeExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable GALGAS_byteDeclarationInRam::getter_mBitSliceTable (UNUSED_LOCATION_ARGS) const {
  GALGAS_bitSliceTable result ;
  if (NULL != mObjectPtr) {
    const cPtr_byteDeclarationInRam * p = (const cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    result = p->mProperty_mBitSliceTable ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_byteDeclarationInRam::getter_mBitDefinitionString (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_byteDeclarationInRam * p = (const cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    result = p->mProperty_mBitDefinitionString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerProtection GALGAS_byteDeclarationInRam::getter_mProtection (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerProtection result ;
  if (NULL != mObjectPtr) {
    const cPtr_byteDeclarationInRam * p = (const cPtr_byteDeclarationInRam *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_byteDeclarationInRam) ;
    result = p->mProperty_mProtection ;
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

GALGAS_lstring GALGAS_byteDeclarationInRam_2D_weak::getter_mName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_byteDeclarationInRam * objectPtr = (cPtr_byteDeclarationInRam *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_byteDeclarationInRam) ;
      result = objectPtr->mProperty_mName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_byteDeclarationInRam_2D_weak::getter_mSizeExpression (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_byteDeclarationInRam * objectPtr = (cPtr_byteDeclarationInRam *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_byteDeclarationInRam) ;
      result = objectPtr->mProperty_mSizeExpression ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable GALGAS_byteDeclarationInRam_2D_weak::getter_mBitSliceTable (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bitSliceTable result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_byteDeclarationInRam * objectPtr = (cPtr_byteDeclarationInRam *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_byteDeclarationInRam) ;
      result = objectPtr->mProperty_mBitSliceTable ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_byteDeclarationInRam_2D_weak::getter_mBitDefinitionString (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_byteDeclarationInRam * objectPtr = (cPtr_byteDeclarationInRam *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_byteDeclarationInRam) ;
      result = objectPtr->mProperty_mBitDefinitionString ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerProtection GALGAS_byteDeclarationInRam_2D_weak::getter_mProtection (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_registerProtection result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_byteDeclarationInRam * objectPtr = (cPtr_byteDeclarationInRam *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_byteDeclarationInRam) ;
      result = objectPtr->mProperty_mProtection ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_byteDeclarationInRam_2D_weak::setter_setMName (const GALGAS_lstring inValue,
                                                           C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_byteDeclarationInRam * objectPtr = (cPtr_byteDeclarationInRam *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_byteDeclarationInRam) ;
      objectPtr->mProperty_mName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_byteDeclarationInRam_2D_weak::setter_setMSizeExpression (const GALGAS_immediatExpression inValue,
                                                                     C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_byteDeclarationInRam * objectPtr = (cPtr_byteDeclarationInRam *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_byteDeclarationInRam) ;
      objectPtr->mProperty_mSizeExpression = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_byteDeclarationInRam_2D_weak::setter_setMBitSliceTable (const GALGAS_bitSliceTable inValue,
                                                                    C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_byteDeclarationInRam * objectPtr = (cPtr_byteDeclarationInRam *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_byteDeclarationInRam) ;
      objectPtr->mProperty_mBitSliceTable = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_byteDeclarationInRam_2D_weak::setter_setMBitDefinitionString (const GALGAS_string inValue,
                                                                          C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_byteDeclarationInRam * objectPtr = (cPtr_byteDeclarationInRam *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_byteDeclarationInRam) ;
      objectPtr->mProperty_mBitDefinitionString = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_byteDeclarationInRam_2D_weak::setter_setMProtection (const GALGAS_registerProtection inValue,
                                                                 C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_byteDeclarationInRam * objectPtr = (cPtr_byteDeclarationInRam *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_byteDeclarationInRam) ;
      objectPtr->mProperty_mProtection = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_luint GALGAS_immediatInteger::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_immediatInteger * p = (const cPtr_immediatInteger *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatInteger) ;
    result = p->mProperty_mValue ;
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

GALGAS_luint GALGAS_immediatInteger_2D_weak::getter_mValue (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_immediatInteger * objectPtr = (cPtr_immediatInteger *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_immediatInteger) ;
      result = objectPtr->mProperty_mValue ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_immediatInteger_2D_weak::setter_setMValue (const GALGAS_luint inValue,
                                                       C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_immediatInteger * objectPtr = (cPtr_immediatInteger *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_immediatInteger) ;
      objectPtr->mProperty_mValue = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_immediatSlice::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_immediatSlice * p = (const cPtr_immediatSlice *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSlice) ;
    result = p->mProperty_mRegisterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatSliceExpressionList GALGAS_immediatSlice::getter_mSliceExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatSliceExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_immediatSlice * p = (const cPtr_immediatSlice *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSlice) ;
    result = p->mProperty_mSliceExpressionList ;
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

GALGAS_lstring GALGAS_immediatSlice_2D_weak::getter_mRegisterName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_immediatSlice * objectPtr = (cPtr_immediatSlice *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_immediatSlice) ;
      result = objectPtr->mProperty_mRegisterName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatSliceExpressionList GALGAS_immediatSlice_2D_weak::getter_mSliceExpressionList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatSliceExpressionList result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_immediatSlice * objectPtr = (cPtr_immediatSlice *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_immediatSlice) ;
      result = objectPtr->mProperty_mSliceExpressionList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_immediatSlice_2D_weak::setter_setMRegisterName (const GALGAS_lstring inValue,
                                                            C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_immediatSlice * objectPtr = (cPtr_immediatSlice *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_immediatSlice) ;
      objectPtr->mProperty_mRegisterName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_immediatSlice_2D_weak::setter_setMSliceExpressionList (const GALGAS_immediatSliceExpressionList inValue,
                                                                   C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_immediatSlice * objectPtr = (cPtr_immediatSlice *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_immediatSlice) ;
      objectPtr->mProperty_mSliceExpressionList = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_bitNumberLabelValue::getter_mBitNumberLabelValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_bitNumberLabelValue * p = (const cPtr_bitNumberLabelValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLabelValue) ;
    result = p->mProperty_mBitNumberLabelValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_bitNumberLabelValue::getter_mBitNumberIndexValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_bitNumberLabelValue * p = (const cPtr_bitNumberLabelValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLabelValue) ;
    result = p->mProperty_mBitNumberIndexValue ;
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

GALGAS_lstring GALGAS_bitNumberLabelValue_2D_weak::getter_mBitNumberLabelValue (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_bitNumberLabelValue * objectPtr = (cPtr_bitNumberLabelValue *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_bitNumberLabelValue) ;
      result = objectPtr->mProperty_mBitNumberLabelValue ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_bitNumberLabelValue_2D_weak::getter_mBitNumberIndexValue (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_bitNumberLabelValue * objectPtr = (cPtr_bitNumberLabelValue *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_bitNumberLabelValue) ;
      result = objectPtr->mProperty_mBitNumberIndexValue ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bitNumberLabelValue_2D_weak::setter_setMBitNumberLabelValue (const GALGAS_lstring inValue,
                                                                         C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_bitNumberLabelValue * objectPtr = (cPtr_bitNumberLabelValue *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_bitNumberLabelValue) ;
      objectPtr->mProperty_mBitNumberLabelValue = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bitNumberLabelValue_2D_weak::setter_setMBitNumberIndexValue (const GALGAS_luint inValue,
                                                                         C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_bitNumberLabelValue * objectPtr = (cPtr_bitNumberLabelValue *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_bitNumberLabelValue) ;
      objectPtr->mProperty_mBitNumberIndexValue = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_CALL::getter_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_CALL * p = (const cPtr_baseline_5F_instruction_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_CALL) ;
    result = p->mProperty_mTargetLabel ;
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

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_CALL_2D_weak::getter_mTargetLabel (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_instruction_5F_CALL * objectPtr = (cPtr_baseline_5F_instruction_5F_CALL *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_instruction_5F_CALL) ;
      result = objectPtr->mProperty_mTargetLabel ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_CALL_2D_weak::setter_setMTargetLabel (const GALGAS_lstring inValue,
                                                                             C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_instruction_5F_CALL * objectPtr = (cPtr_baseline_5F_instruction_5F_CALL *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_instruction_5F_CALL) ;
      objectPtr->mProperty_mTargetLabel = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_JSR::getter_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_JSR * p = (const cPtr_baseline_5F_instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_JSR) ;
    result = p->mProperty_mTargetLabel ;
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

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_JSR_2D_weak::getter_mTargetLabel (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_instruction_5F_JSR * objectPtr = (cPtr_baseline_5F_instruction_5F_JSR *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_instruction_5F_JSR) ;
      result = objectPtr->mProperty_mTargetLabel ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_JSR_2D_weak::setter_setMTargetLabel (const GALGAS_lstring inValue,
                                                                            C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_instruction_5F_JSR * objectPtr = (cPtr_baseline_5F_instruction_5F_JSR *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_instruction_5F_JSR) ;
      objectPtr->mProperty_mTargetLabel = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_GOTO::getter_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_GOTO * p = (const cPtr_baseline_5F_instruction_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_GOTO) ;
    result = p->mProperty_mTargetLabel ;
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

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak::getter_mTargetLabel (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_instruction_5F_GOTO * objectPtr = (cPtr_baseline_5F_instruction_5F_GOTO *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_instruction_5F_GOTO) ;
      result = objectPtr->mProperty_mTargetLabel ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_GOTO_2D_weak::setter_setMTargetLabel (const GALGAS_lstring inValue,
                                                                             C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_instruction_5F_GOTO * objectPtr = (cPtr_baseline_5F_instruction_5F_GOTO *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_instruction_5F_GOTO) ;
      objectPtr->mProperty_mTargetLabel = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_JUMP::getter_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_JUMP * p = (const cPtr_baseline_5F_instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_JUMP) ;
    result = p->mProperty_mTargetLabel ;
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

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak::getter_mTargetLabel (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_instruction_5F_JUMP * objectPtr = (cPtr_baseline_5F_instruction_5F_JUMP *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_instruction_5F_JUMP) ;
      result = objectPtr->mProperty_mTargetLabel ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_JUMP_2D_weak::setter_setMTargetLabel (const GALGAS_lstring inValue,
                                                                             C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_instruction_5F_JUMP * objectPtr = (cPtr_baseline_5F_instruction_5F_JUMP *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_instruction_5F_JUMP) ;
      objectPtr->mProperty_mTargetLabel = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_TRIS::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_TRIS * p = (const cPtr_baseline_5F_instruction_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_TRIS) ;
    result = p->mProperty_mOperand ;
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

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak::getter_mOperand (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_instruction_5F_TRIS * objectPtr = (cPtr_baseline_5F_instruction_5F_TRIS *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_instruction_5F_TRIS) ;
      result = objectPtr->mProperty_mOperand ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_TRIS_2D_weak::setter_setMOperand (const GALGAS_lstring inValue,
                                                                         C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_instruction_5F_TRIS * objectPtr = (cPtr_baseline_5F_instruction_5F_TRIS *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_instruction_5F_TRIS) ;
      objectPtr->mProperty_mOperand = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    result = p->mProperty_mConstantName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::getter_mLowerBoundExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    result = p->mProperty_mLowerBoundExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::getter_mUpperBoundExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    result = p->mProperty_mUpperBoundExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::getter_mEndOfInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    result = p->mProperty_mEndOfInstruction ;
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

GALGAS_lstring GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::getter_mConstantName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * objectPtr = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
      result = objectPtr->mProperty_mConstantName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::getter_mLowerBoundExpression (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * objectPtr = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
      result = objectPtr->mProperty_mLowerBoundExpression ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::getter_mUpperBoundExpression (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * objectPtr = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
      result = objectPtr->mProperty_mUpperBoundExpression ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::getter_mInstructionList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instructionList result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * objectPtr = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
      result = objectPtr->mProperty_mInstructionList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::getter_mEndOfInstruction (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * objectPtr = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
      result = objectPtr->mProperty_mEndOfInstruction ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::setter_setMConstantName (const GALGAS_lstring inValue,
                                                                                          C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * objectPtr = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
      objectPtr->mProperty_mConstantName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::setter_setMLowerBoundExpression (const GALGAS_immediatExpression inValue,
                                                                                                  C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * objectPtr = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
      objectPtr->mProperty_mLowerBoundExpression = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::setter_setMUpperBoundExpression (const GALGAS_immediatExpression inValue,
                                                                                                  C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * objectPtr = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
      objectPtr->mProperty_mUpperBoundExpression = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::setter_setMInstructionList (const GALGAS_baseline_5F_instructionList inValue,
                                                                                             C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * objectPtr = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
      objectPtr->mProperty_mInstructionList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::setter_setMEndOfInstruction (const GALGAS_location inValue,
                                                                                              C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * objectPtr = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
      objectPtr->mProperty_mEndOfInstruction = inValue ;
    }
  }
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

GALGAS_lstring GALGAS_baseline_5F_model::getter_mProgramName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProgramName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_baseline_5F_model::getter_mDeviceName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDeviceName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configDefinitionList GALGAS_baseline_5F_model::getter_mConfigDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConfigDefinitionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ramDefinitionList GALGAS_baseline_5F_model::getter_mRamDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRamDefinitionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_baseline_5F_model::getter_mUnusedRegisterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUnusedRegisterList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantDefinitionList GALGAS_baseline_5F_model::getter_mConstantDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantDefinitionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_routineDefinitionList GALGAS_baseline_5F_model::getter_mRoutineDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineDefinitionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_baseline_5F_model::getter_mUnusedRoutineList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUnusedRoutineList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_baseline_5F_model::getter_mEndOfProgram (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfProgram ;
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::getter_mLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
    result = p->mProperty_mLabel ;
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

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::getter_mLabel (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * objectPtr = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
      result = objectPtr->mProperty_mLabel ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::setter_setMLabel (const GALGAS_lstring inValue,
                                                                                   C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * objectPtr = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
      objectPtr->mProperty_mLabel = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
    result = p->mProperty_mRoutineName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::getter_mIsRegular (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
    result = p->mProperty_mIsRegular ;
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

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak::getter_mRoutineName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * objectPtr = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
      result = objectPtr->mProperty_mRoutineName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak::getter_mIsRegular (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * objectPtr = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
      result = objectPtr->mProperty_mIsRegular ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak::setter_setMRoutineName (const GALGAS_lstring inValue,
                                                                                                    C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * objectPtr = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
      objectPtr->mProperty_mRoutineName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2D_weak::setter_setMIsRegular (const GALGAS_bool inValue,
                                                                                                  C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * objectPtr = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
      objectPtr->mProperty_mIsRegular = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
    result = p->mProperty_mRoutineName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::getter_mPage (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
    result = p->mProperty_mPage ;
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

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak::getter_mRoutineName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * objectPtr = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
      result = objectPtr->mProperty_mRoutineName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak::getter_mPage (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * objectPtr = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
      result = objectPtr->mProperty_mPage ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak::setter_setMRoutineName (const GALGAS_lstring inValue,
                                                                                                  C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * objectPtr = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
      objectPtr->mProperty_mRoutineName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2D_weak::setter_setMPage (const GALGAS_uint inValue,
                                                                                           C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * objectPtr = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
      objectPtr->mProperty_mPage = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_GOTO::getter_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_GOTO * p = (const cPtr_baseline_5F_intermediate_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_GOTO) ;
    result = p->mProperty_mTargetLabel ;
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

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak::getter_mTargetLabel (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_intermediate_5F_GOTO * objectPtr = (cPtr_baseline_5F_intermediate_5F_GOTO *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_GOTO) ;
      result = objectPtr->mProperty_mTargetLabel ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_GOTO_2D_weak::setter_setMTargetLabel (const GALGAS_lstring inValue,
                                                                              C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_intermediate_5F_GOTO * objectPtr = (cPtr_baseline_5F_intermediate_5F_GOTO *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_GOTO) ;
      objectPtr->mProperty_mTargetLabel = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_JUMP::getter_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_JUMP * p = (const cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    result = p->mProperty_mTargetLabel ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_JUMP::getter_mCurrentPage (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_JUMP * p = (const cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    result = p->mProperty_mCurrentPage ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_JUMP::getter_mTargetPage (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_JUMP * p = (const cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    result = p->mProperty_mTargetPage ;
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

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak::getter_mTargetLabel (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_intermediate_5F_JUMP * objectPtr = (cPtr_baseline_5F_intermediate_5F_JUMP *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_JUMP) ;
      result = objectPtr->mProperty_mTargetLabel ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak::getter_mCurrentPage (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_intermediate_5F_JUMP * objectPtr = (cPtr_baseline_5F_intermediate_5F_JUMP *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_JUMP) ;
      result = objectPtr->mProperty_mCurrentPage ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak::getter_mTargetPage (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_intermediate_5F_JUMP * objectPtr = (cPtr_baseline_5F_intermediate_5F_JUMP *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_JUMP) ;
      result = objectPtr->mProperty_mTargetPage ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak::setter_setMTargetLabel (const GALGAS_lstring inValue,
                                                                              C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_intermediate_5F_JUMP * objectPtr = (cPtr_baseline_5F_intermediate_5F_JUMP *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_JUMP) ;
      objectPtr->mProperty_mTargetLabel = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak::setter_setMCurrentPage (const GALGAS_uint inValue,
                                                                              C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_intermediate_5F_JUMP * objectPtr = (cPtr_baseline_5F_intermediate_5F_JUMP *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_JUMP) ;
      objectPtr->mProperty_mCurrentPage = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_JUMP_2D_weak::setter_setMTargetPage (const GALGAS_uint inValue,
                                                                             C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_intermediate_5F_JUMP * objectPtr = (cPtr_baseline_5F_intermediate_5F_JUMP *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_JUMP) ;
      objectPtr->mProperty_mTargetPage = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_CALL::getter_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_CALL * p = (const cPtr_baseline_5F_intermediate_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_CALL) ;
    result = p->mProperty_mTargetLabel ;
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

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak::getter_mTargetLabel (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_intermediate_5F_CALL * objectPtr = (cPtr_baseline_5F_intermediate_5F_CALL *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_CALL) ;
      result = objectPtr->mProperty_mTargetLabel ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_CALL_2D_weak::setter_setMTargetLabel (const GALGAS_lstring inValue,
                                                                              C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_intermediate_5F_CALL * objectPtr = (cPtr_baseline_5F_intermediate_5F_CALL *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_CALL) ;
      objectPtr->mProperty_mTargetLabel = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_JSR::getter_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_JSR * p = (const cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    result = p->mProperty_mTargetLabel ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_JSR::getter_mCurrentPage (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_JSR * p = (const cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    result = p->mProperty_mCurrentPage ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_JSR::getter_mTargetPage (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_JSR * p = (const cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    result = p->mProperty_mTargetPage ;
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

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak::getter_mTargetLabel (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_intermediate_5F_JSR * objectPtr = (cPtr_baseline_5F_intermediate_5F_JSR *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_JSR) ;
      result = objectPtr->mProperty_mTargetLabel ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak::getter_mCurrentPage (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_intermediate_5F_JSR * objectPtr = (cPtr_baseline_5F_intermediate_5F_JSR *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_JSR) ;
      result = objectPtr->mProperty_mCurrentPage ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak::getter_mTargetPage (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_intermediate_5F_JSR * objectPtr = (cPtr_baseline_5F_intermediate_5F_JSR *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_JSR) ;
      result = objectPtr->mProperty_mTargetPage ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak::setter_setMTargetLabel (const GALGAS_lstring inValue,
                                                                             C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_intermediate_5F_JSR * objectPtr = (cPtr_baseline_5F_intermediate_5F_JSR *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_JSR) ;
      objectPtr->mProperty_mTargetLabel = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak::setter_setMCurrentPage (const GALGAS_uint inValue,
                                                                             C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_intermediate_5F_JSR * objectPtr = (cPtr_baseline_5F_intermediate_5F_JSR *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_JSR) ;
      objectPtr->mProperty_mCurrentPage = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_JSR_2D_weak::setter_setMTargetPage (const GALGAS_uint inValue,
                                                                            C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_intermediate_5F_JSR * objectPtr = (cPtr_baseline_5F_intermediate_5F_JSR *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_JSR) ;
      objectPtr->mProperty_mTargetPage = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_TRIS::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_TRIS * p = (const cPtr_baseline_5F_intermediate_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_TRIS) ;
    result = p->mProperty_mOperand ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_TRIS::getter_mOpcode (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_intermediate_5F_TRIS * p = (const cPtr_baseline_5F_intermediate_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_TRIS) ;
    result = p->mProperty_mOpcode ;
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

GALGAS_lstring GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak::getter_mOperand (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_intermediate_5F_TRIS * objectPtr = (cPtr_baseline_5F_intermediate_5F_TRIS *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_TRIS) ;
      result = objectPtr->mProperty_mOperand ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak::getter_mOpcode (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_intermediate_5F_TRIS * objectPtr = (cPtr_baseline_5F_intermediate_5F_TRIS *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_TRIS) ;
      result = objectPtr->mProperty_mOpcode ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak::setter_setMOperand (const GALGAS_lstring inValue,
                                                                          C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_intermediate_5F_TRIS * objectPtr = (cPtr_baseline_5F_intermediate_5F_TRIS *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_TRIS) ;
      objectPtr->mProperty_mOperand = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_intermediate_5F_TRIS_2D_weak::setter_setMOpcode (const GALGAS_uint inValue,
                                                                         C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_intermediate_5F_TRIS * objectPtr = (cPtr_baseline_5F_intermediate_5F_TRIS *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_intermediate_5F_TRIS) ;
      objectPtr->mProperty_mOpcode = inValue ;
    }
  }
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
  GALGAS_stringset var_reachedLabelSet_10061 ;
  {
  GALGAS_baseline_5F_intermediate_5F_instruction joker_10157 ; // Joker input parameter
  routine_findBaselineFirstInstructionOrLabelFromAddress (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 261)), ioArgument_ioGeneratedInstructionList, joker_10157, var_reachedLabelSet_10061, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 261)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_intermediate_5F_GOTO temp_1 = object ;
    test_0 = var_reachedLabelSet_10061.getter_hasKey (temp_1.getter_mTargetLabel (HERE).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 262)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 262)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 263)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 263)) ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 264)).add_operation (GALGAS_string (": GOTO branching to next instruction deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 264)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_uint var_line_10578 ;
    const GALGAS_baseline_5F_intermediate_5F_GOTO temp_2 = object ;
    constinArgument_inSymbolTable.method_searchKey (temp_2.getter_mTargetLabel (HERE), var_line_10578, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 267)) ;
    GALGAS_baseline_5F_intermediate_5F_instruction var_firstInstruction_10676 ;
    {
    routine_findBaselineFirstInstructionFromAddress (var_line_10578.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 270)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_10676, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 270)) ;
    }
    if (var_firstInstruction_10676.isValid ()) {
      if (var_firstInstruction_10676.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation) {
        GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation cast_10929_literalOp ((cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) var_firstInstruction_10676.ptr ()) ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, cast_10929_literalOp.getter_mInstruction (SOURCE_FILE ("baseline_optimizations.galgas", 274)).objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 274)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            {
            ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (cast_10929_literalOp, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 275)) ;
            }
            ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 280)).add_operation (GALGAS_string (": GOTO branching to RETLW replaced by RETLW\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 280)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 280)) ;
          }
        }
      }else if (var_firstInstruction_10676.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO) {
        GALGAS_baseline_5F_intermediate_5F_GOTO cast_11335_goto ((cPtr_baseline_5F_intermediate_5F_GOTO *) var_firstInstruction_10676.ptr ()) ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          const GALGAS_baseline_5F_intermediate_5F_GOTO temp_5 = object ;
          test_4 = GALGAS_bool (kIsNotEqual, temp_5.getter_mTargetLabel (HERE).objectCompare (cast_11335_goto.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 283)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            const GALGAS_baseline_5F_intermediate_5F_GOTO temp_6 = object ;
            ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (temp_6.getter_mInstructionLocation (HERE), cast_11335_goto.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 287))  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 285)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 284)) ;
            }
            ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
            const GALGAS_baseline_5F_intermediate_5F_GOTO temp_7 = object ;
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 291)).add_operation (GALGAS_string (": GOTO "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 291)).add_operation (temp_7.getter_mTargetLabel (HERE).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 291)).add_operation (GALGAS_string (" branching to GOTO "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 291)).add_operation (cast_11335_goto.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 291)).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 291)).add_operation (GALGAS_string (" replaced by GOTO "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 291)).add_operation (cast_11335_goto.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 291)).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 291)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 291)) ;
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
  GALGAS_uint var_line_12334 ;
  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_0 = object ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.getter_mTargetLabel (HERE), var_line_12334, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 307)) ;
  GALGAS_baseline_5F_intermediate_5F_instruction var_firstInstruction_12525 ;
  {
  routine_findBaselineFirstInstructionFromAddress (var_line_12334.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 310)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_12525, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 309)) ;
  }
  if (var_firstInstruction_12525.isValid ()) {
    if (var_firstInstruction_12525.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation) {
      GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation cast_12672_literalOp ((cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) var_firstInstruction_12525.ptr ()) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, cast_12672_literalOp.getter_mInstruction (SOURCE_FILE ("baseline_optimizations.galgas", 317)).objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 317)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (cast_12672_literalOp, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 318)) ;
          }
          ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 323)).add_operation (GALGAS_string (": JUMP branching to RETLW replaced by RETLW\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 323)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 323)) ;
        }
      }
    }else if (var_firstInstruction_12525.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO) {
      GALGAS_baseline_5F_intermediate_5F_GOTO cast_13060_goto ((cPtr_baseline_5F_intermediate_5F_GOTO *) var_firstInstruction_12525.ptr ()) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        const GALGAS_baseline_5F_intermediate_5F_JUMP temp_3 = object ;
        test_2 = GALGAS_bool (kIsNotEqual, temp_3.getter_mTargetLabel (HERE).objectCompare (cast_13060_goto.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 326)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          const GALGAS_baseline_5F_intermediate_5F_JUMP temp_4 = object ;
          const GALGAS_baseline_5F_intermediate_5F_JUMP temp_5 = object ;
          const GALGAS_baseline_5F_intermediate_5F_JUMP temp_6 = object ;
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_JUMP::constructor_new (temp_4.getter_mInstructionLocation (HERE), cast_13060_goto.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 330)), temp_5.getter_mCurrentPage (HERE), temp_6.getter_mTargetPage (HERE)  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 328)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 327)) ;
          }
          ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
          const GALGAS_baseline_5F_intermediate_5F_JUMP temp_7 = object ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 336)).add_operation (GALGAS_string (": JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 336)).add_operation (temp_7.getter_mTargetLabel (HERE).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 336)).add_operation (GALGAS_string (" branching to GOTO "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 336)).add_operation (cast_13060_goto.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 337)).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 337)).add_operation (GALGAS_string (" replaced by JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 337)).add_operation (cast_13060_goto.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 338)).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 338)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 336)) ;
        }
      }
    }else if (var_firstInstruction_12525.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP) {
      GALGAS_baseline_5F_intermediate_5F_JUMP cast_13655_jump ((cPtr_baseline_5F_intermediate_5F_JUMP *) var_firstInstruction_12525.ptr ()) ;
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        const GALGAS_baseline_5F_intermediate_5F_JUMP temp_9 = object ;
        test_8 = GALGAS_bool (kIsNotEqual, temp_9.getter_mTargetLabel (HERE).objectCompare (cast_13655_jump.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 341)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          {
          const GALGAS_baseline_5F_intermediate_5F_JUMP temp_10 = object ;
          const GALGAS_baseline_5F_intermediate_5F_JUMP temp_11 = object ;
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_JUMP::constructor_new (temp_10.getter_mInstructionLocation (HERE), cast_13655_jump.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 345)), temp_11.getter_mCurrentPage (HERE), cast_13655_jump.getter_mTargetPage (SOURCE_FILE ("baseline_optimizations.galgas", 347))  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 343)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 342)) ;
          }
          ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
          const GALGAS_baseline_5F_intermediate_5F_JUMP temp_12 = object ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 351)).add_operation (GALGAS_string (": JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 351)).add_operation (temp_12.getter_mTargetLabel (HERE).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 351)).add_operation (GALGAS_string (" branching to JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 351)).add_operation (cast_13655_jump.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 352)).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 352)).add_operation (GALGAS_string (" replaced by JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 352)).add_operation (cast_13655_jump.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 353)).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 353)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 351)) ;
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
  GALGAS_uint var_line_14693 ;
  const GALGAS_baseline_5F_intermediate_5F_CALL temp_0 = object ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.getter_mTargetLabel (HERE), var_line_14693, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 368)) ;
  GALGAS_baseline_5F_intermediate_5F_instruction var_firstInstruction_14884 ;
  {
  routine_findBaselineFirstInstructionFromAddress (var_line_14693.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 371)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_14884, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 370)) ;
  }
  if (var_firstInstruction_14884.isValid ()) {
    if (var_firstInstruction_14884.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation) {
      GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation cast_15031_literalOp ((cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) var_firstInstruction_14884.ptr ()) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, cast_15031_literalOp.getter_mInstruction (SOURCE_FILE ("baseline_optimizations.galgas", 378)).objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 378)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          const GALGAS_baseline_5F_intermediate_5F_CALL temp_2 = object ;
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_2.getter_mInstructionLocation (HERE), GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("baseline_optimizations.galgas", 382)), cast_15031_literalOp.getter_mLiteralValue (SOURCE_FILE ("baseline_optimizations.galgas", 383))  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 380)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 379)) ;
          }
          ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
          const GALGAS_baseline_5F_intermediate_5F_CALL temp_3 = object ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 387)).add_operation (GALGAS_string (": CALL "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 387)).add_operation (temp_3.getter_mTargetLabel (HERE).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 387)).add_operation (GALGAS_string (" to RETLW "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 387)).add_operation (cast_15031_literalOp.getter_mLiteralValue (SOURCE_FILE ("baseline_optimizations.galgas", 388)).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 388)).add_operation (GALGAS_string (" replaced by MOVLW "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 388)).add_operation (cast_15031_literalOp.getter_mLiteralValue (SOURCE_FILE ("baseline_optimizations.galgas", 389)).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 389)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 387)) ;
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
  GALGAS_uint var_line_16108 ;
  const GALGAS_baseline_5F_intermediate_5F_JSR temp_0 = object ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.getter_mTargetLabel (HERE), var_line_16108, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 404)) ;
  GALGAS_baseline_5F_intermediate_5F_instruction var_firstInstruction_16299 ;
  {
  routine_findBaselineFirstInstructionFromAddress (var_line_16108.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 407)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_16299, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 406)) ;
  }
  if (var_firstInstruction_16299.isValid ()) {
    if (var_firstInstruction_16299.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation) {
      GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation cast_16446_literalOp ((cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) var_firstInstruction_16299.ptr ()) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, cast_16446_literalOp.getter_mInstruction (SOURCE_FILE ("baseline_optimizations.galgas", 414)).objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 414)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          const GALGAS_baseline_5F_intermediate_5F_JSR temp_2 = object ;
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_2.getter_mInstructionLocation (HERE), GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("baseline_optimizations.galgas", 418)), cast_16446_literalOp.getter_mLiteralValue (SOURCE_FILE ("baseline_optimizations.galgas", 419))  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 416)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 415)) ;
          }
          ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
          const GALGAS_baseline_5F_intermediate_5F_JSR temp_3 = object ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 423)).add_operation (GALGAS_string (": JSR "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 423)).add_operation (temp_3.getter_mTargetLabel (HERE).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 423)).add_operation (GALGAS_string (" to RETLW "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 423)).add_operation (cast_16446_literalOp.getter_mLiteralValue (SOURCE_FILE ("baseline_optimizations.galgas", 424)).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 424)).add_operation (GALGAS_string (" replaced by MOVLW "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 424)).add_operation (cast_16446_literalOp.getter_mLiteralValue (SOURCE_FILE ("baseline_optimizations.galgas", 425)).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 425)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 425)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 423)) ;
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
  GALGAS_baseline_5F_intermediate_5F_instruction var_nextInstruction_17592 = ioArgument_ioGeneratedInstructionList.getter_mInstructionAtIndex (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 441)) ;
  GALGAS_bool var_reachable_17713 = GALGAS_bool (false) ;
  if (var_nextInstruction_17592.isValid ()) {
    if (var_nextInstruction_17592.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL) {
      var_reachable_17713 = GALGAS_bool (true) ;
    }
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_reachable_17713.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 450)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 452)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 451)) ;
      }
      ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 456)).add_operation (GALGAS_string (": dead code is deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 456)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 456)) ;
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
    result = p->mProperty_mRoutineName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::getter_mIsRegular (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
    result = p->mProperty_mIsRegular ;
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

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak::getter_mRoutineName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * objectPtr = (cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
      result = objectPtr->mProperty_mRoutineName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak::getter_mIsRegular (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * objectPtr = (cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
      result = objectPtr->mProperty_mIsRegular ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak::setter_setMRoutineName (const GALGAS_lstring inValue,
                                                                                              C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * objectPtr = (cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
      objectPtr->mProperty_mRoutineName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak::setter_setMIsRegular (const GALGAS_bool inValue,
                                                                                            C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * objectPtr = (cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
      objectPtr->mProperty_mIsRegular = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
    result = p->mProperty_mRoutineName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::getter_mPage (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
    result = p->mProperty_mPage ;
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

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak::getter_mRoutineName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * objectPtr = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
      result = objectPtr->mProperty_mRoutineName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak::getter_mPage (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * objectPtr = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
      result = objectPtr->mProperty_mPage ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak::setter_setMRoutineName (const GALGAS_lstring inValue,
                                                                                            C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * objectPtr = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
      objectPtr->mProperty_mRoutineName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak::setter_setMPage (const GALGAS_uint inValue,
                                                                                     C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * objectPtr = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
      objectPtr->mProperty_mPage = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::getter_mLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * p = (const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
    result = p->mProperty_mLabel ;
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

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak::getter_mLabel (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * objectPtr = (cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
      result = objectPtr->mProperty_mLabel ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak::setter_setMLabel (const GALGAS_lstring inValue,
                                                                               C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * objectPtr = (cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
      objectPtr->mProperty_mLabel = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_GOTO::getter_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_GOTO * p = (const cPtr_baseline_5F_assembly_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_GOTO) ;
    result = p->mProperty_mTargetLabel ;
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

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak::getter_mTargetLabel (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_assembly_5F_GOTO * objectPtr = (cPtr_baseline_5F_assembly_5F_GOTO *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_assembly_5F_GOTO) ;
      result = objectPtr->mProperty_mTargetLabel ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak::setter_setMTargetLabel (const GALGAS_lstring inValue,
                                                                          C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_assembly_5F_GOTO * objectPtr = (cPtr_baseline_5F_assembly_5F_GOTO *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_assembly_5F_GOTO) ;
      objectPtr->mProperty_mTargetLabel = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_CALL::getter_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_CALL * p = (const cPtr_baseline_5F_assembly_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_CALL) ;
    result = p->mProperty_mTargetLabel ;
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

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_CALL_2D_weak::getter_mTargetLabel (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_assembly_5F_CALL * objectPtr = (cPtr_baseline_5F_assembly_5F_CALL *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_assembly_5F_CALL) ;
      result = objectPtr->mProperty_mTargetLabel ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_CALL_2D_weak::setter_setMTargetLabel (const GALGAS_lstring inValue,
                                                                          C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_assembly_5F_CALL * objectPtr = (cPtr_baseline_5F_assembly_5F_CALL *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_assembly_5F_CALL) ;
      objectPtr->mProperty_mTargetLabel = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_TRIS::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_TRIS * p = (const cPtr_baseline_5F_assembly_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_TRIS) ;
    result = p->mProperty_mOperand ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_assembly_5F_TRIS::getter_mOpcode (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_assembly_5F_TRIS * p = (const cPtr_baseline_5F_assembly_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_TRIS) ;
    result = p->mProperty_mOpcode ;
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

GALGAS_lstring GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak::getter_mOperand (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_assembly_5F_TRIS * objectPtr = (cPtr_baseline_5F_assembly_5F_TRIS *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_assembly_5F_TRIS) ;
      result = objectPtr->mProperty_mOperand ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak::getter_mOpcode (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_baseline_5F_assembly_5F_TRIS * objectPtr = (cPtr_baseline_5F_assembly_5F_TRIS *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_assembly_5F_TRIS) ;
      result = objectPtr->mProperty_mOpcode ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak::setter_setMOperand (const GALGAS_lstring inValue,
                                                                      C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_assembly_5F_TRIS * objectPtr = (cPtr_baseline_5F_assembly_5F_TRIS *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_assembly_5F_TRIS) ;
      objectPtr->mProperty_mOperand = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak::setter_setMOpcode (const GALGAS_uint inValue,
                                                                     C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_baseline_5F_assembly_5F_TRIS * objectPtr = (cPtr_baseline_5F_assembly_5F_TRIS *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_baseline_5F_assembly_5F_TRIS) ;
      objectPtr->mProperty_mOpcode = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    result = p->mProperty_mConstantName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::getter_mLowerBoundExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    result = p->mProperty_mLowerBoundExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::getter_mUpperBoundExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    result = p->mProperty_mUpperBoundExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::getter_mEndOfInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    result = p->mProperty_mEndOfInstruction ;
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

GALGAS_lstring GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::getter_mConstantName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * objectPtr = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
      result = objectPtr->mProperty_mConstantName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::getter_mLowerBoundExpression (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * objectPtr = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
      result = objectPtr->mProperty_mLowerBoundExpression ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::getter_mUpperBoundExpression (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * objectPtr = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
      result = objectPtr->mProperty_mUpperBoundExpression ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::getter_mInstructionList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instructionList result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * objectPtr = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
      result = objectPtr->mProperty_mInstructionList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::getter_mEndOfInstruction (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * objectPtr = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
      result = objectPtr->mProperty_mEndOfInstruction ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::setter_setMConstantName (const GALGAS_lstring inValue,
                                                                                          C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * objectPtr = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
      objectPtr->mProperty_mConstantName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::setter_setMLowerBoundExpression (const GALGAS_immediatExpression inValue,
                                                                                                  C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * objectPtr = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
      objectPtr->mProperty_mLowerBoundExpression = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::setter_setMUpperBoundExpression (const GALGAS_immediatExpression inValue,
                                                                                                  C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * objectPtr = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
      objectPtr->mProperty_mUpperBoundExpression = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::setter_setMInstructionList (const GALGAS_midrange_5F_instructionList inValue,
                                                                                             C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * objectPtr = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
      objectPtr->mProperty_mInstructionList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::setter_setMEndOfInstruction (const GALGAS_location inValue,
                                                                                              C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * objectPtr = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
      objectPtr->mProperty_mEndOfInstruction = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_midrange_5F_instruction_5F_CALL::getter_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_CALL * p = (const cPtr_midrange_5F_instruction_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_CALL) ;
    result = p->mProperty_mTargetLabel ;
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

GALGAS_lstring GALGAS_midrange_5F_instruction_5F_CALL_2D_weak::getter_mTargetLabel (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_midrange_5F_instruction_5F_CALL * objectPtr = (cPtr_midrange_5F_instruction_5F_CALL *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_instruction_5F_CALL) ;
      result = objectPtr->mProperty_mTargetLabel ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_CALL_2D_weak::setter_setMTargetLabel (const GALGAS_lstring inValue,
                                                                             C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_midrange_5F_instruction_5F_CALL * objectPtr = (cPtr_midrange_5F_instruction_5F_CALL *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_instruction_5F_CALL) ;
      objectPtr->mProperty_mTargetLabel = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_midrange_5F_instruction_5F_JSR::getter_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_JSR * p = (const cPtr_midrange_5F_instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_JSR) ;
    result = p->mProperty_mTargetLabel ;
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

GALGAS_lstring GALGAS_midrange_5F_instruction_5F_JSR_2D_weak::getter_mTargetLabel (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_midrange_5F_instruction_5F_JSR * objectPtr = (cPtr_midrange_5F_instruction_5F_JSR *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_instruction_5F_JSR) ;
      result = objectPtr->mProperty_mTargetLabel ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_JSR_2D_weak::setter_setMTargetLabel (const GALGAS_lstring inValue,
                                                                            C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_midrange_5F_instruction_5F_JSR * objectPtr = (cPtr_midrange_5F_instruction_5F_JSR *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_instruction_5F_JSR) ;
      objectPtr->mProperty_mTargetLabel = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_midrange_5F_instruction_5F_JUMP::getter_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_JUMP * p = (const cPtr_midrange_5F_instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_JUMP) ;
    result = p->mProperty_mTargetLabel ;
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

GALGAS_lstring GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak::getter_mTargetLabel (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_midrange_5F_instruction_5F_JUMP * objectPtr = (cPtr_midrange_5F_instruction_5F_JUMP *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_instruction_5F_JUMP) ;
      result = objectPtr->mProperty_mTargetLabel ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak::setter_setMTargetLabel (const GALGAS_lstring inValue,
                                                                             C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_midrange_5F_instruction_5F_JUMP * objectPtr = (cPtr_midrange_5F_instruction_5F_JUMP *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_instruction_5F_JUMP) ;
      objectPtr->mProperty_mTargetLabel = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_midrange_5F_instruction_5F_GOTO::getter_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_GOTO * p = (const cPtr_midrange_5F_instruction_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_GOTO) ;
    result = p->mProperty_mTargetLabel ;
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

GALGAS_lstring GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak::getter_mTargetLabel (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_midrange_5F_instruction_5F_GOTO * objectPtr = (cPtr_midrange_5F_instruction_5F_GOTO *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_instruction_5F_GOTO) ;
      result = objectPtr->mProperty_mTargetLabel ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak::setter_setMTargetLabel (const GALGAS_lstring inValue,
                                                                             C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_midrange_5F_instruction_5F_GOTO * objectPtr = (cPtr_midrange_5F_instruction_5F_GOTO *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_instruction_5F_GOTO) ;
      objectPtr->mProperty_mTargetLabel = inValue ;
    }
  }
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

GALGAS_lstring GALGAS_midrange_5F_model::getter_mProgramName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProgramName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_midrange_5F_model::getter_mDeviceName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDeviceName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configDefinitionList GALGAS_midrange_5F_model::getter_mConfigDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConfigDefinitionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ramDefinitionList GALGAS_midrange_5F_model::getter_mRamDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRamDefinitionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_midrange_5F_model::getter_mUnusedRegisterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUnusedRegisterList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_interruptDefinitionList GALGAS_midrange_5F_model::getter_mInterruptDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInterruptDefinitionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantDefinitionList GALGAS_midrange_5F_model::getter_mConstantDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantDefinitionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_routineDefinitionList GALGAS_midrange_5F_model::getter_mRoutineDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineDefinitionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_midrange_5F_model::getter_mUnusedRoutineList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUnusedRoutineList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_model::getter_mNeedsComputedGoto_32_ (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNeedsComputedGoto_32_ ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_model::getter_mNeedsComputedGoto_34_ (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNeedsComputedGoto_34_ ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_midrange_5F_model::getter_mEndOfProgram (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfProgram ;
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::getter_mLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
    result = p->mProperty_mLabel ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::getter_mIsDeletable (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
    result = p->mProperty_mIsDeletable ;
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

GALGAS_lstring GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::getter_mLabel (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * objectPtr = (cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
      result = objectPtr->mProperty_mLabel ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::getter_mIsDeletable (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * objectPtr = (cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
      result = objectPtr->mProperty_mIsDeletable ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::setter_setMLabel (const GALGAS_lstring inValue,
                                                                                   C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * objectPtr = (cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
      objectPtr->mProperty_mLabel = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2D_weak::setter_setMIsDeletable (const GALGAS_bool inValue,
                                                                                         C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * objectPtr = (cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
      objectPtr->mProperty_mIsDeletable = inValue ;
    }
  }
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
//   Object comparison                                                                           
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

GALGAS_lstring GALGAS_midrange_5F_intermediate_5F_JUMP::getter_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_JUMP * p = (const cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    result = p->mProperty_mTargetLabel ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_call_5F_goto_5F_bit GALGAS_midrange_5F_intermediate_5F_JUMP::getter_mBit_31__31_ (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_call_5F_goto_5F_bit result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_JUMP * p = (const cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    result = p->mProperty_mBit_31__31_ ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_call_5F_goto_5F_bit GALGAS_midrange_5F_intermediate_5F_JUMP::getter_mBit_31__32_ (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_call_5F_goto_5F_bit result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_intermediate_5F_JUMP * p = (const cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    result = p->mProperty_mBit_31__32_ ;
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

GALGAS_lstring GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak::getter_mTargetLabel (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_midrange_5F_intermediate_5F_JUMP * objectPtr = (cPtr_midrange_5F_intermediate_5F_JUMP *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_intermediate_5F_JUMP) ;
      result = objectPtr->mProperty_mTargetLabel ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_call_5F_goto_5F_bit GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak::getter_mBit_31__31_ (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_call_5F_goto_5F_bit result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_midrange_5F_intermediate_5F_JUMP * objectPtr = (cPtr_midrange_5F_intermediate_5F_JUMP *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_intermediate_5F_JUMP) ;
      result = objectPtr->mProperty_mBit_31__31_ ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_call_5F_goto_5F_bit GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak::getter_mBit_31__32_ (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_call_5F_goto_5F_bit result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_midrange_5F_intermediate_5F_JUMP * objectPtr = (cPtr_midrange_5F_intermediate_5F_JUMP *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_intermediate_5F_JUMP) ;
      result = objectPtr->mProperty_mBit_31__32_ ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak::setter_setMTargetLabel (const GALGAS_lstring inValue,
                                                                              C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_midrange_5F_intermediate_5F_JUMP * objectPtr = (cPtr_midrange_5F_intermediate_5F_JUMP *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_intermediate_5F_JUMP) ;
      objectPtr->mProperty_mTargetLabel = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak::setter_setMBit_31__31_ (const GALGAS_midrange_5F_call_5F_goto_5F_bit inValue,
                                                                              C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_midrange_5F_intermediate_5F_JUMP * objectPtr = (cPtr_midrange_5F_intermediate_5F_JUMP *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_intermediate_5F_JUMP) ;
      objectPtr->mProperty_mBit_31__31_ = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_JUMP_2D_weak::setter_setMBit_31__32_ (const GALGAS_midrange_5F_call_5F_goto_5F_bit inValue,
                                                                              C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_midrange_5F_intermediate_5F_JUMP * objectPtr = (cPtr_midrange_5F_intermediate_5F_JUMP *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_midrange_5F_intermediate_5F_JUMP) ;
      objectPtr->mProperty_mBit_31__32_ = inValue ;
    }
  }
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

