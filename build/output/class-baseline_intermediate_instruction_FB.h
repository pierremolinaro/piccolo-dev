#ifndef class_2D_baseline_5F_intermediate_5F_instruction_5F_FB_DEFINED
#define class_2D_baseline_5F_intermediate_5F_instruction_5F_FB_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_intermediate_instruction_FB-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "enum-baseline_bit_oriented_op.h"
#include "struct-baseline_intermediate_registerExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @baseline_intermediate_instruction_FB class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_instruction_5F_FB : public cPtr_baseline_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_baseline_5F_bit_5F_oriented_5F_op mAttribute_mInstruction ;
  public : GALGAS_baseline_5F_intermediate_5F_registerExpression mAttribute_mRegisterDescription ;
  public : GALGAS_uint mAttribute_mBitNumber ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                                               const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                               const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                               const GALGAS_uint & in_mBitNumber
                                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_bit_5F_oriented_5F_op reader_mInstruction (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_intermediate_5F_registerExpression reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mBitNumber (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

