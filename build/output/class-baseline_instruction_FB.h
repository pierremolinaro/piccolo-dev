#ifndef class_2D_baseline_5F_instruction_5F_FB_DEFINED
#define class_2D_baseline_5F_instruction_5F_FB_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_instruction_FB-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-bitNumberExpression.h"
#include "class-registerExpression.h"
#include "enum-baseline_bit_oriented_op.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @baseline_instruction_FB class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_instruction_5F_FB : public cPtr_baseline_5F_instruction {
//--- Attributes
  public : GALGAS_baseline_5F_bit_5F_oriented_5F_op mAttribute_mBitOrientedOp ;
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_bitNumberExpression mAttribute_mBitNumber ;

//--- Constructor
  public : cPtr_baseline_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                               const GALGAS_registerExpression & in_mRegisterExpression,
                                               const GALGAS_bitNumberExpression & in_mBitNumber
                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_bit_5F_oriented_5F_op reader_mBitOrientedOp (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bitNumberExpression reader_mBitNumber (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

