#ifndef class_2D_pic_31__38_Instruction_5F_computed_5F_retlw_DEFINED
#define class_2D_pic_31__38_Instruction_5F_computed_5F_retlw_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18Instruction_computed_retlw-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-immediatExpression.h"
#include "list-immediatExpressionList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @pic18Instruction_computed_retlw class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_computed_5F_retlw : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_immediatExpression mAttribute_mSizeExpression ;
  public : GALGAS_immediatExpressionList mAttribute_mImmediateExpressionList ;
  public : GALGAS_bool mAttribute_mUsesRelativeCall ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_computed_5F_retlw (const GALGAS_location & in_mInstructionLocation,
                                                             const GALGAS_immediatExpression & in_mSizeExpression,
                                                             const GALGAS_immediatExpressionList & in_mImmediateExpressionList,
                                                             const GALGAS_bool & in_mUsesRelativeCall
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression reader_mSizeExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpressionList reader_mImmediateExpressionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mUsesRelativeCall (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

