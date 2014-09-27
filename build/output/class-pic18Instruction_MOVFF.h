#ifndef class_2D_pic_31__38_Instruction_5F_MOVFF_DEFINED
#define class_2D_pic_31__38_Instruction_5F_MOVFF_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-pic18Instruction_MOVFF-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-registerExpression.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @pic18Instruction_MOVFF class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_MOVFF : public cPtr_pic_31__38_PiccoloSimpleInstruction {
//--- Attributes
  public : GALGAS_registerExpression mAttribute_mSourceRegisterName ;
  public : GALGAS_registerExpression mAttribute_mDestinationRegisterName ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_MOVFF (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_registerExpression & in_mSourceRegisterName,
                                                 const GALGAS_registerExpression & in_mDestinationRegisterName
                                                 COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mSourceRegisterName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mDestinationRegisterName (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

