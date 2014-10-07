#ifndef class_2D_midrange_5F_instruction_5F_NOP_DEFINED
#define class_2D_midrange_5F_instruction_5F_NOP_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-midrange_instruction_NOP-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @midrange_instruction_NOP class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_NOP : public cPtr_midrange_5F_instruction {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_NOP (const GALGAS_location & in_mInstructionLocation
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

