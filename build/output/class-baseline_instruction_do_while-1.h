#ifndef class_2D_baseline_5F_instruction_5F_do_5F_while_1_DEFINED
#define class_2D_baseline_5F_instruction_5F_do_5F_while_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_instruction.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @baseline_5F_instruction_5F_do_5F_while class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_instruction_5F_do_5F_while : public GALGAS_baseline_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_instruction_5F_do_5F_while (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_instruction_5F_do_5F_while constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_instruction_5F_do_5F_while * ptr (void) const { return (const cPtr_baseline_5F_instruction_5F_do_5F_while *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_instruction_5F_do_5F_while (const cPtr_baseline_5F_instruction_5F_do_5F_while * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_instruction_5F_do_5F_while extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_baseline_5F_instruction_5F_do_5F_while constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_baseline_5F_instructionList & inOperand1,
                                                                                 const class GALGAS_location & inOperand2,
                                                                                 const class GALGAS_baseline_5F_partList & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_do_5F_while & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfRepeatedInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_instructionList reader_mRepeatedInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_partList reader_mWhilePartList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_do_5F_while class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

