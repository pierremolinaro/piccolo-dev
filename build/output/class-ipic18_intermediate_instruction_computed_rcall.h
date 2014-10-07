#ifndef class_2D_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_DEFINED
#define class_2D_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-ipic18_intermediate_instruction_computed_rcall-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-ipic18SequentialInstructionList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Pointer class for @ipic18_intermediate_instruction_computed_rcall class                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_ipic_31__38_SequentialInstructionList mAttribute_mTargetInstructions ;
  public : GALGAS_bool mAttribute_mUsesRCALL ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_ipic_31__38_SequentialInstructionList & in_mTargetInstructions,
                                                                                  const GALGAS_bool & in_mUsesRCALL
                                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38_SequentialInstructionList reader_mTargetInstructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mUsesRCALL (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

