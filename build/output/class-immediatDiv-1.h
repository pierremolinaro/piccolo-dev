#ifndef class_2D_immediatDiv_1_DEFINED
#define class_2D_immediatDiv_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-immediatExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @immediatDiv class                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_immediatDiv : public GALGAS_immediatExpression {
//--- Constructor
  public : GALGAS_immediatDiv (void) ;

//---
  public : inline const class cPtr_immediatDiv * ptr (void) const { return (const cPtr_immediatDiv *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_immediatDiv (const cPtr_immediatDiv * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_immediatDiv extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_immediatDiv constructor_new (const class GALGAS_immediatExpression & inOperand0,
                                                      const class GALGAS_immediatExpression & inOperand1
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_immediatDiv & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_immediatDiv class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatDiv ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

