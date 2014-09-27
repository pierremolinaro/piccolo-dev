#ifndef class_2D_immediatRegister_DEFINED
#define class_2D_immediatRegister_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-immediatRegister-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-registerExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @immediatRegister class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_immediatRegister : public cPtr_immediatExpression {
//--- Attributes
  public : GALGAS_registerExpression mAttribute_mRegister ;

//--- Constructor
  public : cPtr_immediatRegister (const GALGAS_registerExpression & in_mRegister
                                  COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegister (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

