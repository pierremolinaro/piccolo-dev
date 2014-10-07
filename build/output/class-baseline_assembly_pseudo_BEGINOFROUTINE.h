#ifndef class_2D_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_DEFINED
#define class_2D_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_assembly_pseudo_BEGINOFROUTINE-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @baseline_assembly_pseudo_BEGINOFROUTINE class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE : public cPtr_baseline_5F_assembly_5F_instruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mRoutineName ;
  public : GALGAS_bool mAttribute_mIsRegular ;

//--- Constructor
  public : cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (const GALGAS_lstring & in_mRoutineName,
                                                                  const GALGAS_bool & in_mIsRegular
                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mRoutineName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsRegular (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

