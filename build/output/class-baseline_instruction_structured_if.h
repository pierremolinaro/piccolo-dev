#ifndef class_2D_baseline_5F_instruction_5F_structured_5F_if_DEFINED
#define class_2D_baseline_5F_instruction_5F_structured_5F_if_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_instruction_structured_if-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_conditionExpression.h"
#include "list-baseline_instructionList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @baseline_instruction_structured_if class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_instruction_5F_structured_5F_if : public cPtr_baseline_5F_instruction {
//--- Attributes
  public : GALGAS_baseline_5F_conditionExpression mAttribute_mIfCondition ;
  public : GALGAS_baseline_5F_instructionList mAttribute_mThenInstructionList ;
  public : GALGAS_baseline_5F_instructionList mAttribute_mElseInstructionList ;
  public : GALGAS_location mAttribute_mEndOfElsePartLocation ;

//--- Constructor
  public : cPtr_baseline_5F_instruction_5F_structured_5F_if (const GALGAS_location & in_mInstructionLocation,
                                                             const GALGAS_baseline_5F_conditionExpression & in_mIfCondition,
                                                             const GALGAS_baseline_5F_instructionList & in_mThenInstructionList,
                                                             const GALGAS_baseline_5F_instructionList & in_mElseInstructionList,
                                                             const GALGAS_location & in_mEndOfElsePartLocation
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_conditionExpression reader_mIfCondition (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_instructionList reader_mThenInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_instructionList reader_mElseInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfElsePartLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

