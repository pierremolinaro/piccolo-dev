#ifndef class_2D_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_DEFINED
#define class_2D_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-ipic18_intermediate_instruction_FBA-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "enum-bit_oriented_op.h"
#include "struct-ipic18_intermediate_registerExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @ipic18_intermediate_instruction_FBA class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_bit_5F_oriented_5F_op mAttribute_mBitOrientedOp ;
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mAttribute_mRegisterDescription ;
  public : GALGAS_uint mAttribute_mBitNumber ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                    const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                    const GALGAS_uint & in_mBitNumber
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bit_5F_oriented_5F_op reader_mBitOrientedOp (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression reader_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mBitNumber (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

