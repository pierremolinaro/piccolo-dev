#ifndef map_2D_declaredByteMap_1_DEFINED
#define map_2D_declaredByteMap_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @declaredByteMap map                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_declaredByteMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_declaredByteMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_declaredByteMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_declaredByteMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_declaredByteMap (const GALGAS_declaredByteMap & inSource) ;
  public : GALGAS_declaredByteMap & operator = (const GALGAS_declaredByteMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_declaredByteMap extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_declaredByteMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_declaredByteMap constructor_mapWithMapToOverride (const class GALGAS_declaredByteMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_declaredByteMap reader_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_declaredByteMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_declaredByteMap ;
 
} ; // End of GALGAS_declaredByteMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_declaredByteMap : public cGenericAbstractEnumerator {
  public : cEnumerator_declaredByteMap (const GALGAS_declaredByteMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_declaredByteMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declaredByteMap ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

