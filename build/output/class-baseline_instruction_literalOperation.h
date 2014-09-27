#ifndef class_2D_baseline_5F_instruction_5F_literalOperation_DEFINED
#define class_2D_baseline_5F_instruction_5F_literalOperation_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_instruction_literalOperation-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-immediatExpression.h"
#include "enum-baseline_literal_instruction_opcode.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @baseline_instruction_literalOperation class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_instruction_5F_literalOperation : public cPtr_baseline_5F_instruction {
//--- Attributes
  public : GALGAS_baseline_5F_literal_5F_instruction_5F_opcode mAttribute_mLiteralInstruction ;
  public : GALGAS_immediatExpression mAttribute_mImmediatExpression ;

//--- Constructor
  public : cPtr_baseline_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                             const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                             const GALGAS_immediatExpression & in_mImmediatExpression
                                                             COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_literal_5F_instruction_5F_opcode reader_mLiteralInstruction (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression reader_mImmediatExpression (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

