#ifndef class_2D_baseline_5F_assembly_5F_WO_5F_OPERAND_DEFINED
#define class_2D_baseline_5F_assembly_5F_WO_5F_OPERAND_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_assembly_WO_OPERAND-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "enum-baseline_WO_OPERAND_group.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @baseline_assembly_WO_OPERAND class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND : public cPtr_baseline_5F_assembly_5F_actualInstruction {
//--- Attributes
  public : GALGAS_baseline_5F_WO_5F_OPERAND_5F_group mAttribute_mInstruction ;

//--- Constructor
  public : cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND (const GALGAS_location & in_mInstructionLocation,
                                                       const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_WO_5F_OPERAND_5F_group reader_mInstruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

