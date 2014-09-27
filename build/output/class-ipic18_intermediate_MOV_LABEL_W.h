#ifndef class_2D_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_DEFINED
#define class_2D_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-ipic18_intermediate_MOV_LABEL_W-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @ipic18_intermediate_MOV_LABEL_W class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mLabel ;
  public : GALGAS_uint mAttribute_mOffset ;
  public : GALGAS_uint mAttribute_mRightShift ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (const GALGAS_location & in_mInstructionLocation,
                                                                   const GALGAS_lstring & in_mLabel,
                                                                   const GALGAS_uint & in_mOffset,
                                                                   const GALGAS_uint & in_mRightShift
                                                                   COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mLabel (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mOffset (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mRightShift (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

