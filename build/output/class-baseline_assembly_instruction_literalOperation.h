#ifndef class_2D_baseline_5F_assembly_5F_instruction_5F_literalOperation_DEFINED
#define class_2D_baseline_5F_assembly_5F_instruction_5F_literalOperation_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_assembly_instruction_literalOperation-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "enum-baseline_literal_instruction_opcode.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Pointer class for @baseline_assembly_instruction_literalOperation class                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation : public cPtr_baseline_5F_assembly_5F_actualInstruction {
//--- Attributes
  public : GALGAS_baseline_5F_literal_5F_instruction_5F_opcode mAttribute_mInstruction ;
  public : GALGAS_uint mAttribute_mLiteralValue ;

//--- Constructor
  public : cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                         const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                         const GALGAS_uint & in_mLiteralValue
                                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_literal_5F_instruction_5F_opcode reader_mInstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mLiteralValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

