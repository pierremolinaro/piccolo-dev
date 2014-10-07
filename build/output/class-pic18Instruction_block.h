#ifndef class_2D_pic_31__38_Instruction_5F_block_DEFINED
#define class_2D_pic_31__38_Instruction_5F_block_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18Instruction_block-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-pic18BlockInstructionBlockList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @pic18Instruction_block class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_block : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mStartBlockName ;
  public : GALGAS_pic_31__38_BlockInstructionBlockList mAttribute_mBlockList ;
  public : GALGAS_location mAttribute_mEndOfInstruction ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_block (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mStartBlockName,
                                                 const GALGAS_pic_31__38_BlockInstructionBlockList & in_mBlockList,
                                                 const GALGAS_location & in_mEndOfInstruction
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mStartBlockName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_BlockInstructionBlockList reader_mBlockList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfInstruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

