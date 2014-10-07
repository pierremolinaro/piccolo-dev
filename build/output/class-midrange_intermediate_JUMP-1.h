#ifndef class_2D_midrange_5F_intermediate_5F_JUMP_1_DEFINED
#define class_2D_midrange_5F_intermediate_5F_JUMP_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-midrange_intermediate_actualInstruction.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @midrange_5F_intermediate_5F_JUMP class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_intermediate_5F_JUMP : public GALGAS_midrange_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_JUMP (void) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_JUMP * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_JUMP (const cPtr_midrange_5F_intermediate_5F_JUMP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_JUMP extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_intermediate_5F_JUMP constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_midrange_5F_call_5F_goto_5F_bit & inOperand2,
                                                                           const class GALGAS_midrange_5F_call_5F_goto_5F_bit & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_JUMP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_call_5F_goto_5F_bit reader_mBit_31__31_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_call_5F_goto_5F_bit reader_mBit_31__32_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_JUMP class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

