#ifndef map_2D_fieldSettingMap_DEFINED
#define map_2D_fieldSettingMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-fieldSettingMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@fieldSettingMap' map                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_fieldSettingMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mValue ;
  public : GALGAS_uint mAttribute_mMask ;

//--- Constructor
  public : cMapElement_fieldSettingMap (const GALGAS_lstring & inKey,
                                        const GALGAS_uint & in_mValue,
                                        const GALGAS_uint & in_mMask
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

