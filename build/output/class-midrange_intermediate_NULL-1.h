#ifndef class_2D_midrange_5F_intermediate_5F_NULL_1_DEFINED
#define class_2D_midrange_5F_intermediate_5F_NULL_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-midrange_intermediate_instruction.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @midrange_5F_intermediate_5F_NULL class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_intermediate_5F_NULL : public GALGAS_midrange_5F_intermediate_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_NULL (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_NULL constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_NULL * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_NULL *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_NULL (const cPtr_midrange_5F_intermediate_5F_NULL * inSourcePtr) ;



//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_NULL extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_intermediate_5F_NULL constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_NULL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_NULL class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

