#ifndef class_2D_midrange_5F_instruction_5F_banksel_5F_register_DEFINED
#define class_2D_midrange_5F_instruction_5F_banksel_5F_register_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-midrange_instruction_banksel_register-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-registerExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @midrange_instruction_banksel_register class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_banksel_5F_register : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_registerExpression mAttribute_mRegister ;
  public : GALGAS_bool mAttribute_mWarningOnUselessBanksel ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_banksel_5F_register (const GALGAS_location & in_mInstructionLocation,
                                                                const GALGAS_registerExpression & in_mRegister,
                                                                const GALGAS_bool & in_mWarningOnUselessBanksel
                                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegister (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mWarningOnUselessBanksel (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

