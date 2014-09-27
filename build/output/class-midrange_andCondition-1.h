#ifndef class_2D_midrange_5F_andCondition_1_DEFINED
#define class_2D_midrange_5F_andCondition_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-midrange_conditionExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @midrange_5F_andCondition class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_andCondition : public GALGAS_midrange_5F_conditionExpression {
//--- Constructor
  public : GALGAS_midrange_5F_andCondition (void) ;

//---
  public : inline const class cPtr_midrange_5F_andCondition * ptr (void) const { return (const cPtr_midrange_5F_andCondition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_andCondition (const cPtr_midrange_5F_andCondition * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_andCondition extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_andCondition constructor_new (const class GALGAS_midrange_5F_conditionExpression & inOperand0,
                                                                   const class GALGAS_midrange_5F_conditionExpression & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_andCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_conditionExpression reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_conditionExpression reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_andCondition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_andCondition ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

