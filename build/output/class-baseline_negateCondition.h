#ifndef class_2D_baseline_5F_negateCondition_DEFINED
#define class_2D_baseline_5F_negateCondition_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_negateCondition-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_conditionExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @baseline_negateCondition class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_negateCondition : public cPtr_baseline_5F_conditionExpression {
//--- Attributes
  public : GALGAS_baseline_5F_conditionExpression mAttribute_mCondition ;

//--- Constructor
  public : cPtr_baseline_5F_negateCondition (const GALGAS_baseline_5F_conditionExpression & in_mCondition
                                             COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_conditionExpression reader_mCondition (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

