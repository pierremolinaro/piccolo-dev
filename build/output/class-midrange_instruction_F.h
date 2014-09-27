#ifndef class_2D_midrange_5F_instruction_5F_F_DEFINED
#define class_2D_midrange_5F_instruction_5F_F_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-midrange_instruction_F-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-registerExpression.h"
#include "enum-midrange_F_instruction_base_code.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @midrange_instruction_F class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_F : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code mAttribute_mFAinstruction ;
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                              const GALGAS_registerExpression & in_mRegisterExpression
                                              COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code reader_mFAinstruction (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

