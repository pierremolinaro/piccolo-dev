#ifndef class_2D_ipic_31__38_ReturnTerminator_DEFINED
#define class_2D_ipic_31__38_ReturnTerminator_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-ipic18ReturnTerminator-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @ipic18ReturnTerminator class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38_ReturnTerminator : public cPtr_ipic_31__38_SingleInstructionTerminator {
//--- Attributes

//--- Constructor
  public : cPtr_ipic_31__38_ReturnTerminator (const GALGAS_location & in_mInstructionLocation
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

