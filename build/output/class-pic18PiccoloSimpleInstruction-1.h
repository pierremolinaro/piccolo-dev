#ifndef class_2D_pic_31__38_PiccoloSimpleInstruction_1_DEFINED
#define class_2D_pic_31__38_PiccoloSimpleInstruction_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18PiccoloInstruction.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @pic_31__38_PiccoloSimpleInstruction class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_PiccoloSimpleInstruction : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_PiccoloSimpleInstruction (void) ;

//---
  public : inline const class cPtr_pic_31__38_PiccoloSimpleInstruction * ptr (void) const { return (const cPtr_pic_31__38_PiccoloSimpleInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_PiccoloSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_PiccoloSimpleInstruction extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_PiccoloSimpleInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_PiccoloSimpleInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

