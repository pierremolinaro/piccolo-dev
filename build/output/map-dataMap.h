#ifndef map_2D_dataMap_DEFINED
#define map_2D_dataMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-dataMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Class for element of '@dataMap' map                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_dataMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mDataSize ;

//--- Constructor
  public : cMapElement_dataMap (const GALGAS_lstring & inKey,
                                const GALGAS_uint & in_mDataSize
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

