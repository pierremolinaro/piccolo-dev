#ifndef class_2D_midrange_5F_instruction_5F_JUMP_DEFINED
#define class_2D_midrange_5F_instruction_5F_JUMP_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-midrange_instruction_JUMP-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @midrange_instruction_JUMP class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_JUMP : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetLabel ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mTargetLabel
                                                 COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTargetLabel (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

