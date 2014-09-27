#ifndef map_2D_actualConfigurationMap_DEFINED
#define map_2D_actualConfigurationMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-actualConfigurationMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@actualConfigurationMap' map                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_actualConfigurationMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mRegisterAddress ;
  public : GALGAS_uint mAttribute_mRegisterValue ;

//--- Constructor
  public : cMapElement_actualConfigurationMap (const GALGAS_lstring & inKey,
                                               const GALGAS_uint & in_mRegisterAddress,
                                               const GALGAS_uint & in_mRegisterValue
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

