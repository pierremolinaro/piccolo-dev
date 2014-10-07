#ifndef class_2D_pic_31__38_IntervalCaseItem_DEFINED
#define class_2D_pic_31__38_IntervalCaseItem_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18IntervalCaseItem-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-immediatExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @pic18IntervalCaseItem class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_IntervalCaseItem : public cPtr_pic_31__38_AbstractCaseItem {
//--- Attributes
  public : GALGAS_immediatExpression mAttribute_mMinExpression ;
  public : GALGAS_immediatExpression mAttribute_mMaxExpression ;
  public : GALGAS_location mAttribute_mCaseExpressionLocation ;

//--- Constructor
  public : cPtr_pic_31__38_IntervalCaseItem (const GALGAS_immediatExpression & in_mMinExpression,
                                             const GALGAS_immediatExpression & in_mMaxExpression,
                                             const GALGAS_location & in_mCaseExpressionLocation
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression reader_mMinExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression reader_mMaxExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mCaseExpressionLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

