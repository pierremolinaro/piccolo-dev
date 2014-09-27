#ifndef struct_2D_registerTable_2D_element_1_DEFINED
#define struct_2D_registerTable_2D_element_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "map-bitSliceTable-1.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @registerTable_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_registerTable_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uintlist mAttribute_mRegisterAddressList ;
  public : GALGAS_uint mAttribute_mSize ;
  public : GALGAS_bitSliceTable mAttribute_mBitSliceTable ;
  public : GALGAS_string mAttribute_mBitDefinitionString ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_registerTable_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_registerTable_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_registerTable_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_registerTable_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_uintlist & in_mRegisterAddressList,
                                            const GALGAS_uint & in_mSize,
                                            const GALGAS_bitSliceTable & in_mBitSliceTable,
                                            const GALGAS_string & in_mBitDefinitionString) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_registerTable_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_registerTable_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_uintlist & inOperand1,
                                                                   const class GALGAS_uint & inOperand2,
                                                                   const class GALGAS_bitSliceTable & inOperand3,
                                                                   const class GALGAS_string & inOperand4
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_registerTable_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBitDefinitionString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bitSliceTable reader_mBitSliceTable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uintlist reader_mRegisterAddressList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mSize (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_registerTable_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerTable_2D_element ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

