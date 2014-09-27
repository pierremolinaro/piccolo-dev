#ifndef map_2D_dataMap_1_DEFINED
#define map_2D_dataMap_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @dataMap map                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_dataMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_dataMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_dataMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_dataMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_dataMap (const GALGAS_dataMap & inSource) ;
  public : GALGAS_dataMap & operator = (const GALGAS_dataMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_dataMap extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_dataMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_dataMap constructor_mapWithMapToOverride (const class GALGAS_dataMap & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_uint constinArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMDataSizeForKey (class GALGAS_uint constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mDataSizeForKey (const class GALGAS_string & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_dataMap reader_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_dataMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_dataMap ;
 
} ; // End of GALGAS_dataMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_dataMap : public cGenericAbstractEnumerator {
  public : cEnumerator_dataMap (const GALGAS_dataMap & inEnumeratedObject,
                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mDataSize (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_dataMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dataMap ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

