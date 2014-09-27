#ifndef class_2D_pic_31__38_RegisterComparisonTerminator_DEFINED
#define class_2D_pic_31__38_RegisterComparisonTerminator_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18RegisterComparisonTerminator-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "enum-ipic18RegisterComparison.h"
#include "struct-ipic18_intermediate_registerExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @pic18RegisterComparisonTerminator class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_RegisterComparisonTerminator : public cPtr_ipic_31__38_AbstractConditionTerminator {
//--- Attributes
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mAttribute_mRegisterDescription ;
  public : GALGAS_ipic_31__38_RegisterComparison mAttribute_mComparison ;

//--- Constructor
  public : cPtr_pic_31__38_RegisterComparisonTerminator (const GALGAS_location & in_mInstructionLocation,
                                                         const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                         const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                         const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                         const GALGAS_ipic_31__38_RegisterComparison & in_mComparison
                                                         COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38_RegisterComparison reader_mComparison (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

