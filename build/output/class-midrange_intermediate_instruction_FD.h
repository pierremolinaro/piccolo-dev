#ifndef class_2D_midrange_5F_intermediate_5F_instruction_5F_FD_DEFINED
#define class_2D_midrange_5F_intermediate_5F_instruction_5F_FD_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-midrange_intermediate_instruction_FD-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "enum-midrange_instruction_FD_base_code.h"
#include "struct-midrange_intermediate_registerExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @midrange_intermediate_instruction_FD class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_intermediate_5F_instruction_5F_FD : public cPtr_midrange_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code mAttribute_mInstruction_5F_FD_5F_base_5F_code ;
  public : GALGAS_midrange_5F_intermediate_5F_registerExpression mAttribute_mRegisterDescription ;
  public : GALGAS_bool mAttribute_m_5F_W_5F_isDestination ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                                               const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                               const GALGAS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                               const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code reader_mInstruction_5F_FD_5F_base_5F_code (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_intermediate_5F_registerExpression reader_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

