#ifndef class_2D_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_DEFINED
#define class_2D_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_intermediate_pseudo_END_ROUTINE-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @baseline_intermediate_pseudo_END_ROUTINE class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE : public cPtr_baseline_5F_intermediate_5F_pseudo {
//--- Attributes
  public : GALGAS_lstring mAttribute_mRoutineName ;
  public : GALGAS_uint mAttribute_mPage ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                      const GALGAS_uint & in_mPage
                                                                      COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mRoutineName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mPage (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

