#ifndef class_2D_ipic_31__38_RetlwTerminator_DEFINED
#define class_2D_ipic_31__38_RetlwTerminator_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-ipic18RetlwTerminator-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @ipic18RetlwTerminator class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38_RetlwTerminator : public cPtr_ipic_31__38_SingleInstructionTerminator {
//--- Attributes
  public : GALGAS_uint mAttribute_mLiteralValue ;

//--- Constructor
  public : cPtr_ipic_31__38_RetlwTerminator (const GALGAS_location & in_mInstructionLocation,
                                             const GALGAS_uint & in_mLiteralValue
                                             COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mLiteralValue (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

