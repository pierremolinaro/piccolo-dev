#ifndef class_2D_baseline_5F_assembly_5F_TRIS_DEFINED
#define class_2D_baseline_5F_assembly_5F_TRIS_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_assembly_TRIS-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @baseline_assembly_TRIS class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_assembly_5F_TRIS : public cPtr_baseline_5F_assembly_5F_actualInstruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mOperand ;
  public : GALGAS_uint mAttribute_mOpcode ;

//--- Constructor
  public : cPtr_baseline_5F_assembly_5F_TRIS (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_lstring & in_mOperand,
                                              const GALGAS_uint & in_mOpcode
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOperand (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mOpcode (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

