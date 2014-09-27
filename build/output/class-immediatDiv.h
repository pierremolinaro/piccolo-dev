#ifndef class_2D_immediatDiv_DEFINED
#define class_2D_immediatDiv_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-immediatDiv-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-immediatExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Pointer class for @immediatDiv class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_immediatDiv : public cPtr_immediatExpression {
//--- Attributes
  public : GALGAS_immediatExpression mAttribute_mLeftExpression ;
  public : GALGAS_immediatExpression mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_immediatDiv (const GALGAS_immediatExpression & in_mLeftExpression,
                             const GALGAS_immediatExpression & in_mRightExpression
                             COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression reader_mLeftExpression (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression reader_mRightExpression (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

