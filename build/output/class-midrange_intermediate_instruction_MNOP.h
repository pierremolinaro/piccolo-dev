#ifndef class_2D_midrange_5F_intermediate_5F_instruction_5F_MNOP_DEFINED
#define class_2D_midrange_5F_intermediate_5F_instruction_5F_MNOP_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-midrange_intermediate_instruction_MNOP-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @midrange_intermediate_instruction_MNOP class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_luint mAttribute_mOccurrenceFactor ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                                 const GALGAS_luint & in_mOccurrenceFactor
                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint reader_mOccurrenceFactor (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

