#ifndef class_2D_bitNumberExpression_1_DEFINED
#define class_2D_bitNumberExpression_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @bitNumberExpression class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bitNumberExpression : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_bitNumberExpression (void) ;

//---
  public : inline const class cPtr_bitNumberExpression * ptr (void) const { return (const cPtr_bitNumberExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_bitNumberExpression (const cPtr_bitNumberExpression * inSourcePtr) ;



//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bitNumberExpression extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_bitNumberExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bitNumberExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberExpression ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

