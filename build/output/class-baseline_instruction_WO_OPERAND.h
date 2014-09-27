#ifndef class_2D_baseline_5F_instruction_5F_WO_5F_OPERAND_DEFINED
#define class_2D_baseline_5F_instruction_5F_WO_5F_OPERAND_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_instruction_WO_OPERAND-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "enum-baseline_WO_OPERAND_group.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @baseline_instruction_WO_OPERAND class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND : public cPtr_baseline_5F_instruction {
//--- Attributes
  public : GALGAS_baseline_5F_WO_5F_OPERAND_5F_group mAttribute_mInstruction ;

//--- Constructor
  public : cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND (const GALGAS_location & in_mInstructionLocation,
                                                          const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction
                                                          COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_WO_5F_OPERAND_5F_group reader_mInstruction (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

