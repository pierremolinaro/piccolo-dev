#ifndef class_2D_bitNumberLiteralValue_DEFINED
#define class_2D_bitNumberLiteralValue_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-bitNumberLiteralValue-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @bitNumberLiteralValue class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_bitNumberLiteralValue : public cPtr_bitNumberExpression {
//--- Attributes
  public : GALGAS_luint mAttribute_mBitNumberLiteralValue ;

//--- Constructor
  public : cPtr_bitNumberLiteralValue (const GALGAS_luint & in_mBitNumberLiteralValue
                                       COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint reader_mBitNumberLiteralValue (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

