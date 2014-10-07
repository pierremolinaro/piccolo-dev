#ifndef class_2D_baseline_5F_intermediate_5F_pseudo_1_DEFINED
#define class_2D_baseline_5F_intermediate_5F_pseudo_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_intermediate_instruction.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @baseline_5F_intermediate_5F_pseudo class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_pseudo : public GALGAS_baseline_5F_intermediate_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_pseudo (void) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_pseudo * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_pseudo *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_pseudo (const cPtr_baseline_5F_intermediate_5F_pseudo * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_pseudo extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

