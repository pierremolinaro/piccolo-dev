#ifndef class_2D_pic_31__38_Instruction_5F_FA_DEFINED
#define class_2D_pic_31__38_Instruction_5F_FA_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18Instruction_FA-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-registerExpression.h"
#include "enum-FA_instruction_base_code.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @pic18Instruction_FA class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_FA : public cPtr_pic_31__38_PiccoloSimpleInstruction {
//--- Attributes
  public : GALGAS_FA_5F_instruction_5F_base_5F_code mAttribute_mFAinstruction ;
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_FA (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_FA_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                              const GALGAS_registerExpression & in_mRegisterExpression
                                              COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_FA_5F_instruction_5F_base_5F_code reader_mFAinstruction (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

