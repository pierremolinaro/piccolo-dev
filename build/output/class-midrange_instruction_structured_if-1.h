#ifndef class_2D_midrange_5F_instruction_5F_structured_5F_if_1_DEFINED
#define class_2D_midrange_5F_instruction_5F_structured_5F_if_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-midrange_instruction.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @midrange_5F_instruction_5F_structured_5F_if class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_structured_5F_if : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_structured_5F_if (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_structured_5F_if * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_structured_5F_if (const cPtr_midrange_5F_instruction_5F_structured_5F_if * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_structured_5F_if extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_structured_5F_if constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_midrange_5F_conditionExpression & inOperand1,
                                                                                      const class GALGAS_midrange_5F_instructionList & inOperand2,
                                                                                      const class GALGAS_midrange_5F_instructionList & inOperand3,
                                                                                      const class GALGAS_location & inOperand4
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_structured_5F_if & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList reader_mElseInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfElsePartLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_conditionExpression reader_mIfCondition (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList reader_mThenInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_structured_5F_if class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

