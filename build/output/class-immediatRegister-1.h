#ifndef class_2D_immediatRegister_1_DEFINED
#define class_2D_immediatRegister_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-immediatExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @immediatRegister class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_immediatRegister : public GALGAS_immediatExpression {
//--- Constructor
  public : GALGAS_immediatRegister (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_immediatRegister constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_immediatRegister * ptr (void) const { return (const cPtr_immediatRegister *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_immediatRegister (const cPtr_immediatRegister * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_immediatRegister extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_immediatRegister constructor_new (const class GALGAS_registerExpression & inOperand0
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_immediatRegister & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mRegister (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_immediatRegister class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatRegister ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

