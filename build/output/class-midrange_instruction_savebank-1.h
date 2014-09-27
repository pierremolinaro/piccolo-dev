#ifndef class_2D_midrange_5F_instruction_5F_savebank_1_DEFINED
#define class_2D_midrange_5F_instruction_5F_savebank_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-midrange_instruction.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @midrange_5F_instruction_5F_savebank class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_savebank : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_savebank (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_savebank constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_savebank * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_savebank (const cPtr_midrange_5F_instruction_5F_savebank * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_savebank extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_savebank constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_registerExpression & inOperand1,
                                                                              const class GALGAS_midrange_5F_instructionList & inOperand2,
                                                                              const class GALGAS_location & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_savebank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfSaveBankInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList reader_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mRegister (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_savebank class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

