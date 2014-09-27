#ifndef class_2D_midrange_5F_intermediate_5F_pseudo_5F_LABEL_DEFINED
#define class_2D_midrange_5F_intermediate_5F_pseudo_5F_LABEL_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-midrange_intermediate_pseudo_LABEL-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @midrange_intermediate_pseudo_LABEL class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL : public cPtr_midrange_5F_intermediate_5F_instruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mLabel ;
  public : GALGAS_bool mAttribute_mIsDeletable ;

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (const GALGAS_lstring & in_mLabel,
                                                             const GALGAS_bool & in_mIsDeletable
                                                             COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mLabel (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsDeletable (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

