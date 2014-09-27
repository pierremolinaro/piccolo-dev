#ifndef map_2D_registerTable_DEFINED
#define map_2D_registerTable_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-registerTable-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "map-bitSliceTable-1.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@registerTable' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_registerTable : public cMapElement {
//--- Map attributes
  public : GALGAS_uintlist mAttribute_mRegisterAddressList ;
  public : GALGAS_uint mAttribute_mSize ;
  public : GALGAS_bitSliceTable mAttribute_mBitSliceTable ;
  public : GALGAS_string mAttribute_mBitDefinitionString ;

//--- Constructor
  public : cMapElement_registerTable (const GALGAS_lstring & inKey,
                                      const GALGAS_uintlist & in_mRegisterAddressList,
                                      const GALGAS_uint & in_mSize,
                                      const GALGAS_bitSliceTable & in_mBitSliceTable,
                                      const GALGAS_string & in_mBitDefinitionString
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

