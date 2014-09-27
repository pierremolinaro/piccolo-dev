#ifndef class_2D_bitNumberExpression_DEFINED
#define class_2D_bitNumberExpression_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-bitNumberExpression-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @bitNumberExpression class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_bitNumberExpression : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_bitNumberExpression (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

