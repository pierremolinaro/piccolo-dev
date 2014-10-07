#ifndef class_2D_ipic_31__38_ComputedGotoTerminator_DEFINED
#define class_2D_ipic_31__38_ComputedGotoTerminator_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-ipic18ComputedGotoTerminator-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @ipic18ComputedGotoTerminator class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ipic_31__38_ComputedGotoTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {
//--- Attributes
  public : GALGAS_lstringlist mAttribute_mTargetLabels ;
  public : GALGAS_bool mAttribute_mUsesRCALL ;

//--- Constructor
  public : cPtr_ipic_31__38_ComputedGotoTerminator (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_lstringlist & in_mTargetLabels,
                                                    const GALGAS_bool & in_mUsesRCALL
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mTargetLabels (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mUsesRCALL (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

