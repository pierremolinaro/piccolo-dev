#ifndef class_2D_pic_31__38_PiccoloInstruction_DEFINED
#define class_2D_pic_31__38_PiccoloInstruction_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18PiccoloInstruction-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @pic18PiccoloInstruction class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_PiccoloInstruction : public acPtr_class {
//--- Attributes
  public : GALGAS_location mAttribute_mInstructionLocation ;

//--- Constructor
  public : cPtr_pic_31__38_PiccoloInstruction (const GALGAS_location & in_mInstructionLocation
                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

