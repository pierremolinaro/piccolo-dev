#ifndef class_2D_baseline_5F_andCondition_DEFINED
#define class_2D_baseline_5F_andCondition_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_andCondition-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_conditionExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @baseline_andCondition class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_andCondition : public cPtr_baseline_5F_conditionExpression {
//--- Attributes
  public : GALGAS_baseline_5F_conditionExpression mAttribute_mLeftExpression ;
  public : GALGAS_baseline_5F_conditionExpression mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_baseline_5F_andCondition (const GALGAS_baseline_5F_conditionExpression & in_mLeftExpression,
                                          const GALGAS_baseline_5F_conditionExpression & in_mRightExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_conditionExpression reader_mLeftExpression (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_conditionExpression reader_mRightExpression (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

