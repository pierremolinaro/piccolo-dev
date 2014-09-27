#ifndef class_2D_registerExpression_1_DEFINED
#define class_2D_registerExpression_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @registerExpression class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_registerExpression : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_registerExpression (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_registerExpression constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_registerExpression * ptr (void) const { return (const cPtr_registerExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_registerExpression (const cPtr_registerExpression * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_registerExpression extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_registerExpression constructor_new (const class GALGAS_lstring & inOperand0,
                                                             const class GALGAS_luint & inOperand1
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_registerExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mOffset (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mRegisterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_registerExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerExpression ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

