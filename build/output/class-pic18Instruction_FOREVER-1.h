#ifndef class_2D_pic_31__38_Instruction_5F_FOREVER_1_DEFINED
#define class_2D_pic_31__38_Instruction_5F_FOREVER_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18PiccoloInstruction.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @pic_31__38_Instruction_5F_FOREVER class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_FOREVER : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_FOREVER (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pic_31__38_Instruction_5F_FOREVER constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_FOREVER * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_FOREVER *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_FOREVER (const cPtr_pic_31__38_Instruction_5F_FOREVER * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_FOREVER extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_FOREVER constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                            const class GALGAS_location & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_FOREVER & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList reader_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_FOREVER class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

