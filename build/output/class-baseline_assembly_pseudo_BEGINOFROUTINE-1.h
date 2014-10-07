#ifndef class_2D_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_1_DEFINED
#define class_2D_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_assembly_instruction.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE : public GALGAS_baseline_5F_assembly_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * ptr (void) const { return (const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_bool & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsRegular (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

