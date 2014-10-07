#ifndef class_2D_pic_31__38_RegisterTestCondition_DEFINED
#define class_2D_pic_31__38_RegisterTestCondition_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18RegisterTestCondition-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-registerExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @pic18RegisterTestCondition class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_RegisterTestCondition : public cPtr_pic_31__38_ConditionExpression {
//--- Attributes
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_bool mAttribute_mBranchIfZero ;

//--- Constructor
  public : cPtr_pic_31__38_RegisterTestCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                  const GALGAS_bool & in_mBranchIfZero
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mBranchIfZero (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

