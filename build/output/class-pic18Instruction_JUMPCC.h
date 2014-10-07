#ifndef class_2D_pic_31__38_Instruction_5F_JUMPCC_DEFINED
#define class_2D_pic_31__38_Instruction_5F_JUMPCC_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18Instruction_JUMPCC-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "enum-conditional_branch.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @pic18Instruction_JUMPCC class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_JUMPCC : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetLabel ;
  public : GALGAS_conditional_5F_branch mAttribute_mConditionalBranch ;
  public : GALGAS_bool mAttribute_mIsBcc ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_JUMPCC (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_lstring & in_mTargetLabel,
                                                  const GALGAS_conditional_5F_branch & in_mConditionalBranch,
                                                  const GALGAS_bool & in_mIsBcc
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_conditional_5F_branch reader_mConditionalBranch (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsBcc (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

