#ifndef class_2D_gotoTerminationForBlockInstruction_1_DEFINED
#define class_2D_gotoTerminationForBlockInstruction_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-abstractBlockTerminationForBlockInstruction.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @gotoTerminationForBlockInstruction class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gotoTerminationForBlockInstruction : public GALGAS_abstractBlockTerminationForBlockInstruction {
//--- Constructor
  public : GALGAS_gotoTerminationForBlockInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_gotoTerminationForBlockInstruction constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_gotoTerminationForBlockInstruction * ptr (void) const { return (const cPtr_gotoTerminationForBlockInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gotoTerminationForBlockInstruction (const cPtr_gotoTerminationForBlockInstruction * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gotoTerminationForBlockInstruction extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_gotoTerminationForBlockInstruction constructor_new (const class GALGAS_lstring & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gotoTerminationForBlockInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mNextBlock (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gotoTerminationForBlockInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

