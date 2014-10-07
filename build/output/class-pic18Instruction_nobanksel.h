#ifndef class_2D_pic_31__38_Instruction_5F_nobanksel_DEFINED
#define class_2D_pic_31__38_Instruction_5F_nobanksel_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18Instruction_nobanksel-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @pic18Instruction_nobanksel class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_nobanksel : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_nobanksel (const GALGAS_location & in_mInstructionLocation
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

