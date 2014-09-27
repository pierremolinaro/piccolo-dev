#ifndef class_2D_ipic_31__38__5F_intermediate_5F_JSR_DEFINED
#define class_2D_ipic_31__38__5F_intermediate_5F_JSR_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-ipic18_intermediate_JSR-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "enum-jumpInstructionKind.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @ipic18_intermediate_JSR class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38__5F_intermediate_5F_JSR : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetLabel ;
  public : GALGAS_jumpInstructionKind mAttribute_mKind ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_lstring & in_mTargetLabel,
                                                     const GALGAS_jumpInstructionKind & in_mKind
                                                     COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTargetLabel (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_jumpInstructionKind reader_mKind (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

