#ifndef class_2D_ipic_31__38_IncDecRegisterTerminator_DEFINED
#define class_2D_ipic_31__38_IncDecRegisterTerminator_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-ipic18IncDecRegisterTerminator-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "struct-ipic18_intermediate_registerExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @ipic18IncDecRegisterTerminator class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38_IncDecRegisterTerminator : public cPtr_ipic_31__38_AbstractConditionTerminator {
//--- Attributes
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mAttribute_mRegisterDescription ;
  public : GALGAS_bool mAttribute_mIncrement ;
  public : GALGAS_bool mAttribute_m_5F_W_5F_isDestination ;

//--- Constructor
  public : cPtr_ipic_31__38_IncDecRegisterTerminator (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                      const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                      const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                      const GALGAS_bool & in_mIncrement,
                                                      const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression reader_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIncrement (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

