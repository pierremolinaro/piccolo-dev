#ifndef map_2D_symbolTableForOptimizations_DEFINED
#define map_2D_symbolTableForOptimizations_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-symbolTableForOptimizations-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@symbolTableForOptimizations' map                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_symbolTableForOptimizations : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mDefinitionLineIndex ;
  public : GALGAS_bool mAttribute_mIsDeletable ;

//--- Constructor
  public : cMapElement_symbolTableForOptimizations (const GALGAS_lstring & inKey,
                                                    const GALGAS_uint & in_mDefinitionLineIndex,
                                                    const GALGAS_bool & in_mIsDeletable
                                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

