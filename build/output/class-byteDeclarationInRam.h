#ifndef class_2D_byteDeclarationInRam_DEFINED
#define class_2D_byteDeclarationInRam_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-byteDeclarationInRam-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "map-bitSliceTable.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @byteDeclarationInRam class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_byteDeclarationInRam : public cPtr_declarationInRam {
//--- Attributes
  public : GALGAS_lstring mAttribute_mName ;
  public : GALGAS_luint mAttribute_mSize ;
  public : GALGAS_bitSliceTable mAttribute_mBitSliceTable ;
  public : GALGAS_string mAttribute_mBitDefinitionString ;

//--- Constructor
  public : cPtr_byteDeclarationInRam (const GALGAS_lstring & in_mName,
                                      const GALGAS_luint & in_mSize,
                                      const GALGAS_bitSliceTable & in_mBitSliceTable,
                                      const GALGAS_string & in_mBitDefinitionString
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_luint reader_mSize (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bitSliceTable reader_mBitSliceTable (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mBitDefinitionString (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

