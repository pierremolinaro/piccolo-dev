#ifndef class_2D_immediatComplement_DEFINED
#define class_2D_immediatComplement_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-immediatComplement-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-immediatExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @immediatComplement class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_immediatComplement : public cPtr_immediatExpression {
//--- Attributes
  public : GALGAS_immediatExpression mAttribute_mExpression ;

//--- Constructor
  public : cPtr_immediatComplement (const GALGAS_immediatExpression & in_mExpression
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression reader_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

