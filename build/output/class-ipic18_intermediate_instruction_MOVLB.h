#ifndef class_2D_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_DEFINED
#define class_2D_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-ipic18_intermediate_instruction_MOVLB-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @ipic18_intermediate_instruction_MOVLB class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_luint mAttribute_mBankIndex ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_luint & in_mBankIndex
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint reader_mBankIndex (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

