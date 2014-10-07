#ifndef class_2D_pic_31__38_Instruction_5F_do_5F_while_1_DEFINED
#define class_2D_pic_31__38_Instruction_5F_do_5F_while_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18PiccoloInstruction.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @pic_31__38_Instruction_5F_do_5F_while class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_do_5F_while : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_do_5F_while (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pic_31__38_Instruction_5F_do_5F_while constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_do_5F_while * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_do_5F_while (const cPtr_pic_31__38_Instruction_5F_do_5F_while * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_do_5F_while extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_do_5F_while constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                const class GALGAS_location & inOperand2,
                                                                                const class GALGAS_pic_31__38_DoWhilePartList & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_do_5F_while & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfRepeatedInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList reader_mRepeatedInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_DoWhilePartList reader_mWhilePartList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_do_5F_while class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

