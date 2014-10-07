#ifndef class_2D_immediatGreaterOrEqualTest_1_DEFINED
#define class_2D_immediatGreaterOrEqualTest_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-immediatExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @immediatGreaterOrEqualTest class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_immediatGreaterOrEqualTest : public GALGAS_immediatExpression {
//--- Constructor
  public : GALGAS_immediatGreaterOrEqualTest (void) ;

//---
  public : inline const class cPtr_immediatGreaterOrEqualTest * ptr (void) const { return (const cPtr_immediatGreaterOrEqualTest *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_immediatGreaterOrEqualTest (const cPtr_immediatGreaterOrEqualTest * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_immediatGreaterOrEqualTest extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_immediatGreaterOrEqualTest constructor_new (const class GALGAS_immediatExpression & inOperand0,
                                                                     const class GALGAS_immediatExpression & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_immediatGreaterOrEqualTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_immediatGreaterOrEqualTest class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

