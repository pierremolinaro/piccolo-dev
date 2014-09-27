#ifndef class_2D_midrange_5F_intermediate_5F_instruction_DEFINED
#define class_2D_midrange_5F_intermediate_5F_instruction_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-midrange_intermediate_instruction-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @midrange_intermediate_instruction class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_intermediate_5F_instruction : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_instruction (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

