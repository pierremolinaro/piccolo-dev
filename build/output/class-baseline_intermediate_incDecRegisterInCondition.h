#ifndef class_2D_baseline_5F_intermediate_5F_incDecRegisterInCondition_DEFINED
#define class_2D_baseline_5F_intermediate_5F_incDecRegisterInCondition_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_intermediate_incDecRegisterInCondition-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "struct-baseline_intermediate_registerExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Pointer class for @baseline_intermediate_incDecRegisterInCondition class                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition : public cPtr_baseline_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_baseline_5F_intermediate_5F_registerExpression mAttribute_mRegisterDescription ;
  public : GALGAS_string mAttribute_mTargetLabel ;
  public : GALGAS_bool mAttribute_mIncrement ;
  public : GALGAS_bool mAttribute_m_5F_W_5F_isDestination ;
  public : GALGAS_bool mAttribute_mBranchIfZero ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (const GALGAS_location & in_mInstructionLocation,
                                                                       const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                       const GALGAS_string & in_mTargetLabel,
                                                                       const GALGAS_bool & in_mIncrement,
                                                                       const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                       const GALGAS_bool & in_mBranchIfZero
                                                                       COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_intermediate_5F_registerExpression reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mTargetLabel (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIncrement (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mBranchIfZero (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

