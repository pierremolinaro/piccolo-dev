#ifndef class_2D_baseline_5F_assembly_5F_pseudo_5F_LABEL_1_DEFINED
#define class_2D_baseline_5F_assembly_5F_pseudo_5F_LABEL_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_assembly_instruction.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @baseline_5F_assembly_5F_pseudo_5F_LABEL class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL : public GALGAS_baseline_5F_assembly_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * ptr (void) const { return (const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL (const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL constructor_new (const class GALGAS_lstring & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

