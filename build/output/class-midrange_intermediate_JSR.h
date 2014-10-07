#ifndef class_2D_midrange_5F_intermediate_5F_JSR_DEFINED
#define class_2D_midrange_5F_intermediate_5F_JSR_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-midrange_intermediate_JSR-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "enum-midrange_call_goto_bit.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @midrange_intermediate_JSR class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_intermediate_5F_JSR : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetLabel ;
  public : GALGAS_midrange_5F_call_5F_goto_5F_bit mAttribute_mBit_31__31_ ;
  public : GALGAS_midrange_5F_call_5F_goto_5F_bit mAttribute_mBit_31__32_ ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mTargetLabel,
                                                 const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                 const GALGAS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_call_5F_goto_5F_bit reader_mBit_31__31_ (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_call_5F_goto_5F_bit reader_mBit_31__32_ (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

