#ifndef class_2D_midrange_5F_intermediate_5F_pseudo_5F_ORG_1_DEFINED
#define class_2D_midrange_5F_intermediate_5F_pseudo_5F_ORG_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-midrange_intermediate_instruction.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @midrange_5F_intermediate_5F_pseudo_5F_ORG class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG : public GALGAS_midrange_5F_intermediate_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG constructor_new (const class GALGAS_uint & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mOrigin (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

