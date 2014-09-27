#ifndef class_2D_pic_31__38_NegateCondition_DEFINED
#define class_2D_pic_31__38_NegateCondition_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18NegateCondition-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18ConditionExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @pic18NegateCondition class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_NegateCondition : public cPtr_pic_31__38_ConditionExpression {
//--- Attributes
  public : GALGAS_pic_31__38_ConditionExpression mAttribute_mCondition ;

//--- Constructor
  public : cPtr_pic_31__38_NegateCondition (const GALGAS_pic_31__38_ConditionExpression & in_mCondition
                                            COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_ConditionExpression reader_mCondition (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

