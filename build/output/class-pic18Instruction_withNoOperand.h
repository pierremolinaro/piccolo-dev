#ifndef class_2D_pic_31__38_Instruction_5F_withNoOperand_DEFINED
#define class_2D_pic_31__38_Instruction_5F_withNoOperand_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18Instruction_withNoOperand-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "enum-pic18InstructionWithNoOperandKind.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @pic18Instruction_withNoOperand class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_withNoOperand : public cPtr_pic_31__38_PiccoloSimpleInstruction {
//--- Attributes
  public : GALGAS_pic_31__38_InstructionWithNoOperandKind mAttribute_mKind ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_withNoOperand (const GALGAS_location & in_mInstructionLocation,
                                                         const GALGAS_pic_31__38_InstructionWithNoOperandKind & in_mKind
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_InstructionWithNoOperandKind reader_mKind (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

