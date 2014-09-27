#ifndef map_2D_midrange_5F_declaredRoutineMap_DEFINED
#define map_2D_midrange_5F_declaredRoutineMap_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-midrange_declaredRoutineMap-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@midrange_declaredRoutineMap' map                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_midrange_5F_declaredRoutineMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_midrange_5F_declaredRoutineMap (const GALGAS_lstring & inKey
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

