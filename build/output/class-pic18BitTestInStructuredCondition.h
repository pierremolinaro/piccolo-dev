#ifndef class_2D_pic_31__38_BitTestInStructuredCondition_DEFINED
#define class_2D_pic_31__38_BitTestInStructuredCondition_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18BitTestInStructuredCondition-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-bitNumberExpression.h"
#include "class-registerExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @pic18BitTestInStructuredCondition class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_BitTestInStructuredCondition : public cPtr_pic_31__38_ConditionExpression {
//--- Attributes
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_bitNumberExpression mAttribute_mBitNumber ;
  public : GALGAS_bool mAttribute_mBTFSSinstruction ;

//--- Constructor
  public : cPtr_pic_31__38_BitTestInStructuredCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                         const GALGAS_bitNumberExpression & in_mBitNumber,
                                                         const GALGAS_bool & in_mBTFSSinstruction
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bitNumberExpression reader_mBitNumber (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mBTFSSinstruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

