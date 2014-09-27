#ifndef class_2D_immediatNegate_1_DEFINED
#define class_2D_immediatNegate_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-immediatExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @immediatNegate class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_immediatNegate : public GALGAS_immediatExpression {
//--- Constructor
  public : GALGAS_immediatNegate (void) ;

//---
  public : inline const class cPtr_immediatNegate * ptr (void) const { return (const cPtr_immediatNegate *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_immediatNegate (const cPtr_immediatNegate * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_immediatNegate extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_immediatNegate constructor_new (const class GALGAS_immediatExpression & inOperand0
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_immediatNegate & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression reader_mExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_immediatNegate class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatNegate ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

