#ifndef class_2D_baseline_5F_instruction_5F_FOREVER_DEFINED
#define class_2D_baseline_5F_instruction_5F_FOREVER_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_instruction_FOREVER-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-baseline_instructionList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @baseline_instruction_FOREVER class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_instruction_5F_FOREVER : public cPtr_baseline_5F_instruction {
//--- Attributes
  public : GALGAS_baseline_5F_instructionList mAttribute_mInstructionList ;
  public : GALGAS_location mAttribute_mEndOfInstructionList ;

//--- Constructor
  public : cPtr_baseline_5F_instruction_5F_FOREVER (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                    const GALGAS_location & in_mEndOfInstructionList
                                                    COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_instructionList reader_mInstructionList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfInstructionList (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

