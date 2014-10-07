#ifndef class_2D_ipic_31__38_JumpTerminator_DEFINED
#define class_2D_ipic_31__38_JumpTerminator_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-ipic18JumpTerminator-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "enum-jumpInstructionKind.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @ipic18JumpTerminator class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38_JumpTerminator : public cPtr_ipic_31__38_SingleInstructionTerminator {
//--- Attributes
  public : GALGAS_lstring mAttribute_mLabel ;
  public : GALGAS_jumpInstructionKind mAttribute_mKind ;

//--- Constructor
  public : cPtr_ipic_31__38_JumpTerminator (const GALGAS_location & in_mInstructionLocation,
                                            const GALGAS_lstring & in_mLabel,
                                            const GALGAS_jumpInstructionKind & in_mKind
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_jumpInstructionKind reader_mKind (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

