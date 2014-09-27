#ifndef class_2D_ipic_31__38_AbstractConditionTerminator_DEFINED
#define class_2D_ipic_31__38_AbstractConditionTerminator_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-ipic18AbstractConditionTerminator-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-ipic18SingleInstructionTerminator.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @ipic18AbstractConditionTerminator class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38_AbstractConditionTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {
//--- Attributes
  public : GALGAS_ipic_31__38_SingleInstructionTerminator mAttribute_mSingleInstructionTerminatorIfConditionTrue ;
  public : GALGAS_ipic_31__38_SingleInstructionTerminator mAttribute_mSingleInstructionTerminatorIfConditionFalse ;

//--- Constructor
  public : cPtr_ipic_31__38_AbstractConditionTerminator (const GALGAS_location & in_mInstructionLocation,
                                                         const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                         const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse
                                                         COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38_SingleInstructionTerminator reader_mSingleInstructionTerminatorIfConditionTrue (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38_SingleInstructionTerminator reader_mSingleInstructionTerminatorIfConditionFalse (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

