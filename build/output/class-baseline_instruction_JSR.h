#ifndef class_2D_baseline_5F_instruction_5F_JSR_DEFINED
#define class_2D_baseline_5F_instruction_5F_JSR_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_instruction_JSR-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @baseline_instruction_JSR class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_instruction_5F_JSR : public cPtr_baseline_5F_instruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetLabel ;

//--- Constructor
  public : cPtr_baseline_5F_instruction_5F_JSR (const GALGAS_location & in_mInstructionLocation,
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

