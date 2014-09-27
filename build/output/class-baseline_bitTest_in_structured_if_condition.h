#ifndef class_2D_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_DEFINED
#define class_2D_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_bitTest_in_structured_if_condition-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-bitNumberExpression.h"
#include "class-registerExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Pointer class for @baseline_bitTest_in_structured_if_condition class                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition : public cPtr_baseline_5F_conditionExpression {
//--- Attributes
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_bitNumberExpression mAttribute_mBitNumber ;
  public : GALGAS_bool mAttribute_mBTFSSinstruction ;

//--- Constructor
  public : cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                            const GALGAS_bitNumberExpression & in_mBitNumber,
                                                                            const GALGAS_bool & in_mBTFSSinstruction
                                                                            COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bitNumberExpression reader_mBitNumber (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mBTFSSinstruction (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

