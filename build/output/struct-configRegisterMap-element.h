#ifndef struct_2D_configRegisterMap_2D_element_1_DEFINED
#define struct_2D_configRegisterMap_2D_element_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-illegalMaskList.h"
#include "map-configRegisterMaskMap-1.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @configRegisterMap_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_configRegisterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_luint mAttribute_mRegisterAddress ;
  public : GALGAS_luint mAttribute_mRegisterWidth ;
  public : GALGAS_configRegisterMaskMap mAttribute_mConfigRegisterMaskMap ;
  public : GALGAS_illegalMaskList mAttribute_mIllegalMaskList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_configRegisterMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_configRegisterMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_configRegisterMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_configRegisterMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_luint & in_mRegisterAddress,
                                                const GALGAS_luint & in_mRegisterWidth,
                                                const GALGAS_configRegisterMaskMap & in_mConfigRegisterMaskMap,
                                                const GALGAS_illegalMaskList & in_mIllegalMaskList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_configRegisterMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_configRegisterMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_luint & inOperand1,
                                                                       const class GALGAS_luint & inOperand2,
                                                                       const class GALGAS_configRegisterMaskMap & inOperand3,
                                                                       const class GALGAS_illegalMaskList & inOperand4
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_configRegisterMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_configRegisterMaskMap reader_mConfigRegisterMaskMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_illegalMaskList reader_mIllegalMaskList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mRegisterAddress (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mRegisterWidth (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_configRegisterMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configRegisterMap_2D_element ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

