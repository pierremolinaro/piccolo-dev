#ifndef class_2D_immediatMul_DEFINED
#define class_2D_immediatMul_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-immediatMul-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-immediatExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Pointer class for @immediatMul class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_immediatMul : public cPtr_immediatExpression {
//--- Attributes
  public : GALGAS_immediatExpression mAttribute_mLeftExpression ;
  public : GALGAS_immediatExpression mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_immediatMul (const GALGAS_immediatExpression & in_mLeftExpression,
                             const GALGAS_immediatExpression & in_mRightExpression
                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

