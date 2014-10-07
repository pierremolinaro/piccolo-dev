#ifndef class_2D_testTerminationForBlockInstruction_DEFINED
#define class_2D_testTerminationForBlockInstruction_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-testTerminationForBlockInstruction-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-abstractBlockTerminationForBlockInstruction.h"
#include "class-pic18ConditionExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @testTerminationForBlockInstruction class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_testTerminationForBlockInstruction : public cPtr_abstractBlockTerminationForBlockInstruction {
//--- Attributes
  public : GALGAS_pic_31__38_ConditionExpression mAttribute_mCondition ;
  public : GALGAS_abstractBlockTerminationForBlockInstruction mAttribute_mTrueTermination ;
  public : GALGAS_abstractBlockTerminationForBlockInstruction mAttribute_mFalseTermination ;
  public : GALGAS_location mAttribute_mLocation ;

//--- Constructor
  public : cPtr_testTerminationForBlockInstruction (const GALGAS_pic_31__38_ConditionExpression & in_mCondition,
                                                    const GALGAS_abstractBlockTerminationForBlockInstruction & in_mTrueTermination,
                                                    const GALGAS_abstractBlockTerminationForBlockInstruction & in_mFalseTermination,
                                                    const GALGAS_location & in_mLocation
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_ConditionExpression reader_mCondition (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBlockTerminationForBlockInstruction reader_mTrueTermination (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBlockTerminationForBlockInstruction reader_mFalseTermination (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

