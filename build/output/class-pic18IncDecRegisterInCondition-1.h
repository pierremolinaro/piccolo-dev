#ifndef class_2D_pic_31__38_IncDecRegisterInCondition_1_DEFINED
#define class_2D_pic_31__38_IncDecRegisterInCondition_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18ConditionExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @pic_31__38_IncDecRegisterInCondition class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_IncDecRegisterInCondition : public GALGAS_pic_31__38_ConditionExpression {
//--- Constructor
  public : GALGAS_pic_31__38_IncDecRegisterInCondition (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pic_31__38_IncDecRegisterInCondition constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_pic_31__38_IncDecRegisterInCondition * ptr (void) const { return (const cPtr_pic_31__38_IncDecRegisterInCondition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_IncDecRegisterInCondition (const cPtr_pic_31__38_IncDecRegisterInCondition * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_IncDecRegisterInCondition extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_IncDecRegisterInCondition constructor_new (const class GALGAS_registerExpression & inOperand0,
                                                                               const class GALGAS_bool & inOperand1,
                                                                               const class GALGAS_bool & inOperand2,
                                                                               const class GALGAS_bool & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_IncDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mBranchIfZero (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIncrement (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_IncDecRegisterInCondition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

