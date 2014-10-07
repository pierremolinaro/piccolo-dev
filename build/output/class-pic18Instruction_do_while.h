#ifndef class_2D_pic_31__38_Instruction_5F_do_5F_while_DEFINED
#define class_2D_pic_31__38_Instruction_5F_do_5F_while_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18Instruction_do_while-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-pic18DoWhilePartList.h"
#include "list-pic18InstructionList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @pic18Instruction_do_while class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_do_5F_while : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_pic_31__38_InstructionList mAttribute_mRepeatedInstructionList ;
  public : GALGAS_location mAttribute_mEndOfRepeatedInstructionList ;
  public : GALGAS_pic_31__38_DoWhilePartList mAttribute_mWhilePartList ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_do_5F_while (const GALGAS_location & in_mInstructionLocation,
                                                       const GALGAS_pic_31__38_InstructionList & in_mRepeatedInstructionList,
                                                       const GALGAS_location & in_mEndOfRepeatedInstructionList,
                                                       const GALGAS_pic_31__38_DoWhilePartList & in_mWhilePartList
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_InstructionList reader_mRepeatedInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfRepeatedInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_DoWhilePartList reader_mWhilePartList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

