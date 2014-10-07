#ifndef class_2D_pic_31__38_Instruction_5F_switch_DEFINED
#define class_2D_pic_31__38_Instruction_5F_switch_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18Instruction_switch-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-pic18InstructionList.h"
#include "list-pic18SwitchInstructionCaseList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @pic18Instruction_switch class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_switch : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_pic_31__38_SwitchInstructionCaseList mAttribute_mCaseList ;
  public : GALGAS_location mAttribute_mElseBranchStartLocation ;
  public : GALGAS_pic_31__38_InstructionList mAttribute_mElseInstructionList ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_switch (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_pic_31__38_SwitchInstructionCaseList & in_mCaseList,
                                                  const GALGAS_location & in_mElseBranchStartLocation,
                                                  const GALGAS_pic_31__38_InstructionList & in_mElseInstructionList
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_SwitchInstructionCaseList reader_mCaseList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mElseBranchStartLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_InstructionList reader_mElseInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

