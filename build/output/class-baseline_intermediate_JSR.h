#ifndef class_2D_baseline_5F_intermediate_5F_JSR_DEFINED
#define class_2D_baseline_5F_intermediate_5F_JSR_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_intermediate_JSR-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @baseline_intermediate_JSR class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_JSR : public cPtr_baseline_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetLabel ;
  public : GALGAS_uint mAttribute_mCurrentPage ;
  public : GALGAS_uint mAttribute_mTargetPage ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mTargetLabel,
                                                 const GALGAS_uint & in_mCurrentPage,
                                                 const GALGAS_uint & in_mTargetPage
                                                 COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTargetLabel (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mCurrentPage (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mTargetPage (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

