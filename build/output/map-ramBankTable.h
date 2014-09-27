#ifndef map_2D_ramBankTable_DEFINED
#define map_2D_ramBankTable_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-ramBankTable-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@ramBankTable' map                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_ramBankTable : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mFirstAddress ;
  public : GALGAS_uint mAttribute_mFirstFreeAddress ;
  public : GALGAS_uint mAttribute_mLastAddressPlusOne ;
  public : GALGAS_uintlist mAttribute_mMirrorOffsetList ;

//--- Constructor
  public : cMapElement_ramBankTable (const GALGAS_lstring & inKey,
                                     const GALGAS_uint & in_mFirstAddress,
                                     const GALGAS_uint & in_mFirstFreeAddress,
                                     const GALGAS_uint & in_mLastAddressPlusOne,
                                     const GALGAS_uintlist & in_mMirrorOffsetList
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

