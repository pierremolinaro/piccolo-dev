#ifndef class_2D_pic_31__38_BccInStructuredCondition_DEFINED
#define class_2D_pic_31__38_BccInStructuredCondition_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18BccInStructuredCondition-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "enum-conditional_branch.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @pic18BccInStructuredCondition class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_BccInStructuredCondition : public cPtr_pic_31__38_ConditionExpression {
//--- Attributes
  public : GALGAS_location mAttribute_mConditionLocation ;
  public : GALGAS_conditional_5F_branch mAttribute_mCondition ;

//--- Constructor
  public : cPtr_pic_31__38_BccInStructuredCondition (const GALGAS_location & in_mConditionLocation,
                                                     const GALGAS_conditional_5F_branch & in_mCondition
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mConditionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_conditional_5F_branch reader_mCondition (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

