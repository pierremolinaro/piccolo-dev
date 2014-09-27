#ifndef class_2D_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_DEFINED
#define class_2D_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-midrange_intermediate_instruction_BitTestSkip-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "struct-midrange_intermediate_registerExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Pointer class for @midrange_intermediate_instruction_BitTestSkip class                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_bool mAttribute_mSkipIfSet ;
  public : GALGAS_midrange_5F_intermediate_5F_registerExpression mAttribute_mRegisterDescription ;
  public : GALGAS_uint mAttribute_mBitNumber ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_bool & in_mSkipIfSet,
                                                                        const GALGAS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                        const GALGAS_uint & in_mBitNumber
                                                                        COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mSkipIfSet (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_intermediate_5F_registerExpression reader_mRegisterDescription (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mBitNumber (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

