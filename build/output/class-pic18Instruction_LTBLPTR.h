#ifndef class_2D_pic_31__38_Instruction_5F_LTBLPTR_DEFINED
#define class_2D_pic_31__38_Instruction_5F_LTBLPTR_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18Instruction_LTBLPTR-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-immediatExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @pic18Instruction_LTBLPTR class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_LTBLPTR : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_immediatExpression mAttribute_mImmediatExpression ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_LTBLPTR (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_immediatExpression & in_mImmediatExpression
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression reader_mImmediatExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

