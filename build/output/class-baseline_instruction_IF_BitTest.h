#ifndef class_2D_baseline_5F_instruction_5F_IF_5F_BitTest_DEFINED
#define class_2D_baseline_5F_instruction_5F_IF_5F_BitTest_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_instruction_IF_BitTest-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-bitNumberExpression.h"
#include "class-registerExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @baseline_instruction_IF_BitTest class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest : public cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Attributes
  public : GALGAS_bool mAttribute_mSkipIfSet ;
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_bitNumberExpression mAttribute_mBitNumber ;

//--- Constructor
  public : cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (const GALGAS_location & in_mInstructionLocation,
                                                          const GALGAS_baseline_5F_instruction & in_mInstruction,
                                                          const GALGAS_bool & in_mSkipIfSet,
                                                          const GALGAS_registerExpression & in_mRegisterExpression,
                                                          const GALGAS_bitNumberExpression & in_mBitNumber
                                                          COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mSkipIfSet (UNUSED_LOCATION_ARGS) const ;
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

