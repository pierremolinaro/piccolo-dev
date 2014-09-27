#ifndef class_2D_midrange_5F_intermediate_5F_actualInstruction_DEFINED
#define class_2D_midrange_5F_intermediate_5F_actualInstruction_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-midrange_intermediate_actualInstruction-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @midrange_intermediate_actualInstruction class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_intermediate_5F_actualInstruction : public cPtr_midrange_5F_intermediate_5F_instruction {
//--- Attributes
  public : GALGAS_location mAttribute_mInstructionLocation ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_actualInstruction (const GALGAS_location & in_mInstructionLocation
                                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

