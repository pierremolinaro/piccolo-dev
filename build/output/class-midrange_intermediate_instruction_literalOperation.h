#ifndef class_2D_midrange_5F_intermediate_5F_instruction_5F_literalOperation_DEFINED
#define class_2D_midrange_5F_intermediate_5F_instruction_5F_literalOperation_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-midrange_intermediate_instruction_literalOperation-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "enum-midrange_literal_instruction_opcode.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Pointer class for @midrange_intermediate_instruction_literalOperation class                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_midrange_5F_literal_5F_instruction_5F_opcode mAttribute_mLiteralInstruction ;
  public : GALGAS_uint mAttribute_mLiteralValue ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                             const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                             const GALGAS_uint & in_mLiteralValue
                                                                             COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_literal_5F_instruction_5F_opcode reader_mLiteralInstruction (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mLiteralValue (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

