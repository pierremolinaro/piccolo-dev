#ifndef class_2D_pic_31__38_Instruction_5F_structured_5F_if_DEFINED
#define class_2D_pic_31__38_Instruction_5F_structured_5F_if_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18Instruction_structured_if-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18ConditionExpression.h"
#include "list-pic18InstructionList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @pic18Instruction_structured_if class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_structured_5F_if : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_pic_31__38_ConditionExpression mAttribute_mIfCondition ;
  public : GALGAS_pic_31__38_InstructionList mAttribute_mThenInstructionList ;
  public : GALGAS_pic_31__38_InstructionList mAttribute_mElseInstructionList ;
  public : GALGAS_location mAttribute_mEndOfElsePartLocation ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_structured_5F_if (const GALGAS_location & in_mInstructionLocation,
                                                            const GALGAS_pic_31__38_ConditionExpression & in_mIfCondition,
                                                            const GALGAS_pic_31__38_InstructionList & in_mThenInstructionList,
                                                            const GALGAS_pic_31__38_InstructionList & in_mElseInstructionList,
                                                            const GALGAS_location & in_mEndOfElsePartLocation
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_ConditionExpression reader_mIfCondition (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_InstructionList reader_mThenInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_InstructionList reader_mElseInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfElsePartLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

