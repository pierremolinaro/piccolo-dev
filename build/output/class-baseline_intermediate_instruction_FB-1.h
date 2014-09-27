#ifndef class_2D_baseline_5F_intermediate_5F_instruction_5F_FB_1_DEFINED
#define class_2D_baseline_5F_intermediate_5F_instruction_5F_FB_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_intermediate_actualInstruction.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @baseline_5F_intermediate_5F_instruction_5F_FB class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB (void) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB constructor_new (const class GALGAS_location & inOperand0,
                                                                                        const class GALGAS_baseline_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                                        const class GALGAS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                        const class GALGAS_uint & inOperand3
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_bit_5F_oriented_5F_op reader_mInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_intermediate_5F_registerExpression reader_mRegisterDescription (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

