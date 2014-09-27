#ifndef class_2D_pic_31__38_Instruction_5F_LFSR_1_DEFINED
#define class_2D_pic_31__38_Instruction_5F_LFSR_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18PiccoloSimpleInstruction.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic_31__38_Instruction_5F_LFSR class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_LFSR : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_LFSR (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_LFSR * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_LFSR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_LFSR (const cPtr_pic_31__38_Instruction_5F_LFSR * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_LFSR extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_LFSR constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_luint & inOperand1,
                                                                         const class GALGAS_immediatExpression & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_LFSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mFSRindex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression reader_mImmediatExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_LFSR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

