#ifndef class_2D_pic_31__38_Instruction_5F_computed_5F_retlw_1_DEFINED
#define class_2D_pic_31__38_Instruction_5F_computed_5F_retlw_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18PiccoloInstruction.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @pic_31__38_Instruction_5F_computed_5F_retlw class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw (const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_immediatExpression & inOperand1,
                                                                                      const class GALGAS_immediatExpressionList & inOperand2,
                                                                                      const class GALGAS_bool & inOperand3
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpressionList reader_mImmediateExpressionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression reader_mSizeExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mUsesRelativeCall (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

