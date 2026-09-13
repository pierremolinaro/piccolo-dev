#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
// Phase 1: @_32_lstringlist list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator__32_lstringlist final {
  public: DownEnumerator__32_lstringlist (const class GGS__32_lstringlist & inList) ;

  public: ~ DownEnumerator__32_lstringlist (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mValue_30_ (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mValue_31_ (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS__32_lstringlist_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS__32_lstringlist_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator__32_lstringlist (const DownEnumerator__32_lstringlist &) = delete ;
  private: DownEnumerator__32_lstringlist & operator = (const DownEnumerator__32_lstringlist &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__32_lstringlist final {
  public: UpEnumerator__32_lstringlist (const class GGS__32_lstringlist & inList)  ;

  public: ~ UpEnumerator__32_lstringlist (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mValue_30_ (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mValue_31_ (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS__32_lstringlist_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS__32_lstringlist_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator__32_lstringlist (const UpEnumerator__32_lstringlist &) = delete ;
  private: UpEnumerator__32_lstringlist & operator = (const UpEnumerator__32_lstringlist &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @2lstringlist list
//--------------------------------------------------------------------------------------------------

class GGS__32_lstringlist : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS__32_lstringlist_2E_element> mArray ;

//--- Default constructor
  public: GGS__32_lstringlist (void) ;

//--- Destructor
  public: virtual ~ GGS__32_lstringlist (void) = default ;

//--- Copy
  public: GGS__32_lstringlist (const GGS__32_lstringlist &) = default ;
  public: GGS__32_lstringlist & operator = (const GGS__32_lstringlist &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS__32_lstringlist_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS__32_lstringlist subList (const int32_t inStart,
                                        const int32_t inLength,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS__32_lstringlist (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mValue_30_,
                                                 const class GGS_lstring & in_mValue_31_
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__32_lstringlist init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS__32_lstringlist extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS__32_lstringlist class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__32_lstringlist inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS__32_lstringlist_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__32_lstringlist add_operation (const GGS__32_lstringlist & inOperand,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstring constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstring & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstring & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMValue_30_AtIndex (class GGS_lstring constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMValue_31_AtIndex (class GGS_lstring constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstring & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lstring & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mValue_30_AtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mValue_31_AtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS__32_lstringlist getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS__32_lstringlist getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS__32_lstringlist getter_subListWithRange (const class GGS_range & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__32_lstringlist ;
  friend class DownEnumerator__32_lstringlist ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstringlist ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @_32_lstringlist_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS__32_lstringlist_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mValue_30_ ;
  public: inline GGS_lstring readProperty_mValue_30_ (void) const {
    return mProperty_mValue_30_ ;
  }

  public: GGS_lstring mProperty_mValue_31_ ;
  public: inline GGS_lstring readProperty_mValue_31_ (void) const {
    return mProperty_mValue_31_ ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS__32_lstringlist_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValue_30_ (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_30_ = inValue ;
  }

  public: inline void setter_setMValue_31_ (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_31_ = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS__32_lstringlist_2E_element (const GGS_lstring & in_mValue_30_,
                                          const GGS_lstring & in_mValue_31_) ;

//--------------------------------- Copy constructor
  public: GGS__32_lstringlist_2E_element (const GGS__32_lstringlist_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS__32_lstringlist_2E_element & operator = (const GGS__32_lstringlist_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__32_lstringlist_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS__32_lstringlist_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstringlist_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @declaredByteMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_declaredByteMap final {

  public: DownEnumerator_declaredByteMap (const class GGS_declaredByteMap & inMap) ;

  public: ~ DownEnumerator_declaredByteMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_declaredByteMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_declaredByteMap (const DownEnumerator_declaredByteMap &) = delete ;
  private: DownEnumerator_declaredByteMap & operator = (const DownEnumerator_declaredByteMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_declaredByteMap final {
  public: UpEnumerator_declaredByteMap (const class GGS_declaredByteMap & inMap)  ;

  public: ~ UpEnumerator_declaredByteMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_declaredByteMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_declaredByteMap (const UpEnumerator_declaredByteMap &) = delete ;
  private: UpEnumerator_declaredByteMap & operator = (const UpEnumerator_declaredByteMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_declaredByteMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_declaredByteMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_declaredByteMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_declaredByteMap (void) ;

//--- Handle copy
  public: GGS_declaredByteMap (const GGS_declaredByteMap & inSource) ;
  public: GGS_declaredByteMap & operator = (const GGS_declaredByteMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_declaredByteMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_declaredByteMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_declaredByteMap init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_declaredByteMap extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_declaredByteMap class_func_mapWithMapToOverride (const class GGS_declaredByteMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_declaredByteMap getter_overriddenMap (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_declaredByteMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_declaredByteMap ;
  friend class DownEnumerator_declaredByteMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declaredByteMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @declaredByteMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_declaredByteMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_declaredByteMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_declaredByteMap_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_declaredByteMap_2E_element (const GGS_declaredByteMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_declaredByteMap_2E_element & operator = (const GGS_declaredByteMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_declaredByteMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_declaredByteMap_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declaredByteMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: declaredByteMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_declaredByteMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_declaredByteMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_declaredByteMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_declaredByteMap_2E_element_3F_ (const GGS_declaredByteMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_declaredByteMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_declaredByteMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_declaredByteMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declaredByteMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @registerTable map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_registerTable final {

  public: DownEnumerator_registerTable (const class GGS_registerTable & inMap) ;

  public: ~ DownEnumerator_registerTable (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uintlist current_mRegisterAddressList (LOCATION_ARGS) const ;

  public: class GGS_uint current_mSize (LOCATION_ARGS) const ;

  public: class GGS_bitSliceTable current_mBitSliceTable (LOCATION_ARGS) const ;

  public: class GGS_string current_mBitDefinitionString (LOCATION_ARGS) const ;

  public: class GGS_registerProtection current_mProtection (LOCATION_ARGS) const ;

  public: class GGS_registerTable_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_registerTable (const DownEnumerator_registerTable &) = delete ;
  private: DownEnumerator_registerTable & operator = (const DownEnumerator_registerTable &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_registerTable final {
  public: UpEnumerator_registerTable (const class GGS_registerTable & inMap)  ;

  public: ~ UpEnumerator_registerTable (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uintlist current_mRegisterAddressList (LOCATION_ARGS) const ;
  public: class GGS_uint current_mSize (LOCATION_ARGS) const ;
  public: class GGS_bitSliceTable current_mBitSliceTable (LOCATION_ARGS) const ;
  public: class GGS_string current_mBitDefinitionString (LOCATION_ARGS) const ;
  public: class GGS_registerProtection current_mProtection (LOCATION_ARGS) const ;
  public: class GGS_registerTable_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_registerTable (const UpEnumerator_registerTable &) = delete ;
  private: UpEnumerator_registerTable & operator = (const UpEnumerator_registerTable &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_registerTable : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_registerTable_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_registerTable (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_registerTable (void) ;

//--- Handle copy
  public: GGS_registerTable (const GGS_registerTable & inSource) ;
  public: GGS_registerTable & operator = (const GGS_registerTable & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_registerTable_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_registerTable_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_registerTable init (Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerTable extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_registerTable class_func_mapWithMapToOverride (const class GGS_registerTable & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uintlist constinArgument1,
                                 class GGS_uint constinArgument2,
                                 class GGS_bitSliceTable constinArgument3,
                                 class GGS_string constinArgument4,
                                 class GGS_registerProtection constinArgument5,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMBitDefinitionStringForKey (class GGS_string constinArgument0,
                                                     class GGS_string constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMBitSliceTableForKey (class GGS_bitSliceTable constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMProtectionForKey (class GGS_registerProtection constinArgument0,
                                            class GGS_string constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMRegisterAddressListForKey (class GGS_uintlist constinArgument0,
                                                     class GGS_string constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMSizeForKey (class GGS_uint constinArgument0,
                                      class GGS_string constinArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_uintlist & outArgument1,
                                 class GGS_uint & outArgument2,
                                 class GGS_bitSliceTable & outArgument3,
                                 class GGS_string & outArgument4,
                                 class GGS_registerProtection & outArgument5,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mBitDefinitionStringForKey (const class GGS_string & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_bitSliceTable getter_mBitSliceTableForKey (const class GGS_string & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_registerProtection getter_mProtectionForKey (const class GGS_string & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_uintlist getter_mRegisterAddressListForKey (const class GGS_string & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mSizeForKey (const class GGS_string & constinOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_registerTable getter_overriddenMap (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_registerTable_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_registerTable ;
  friend class DownEnumerator_registerTable ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerTable ;

//--------------------------------------------------------------------------------------------------
//   enum registerProtection
//--------------------------------------------------------------------------------------------------

class GGS_registerProtection : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_registerProtection (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_publicRegister,
    enum_protectedRegister,
    enum_privateRegister
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerProtection extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_registerProtection class_func_privateRegister (LOCATION_ARGS) ;

  public: static class GGS_registerProtection class_func_protectedRegister (LOCATION_ARGS) ;

  public: static class GGS_registerProtection class_func_publicRegister (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isPrivateRegister (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isProtectedRegister (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isPublicRegister (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerProtection ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bitSliceTable map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_bitSliceTable final {

  public: DownEnumerator_bitSliceTable (const class GGS_bitSliceTable & inMap) ;

  public: ~ DownEnumerator_bitSliceTable (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mSliceIndex (LOCATION_ARGS) const ;

  public: class GGS_uint current_mSliceSize (LOCATION_ARGS) const ;

  public: class GGS_bitSliceTable_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_bitSliceTable_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_bitSliceTable (const DownEnumerator_bitSliceTable &) = delete ;
  private: DownEnumerator_bitSliceTable & operator = (const DownEnumerator_bitSliceTable &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_bitSliceTable final {
  public: UpEnumerator_bitSliceTable (const class GGS_bitSliceTable & inMap)  ;

  public: ~ UpEnumerator_bitSliceTable (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mSliceIndex (LOCATION_ARGS) const ;
  public: class GGS_uint current_mSliceSize (LOCATION_ARGS) const ;
  public: class GGS_bitSliceTable_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_bitSliceTable_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_bitSliceTable (const UpEnumerator_bitSliceTable &) = delete ;
  private: UpEnumerator_bitSliceTable & operator = (const UpEnumerator_bitSliceTable &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_bitSliceTable : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_bitSliceTable_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_bitSliceTable (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_bitSliceTable (void) ;

//--- Handle copy
  public: GGS_bitSliceTable (const GGS_bitSliceTable & inSource) ;
  public: GGS_bitSliceTable & operator = (const GGS_bitSliceTable & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_bitSliceTable_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_bitSliceTable_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_bitSliceTable_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bitSliceTable init (Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bitSliceTable extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitSliceTable class_func_mapWithMapToOverride (const class GGS_bitSliceTable & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uint constinArgument1,
                                 class GGS_uint constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMSliceIndexForKey (class GGS_uint constinArgument0,
                                            class GGS_string constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMSliceSizeForKey (class GGS_uint constinArgument0,
                                           class GGS_string constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_uint & outArgument1,
                                 class GGS_uint & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mSliceIndexForKey (const class GGS_string & constinOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mSliceSizeForKey (const class GGS_string & constinOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_bitSliceTable getter_overriddenMap (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_bitSliceTable_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_bitSliceTable ;
  friend class DownEnumerator_bitSliceTable ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitSliceTable ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @registerTable_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_registerTable_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uintlist mProperty_mRegisterAddressList ;
  public: inline GGS_uintlist readProperty_mRegisterAddressList (void) const {
    return mProperty_mRegisterAddressList ;
  }

  public: GGS_uint mProperty_mSize ;
  public: inline GGS_uint readProperty_mSize (void) const {
    return mProperty_mSize ;
  }

  public: GGS_bitSliceTable mProperty_mBitSliceTable ;
  public: inline GGS_bitSliceTable readProperty_mBitSliceTable (void) const {
    return mProperty_mBitSliceTable ;
  }

  public: GGS_string mProperty_mBitDefinitionString ;
  public: inline GGS_string readProperty_mBitDefinitionString (void) const {
    return mProperty_mBitDefinitionString ;
  }

  public: GGS_registerProtection mProperty_mProtection ;
  public: inline GGS_registerProtection readProperty_mProtection (void) const {
    return mProperty_mProtection ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_registerTable_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRegisterAddressList (const GGS_uintlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterAddressList = inValue ;
  }

  public: inline void setter_setMSize (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSize = inValue ;
  }

  public: inline void setter_setMBitSliceTable (const GGS_bitSliceTable & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitSliceTable = inValue ;
  }

  public: inline void setter_setMBitDefinitionString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitDefinitionString = inValue ;
  }

  public: inline void setter_setMProtection (const GGS_registerProtection & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProtection = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_registerTable_2E_element (const GGS_lstring & in_lkey,
                                        const GGS_uintlist & in_mRegisterAddressList,
                                        const GGS_uint & in_mSize,
                                        const GGS_bitSliceTable & in_mBitSliceTable,
                                        const GGS_string & in_mBitDefinitionString,
                                        const GGS_registerProtection & in_mProtection) ;

//--------------------------------- Copy constructor
  public: GGS_registerTable_2E_element (const GGS_registerTable_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_registerTable_2E_element & operator = (const GGS_registerTable_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_registerTable_2E_element init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_uintlist & inOperand1,
                                                                            const class GGS_uint & inOperand2,
                                                                            const class GGS_bitSliceTable & inOperand3,
                                                                            const class GGS_string & inOperand4,
                                                                            const class GGS_registerProtection & inOperand5,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerTable_2E_element extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerTable_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: registerTable.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_registerTable_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_registerTable_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_registerTable_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_registerTable_2E_element_3F_ (const GGS_registerTable_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_registerTable_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_registerTable_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerTable_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerTable_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bitSliceTable_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_bitSliceTable_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mSliceIndex ;
  public: inline GGS_uint readProperty_mSliceIndex (void) const {
    return mProperty_mSliceIndex ;
  }

  public: GGS_uint mProperty_mSliceSize ;
  public: inline GGS_uint readProperty_mSliceSize (void) const {
    return mProperty_mSliceSize ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_bitSliceTable_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMSliceIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSliceIndex = inValue ;
  }

  public: inline void setter_setMSliceSize (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSliceSize = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_bitSliceTable_2E_element (const GGS_lstring & in_lkey,
                                        const GGS_uint & in_mSliceIndex,
                                        const GGS_uint & in_mSliceSize) ;

//--------------------------------- Copy constructor
  public: GGS_bitSliceTable_2E_element (const GGS_bitSliceTable_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_bitSliceTable_2E_element & operator = (const GGS_bitSliceTable_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bitSliceTable_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_uint & inOperand1,
                                                                const class GGS_uint & inOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bitSliceTable_2E_element extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitSliceTable_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: bitSliceTable.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_bitSliceTable_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_bitSliceTable_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_bitSliceTable_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_bitSliceTable_2E_element_3F_ (const GGS_bitSliceTable_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_bitSliceTable_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_bitSliceTable_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bitSliceTable_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitSliceTable_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@registerTable checkPrivateAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkPrivateAccess (const class GGS_registerTable inObject,
                                         const class GGS_lstring constin_inKey,
                                         const class GGS_bool constin_inWriteAccess,
                                         const class GGS_registerProtection constin_inRegisterProtection,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ramBankTable map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_ramBankTable final {

  public: DownEnumerator_ramBankTable (const class GGS_ramBankTable & inMap) ;

  public: ~ DownEnumerator_ramBankTable (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mFirstAddress (LOCATION_ARGS) const ;

  public: class GGS_uint current_mFirstFreeAddress (LOCATION_ARGS) const ;

  public: class GGS_uint current_mLastAddressPlusOne (LOCATION_ARGS) const ;

  public: class GGS_uintlist current_mMirrorOffsetList (LOCATION_ARGS) const ;

  public: class GGS_ramBankTable_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_ramBankTable (const DownEnumerator_ramBankTable &) = delete ;
  private: DownEnumerator_ramBankTable & operator = (const DownEnumerator_ramBankTable &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_ramBankTable final {
  public: UpEnumerator_ramBankTable (const class GGS_ramBankTable & inMap)  ;

  public: ~ UpEnumerator_ramBankTable (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mFirstAddress (LOCATION_ARGS) const ;
  public: class GGS_uint current_mFirstFreeAddress (LOCATION_ARGS) const ;
  public: class GGS_uint current_mLastAddressPlusOne (LOCATION_ARGS) const ;
  public: class GGS_uintlist current_mMirrorOffsetList (LOCATION_ARGS) const ;
  public: class GGS_ramBankTable_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_ramBankTable (const UpEnumerator_ramBankTable &) = delete ;
  private: UpEnumerator_ramBankTable & operator = (const UpEnumerator_ramBankTable &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_ramBankTable : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_ramBankTable_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_ramBankTable (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_ramBankTable (void) ;

//--- Handle copy
  public: GGS_ramBankTable (const GGS_ramBankTable & inSource) ;
  public: GGS_ramBankTable & operator = (const GGS_ramBankTable & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_ramBankTable_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ramBankTable init (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ramBankTable extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ramBankTable class_func_mapWithMapToOverride (const class GGS_ramBankTable & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uint constinArgument1,
                                 class GGS_uint constinArgument2,
                                 class GGS_uint constinArgument3,
                                 class GGS_uintlist constinArgument4,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMFirstAddressForKey (class GGS_uint constinArgument0,
                                              class GGS_string constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

  public: void setter_setMFirstFreeAddressForKey (class GGS_uint constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMLastAddressPlusOneForKey (class GGS_uint constinArgument0,
                                                    class GGS_string constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: void setter_setMMirrorOffsetListForKey (class GGS_uintlist constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_uint & outArgument1,
                                 class GGS_uint & outArgument2,
                                 class GGS_uint & outArgument3,
                                 class GGS_uintlist & outArgument4,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mFirstAddressForKey (const class GGS_string & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mFirstFreeAddressForKey (const class GGS_string & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mLastAddressPlusOneForKey (const class GGS_string & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_uintlist getter_mMirrorOffsetListForKey (const class GGS_string & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_ramBankTable getter_overriddenMap (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_ramBankTable_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_ramBankTable ;
  friend class DownEnumerator_ramBankTable ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ramBankTable ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ramBankTable_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_ramBankTable_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mFirstAddress ;
  public: inline GGS_uint readProperty_mFirstAddress (void) const {
    return mProperty_mFirstAddress ;
  }

  public: GGS_uint mProperty_mFirstFreeAddress ;
  public: inline GGS_uint readProperty_mFirstFreeAddress (void) const {
    return mProperty_mFirstFreeAddress ;
  }

  public: GGS_uint mProperty_mLastAddressPlusOne ;
  public: inline GGS_uint readProperty_mLastAddressPlusOne (void) const {
    return mProperty_mLastAddressPlusOne ;
  }

  public: GGS_uintlist mProperty_mMirrorOffsetList ;
  public: inline GGS_uintlist readProperty_mMirrorOffsetList (void) const {
    return mProperty_mMirrorOffsetList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ramBankTable_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFirstAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFirstAddress = inValue ;
  }

  public: inline void setter_setMFirstFreeAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFirstFreeAddress = inValue ;
  }

  public: inline void setter_setMLastAddressPlusOne (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLastAddressPlusOne = inValue ;
  }

  public: inline void setter_setMMirrorOffsetList (const GGS_uintlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMirrorOffsetList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ramBankTable_2E_element (const GGS_lstring & in_lkey,
                                       const GGS_uint & in_mFirstAddress,
                                       const GGS_uint & in_mFirstFreeAddress,
                                       const GGS_uint & in_mLastAddressPlusOne,
                                       const GGS_uintlist & in_mMirrorOffsetList) ;

//--------------------------------- Copy constructor
  public: GGS_ramBankTable_2E_element (const GGS_ramBankTable_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ramBankTable_2E_element & operator = (const GGS_ramBankTable_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ramBankTable_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                       const class GGS_uint & inOperand1,
                                                                       const class GGS_uint & inOperand2,
                                                                       const class GGS_uint & inOperand3,
                                                                       const class GGS_uintlist & inOperand4,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ramBankTable_2E_element extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ramBankTable_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: ramBankTable.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_ramBankTable_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_ramBankTable_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_ramBankTable_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_ramBankTable_2E_element_3F_ (const GGS_ramBankTable_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_ramBankTable_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_ramBankTable_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ramBankTable_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ramBankTable_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//   enum processorType
//--------------------------------------------------------------------------------------------------

class GGS_processorType : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_processorType (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_pic_31__38__5F__36__30_,
    enum_pic_31__38__5F__38__30_,
    enum_midrange,
    enum_baseline
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_processorType extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_processorType class_func_baseline (LOCATION_ARGS) ;

  public: static class GGS_processorType class_func_midrange (LOCATION_ARGS) ;

  public: static class GGS_processorType class_func_pic_31__38__5F__36__30_ (LOCATION_ARGS) ;

  public: static class GGS_processorType class_func_pic_31__38__5F__38__30_ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isBaseline (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMidrange (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isPic_31__38__5F__36__30_ (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isPic_31__38__5F__38__30_ (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_processorType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @illegalMaskList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_illegalMaskList final {
  public: DownEnumerator_illegalMaskList (const class GGS_illegalMaskList & inList) ;

  public: ~ DownEnumerator_illegalMaskList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_luint current_mIllegalValue (LOCATION_ARGS) const ;
  public: class GGS_luint current_mIllegalMask (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mDescription (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_illegalMaskList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_illegalMaskList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_illegalMaskList (const DownEnumerator_illegalMaskList &) = delete ;
  private: DownEnumerator_illegalMaskList & operator = (const DownEnumerator_illegalMaskList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_illegalMaskList final {
  public: UpEnumerator_illegalMaskList (const class GGS_illegalMaskList & inList)  ;

  public: ~ UpEnumerator_illegalMaskList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_luint current_mIllegalValue (LOCATION_ARGS) const ;
  public: class GGS_luint current_mIllegalMask (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mDescription (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_illegalMaskList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_illegalMaskList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_illegalMaskList (const UpEnumerator_illegalMaskList &) = delete ;
  private: UpEnumerator_illegalMaskList & operator = (const UpEnumerator_illegalMaskList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @illegalMaskList list
//--------------------------------------------------------------------------------------------------

class GGS_illegalMaskList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_illegalMaskList_2E_element> mArray ;

//--- Default constructor
  public: GGS_illegalMaskList (void) ;

//--- Destructor
  public: virtual ~ GGS_illegalMaskList (void) = default ;

//--- Copy
  public: GGS_illegalMaskList (const GGS_illegalMaskList &) = default ;
  public: GGS_illegalMaskList & operator = (const GGS_illegalMaskList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_illegalMaskList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_illegalMaskList subList (const int32_t inStart,
                                        const int32_t inLength,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_illegalMaskList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_luint & in_mIllegalValue,
                                                 const class GGS_luint & in_mIllegalMask,
                                                 const class GGS_lstring & in_mDescription
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_illegalMaskList init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_illegalMaskList extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_illegalMaskList class_func_listWithValue (const class GGS_luint & inOperand0,
                                                                     const class GGS_luint & inOperand1,
                                                                     const class GGS_lstring & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_illegalMaskList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_luint & inOperand0,
                                   const class GGS_luint & inOperand1,
                                   const class GGS_lstring & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_illegalMaskList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_illegalMaskList add_operation (const GGS_illegalMaskList & inOperand,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_luint constinArgument0,
                              class GGS_luint constinArgument1,
                              class GGS_lstring constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_luint constinArgument0,
                                     class GGS_luint constinArgument1,
                                     class GGS_lstring constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_luint & outArgument0,
                                class GGS_luint & outArgument1,
                                class GGS_lstring & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_luint & outArgument0,
                               class GGS_luint & outArgument1,
                               class GGS_lstring & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_luint & outArgument0,
                                     class GGS_luint & outArgument1,
                                     class GGS_lstring & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMDescriptionAtIndex (class GGS_lstring constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

  public: void setter_setMIllegalMaskAtIndex (class GGS_luint constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

  public: void setter_setMIllegalValueAtIndex (class GGS_luint constinArgument0,
                                               class GGS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_luint & outArgument0,
                             class GGS_luint & outArgument1,
                             class GGS_lstring & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_luint & outArgument0,
                            class GGS_luint & outArgument1,
                            class GGS_lstring & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mDescriptionAtIndex (const class GGS_uint & constinOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_luint getter_mIllegalMaskAtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_luint getter_mIllegalValueAtIndex (const class GGS_uint & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_illegalMaskList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_illegalMaskList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_illegalMaskList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_illegalMaskList ;
  friend class DownEnumerator_illegalMaskList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_illegalMaskList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @illegalMaskList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_illegalMaskList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_luint mProperty_mIllegalValue ;
  public: inline GGS_luint readProperty_mIllegalValue (void) const {
    return mProperty_mIllegalValue ;
  }

  public: GGS_luint mProperty_mIllegalMask ;
  public: inline GGS_luint readProperty_mIllegalMask (void) const {
    return mProperty_mIllegalMask ;
  }

  public: GGS_lstring mProperty_mDescription ;
  public: inline GGS_lstring readProperty_mDescription (void) const {
    return mProperty_mDescription ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_illegalMaskList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMIllegalValue (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIllegalValue = inValue ;
  }

  public: inline void setter_setMIllegalMask (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIllegalMask = inValue ;
  }

  public: inline void setter_setMDescription (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDescription = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_illegalMaskList_2E_element (const GGS_luint & in_mIllegalValue,
                                          const GGS_luint & in_mIllegalMask,
                                          const GGS_lstring & in_mDescription) ;

//--------------------------------- Copy constructor
  public: GGS_illegalMaskList_2E_element (const GGS_illegalMaskList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_illegalMaskList_2E_element & operator = (const GGS_illegalMaskList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_illegalMaskList_2E_element init_21__21__21_ (const class GGS_luint & inOperand0,
                                                                  const class GGS_luint & inOperand1,
                                                                  const class GGS_lstring & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_illegalMaskList_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_illegalMaskList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fieldSettingMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_fieldSettingMap final {

  public: DownEnumerator_fieldSettingMap (const class GGS_fieldSettingMap & inMap) ;

  public: ~ DownEnumerator_fieldSettingMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mValue (LOCATION_ARGS) const ;

  public: class GGS_uint current_mMask (LOCATION_ARGS) const ;

  public: class GGS_fieldSettingMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_fieldSettingMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_fieldSettingMap (const DownEnumerator_fieldSettingMap &) = delete ;
  private: DownEnumerator_fieldSettingMap & operator = (const DownEnumerator_fieldSettingMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_fieldSettingMap final {
  public: UpEnumerator_fieldSettingMap (const class GGS_fieldSettingMap & inMap)  ;

  public: ~ UpEnumerator_fieldSettingMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mValue (LOCATION_ARGS) const ;
  public: class GGS_uint current_mMask (LOCATION_ARGS) const ;
  public: class GGS_fieldSettingMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_fieldSettingMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_fieldSettingMap (const UpEnumerator_fieldSettingMap &) = delete ;
  private: UpEnumerator_fieldSettingMap & operator = (const UpEnumerator_fieldSettingMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_fieldSettingMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_fieldSettingMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_fieldSettingMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_fieldSettingMap (void) ;

//--- Handle copy
  public: GGS_fieldSettingMap (const GGS_fieldSettingMap & inSource) ;
  public: GGS_fieldSettingMap & operator = (const GGS_fieldSettingMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_fieldSettingMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_fieldSettingMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_fieldSettingMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fieldSettingMap init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fieldSettingMap extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fieldSettingMap class_func_mapWithMapToOverride (const class GGS_fieldSettingMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uint constinArgument1,
                                 class GGS_uint constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMMaskForKey (class GGS_uint constinArgument0,
                                      class GGS_string constinArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMValueForKey (class GGS_uint constinArgument0,
                                       class GGS_string constinArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_uint & outArgument1,
                                 class GGS_uint & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mMaskForKey (const class GGS_string & constinOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mValueForKey (const class GGS_string & constinOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_fieldSettingMap getter_overriddenMap (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_fieldSettingMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_fieldSettingMap ;
  friend class DownEnumerator_fieldSettingMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fieldSettingMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fieldSettingMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_fieldSettingMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mValue ;
  public: inline GGS_uint readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

  public: GGS_uint mProperty_mMask ;
  public: inline GGS_uint readProperty_mMask (void) const {
    return mProperty_mMask ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fieldSettingMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMValue (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

  public: inline void setter_setMMask (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMask = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fieldSettingMap_2E_element (const GGS_lstring & in_lkey,
                                          const GGS_uint & in_mValue,
                                          const GGS_uint & in_mMask) ;

//--------------------------------- Copy constructor
  public: GGS_fieldSettingMap_2E_element (const GGS_fieldSettingMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_fieldSettingMap_2E_element & operator = (const GGS_fieldSettingMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fieldSettingMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_uint & inOperand1,
                                                                  const class GGS_uint & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fieldSettingMap_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fieldSettingMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: fieldSettingMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_fieldSettingMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_fieldSettingMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_fieldSettingMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_fieldSettingMap_2E_element_3F_ (const GGS_fieldSettingMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_fieldSettingMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_fieldSettingMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fieldSettingMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fieldSettingMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @configRegisterMaskMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_configRegisterMaskMap final {

  public: DownEnumerator_configRegisterMaskMap (const class GGS_configRegisterMaskMap & inMap) ;

  public: ~ DownEnumerator_configRegisterMaskMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_luint current_mMaskValue (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mDescription (LOCATION_ARGS) const ;

  public: class GGS_fieldSettingMap current_mFieldSettingMap (LOCATION_ARGS) const ;

  public: class GGS_configRegisterMaskMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_configRegisterMaskMap (const DownEnumerator_configRegisterMaskMap &) = delete ;
  private: DownEnumerator_configRegisterMaskMap & operator = (const DownEnumerator_configRegisterMaskMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_configRegisterMaskMap final {
  public: UpEnumerator_configRegisterMaskMap (const class GGS_configRegisterMaskMap & inMap)  ;

  public: ~ UpEnumerator_configRegisterMaskMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_luint current_mMaskValue (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mDescription (LOCATION_ARGS) const ;
  public: class GGS_fieldSettingMap current_mFieldSettingMap (LOCATION_ARGS) const ;
  public: class GGS_configRegisterMaskMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_configRegisterMaskMap (const UpEnumerator_configRegisterMaskMap &) = delete ;
  private: UpEnumerator_configRegisterMaskMap & operator = (const UpEnumerator_configRegisterMaskMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_configRegisterMaskMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_configRegisterMaskMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_configRegisterMaskMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_configRegisterMaskMap (void) ;

//--- Handle copy
  public: GGS_configRegisterMaskMap (const GGS_configRegisterMaskMap & inSource) ;
  public: GGS_configRegisterMaskMap & operator = (const GGS_configRegisterMaskMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_configRegisterMaskMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMaskMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configRegisterMaskMap init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configRegisterMaskMap extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_configRegisterMaskMap class_func_mapWithMapToOverride (const class GGS_configRegisterMaskMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_luint constinArgument1,
                                 class GGS_lstring constinArgument2,
                                 class GGS_fieldSettingMap constinArgument3,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMDescriptionForKey (class GGS_lstring constinArgument0,
                                             class GGS_string constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMFieldSettingMapForKey (class GGS_fieldSettingMap constinArgument0,
                                                 class GGS_string constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMMaskValueForKey (class GGS_luint constinArgument0,
                                           class GGS_string constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_luint & outArgument1,
                                 class GGS_lstring & outArgument2,
                                 class GGS_fieldSettingMap & outArgument3,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mDescriptionForKey (const class GGS_string & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_fieldSettingMap getter_mFieldSettingMapForKey (const class GGS_string & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_luint getter_mMaskValueForKey (const class GGS_string & constinOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_configRegisterMaskMap getter_overriddenMap (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_configRegisterMaskMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_configRegisterMaskMap ;
  friend class DownEnumerator_configRegisterMaskMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configRegisterMaskMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @configRegisterMaskMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_configRegisterMaskMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_luint mProperty_mMaskValue ;
  public: inline GGS_luint readProperty_mMaskValue (void) const {
    return mProperty_mMaskValue ;
  }

  public: GGS_lstring mProperty_mDescription ;
  public: inline GGS_lstring readProperty_mDescription (void) const {
    return mProperty_mDescription ;
  }

  public: GGS_fieldSettingMap mProperty_mFieldSettingMap ;
  public: inline GGS_fieldSettingMap readProperty_mFieldSettingMap (void) const {
    return mProperty_mFieldSettingMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_configRegisterMaskMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMMaskValue (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMaskValue = inValue ;
  }

  public: inline void setter_setMDescription (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDescription = inValue ;
  }

  public: inline void setter_setMFieldSettingMap (const GGS_fieldSettingMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFieldSettingMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_configRegisterMaskMap_2E_element (const GGS_lstring & in_lkey,
                                                const GGS_luint & in_mMaskValue,
                                                const GGS_lstring & in_mDescription,
                                                const GGS_fieldSettingMap & in_mFieldSettingMap) ;

//--------------------------------- Copy constructor
  public: GGS_configRegisterMaskMap_2E_element (const GGS_configRegisterMaskMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_configRegisterMaskMap_2E_element & operator = (const GGS_configRegisterMaskMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configRegisterMaskMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_luint & inOperand1,
                                                                            const class GGS_lstring & inOperand2,
                                                                            const class GGS_fieldSettingMap & inOperand3,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configRegisterMaskMap_2E_element extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configRegisterMaskMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: configRegisterMaskMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_configRegisterMaskMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_configRegisterMaskMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_configRegisterMaskMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_configRegisterMaskMap_2E_element_3F_ (const GGS_configRegisterMaskMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_configRegisterMaskMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_configRegisterMaskMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configRegisterMaskMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configRegisterMaskMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @configRegisterMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_configRegisterMap final {

  public: DownEnumerator_configRegisterMap (const class GGS_configRegisterMap & inMap) ;

  public: ~ DownEnumerator_configRegisterMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_luint current_mRegisterAddress (LOCATION_ARGS) const ;

  public: class GGS_luint current_mRegisterWidth (LOCATION_ARGS) const ;

  public: class GGS_configRegisterMaskMap current_mConfigRegisterMaskMap (LOCATION_ARGS) const ;

  public: class GGS_illegalMaskList current_mIllegalMaskList (LOCATION_ARGS) const ;

  public: class GGS_configRegisterMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_configRegisterMap (const DownEnumerator_configRegisterMap &) = delete ;
  private: DownEnumerator_configRegisterMap & operator = (const DownEnumerator_configRegisterMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_configRegisterMap final {
  public: UpEnumerator_configRegisterMap (const class GGS_configRegisterMap & inMap)  ;

  public: ~ UpEnumerator_configRegisterMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_luint current_mRegisterAddress (LOCATION_ARGS) const ;
  public: class GGS_luint current_mRegisterWidth (LOCATION_ARGS) const ;
  public: class GGS_configRegisterMaskMap current_mConfigRegisterMaskMap (LOCATION_ARGS) const ;
  public: class GGS_illegalMaskList current_mIllegalMaskList (LOCATION_ARGS) const ;
  public: class GGS_configRegisterMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_configRegisterMap (const UpEnumerator_configRegisterMap &) = delete ;
  private: UpEnumerator_configRegisterMap & operator = (const UpEnumerator_configRegisterMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_configRegisterMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_configRegisterMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_configRegisterMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_configRegisterMap (void) ;

//--- Handle copy
  public: GGS_configRegisterMap (const GGS_configRegisterMap & inSource) ;
  public: GGS_configRegisterMap & operator = (const GGS_configRegisterMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_configRegisterMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configRegisterMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configRegisterMap extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_configRegisterMap class_func_mapWithMapToOverride (const class GGS_configRegisterMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_luint constinArgument1,
                                 class GGS_luint constinArgument2,
                                 class GGS_configRegisterMaskMap constinArgument3,
                                 class GGS_illegalMaskList constinArgument4,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMConfigRegisterMaskMapForKey (class GGS_configRegisterMaskMap constinArgument0,
                                                       class GGS_string constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMIllegalMaskListForKey (class GGS_illegalMaskList constinArgument0,
                                                 class GGS_string constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMRegisterAddressForKey (class GGS_luint constinArgument0,
                                                 class GGS_string constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMRegisterWidthForKey (class GGS_luint constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_luint & outArgument1,
                                 class GGS_luint & outArgument2,
                                 class GGS_configRegisterMaskMap & outArgument3,
                                 class GGS_illegalMaskList & outArgument4,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_configRegisterMaskMap getter_mConfigRegisterMaskMapForKey (const class GGS_string & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_illegalMaskList getter_mIllegalMaskListForKey (const class GGS_string & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_luint getter_mRegisterAddressForKey (const class GGS_string & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_luint getter_mRegisterWidthForKey (const class GGS_string & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_configRegisterMap getter_overriddenMap (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_configRegisterMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_configRegisterMap ;
  friend class DownEnumerator_configRegisterMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configRegisterMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @configRegisterMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_configRegisterMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_luint mProperty_mRegisterAddress ;
  public: inline GGS_luint readProperty_mRegisterAddress (void) const {
    return mProperty_mRegisterAddress ;
  }

  public: GGS_luint mProperty_mRegisterWidth ;
  public: inline GGS_luint readProperty_mRegisterWidth (void) const {
    return mProperty_mRegisterWidth ;
  }

  public: GGS_configRegisterMaskMap mProperty_mConfigRegisterMaskMap ;
  public: inline GGS_configRegisterMaskMap readProperty_mConfigRegisterMaskMap (void) const {
    return mProperty_mConfigRegisterMaskMap ;
  }

  public: GGS_illegalMaskList mProperty_mIllegalMaskList ;
  public: inline GGS_illegalMaskList readProperty_mIllegalMaskList (void) const {
    return mProperty_mIllegalMaskList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_configRegisterMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRegisterAddress (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterAddress = inValue ;
  }

  public: inline void setter_setMRegisterWidth (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterWidth = inValue ;
  }

  public: inline void setter_setMConfigRegisterMaskMap (const GGS_configRegisterMaskMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConfigRegisterMaskMap = inValue ;
  }

  public: inline void setter_setMIllegalMaskList (const GGS_illegalMaskList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIllegalMaskList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_configRegisterMap_2E_element (const GGS_lstring & in_lkey,
                                            const GGS_luint & in_mRegisterAddress,
                                            const GGS_luint & in_mRegisterWidth,
                                            const GGS_configRegisterMaskMap & in_mConfigRegisterMaskMap,
                                            const GGS_illegalMaskList & in_mIllegalMaskList) ;

//--------------------------------- Copy constructor
  public: GGS_configRegisterMap_2E_element (const GGS_configRegisterMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_configRegisterMap_2E_element & operator = (const GGS_configRegisterMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configRegisterMap_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_luint & inOperand1,
                                                                            const class GGS_luint & inOperand2,
                                                                            const class GGS_configRegisterMaskMap & inOperand3,
                                                                            const class GGS_illegalMaskList & inOperand4,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configRegisterMap_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configRegisterMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: configRegisterMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_configRegisterMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_configRegisterMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_configRegisterMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_configRegisterMap_2E_element_3F_ (const GGS_configRegisterMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_configRegisterMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_configRegisterMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configRegisterMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configRegisterMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_instruction (const class cPtr_baseline_5F_assembly_5F_instruction * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_instruction init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_instruction extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_instruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_assembly_instruction class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_instruction : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_instruction_init (Compiler * inCompiler) ;


//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension method enterLabelAtAddress
  public: virtual void method_enterLabelAtAddress (class GGS_baseline_5F_symbolTable & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_instruction (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction (const class cPtr_midrange_5F_intermediate_5F_instruction * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_init (Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter isLABELorORG
  public: virtual class GGS_bool getter_isLABELorORG (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter isNULL
  public: virtual class GGS_bool getter_isNULL (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter isSkippingInstruction
  public: virtual class GGS_bool getter_isSkippingInstruction (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method compute
  public: virtual void method_compute (const class GGS_midrange_5F_symbolTableForConvertingRelatives arg_inRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           class GGS_bool & arg_ioJUMP_or_JSR_fixed,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           const class GGS_uint arg_inIndex,
           class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method defineLabel
  public: virtual void method_defineLabel (class GGS_symbolTableForOptimizations & arg_ioRoutineSymbolTable,
           const class GGS_uint arg_inLineIndex,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method defineLabelAtAddress
  public: virtual void method_defineLabelAtAddress (class GGS_midrange_5F_symbolTableForConvertingRelatives & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method enterLabelAtAddress
  public: virtual void method_enterLabelAtAddress (class GGS_midrange_5F_symbolTable & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method setCurrentAddress
  public: virtual void method_setCurrentAddress (class GGS_uint & arg_ioCurrentAddress,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties



//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @blockMapForStackComputation map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_blockMapForStackComputation final {

  public: DownEnumerator_blockMapForStackComputation (const class GGS_blockMapForStackComputation & inMap) ;

  public: ~ DownEnumerator_blockMapForStackComputation (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_ipic_31__38_Block current_mBlock (LOCATION_ARGS) const ;

  public: class GGS_blockMapForStackComputation_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_blockMapForStackComputation (const DownEnumerator_blockMapForStackComputation &) = delete ;
  private: DownEnumerator_blockMapForStackComputation & operator = (const DownEnumerator_blockMapForStackComputation &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_blockMapForStackComputation final {
  public: UpEnumerator_blockMapForStackComputation (const class GGS_blockMapForStackComputation & inMap)  ;

  public: ~ UpEnumerator_blockMapForStackComputation (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_ipic_31__38_Block current_mBlock (LOCATION_ARGS) const ;
  public: class GGS_blockMapForStackComputation_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_blockMapForStackComputation (const UpEnumerator_blockMapForStackComputation &) = delete ;
  private: UpEnumerator_blockMapForStackComputation & operator = (const UpEnumerator_blockMapForStackComputation &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_blockMapForStackComputation : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_blockMapForStackComputation_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_blockMapForStackComputation (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_blockMapForStackComputation (void) ;

//--- Handle copy
  public: GGS_blockMapForStackComputation (const GGS_blockMapForStackComputation & inSource) ;
  public: GGS_blockMapForStackComputation & operator = (const GGS_blockMapForStackComputation & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_blockMapForStackComputation_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockMapForStackComputation_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_blockMapForStackComputation init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_blockMapForStackComputation extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_blockMapForStackComputation class_func_mapWithMapToOverride (const class GGS_blockMapForStackComputation & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_ipic_31__38_Block constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMBlockForKey (class GGS_ipic_31__38_Block constinArgument0,
                                       class GGS_string constinArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_ipic_31__38_Block & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_ipic_31__38_Block getter_mBlockForKey (const class GGS_string & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_blockMapForStackComputation getter_overriddenMap (Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_blockMapForStackComputation_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_blockMapForStackComputation ;
  friend class DownEnumerator_blockMapForStackComputation ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockMapForStackComputation ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_AbstractBlockTerminator reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_AbstractBlockTerminator : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_AbstractBlockTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38_AbstractBlockTerminator (const class cPtr_ipic_31__38_AbstractBlockTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38_AbstractBlockTerminator init_21_ (const class GGS_location & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_AbstractBlockTerminator extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_AbstractBlockTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_SequentialInstructionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_ipic_31__38_SequentialInstructionList final {
  public: DownEnumerator_ipic_31__38_SequentialInstructionList (const class GGS_ipic_31__38_SequentialInstructionList & inList) ;

  public: ~ DownEnumerator_ipic_31__38_SequentialInstructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_ipic_31__38_SequentialInstruction current_mInstruction (LOCATION_ARGS) const ;
  public: class GGS_uint current_mMin (LOCATION_ARGS) const ;
  public: class GGS_uint current_mMax (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ipic_31__38_SequentialInstructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_ipic_31__38_SequentialInstructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_ipic_31__38_SequentialInstructionList (const DownEnumerator_ipic_31__38_SequentialInstructionList &) = delete ;
  private: DownEnumerator_ipic_31__38_SequentialInstructionList & operator = (const DownEnumerator_ipic_31__38_SequentialInstructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_ipic_31__38_SequentialInstructionList final {
  public: UpEnumerator_ipic_31__38_SequentialInstructionList (const class GGS_ipic_31__38_SequentialInstructionList & inList)  ;

  public: ~ UpEnumerator_ipic_31__38_SequentialInstructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_ipic_31__38_SequentialInstruction current_mInstruction (LOCATION_ARGS) const ;
  public: class GGS_uint current_mMin (LOCATION_ARGS) const ;
  public: class GGS_uint current_mMax (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ipic_31__38_SequentialInstructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_ipic_31__38_SequentialInstructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_ipic_31__38_SequentialInstructionList (const UpEnumerator_ipic_31__38_SequentialInstructionList &) = delete ;
  private: UpEnumerator_ipic_31__38_SequentialInstructionList & operator = (const UpEnumerator_ipic_31__38_SequentialInstructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @ipic18SequentialInstructionList list
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_SequentialInstructionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_ipic_31__38_SequentialInstructionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_ipic_31__38_SequentialInstructionList (void) ;

//--- Destructor
  public: virtual ~ GGS_ipic_31__38_SequentialInstructionList (void) = default ;

//--- Copy
  public: GGS_ipic_31__38_SequentialInstructionList (const GGS_ipic_31__38_SequentialInstructionList &) = default ;
  public: GGS_ipic_31__38_SequentialInstructionList & operator = (const GGS_ipic_31__38_SequentialInstructionList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_ipic_31__38_SequentialInstructionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_ipic_31__38_SequentialInstructionList subList (const int32_t inStart,
                                                              const int32_t inLength,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_ipic_31__38_SequentialInstructionList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                 const class GGS_uint & in_mMin,
                                                 const class GGS_uint & in_mMax
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38_SequentialInstructionList init (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_SequentialInstructionList extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_SequentialInstructionList class_func_listWithValue (const class GGS_ipic_31__38_SequentialInstruction & inOperand0,
                                                                                           const class GGS_uint & inOperand1,
                                                                                           const class GGS_uint & inOperand2
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_ipic_31__38_SequentialInstructionList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_ipic_31__38_SequentialInstruction & inOperand0,
                                   const class GGS_uint & inOperand1,
                                   const class GGS_uint & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_ipic_31__38_SequentialInstructionList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_ipic_31__38_SequentialInstructionList add_operation (const GGS_ipic_31__38_SequentialInstructionList & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_ipic_31__38_SequentialInstruction constinArgument0,
                              class GGS_uint constinArgument1,
                              class GGS_uint constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_ipic_31__38_SequentialInstruction constinArgument0,
                                     class GGS_uint constinArgument1,
                                     class GGS_uint constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_ipic_31__38_SequentialInstruction & outArgument0,
                                class GGS_uint & outArgument1,
                                class GGS_uint & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_ipic_31__38_SequentialInstruction & outArgument0,
                               class GGS_uint & outArgument1,
                               class GGS_uint & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_ipic_31__38_SequentialInstruction & outArgument0,
                                     class GGS_uint & outArgument1,
                                     class GGS_uint & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionAtIndex (class GGS_ipic_31__38_SequentialInstruction constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

  public: void setter_setMMaxAtIndex (class GGS_uint constinArgument0,
                                      class GGS_uint constinArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMMinAtIndex (class GGS_uint constinArgument0,
                                      class GGS_uint constinArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_ipic_31__38_SequentialInstruction & outArgument0,
                             class GGS_uint & outArgument1,
                             class GGS_uint & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_ipic_31__38_SequentialInstruction & outArgument0,
                            class GGS_uint & outArgument1,
                            class GGS_uint & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_ipic_31__38_SequentialInstruction getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mMaxAtIndex (const class GGS_uint & constinOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mMinAtIndex (const class GGS_uint & constinOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_ipic_31__38_SequentialInstructionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_ipic_31__38_SequentialInstructionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_ipic_31__38_SequentialInstructionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_ipic_31__38_SequentialInstructionList ;
  friend class DownEnumerator_ipic_31__38_SequentialInstructionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_Block struct
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_Block : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint mProperty_mAddress ;
  public: inline GGS_uint readProperty_mAddress (void) const {
    return mProperty_mAddress ;
  }

  public: GGS_lstring mProperty_mLabel ;
  public: inline GGS_lstring readProperty_mLabel (void) const {
    return mProperty_mLabel ;
  }

  public: GGS_ipic_31__38_SequentialInstructionList mProperty_mInstructionList ;
  public: inline GGS_ipic_31__38_SequentialInstructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GGS_ipic_31__38_AbstractBlockTerminator mProperty_mTerminator ;
  public: inline GGS_ipic_31__38_AbstractBlockTerminator readProperty_mTerminator (void) const {
    return mProperty_mTerminator ;
  }

  public: GGS_uint mProperty_mTerminatorMin ;
  public: inline GGS_uint readProperty_mTerminatorMin (void) const {
    return mProperty_mTerminatorMin ;
  }

  public: GGS_uint mProperty_mTerminatorMax ;
  public: inline GGS_uint readProperty_mTerminatorMax (void) const {
    return mProperty_mTerminatorMax ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ipic_31__38_Block (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAddress = inValue ;
  }

  public: inline void setter_setMLabel (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabel = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_ipic_31__38_SequentialInstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMTerminator (const GGS_ipic_31__38_AbstractBlockTerminator & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminator = inValue ;
  }

  public: inline void setter_setMTerminatorMin (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminatorMin = inValue ;
  }

  public: inline void setter_setMTerminatorMax (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminatorMax = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ipic_31__38_Block (const GGS_uint & in_mAddress,
                                 const GGS_lstring & in_mLabel,
                                 const GGS_ipic_31__38_SequentialInstructionList & in_mInstructionList,
                                 const GGS_ipic_31__38_AbstractBlockTerminator & in_mTerminator,
                                 const GGS_uint & in_mTerminatorMin,
                                 const GGS_uint & in_mTerminatorMax) ;

//--------------------------------- Copy constructor
  public: GGS_ipic_31__38_Block (const GGS_ipic_31__38_Block & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ipic_31__38_Block & operator = (const GGS_ipic_31__38_Block & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38_Block init_21__21__21__21__21__21_ (const class GGS_uint & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_ipic_31__38_SequentialInstructionList & inOperand2,
                                                                     const class GGS_ipic_31__38_AbstractBlockTerminator & inOperand3,
                                                                     const class GGS_uint & inOperand4,
                                                                     const class GGS_uint & inOperand5,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_Block extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_Block ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @blockMapForStackComputation_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_blockMapForStackComputation_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_ipic_31__38_Block mProperty_mBlock ;
  public: inline GGS_ipic_31__38_Block readProperty_mBlock (void) const {
    return mProperty_mBlock ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_blockMapForStackComputation_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMBlock (const GGS_ipic_31__38_Block & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBlock = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_blockMapForStackComputation_2E_element (const GGS_lstring & in_lkey,
                                                      const GGS_ipic_31__38_Block & in_mBlock) ;

//--------------------------------- Copy constructor
  public: GGS_blockMapForStackComputation_2E_element (const GGS_blockMapForStackComputation_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_blockMapForStackComputation_2E_element & operator = (const GGS_blockMapForStackComputation_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_blockMapForStackComputation_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_ipic_31__38_Block & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_blockMapForStackComputation_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockMapForStackComputation_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: blockMapForStackComputation.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_blockMapForStackComputation_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_blockMapForStackComputation_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_blockMapForStackComputation_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_blockMapForStackComputation_2E_element_3F_ (const GGS_blockMapForStackComputation_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_blockMapForStackComputation_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_blockMapForStackComputation_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_blockMapForStackComputation_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockMapForStackComputation_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineCallMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_routineCallMap final {

  public: DownEnumerator_routineCallMap (const class GGS_routineCallMap & inMap) ;

  public: ~ DownEnumerator_routineCallMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_stringset current_mCalledRoutineSet (LOCATION_ARGS) const ;

  public: class GGS_uint current_mTerminatorStackNeeds (LOCATION_ARGS) const ;

  public: class GGS_routineCallMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_routineCallMap (const DownEnumerator_routineCallMap &) = delete ;
  private: DownEnumerator_routineCallMap & operator = (const DownEnumerator_routineCallMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_routineCallMap final {
  public: UpEnumerator_routineCallMap (const class GGS_routineCallMap & inMap)  ;

  public: ~ UpEnumerator_routineCallMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_stringset current_mCalledRoutineSet (LOCATION_ARGS) const ;
  public: class GGS_uint current_mTerminatorStackNeeds (LOCATION_ARGS) const ;
  public: class GGS_routineCallMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_routineCallMap (const UpEnumerator_routineCallMap &) = delete ;
  private: UpEnumerator_routineCallMap & operator = (const UpEnumerator_routineCallMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_routineCallMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_routineCallMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_routineCallMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_routineCallMap (void) ;

//--- Handle copy
  public: GGS_routineCallMap (const GGS_routineCallMap & inSource) ;
  public: GGS_routineCallMap & operator = (const GGS_routineCallMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_routineCallMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineCallMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineCallMap init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineCallMap extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineCallMap class_func_mapWithMapToOverride (const class GGS_routineCallMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_stringset constinArgument1,
                                 class GGS_uint constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMCalledRoutineSetForKey (class GGS_stringset constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMTerminatorStackNeedsForKey (class GGS_uint constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_mCalledRoutineSetForKey (const class GGS_string & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mTerminatorStackNeedsForKey (const class GGS_string & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_routineCallMap getter_overriddenMap (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_routineCallMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_routineCallMap ;
  friend class DownEnumerator_routineCallMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineCallMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineCallMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_routineCallMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_stringset mProperty_mCalledRoutineSet ;
  public: inline GGS_stringset readProperty_mCalledRoutineSet (void) const {
    return mProperty_mCalledRoutineSet ;
  }

  public: GGS_uint mProperty_mTerminatorStackNeeds ;
  public: inline GGS_uint readProperty_mTerminatorStackNeeds (void) const {
    return mProperty_mTerminatorStackNeeds ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_routineCallMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMCalledRoutineSet (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCalledRoutineSet = inValue ;
  }

  public: inline void setter_setMTerminatorStackNeeds (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminatorStackNeeds = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineCallMap_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_stringset & in_mCalledRoutineSet,
                                         const GGS_uint & in_mTerminatorStackNeeds) ;

//--------------------------------- Copy constructor
  public: GGS_routineCallMap_2E_element (const GGS_routineCallMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_routineCallMap_2E_element & operator = (const GGS_routineCallMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineCallMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_stringset & inOperand1,
                                                                 const class GGS_uint & inOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineCallMap_2E_element extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineCallMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: routineCallMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_routineCallMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_routineCallMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_routineCallMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_routineCallMap_2E_element_3F_ (const GGS_routineCallMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_routineCallMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_routineCallMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineCallMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineCallMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineStackRequirementMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_routineStackRequirementMap final {

  public: DownEnumerator_routineStackRequirementMap (const class GGS_routineStackRequirementMap & inMap) ;

  public: ~ DownEnumerator_routineStackRequirementMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mLevels (LOCATION_ARGS) const ;

  public: class GGS_routineStackRequirementMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_routineStackRequirementMap (const DownEnumerator_routineStackRequirementMap &) = delete ;
  private: DownEnumerator_routineStackRequirementMap & operator = (const DownEnumerator_routineStackRequirementMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_routineStackRequirementMap final {
  public: UpEnumerator_routineStackRequirementMap (const class GGS_routineStackRequirementMap & inMap)  ;

  public: ~ UpEnumerator_routineStackRequirementMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mLevels (LOCATION_ARGS) const ;
  public: class GGS_routineStackRequirementMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_routineStackRequirementMap (const UpEnumerator_routineStackRequirementMap &) = delete ;
  private: UpEnumerator_routineStackRequirementMap & operator = (const UpEnumerator_routineStackRequirementMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_routineStackRequirementMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_routineStackRequirementMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_routineStackRequirementMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_routineStackRequirementMap (void) ;

//--- Handle copy
  public: GGS_routineStackRequirementMap (const GGS_routineStackRequirementMap & inSource) ;
  public: GGS_routineStackRequirementMap & operator = (const GGS_routineStackRequirementMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_routineStackRequirementMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineStackRequirementMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineStackRequirementMap init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineStackRequirementMap extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineStackRequirementMap class_func_mapWithMapToOverride (const class GGS_routineStackRequirementMap & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uint constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMLevelsForKey (class GGS_uint constinArgument0,
                                        class GGS_string constinArgument1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_uint & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mLevelsForKey (const class GGS_string & constinOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_routineStackRequirementMap getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_routineStackRequirementMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_routineStackRequirementMap ;
  friend class DownEnumerator_routineStackRequirementMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineStackRequirementMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineStackRequirementMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_routineStackRequirementMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mLevels ;
  public: inline GGS_uint readProperty_mLevels (void) const {
    return mProperty_mLevels ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_routineStackRequirementMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLevels (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLevels = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineStackRequirementMap_2E_element (const GGS_lstring & in_lkey,
                                                     const GGS_uint & in_mLevels) ;

//--------------------------------- Copy constructor
  public: GGS_routineStackRequirementMap_2E_element (const GGS_routineStackRequirementMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_routineStackRequirementMap_2E_element & operator = (const GGS_routineStackRequirementMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineStackRequirementMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_uint & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineStackRequirementMap_2E_element extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineStackRequirementMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: routineStackRequirementMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_routineStackRequirementMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_routineStackRequirementMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_routineStackRequirementMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_routineStackRequirementMap_2E_element_3F_ (const GGS_routineStackRequirementMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_routineStackRequirementMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_routineStackRequirementMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineStackRequirementMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineStackRequirementMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @blockDurationMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_blockDurationMap final {

  public: DownEnumerator_blockDurationMap (const class GGS_blockDurationMap & inMap) ;

  public: ~ DownEnumerator_blockDurationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mMinDuration (LOCATION_ARGS) const ;

  public: class GGS_uint current_mMaxDuration (LOCATION_ARGS) const ;

  public: class GGS_blockDurationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockDurationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_blockDurationMap (const DownEnumerator_blockDurationMap &) = delete ;
  private: DownEnumerator_blockDurationMap & operator = (const DownEnumerator_blockDurationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_blockDurationMap final {
  public: UpEnumerator_blockDurationMap (const class GGS_blockDurationMap & inMap)  ;

  public: ~ UpEnumerator_blockDurationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mMinDuration (LOCATION_ARGS) const ;
  public: class GGS_uint current_mMaxDuration (LOCATION_ARGS) const ;
  public: class GGS_blockDurationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockDurationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_blockDurationMap (const UpEnumerator_blockDurationMap &) = delete ;
  private: UpEnumerator_blockDurationMap & operator = (const UpEnumerator_blockDurationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_blockDurationMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_blockDurationMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_blockDurationMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_blockDurationMap (void) ;

//--- Handle copy
  public: GGS_blockDurationMap (const GGS_blockDurationMap & inSource) ;
  public: GGS_blockDurationMap & operator = (const GGS_blockDurationMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_blockDurationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_blockDurationMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockDurationMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_blockDurationMap init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_blockDurationMap extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_blockDurationMap class_func_mapWithMapToOverride (const class GGS_blockDurationMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uint constinArgument1,
                                 class GGS_uint constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMMaxDurationForKey (class GGS_uint constinArgument0,
                                             class GGS_string constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMMinDurationForKey (class GGS_uint constinArgument0,
                                             class GGS_string constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_uint & outArgument1,
                                 class GGS_uint & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mMaxDurationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mMinDurationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_blockDurationMap getter_overriddenMap (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_blockDurationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_blockDurationMap ;
  friend class DownEnumerator_blockDurationMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockDurationMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @blockDurationMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_blockDurationMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mMinDuration ;
  public: inline GGS_uint readProperty_mMinDuration (void) const {
    return mProperty_mMinDuration ;
  }

  public: GGS_uint mProperty_mMaxDuration ;
  public: inline GGS_uint readProperty_mMaxDuration (void) const {
    return mProperty_mMaxDuration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_blockDurationMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMMinDuration (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMinDuration = inValue ;
  }

  public: inline void setter_setMMaxDuration (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMaxDuration = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_blockDurationMap_2E_element (const GGS_lstring & in_lkey,
                                           const GGS_uint & in_mMinDuration,
                                           const GGS_uint & in_mMaxDuration) ;

//--------------------------------- Copy constructor
  public: GGS_blockDurationMap_2E_element (const GGS_blockDurationMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_blockDurationMap_2E_element & operator = (const GGS_blockDurationMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_blockDurationMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_uint & inOperand1,
                                                                   const class GGS_uint & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_blockDurationMap_2E_element extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockDurationMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: blockDurationMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_blockDurationMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_blockDurationMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_blockDurationMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_blockDurationMap_2E_element_3F_ (const GGS_blockDurationMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_blockDurationMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_blockDurationMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_blockDurationMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockDurationMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@uint x4String' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_x_34_String (const class GGS_uint & inObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constantMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_constantMap final {

  public: DownEnumerator_constantMap (const class GGS_constantMap & inMap) ;

  public: ~ DownEnumerator_constantMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_sint_36__34_ current_mValue (LOCATION_ARGS) const ;

  public: class GGS_constantMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_constantMap (const DownEnumerator_constantMap &) = delete ;
  private: DownEnumerator_constantMap & operator = (const DownEnumerator_constantMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_constantMap final {
  public: UpEnumerator_constantMap (const class GGS_constantMap & inMap)  ;

  public: ~ UpEnumerator_constantMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_sint_36__34_ current_mValue (LOCATION_ARGS) const ;
  public: class GGS_constantMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_constantMap (const UpEnumerator_constantMap &) = delete ;
  private: UpEnumerator_constantMap & operator = (const UpEnumerator_constantMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_constantMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_constantMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_constantMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_constantMap (void) ;

//--- Handle copy
  public: GGS_constantMap (const GGS_constantMap & inSource) ;
  public: GGS_constantMap & operator = (const GGS_constantMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_constantMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constantMap init (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constantMap extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_constantMap class_func_mapWithMapToOverride (const class GGS_constantMap & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_sint_36__34_ constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMValueForKey (class GGS_sint_36__34_ constinArgument0,
                                       class GGS_string constinArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_sint_36__34_ & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_sint_36__34_ getter_mValueForKey (const class GGS_string & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_constantMap getter_overriddenMap (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_constantMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_constantMap ;
  friend class DownEnumerator_constantMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constantMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_constantMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_sint_36__34_ mProperty_mValue ;
  public: inline GGS_sint_36__34_ readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_constantMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMValue (const GGS_sint_36__34_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_constantMap_2E_element (const GGS_lstring & in_lkey,
                                      const GGS_sint_36__34_ & in_mValue) ;

//--------------------------------- Copy constructor
  public: GGS_constantMap_2E_element (const GGS_constantMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_constantMap_2E_element & operator = (const GGS_constantMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constantMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                          const class GGS_sint_36__34_ & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constantMap_2E_element extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: constantMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_constantMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_constantMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_constantMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_constantMap_2E_element_3F_ (const GGS_constantMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_constantMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_constantMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constantMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_routineMap final {

  public: DownEnumerator_routineMap (const class GGS_routineMap & inMap) ;

  public: ~ DownEnumerator_routineMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_bool current_mIsNoReturn (LOCATION_ARGS) const ;

  public: class GGS_uint current_mRequiredBank (LOCATION_ARGS) const ;

  public: class GGS_uint current_mReturnedBank (LOCATION_ARGS) const ;

  public: class GGS_bool current_mPreservesBank (LOCATION_ARGS) const ;

  public: class GGS_routineMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_routineMap (const DownEnumerator_routineMap &) = delete ;
  private: DownEnumerator_routineMap & operator = (const DownEnumerator_routineMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_routineMap final {
  public: UpEnumerator_routineMap (const class GGS_routineMap & inMap)  ;

  public: ~ UpEnumerator_routineMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public: class GGS_uint current_mRequiredBank (LOCATION_ARGS) const ;
  public: class GGS_uint current_mReturnedBank (LOCATION_ARGS) const ;
  public: class GGS_bool current_mPreservesBank (LOCATION_ARGS) const ;
  public: class GGS_routineMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_routineMap (const UpEnumerator_routineMap &) = delete ;
  private: UpEnumerator_routineMap & operator = (const UpEnumerator_routineMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_routineMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_routineMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_routineMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_routineMap (void) ;

//--- Handle copy
  public: GGS_routineMap (const GGS_routineMap & inSource) ;
  public: GGS_routineMap & operator = (const GGS_routineMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_routineMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_routineMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineMap init (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineMap extractObject (const GGS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineMap class_func_mapWithMapToOverride (const class GGS_routineMap & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_bool constinArgument1,
                                 class GGS_uint constinArgument2,
                                 class GGS_uint constinArgument3,
                                 class GGS_bool constinArgument4,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsNoReturnForKey (class GGS_bool constinArgument0,
                                            class GGS_string constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMPreservesBankForKey (class GGS_bool constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMRequiredBankForKey (class GGS_uint constinArgument0,
                                              class GGS_string constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

  public: void setter_setMReturnedBankForKey (class GGS_uint constinArgument0,
                                              class GGS_string constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_bool & outArgument1,
                                 class GGS_uint & outArgument2,
                                 class GGS_uint & outArgument3,
                                 class GGS_bool & outArgument4,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mIsNoReturnForKey (const class GGS_string & constinOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mPreservesBankForKey (const class GGS_string & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mRequiredBankForKey (const class GGS_string & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mReturnedBankForKey (const class GGS_string & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_routineMap getter_overriddenMap (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_routineMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_routineMap ;
  friend class DownEnumerator_routineMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_routineMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_bool mProperty_mIsNoReturn ;
  public: inline GGS_bool readProperty_mIsNoReturn (void) const {
    return mProperty_mIsNoReturn ;
  }

  public: GGS_uint mProperty_mRequiredBank ;
  public: inline GGS_uint readProperty_mRequiredBank (void) const {
    return mProperty_mRequiredBank ;
  }

  public: GGS_uint mProperty_mReturnedBank ;
  public: inline GGS_uint readProperty_mReturnedBank (void) const {
    return mProperty_mReturnedBank ;
  }

  public: GGS_bool mProperty_mPreservesBank ;
  public: inline GGS_bool readProperty_mPreservesBank (void) const {
    return mProperty_mPreservesBank ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_routineMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIsNoReturn (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsNoReturn = inValue ;
  }

  public: inline void setter_setMRequiredBank (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRequiredBank = inValue ;
  }

  public: inline void setter_setMReturnedBank (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedBank = inValue ;
  }

  public: inline void setter_setMPreservesBank (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPreservesBank = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineMap_2E_element (const GGS_lstring & in_lkey,
                                     const GGS_bool & in_mIsNoReturn,
                                     const GGS_uint & in_mRequiredBank,
                                     const GGS_uint & in_mReturnedBank,
                                     const GGS_bool & in_mPreservesBank) ;

//--------------------------------- Copy constructor
  public: GGS_routineMap_2E_element (const GGS_routineMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_routineMap_2E_element & operator = (const GGS_routineMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineMap_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_bool & inOperand1,
                                                                     const class GGS_uint & inOperand2,
                                                                     const class GGS_uint & inOperand3,
                                                                     const class GGS_bool & inOperand4,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineMap_2E_element extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: routineMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_routineMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_routineMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_routineMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_routineMap_2E_element_3F_ (const GGS_routineMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_routineMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_routineMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//   enum routineKind
//--------------------------------------------------------------------------------------------------

class GGS_routineKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_routineKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_regularRoutine,
    enum_noReturnRoutine,
    enum_interruptRoutine
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineKind extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineKind class_func_interruptRoutine (LOCATION_ARGS) ;

  public: static class GGS_routineKind class_func_noReturnRoutine (LOCATION_ARGS) ;

  public: static class GGS_routineKind class_func_regularRoutine (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_routineKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isInterruptRoutine (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNoReturnRoutine (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRegularRoutine (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatExpression reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatExpression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_immediatExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatExpression (const class cPtr_immediatExpression * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatExpression init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatExpression extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatExpression ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatExpression class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatExpression : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatExpression_init (Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_immediatExpression (Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bitNumberExpression reference class
//--------------------------------------------------------------------------------------------------

class GGS_bitNumberExpression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_bitNumberExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_bitNumberExpression (const class cPtr_bitNumberExpression * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bitNumberExpression init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bitNumberExpression extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitNumberExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitNumberExpression ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @bitNumberExpression class
//--------------------------------------------------------------------------------------------------

class cPtr_bitNumberExpression : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void bitNumberExpression_init (Compiler * inCompiler) ;


//--- Extension method getBitNumber
  public: virtual void method_getBitNumber (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_stringset & arg_ioUsedRegisters,
           const class GGS_bitSliceTable arg_inBitSliceTable,
           class GGS_uint & arg_outBitNumber,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_bitNumberExpression (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @symbolTableForOptimizations map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_symbolTableForOptimizations final {

  public: DownEnumerator_symbolTableForOptimizations (const class GGS_symbolTableForOptimizations & inMap) ;

  public: ~ DownEnumerator_symbolTableForOptimizations (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mDefinitionLineIndex (LOCATION_ARGS) const ;

  public: class GGS_bool current_mIsDeletable (LOCATION_ARGS) const ;

  public: class GGS_symbolTableForOptimizations_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForOptimizations_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_symbolTableForOptimizations (const DownEnumerator_symbolTableForOptimizations &) = delete ;
  private: DownEnumerator_symbolTableForOptimizations & operator = (const DownEnumerator_symbolTableForOptimizations &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_symbolTableForOptimizations final {
  public: UpEnumerator_symbolTableForOptimizations (const class GGS_symbolTableForOptimizations & inMap)  ;

  public: ~ UpEnumerator_symbolTableForOptimizations (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mDefinitionLineIndex (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsDeletable (LOCATION_ARGS) const ;
  public: class GGS_symbolTableForOptimizations_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForOptimizations_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_symbolTableForOptimizations (const UpEnumerator_symbolTableForOptimizations &) = delete ;
  private: UpEnumerator_symbolTableForOptimizations & operator = (const UpEnumerator_symbolTableForOptimizations &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForOptimizations : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_symbolTableForOptimizations_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_symbolTableForOptimizations (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_symbolTableForOptimizations (void) ;

//--- Handle copy
  public: GGS_symbolTableForOptimizations (const GGS_symbolTableForOptimizations & inSource) ;
  public: GGS_symbolTableForOptimizations & operator = (const GGS_symbolTableForOptimizations & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_symbolTableForOptimizations_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_symbolTableForOptimizations_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForOptimizations_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_symbolTableForOptimizations init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_symbolTableForOptimizations extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_symbolTableForOptimizations class_func_mapWithMapToOverride (const class GGS_symbolTableForOptimizations & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uint constinArgument1,
                                 class GGS_bool constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeKey (class GGS_lstring constinArgument0,
                                 class GGS_uint & outArgument1,
                                 class GGS_bool & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMDefinitionLineIndexForKey (class GGS_uint constinArgument0,
                                                     class GGS_string constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsDeletableForKey (class GGS_bool constinArgument0,
                                             class GGS_string constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_uint & outArgument1,
                                 class GGS_bool & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mDefinitionLineIndexForKey (const class GGS_string & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mIsDeletableForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_symbolTableForOptimizations getter_overriddenMap (Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_symbolTableForOptimizations_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_symbolTableForOptimizations ;
  friend class DownEnumerator_symbolTableForOptimizations ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForOptimizations ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @symbolTableForOptimizations_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForOptimizations_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mDefinitionLineIndex ;
  public: inline GGS_uint readProperty_mDefinitionLineIndex (void) const {
    return mProperty_mDefinitionLineIndex ;
  }

  public: GGS_bool mProperty_mIsDeletable ;
  public: inline GGS_bool readProperty_mIsDeletable (void) const {
    return mProperty_mIsDeletable ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_symbolTableForOptimizations_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMDefinitionLineIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefinitionLineIndex = inValue ;
  }

  public: inline void setter_setMIsDeletable (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsDeletable = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_symbolTableForOptimizations_2E_element (const GGS_lstring & in_lkey,
                                                      const GGS_uint & in_mDefinitionLineIndex,
                                                      const GGS_bool & in_mIsDeletable) ;

//--------------------------------- Copy constructor
  public: GGS_symbolTableForOptimizations_2E_element (const GGS_symbolTableForOptimizations_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_symbolTableForOptimizations_2E_element & operator = (const GGS_symbolTableForOptimizations_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_symbolTableForOptimizations_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_uint & inOperand1,
                                                                              const class GGS_bool & inOperand2,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_symbolTableForOptimizations_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForOptimizations_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: symbolTableForOptimizations.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForOptimizations_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_symbolTableForOptimizations_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_symbolTableForOptimizations_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_symbolTableForOptimizations_2E_element_3F_ (const GGS_symbolTableForOptimizations_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_symbolTableForOptimizations_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_symbolTableForOptimizations_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_symbolTableForOptimizations_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForOptimizations_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//   enum baseline_5F_instruction_5F_FD_5F_base_5F_code
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_ADDWF,
    enum_ANDWF,
    enum_COMF,
    enum_DECF,
    enum_DECFSZ,
    enum_INCF,
    enum_INCFSZ,
    enum_IORWF,
    enum_MOVF,
    enum_RLF,
    enum_RRF,
    enum_SUBWF,
    enum_SWAPF,
    enum_XORWF
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_ADDWF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_ANDWF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_COMF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_DECF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_DECFSZ (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_INCF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_INCFSZ (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_IORWF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_MOVF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_RLF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_RRF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_SUBWF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_SWAPF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code class_func_XORWF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isADDWF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isANDWF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isCOMF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isDECF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isDECFSZ (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isINCF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isINCFSZ (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isIORWF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMOVF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRLF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRRF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSUBWF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSWAPF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isXORWF (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_instruction_FD_base_code mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum baseline_5F_F_5F_instruction_5F_base_5F_code
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_F_5F_instruction_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_CLRF,
    enum_MOVWF
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_F_5F_instruction_5F_base_5F_code extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code class_func_CLRF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code class_func_MOVWF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isCLRF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMOVWF (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_F_instruction_base_code mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum baseline_5F_bit_5F_oriented_5F_op
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_bit_5F_oriented_5F_op : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_bit_5F_oriented_5F_op (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_BCF,
    enum_BSF
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_bit_5F_oriented_5F_op extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_bit_5F_oriented_5F_op class_func_BCF (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_bit_5F_oriented_5F_op class_func_BSF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isBCF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBSF (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_bit_5F_oriented_5F_op ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_bit_oriented_op mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_baseline_5F_bit_5F_oriented_5F_op & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum baseline_5F_literal_5F_instruction_5F_opcode
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_literal_5F_instruction_5F_opcode : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_literal_5F_instruction_5F_opcode (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_ANDLW,
    enum_IORLW,
    enum_MOVLW,
    enum_RETLW,
    enum_XORLW
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_literal_5F_instruction_5F_opcode extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_literal_5F_instruction_5F_opcode class_func_ANDLW (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_literal_5F_instruction_5F_opcode class_func_IORLW (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_literal_5F_instruction_5F_opcode class_func_MOVLW (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_literal_5F_instruction_5F_opcode class_func_RETLW (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_literal_5F_instruction_5F_opcode class_func_XORLW (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isANDLW (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isIORLW (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMOVLW (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRETLW (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isXORLW (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_literal_5F_instruction_5F_opcode ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_literal_instruction_opcode mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_baseline_5F_literal_5F_instruction_5F_opcode & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum baseline_5F_WO_5F_OPERAND_5F_group
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_WO_5F_OPERAND_5F_group : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_WO_5F_OPERAND_5F_group (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_CLRW,
    enum_NOP,
    enum_CLRWDT,
    enum_OPTION_5F_,
    enum_SLEEP
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_WO_5F_OPERAND_5F_group extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_WO_5F_OPERAND_5F_group class_func_CLRW (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_WO_5F_OPERAND_5F_group class_func_CLRWDT (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_WO_5F_OPERAND_5F_group class_func_NOP (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_WO_5F_OPERAND_5F_group class_func_OPTION_5F_ (LOCATION_ARGS) ;

  public: static class GGS_baseline_5F_WO_5F_OPERAND_5F_group class_func_SLEEP (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isCLRW (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isCLRWDT (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNOP (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isOPTION_5F_ (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSLEEP (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_WO_5F_OPERAND_5F_group ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_WO_OPERAND_group mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_baseline_5F_WO_5F_OPERAND_5F_group & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_symbolTableForConvertingRelatives map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_midrange_5F_symbolTableForConvertingRelatives final {

  public: DownEnumerator_midrange_5F_symbolTableForConvertingRelatives (const class GGS_midrange_5F_symbolTableForConvertingRelatives & inMap) ;

  public: ~ DownEnumerator_midrange_5F_symbolTableForConvertingRelatives (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mRoutineAddress (LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_midrange_5F_symbolTableForConvertingRelatives (const DownEnumerator_midrange_5F_symbolTableForConvertingRelatives &) = delete ;
  private: DownEnumerator_midrange_5F_symbolTableForConvertingRelatives & operator = (const DownEnumerator_midrange_5F_symbolTableForConvertingRelatives &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_midrange_5F_symbolTableForConvertingRelatives final {
  public: UpEnumerator_midrange_5F_symbolTableForConvertingRelatives (const class GGS_midrange_5F_symbolTableForConvertingRelatives & inMap)  ;

  public: ~ UpEnumerator_midrange_5F_symbolTableForConvertingRelatives (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mRoutineAddress (LOCATION_ARGS) const ;
  public: class GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_midrange_5F_symbolTableForConvertingRelatives (const UpEnumerator_midrange_5F_symbolTableForConvertingRelatives &) = delete ;
  private: UpEnumerator_midrange_5F_symbolTableForConvertingRelatives & operator = (const UpEnumerator_midrange_5F_symbolTableForConvertingRelatives &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_symbolTableForConvertingRelatives : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_midrange_5F_symbolTableForConvertingRelatives (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_midrange_5F_symbolTableForConvertingRelatives (void) ;

//--- Handle copy
  public: GGS_midrange_5F_symbolTableForConvertingRelatives (const GGS_midrange_5F_symbolTableForConvertingRelatives & inSource) ;
  public: GGS_midrange_5F_symbolTableForConvertingRelatives & operator = (const GGS_midrange_5F_symbolTableForConvertingRelatives & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_symbolTableForConvertingRelatives init (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_symbolTableForConvertingRelatives extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_symbolTableForConvertingRelatives class_func_mapWithMapToOverride (const class GGS_midrange_5F_symbolTableForConvertingRelatives & inOperand0
                                                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uint constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMRoutineAddressForKey (class GGS_uint constinArgument0,
                                                class GGS_string constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_uint & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mRoutineAddressForKey (const class GGS_string & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_symbolTableForConvertingRelatives getter_overriddenMap (Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_midrange_5F_symbolTableForConvertingRelatives ;
  friend class DownEnumerator_midrange_5F_symbolTableForConvertingRelatives ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_symbolTableForConvertingRelatives_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mRoutineAddress ;
  public: inline GGS_uint readProperty_mRoutineAddress (void) const {
    return mProperty_mRoutineAddress ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRoutineAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineAddress = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element (const GGS_lstring & in_lkey,
                                                                        const GGS_uint & in_mRoutineAddress) ;

//--------------------------------- Copy constructor
  public: GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element (const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element & operator = (const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_uint & inOperand1,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element extractObject (const GGS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: midrange_symbolTableForConvertingRelatives.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ (const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction defineLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_defineLabelAtAddress (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                               class GGS_midrange_5F_symbolTableForConvertingRelatives & io_ioRoutineSymbolTable,
                                               class GGS_uint & io_ioAddress,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction compute'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_compute (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                  const class GGS_midrange_5F_symbolTableForConvertingRelatives constin_inRoutineSymbolTable,
                                  class GGS_uint & io_ioAddress,
                                  class GGS_bool & io_ioJUMP_5F_or_5F_JSR_5F_fixed,
                                  class GGS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                  const class GGS_uint constin_inIndex,
                                  class GGS_string & io_ioListFileContents,
                                  class Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instructionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_midrange_5F_intermediate_5F_instructionList final {
  public: DownEnumerator_midrange_5F_intermediate_5F_instructionList (const class GGS_midrange_5F_intermediate_5F_instructionList & inList) ;

  public: ~ DownEnumerator_midrange_5F_intermediate_5F_instructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_midrange_5F_intermediate_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_midrange_5F_intermediate_5F_instructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_midrange_5F_intermediate_5F_instructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_midrange_5F_intermediate_5F_instructionList (const DownEnumerator_midrange_5F_intermediate_5F_instructionList &) = delete ;
  private: DownEnumerator_midrange_5F_intermediate_5F_instructionList & operator = (const DownEnumerator_midrange_5F_intermediate_5F_instructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_midrange_5F_intermediate_5F_instructionList final {
  public: UpEnumerator_midrange_5F_intermediate_5F_instructionList (const class GGS_midrange_5F_intermediate_5F_instructionList & inList)  ;

  public: ~ UpEnumerator_midrange_5F_intermediate_5F_instructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_midrange_5F_intermediate_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_midrange_5F_intermediate_5F_instructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_midrange_5F_intermediate_5F_instructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_midrange_5F_intermediate_5F_instructionList (const UpEnumerator_midrange_5F_intermediate_5F_instructionList &) = delete ;
  private: UpEnumerator_midrange_5F_intermediate_5F_instructionList & operator = (const UpEnumerator_midrange_5F_intermediate_5F_instructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @midrange_intermediate_instructionList list
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instructionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_midrange_5F_intermediate_5F_instructionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instructionList (void) ;

//--- Destructor
  public: virtual ~ GGS_midrange_5F_intermediate_5F_instructionList (void) = default ;

//--- Copy
  public: GGS_midrange_5F_intermediate_5F_instructionList (const GGS_midrange_5F_intermediate_5F_instructionList &) = default ;
  public: GGS_midrange_5F_intermediate_5F_instructionList & operator = (const GGS_midrange_5F_intermediate_5F_instructionList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_midrange_5F_intermediate_5F_instructionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_midrange_5F_intermediate_5F_instructionList subList (const int32_t inStart,
                                                                    const int32_t inLength,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_midrange_5F_intermediate_5F_instructionList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_midrange_5F_intermediate_5F_instruction & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instructionList init (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instructionList extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instructionList class_func_listWithValue (const class GGS_midrange_5F_intermediate_5F_instruction & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_midrange_5F_intermediate_5F_instructionList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_midrange_5F_intermediate_5F_instruction & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_midrange_5F_intermediate_5F_instructionList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_midrange_5F_intermediate_5F_instructionList add_operation (const GGS_midrange_5F_intermediate_5F_instructionList & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_midrange_5F_intermediate_5F_instruction constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_midrange_5F_intermediate_5F_instruction constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_midrange_5F_intermediate_5F_instruction & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_midrange_5F_intermediate_5F_instruction & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_midrange_5F_intermediate_5F_instruction & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionAtIndex (class GGS_midrange_5F_intermediate_5F_instruction constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_midrange_5F_intermediate_5F_instruction & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_midrange_5F_intermediate_5F_instruction & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_intermediate_5F_instruction getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_intermediate_5F_instructionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_intermediate_5F_instructionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_intermediate_5F_instructionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_midrange_5F_intermediate_5F_instructionList ;
  friend class DownEnumerator_midrange_5F_intermediate_5F_instructionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instructionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_instruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instruction_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_instruction_2E_weak (const class GGS_baseline_5F_assembly_5F_instruction & inSource) ;

  public: GGS_baseline_5F_assembly_5F_instruction_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_instruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_instruction_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_instruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_instruction bang_baseline_5F_assembly_5F_instruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_assembly_5F_instruction unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_instruction_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_instruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_instruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_instructionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_baseline_5F_assembly_5F_instructionList final {
  public: DownEnumerator_baseline_5F_assembly_5F_instructionList (const class GGS_baseline_5F_assembly_5F_instructionList & inList) ;

  public: ~ DownEnumerator_baseline_5F_assembly_5F_instructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_baseline_5F_assembly_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baseline_5F_assembly_5F_instructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_baseline_5F_assembly_5F_instructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_baseline_5F_assembly_5F_instructionList (const DownEnumerator_baseline_5F_assembly_5F_instructionList &) = delete ;
  private: DownEnumerator_baseline_5F_assembly_5F_instructionList & operator = (const DownEnumerator_baseline_5F_assembly_5F_instructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_baseline_5F_assembly_5F_instructionList final {
  public: UpEnumerator_baseline_5F_assembly_5F_instructionList (const class GGS_baseline_5F_assembly_5F_instructionList & inList)  ;

  public: ~ UpEnumerator_baseline_5F_assembly_5F_instructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_baseline_5F_assembly_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baseline_5F_assembly_5F_instructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_baseline_5F_assembly_5F_instructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_baseline_5F_assembly_5F_instructionList (const UpEnumerator_baseline_5F_assembly_5F_instructionList &) = delete ;
  private: UpEnumerator_baseline_5F_assembly_5F_instructionList & operator = (const UpEnumerator_baseline_5F_assembly_5F_instructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @baseline_assembly_instructionList list
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instructionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_baseline_5F_assembly_5F_instructionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_baseline_5F_assembly_5F_instructionList (void) ;

//--- Destructor
  public: virtual ~ GGS_baseline_5F_assembly_5F_instructionList (void) = default ;

//--- Copy
  public: GGS_baseline_5F_assembly_5F_instructionList (const GGS_baseline_5F_assembly_5F_instructionList &) = default ;
  public: GGS_baseline_5F_assembly_5F_instructionList & operator = (const GGS_baseline_5F_assembly_5F_instructionList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_baseline_5F_assembly_5F_instructionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_baseline_5F_assembly_5F_instructionList subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_baseline_5F_assembly_5F_instructionList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_baseline_5F_assembly_5F_instruction & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_instructionList init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_instructionList extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_instructionList class_func_listWithValue (const class GGS_baseline_5F_assembly_5F_instruction & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_baseline_5F_assembly_5F_instructionList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_baseline_5F_assembly_5F_instruction & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_baseline_5F_assembly_5F_instructionList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_baseline_5F_assembly_5F_instructionList add_operation (const GGS_baseline_5F_assembly_5F_instructionList & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_baseline_5F_assembly_5F_instruction constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_baseline_5F_assembly_5F_instruction constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_baseline_5F_assembly_5F_instruction & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_baseline_5F_assembly_5F_instruction & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_baseline_5F_assembly_5F_instruction & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionAtIndex (class GGS_baseline_5F_assembly_5F_instruction constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_baseline_5F_assembly_5F_instruction & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_baseline_5F_assembly_5F_instruction & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_baseline_5F_assembly_5F_instruction getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_baseline_5F_assembly_5F_instructionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_baseline_5F_assembly_5F_instructionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_baseline_5F_assembly_5F_instructionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_baseline_5F_assembly_5F_instructionList ;
  friend class DownEnumerator_baseline_5F_assembly_5F_instructionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instructionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_instructionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instructionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_baseline_5F_assembly_5F_instruction mProperty_mInstruction ;
  public: inline GGS_baseline_5F_assembly_5F_instruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instructionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_baseline_5F_assembly_5F_instruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_baseline_5F_assembly_5F_instructionList_2E_element (const GGS_baseline_5F_assembly_5F_instruction & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_baseline_5F_assembly_5F_instructionList_2E_element (const GGS_baseline_5F_assembly_5F_instructionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_baseline_5F_assembly_5F_instructionList_2E_element & operator = (const GGS_baseline_5F_assembly_5F_instructionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_instructionList_2E_element init_21_ (const class GGS_baseline_5F_assembly_5F_instruction & inOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_instructionList_2E_element extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instructionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_pseudo_5F_ORG reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_pseudo_5F_ORG : public GGS_baseline_5F_assembly_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_ORG (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_ORG (const class cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mOrigin (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_pseudo_5F_ORG init_21_ (const class GGS_uint & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_pseudo_5F_ORG extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_assembly_pseudo_ORG class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG : public cPtr_baseline_5F_assembly_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_pseudo_5F_ORG_init_21_ (const class GGS_uint & inOperand0,
                                                               Compiler * inCompiler) ;


//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterLabelAtAddress
  public: virtual void method_enterLabelAtAddress (class GGS_baseline_5F_symbolTable & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_uint mProperty_mOrigin ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG (const GGS_uint & in_mOrigin,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak : public GGS_baseline_5F_assembly_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak (const class GGS_baseline_5F_assembly_5F_pseudo_5F_ORG & inSource) ;

  public: GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_pseudo_5F_ORG & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_ORG bang_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_ORG unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE : public GGS_baseline_5F_assembly_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (const class cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mRoutineName (void) const ;

  public: class GGS_bool readProperty_mIsRegular (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_bool & inOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_assembly_pseudo_BEGINOFROUTINE class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE : public cPtr_baseline_5F_assembly_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_init_21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_bool & inOperand1,
                                                                              Compiler * inCompiler) ;


//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mRoutineName ;
  public: GGS_bool mProperty_mIsRegular ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (const GGS_lstring & in_mRoutineName,
                                                                 const GGS_bool & in_mIsRegular,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak : public GGS_baseline_5F_assembly_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak (const class GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE & inSource) ;

  public: GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE bang_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak extractObject (const GGS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE : public GGS_baseline_5F_assembly_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (const class cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mRoutineName (void) const ;

  public: class GGS_uint readProperty_mPage (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_uint & inOperand1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_assembly_pseudo_ENDOFROUTINE class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE : public cPtr_baseline_5F_assembly_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_init_21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_uint & inOperand1,
                                                                            Compiler * inCompiler) ;


//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mRoutineName ;
  public: GGS_uint mProperty_mPage ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (const GGS_lstring & in_mRoutineName,
                                                               const GGS_uint & in_mPage,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak : public GGS_baseline_5F_assembly_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak (const class GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE & inSource) ;

  public: GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE bang_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_pseudo_5F_LABEL reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL : public GGS_baseline_5F_assembly_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL (const class cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLabel (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL init_21_ (const class GGS_lstring & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_assembly_pseudo_LABEL class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL : public cPtr_baseline_5F_assembly_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_pseudo_5F_LABEL_init_21_ (const class GGS_lstring & inOperand0,
                                                                 Compiler * inCompiler) ;


//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterLabelAtAddress
  public: virtual void method_enterLabelAtAddress (class GGS_baseline_5F_symbolTable & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mLabel ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (const GGS_lstring & in_mLabel,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak : public GGS_baseline_5F_assembly_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak (const class GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL & inSource) ;

  public: GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL bang_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_actualInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_actualInstruction : public GGS_baseline_5F_assembly_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_actualInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_actualInstruction (const class cPtr_baseline_5F_assembly_5F_actualInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_actualInstruction init_21_ (const class GGS_location & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_actualInstruction extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_actualInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_assembly_actualInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_actualInstruction : public cPtr_baseline_5F_assembly_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_actualInstruction_init_21_ (const class GGS_location & inOperand0,
                                                                   Compiler * inCompiler) ;


//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterLabelAtAddress
  public: virtual void method_enterLabelAtAddress (class GGS_baseline_5F_symbolTable & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_actualInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_actualInstruction (const GGS_location & in_mInstructionLocation,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_actualInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak : public GGS_baseline_5F_assembly_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak (const class GGS_baseline_5F_assembly_5F_actualInstruction & inSource) ;

  public: GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_actualInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_actualInstruction bang_baseline_5F_assembly_5F_actualInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_assembly_5F_actualInstruction unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_registerExpression struct
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_registerExpression : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mAssemblyString ;
  public: inline GGS_string readProperty_mAssemblyString (void) const {
    return mProperty_mAssemblyString ;
  }

  public: GGS_uint mProperty_mRegisterAddress ;
  public: inline GGS_uint readProperty_mRegisterAddress (void) const {
    return mProperty_mRegisterAddress ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_registerExpression (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAssemblyString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssemblyString = inValue ;
  }

  public: inline void setter_setMRegisterAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterAddress = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_baseline_5F_intermediate_5F_registerExpression (const GGS_string & in_mAssemblyString,
                                                              const GGS_uint & in_mRegisterAddress) ;

//--------------------------------- Copy constructor
  public: GGS_baseline_5F_intermediate_5F_registerExpression (const GGS_baseline_5F_intermediate_5F_registerExpression & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_baseline_5F_intermediate_5F_registerExpression & operator = (const GGS_baseline_5F_intermediate_5F_registerExpression & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_registerExpression init_21__21_ (const class GGS_string & inOperand0,
                                                                                  const class GGS_uint & inOperand1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_registerExpression extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_registerExpression ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_instruction_5F_FD reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instruction_5F_FD : public GGS_baseline_5F_assembly_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instruction_5F_FD (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_instruction_5F_FD (const class cPtr_baseline_5F_assembly_5F_instruction_5F_FD * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code readProperty_mInstruction (void) const ;

  public: class GGS_baseline_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_FD init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                     const class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                                     const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                     const class GGS_bool & inOperand3,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_FD extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_FD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_assembly_instruction_FD class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_instruction_5F_FD : public cPtr_baseline_5F_assembly_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_instruction_5F_FD_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                               const class GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                               const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                               const class GGS_bool & inOperand3,
                                                                               Compiler * inCompiler) ;


//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code mProperty_mInstruction ;
  public: GGS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_instruction_5F_FD (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_instruction_5F_FD (const GGS_location & in_mInstructionLocation,
                                                          const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                          const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                          const GGS_bool & in_m_5F_W_5F_isDestination,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_instruction_5F_FD_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak : public GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak (const class GGS_baseline_5F_assembly_5F_instruction_5F_FD & inSource) ;

  public: GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_instruction_5F_FD & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_instruction_5F_FD bang_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_assembly_5F_instruction_5F_FD unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_instruction_5F_F reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instruction_5F_F : public GGS_baseline_5F_assembly_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instruction_5F_F (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_instruction_5F_F (const class cPtr_baseline_5F_assembly_5F_instruction_5F_F * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code readProperty_mInstruction (void) const ;

  public: class GGS_baseline_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_F init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                const class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_F extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_F & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_assembly_instruction_F class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_instruction_5F_F : public cPtr_baseline_5F_assembly_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_instruction_5F_F_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                          const class GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                          const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                          Compiler * inCompiler) ;


//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_F_5F_instruction_5F_base_5F_code mProperty_mInstruction ;
  public: GGS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_instruction_5F_F (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_instruction_5F_F (const GGS_location & in_mInstructionLocation,
                                                         const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                         const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_instruction_5F_F_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak : public GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak (const class GGS_baseline_5F_assembly_5F_instruction_5F_F & inSource) ;

  public: GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_instruction_5F_F & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_instruction_5F_F bang_baseline_5F_assembly_5F_instruction_5F_F_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_assembly_5F_instruction_5F_F unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_instruction_5F_FB reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instruction_5F_FB : public GGS_baseline_5F_assembly_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instruction_5F_FB (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_instruction_5F_FB (const class cPtr_baseline_5F_assembly_5F_instruction_5F_FB * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_bit_5F_oriented_5F_op readProperty_mInstruction (void) const ;

  public: class GGS_baseline_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_uint readProperty_mBitNumber (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_FB init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                     const class GGS_baseline_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                                     const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                     const class GGS_uint & inOperand3,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_FB extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_FB & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_assembly_instruction_FB class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_instruction_5F_FB : public cPtr_baseline_5F_assembly_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_instruction_5F_FB_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                               const class GGS_baseline_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                               const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                               const class GGS_uint & inOperand3,
                                                                               Compiler * inCompiler) ;


//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_bit_5F_oriented_5F_op mProperty_mInstruction ;
  public: GGS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_uint mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_instruction_5F_FB (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_instruction_5F_FB (const GGS_location & in_mInstructionLocation,
                                                          const GGS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                          const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                          const GGS_uint & in_mBitNumber,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_instruction_5F_FB_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak : public GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak (const class GGS_baseline_5F_assembly_5F_instruction_5F_FB & inSource) ;

  public: GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_instruction_5F_FB & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_instruction_5F_FB bang_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_assembly_5F_instruction_5F_FB unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_instruction_5F_BitTestSkip reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip : public GGS_baseline_5F_assembly_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (const class cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mSkipIfSet (void) const ;

  public: class GGS_baseline_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_uint readProperty_mBitNumber (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                              const class GGS_bool & inOperand1,
                                                                                              const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                              const class GGS_uint & inOperand3,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_assembly_instruction_BitTestSkip class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip : public cPtr_baseline_5F_assembly_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_instruction_5F_BitTestSkip_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                        const class GGS_bool & inOperand1,
                                                                                        const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                        const class GGS_uint & inOperand3,
                                                                                        Compiler * inCompiler) ;


//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mSkipIfSet ;
  public: GGS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_uint mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_bool & in_mSkipIfSet,
                                                                   const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                   const GGS_uint & in_mBitNumber,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak : public GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak (const class GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip & inSource) ;

  public: GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip bang_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_GOTO reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_GOTO : public GGS_baseline_5F_assembly_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_GOTO (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_GOTO (const class cPtr_baseline_5F_assembly_5F_GOTO * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_GOTO init_21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_lstring & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_GOTO extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_GOTO & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_assembly_GOTO class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_GOTO : public cPtr_baseline_5F_assembly_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_GOTO_init_21__21_ (const class GGS_location & inOperand0,
                                                          const class GGS_lstring & inOperand1,
                                                          Compiler * inCompiler) ;


//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_GOTO (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_GOTO (const GGS_location & in_mInstructionLocation,
                                             const GGS_lstring & in_mTargetLabel,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_GOTO_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_GOTO_2E_weak : public GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_GOTO_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_GOTO_2E_weak (const class GGS_baseline_5F_assembly_5F_GOTO & inSource) ;

  public: GGS_baseline_5F_assembly_5F_GOTO_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_GOTO & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_GOTO_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_GOTO_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_GOTO bang_baseline_5F_assembly_5F_GOTO_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_assembly_5F_GOTO unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_GOTO_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_GOTO_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_GOTO_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_SKIP reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_SKIP : public GGS_baseline_5F_assembly_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_SKIP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_SKIP (const class cPtr_baseline_5F_assembly_5F_SKIP * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_SKIP init_21_ (const class GGS_location & inOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_SKIP extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_SKIP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_assembly_SKIP class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_SKIP : public cPtr_baseline_5F_assembly_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_SKIP_init_21_ (const class GGS_location & inOperand0,
                                                      Compiler * inCompiler) ;


//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_SKIP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_SKIP (const GGS_location & in_mInstructionLocation,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_SKIP_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_SKIP_2E_weak : public GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_SKIP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_SKIP_2E_weak (const class GGS_baseline_5F_assembly_5F_SKIP & inSource) ;

  public: GGS_baseline_5F_assembly_5F_SKIP_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_SKIP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_SKIP_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_SKIP_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_SKIP bang_baseline_5F_assembly_5F_SKIP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_assembly_5F_SKIP unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_SKIP_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_SKIP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_SKIP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_CALL reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_CALL : public GGS_baseline_5F_assembly_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_CALL (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_CALL (const class cPtr_baseline_5F_assembly_5F_CALL * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_CALL init_21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_lstring & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_CALL extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_CALL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_assembly_CALL class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_CALL : public cPtr_baseline_5F_assembly_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_CALL_init_21__21_ (const class GGS_location & inOperand0,
                                                          const class GGS_lstring & inOperand1,
                                                          Compiler * inCompiler) ;


//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_CALL (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_CALL (const GGS_location & in_mInstructionLocation,
                                             const GGS_lstring & in_mTargetLabel,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_CALL_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_CALL_2E_weak : public GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_CALL_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_CALL_2E_weak (const class GGS_baseline_5F_assembly_5F_CALL & inSource) ;

  public: GGS_baseline_5F_assembly_5F_CALL_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_CALL & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_CALL_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_CALL_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_CALL bang_baseline_5F_assembly_5F_CALL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_assembly_5F_CALL unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_CALL_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_CALL_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_CALL_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_WO_5F_OPERAND reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_WO_5F_OPERAND : public GGS_baseline_5F_assembly_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_WO_5F_OPERAND (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_WO_5F_OPERAND (const class cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_WO_5F_OPERAND_5F_group readProperty_mInstruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_WO_5F_OPERAND init_21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_baseline_5F_WO_5F_OPERAND_5F_group & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_WO_5F_OPERAND extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_assembly_WO_OPERAND class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND : public cPtr_baseline_5F_assembly_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_WO_5F_OPERAND_init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_baseline_5F_WO_5F_OPERAND_5F_group & inOperand1,
                                                                   Compiler * inCompiler) ;


//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_WO_5F_OPERAND_5F_group mProperty_mInstruction ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND (const GGS_location & in_mInstructionLocation,
                                                      const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak : public GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak (const class GGS_baseline_5F_assembly_5F_WO_5F_OPERAND & inSource) ;

  public: GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_WO_5F_OPERAND & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_WO_5F_OPERAND bang_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_assembly_5F_WO_5F_OPERAND unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_TRIS reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_TRIS : public GGS_baseline_5F_assembly_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_TRIS (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_TRIS (const class cPtr_baseline_5F_assembly_5F_TRIS * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mOperand (void) const ;

  public: class GGS_uint readProperty_mOpcode (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_TRIS init_21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    const class GGS_uint & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_TRIS extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_TRIS & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_assembly_TRIS class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_TRIS : public cPtr_baseline_5F_assembly_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_TRIS_init_21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              const class GGS_uint & inOperand2,
                                                              Compiler * inCompiler) ;


//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mOperand ;
  public: GGS_uint mProperty_mOpcode ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_TRIS (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_TRIS (const GGS_location & in_mInstructionLocation,
                                             const GGS_lstring & in_mOperand,
                                             const GGS_uint & in_mOpcode,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_TRIS_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_TRIS_2E_weak : public GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_TRIS_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_TRIS_2E_weak (const class GGS_baseline_5F_assembly_5F_TRIS & inSource) ;

  public: GGS_baseline_5F_assembly_5F_TRIS_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_TRIS & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_TRIS_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_TRIS_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_TRIS bang_baseline_5F_assembly_5F_TRIS_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_assembly_5F_TRIS unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_TRIS_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_TRIS_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_TRIS_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation : public GGS_baseline_5F_assembly_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation (const class cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_literal_5F_instruction_5F_opcode readProperty_mInstruction (void) const ;

  public: class GGS_uint readProperty_mLiteralValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                               const class GGS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                               const class GGS_uint & inOperand2,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_assembly_instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation : public cPtr_baseline_5F_assembly_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_instruction_5F_literalOperation_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                         const class GGS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                         const class GGS_uint & inOperand2,
                                                                                         Compiler * inCompiler) ;


//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_literal_5F_instruction_5F_opcode mProperty_mInstruction ;
  public: GGS_uint mProperty_mLiteralValue ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                        const GGS_uint & in_mLiteralValue,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak : public GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak (const class GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation & inSource) ;

  public: GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation bang_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_incDecRegisterInCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_incDecRegisterInCondition : public GGS_baseline_5F_assembly_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_incDecRegisterInCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_assembly_5F_incDecRegisterInCondition (const class cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_baseline_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_bool readProperty_mIncrement (void) const ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_assembly_5F_incDecRegisterInCondition init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                             const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand1,
                                                                                             const class GGS_bool & inOperand2,
                                                                                             const class GGS_bool & inOperand3,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_incDecRegisterInCondition extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_assembly_incDecRegisterInCondition class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition : public cPtr_baseline_5F_assembly_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_assembly_5F_incDecRegisterInCondition_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_baseline_5F_intermediate_5F_registerExpression & inOperand1,
                                                                                       const class GGS_bool & inOperand2,
                                                                                       const class GGS_bool & inOperand3,
                                                                                       Compiler * inCompiler) ;


//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_baseline_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioWordAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_bool mProperty_mIncrement ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                  const GGS_bool & in_mIncrement,
                                                                  const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak : public GGS_baseline_5F_assembly_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak (const class GGS_baseline_5F_assembly_5F_incDecRegisterInCondition & inSource) ;

  public: GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak & operator = (const class GGS_baseline_5F_assembly_5F_incDecRegisterInCondition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak init_nil (void) {
    GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_baseline_5F_assembly_5F_incDecRegisterInCondition bang_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_baseline_5F_assembly_5F_incDecRegisterInCondition unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_symbolTable map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_midrange_5F_symbolTable final {

  public: DownEnumerator_midrange_5F_symbolTable (const class GGS_midrange_5F_symbolTable & inMap) ;

  public: ~ DownEnumerator_midrange_5F_symbolTable (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mRoutineAddress (LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_symbolTable_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTable_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_midrange_5F_symbolTable (const DownEnumerator_midrange_5F_symbolTable &) = delete ;
  private: DownEnumerator_midrange_5F_symbolTable & operator = (const DownEnumerator_midrange_5F_symbolTable &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_midrange_5F_symbolTable final {
  public: UpEnumerator_midrange_5F_symbolTable (const class GGS_midrange_5F_symbolTable & inMap)  ;

  public: ~ UpEnumerator_midrange_5F_symbolTable (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mRoutineAddress (LOCATION_ARGS) const ;
  public: class GGS_midrange_5F_symbolTable_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTable_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_midrange_5F_symbolTable (const UpEnumerator_midrange_5F_symbolTable &) = delete ;
  private: UpEnumerator_midrange_5F_symbolTable & operator = (const UpEnumerator_midrange_5F_symbolTable &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_symbolTable : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_midrange_5F_symbolTable_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_midrange_5F_symbolTable (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_midrange_5F_symbolTable (void) ;

//--- Handle copy
  public: GGS_midrange_5F_symbolTable (const GGS_midrange_5F_symbolTable & inSource) ;
  public: GGS_midrange_5F_symbolTable & operator = (const GGS_midrange_5F_symbolTable & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_midrange_5F_symbolTable_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTable_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_symbolTable_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_symbolTable init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_symbolTable extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_symbolTable class_func_mapWithMapToOverride (const class GGS_midrange_5F_symbolTable & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uint constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMRoutineAddressForKey (class GGS_uint constinArgument0,
                                                class GGS_string constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_uint & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mRoutineAddressForKey (const class GGS_string & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_symbolTable getter_overriddenMap (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_midrange_5F_symbolTable_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_midrange_5F_symbolTable ;
  friend class DownEnumerator_midrange_5F_symbolTable ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTable ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_symbolTable_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_symbolTable_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mRoutineAddress ;
  public: inline GGS_uint readProperty_mRoutineAddress (void) const {
    return mProperty_mRoutineAddress ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_symbolTable_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRoutineAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineAddress = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_midrange_5F_symbolTable_2E_element (const GGS_lstring & in_lkey,
                                                  const GGS_uint & in_mRoutineAddress) ;

//--------------------------------- Copy constructor
  public: GGS_midrange_5F_symbolTable_2E_element (const GGS_midrange_5F_symbolTable_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_midrange_5F_symbolTable_2E_element & operator = (const GGS_midrange_5F_symbolTable_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_symbolTable_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_uint & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_symbolTable_2E_element extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTable_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: midrange_symbolTable.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_symbolTable_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_midrange_5F_symbolTable_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_symbolTable_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_midrange_5F_symbolTable_2E_element_3F_ (const GGS_midrange_5F_symbolTable_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_midrange_5F_symbolTable_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_midrange_5F_symbolTable_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_symbolTable_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTable_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_intermediate_instruction enterLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterLabelAtAddress (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                              class GGS_midrange_5F_symbolTable & io_ioRoutineSymbolTable,
                                              class GGS_uint & io_ioAddress,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateBinaryCodeAtAddress (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                      const class GGS_registerTable constin_inRegisterTable,
                                                      const class GGS_constantMap constin_inConstantMap,
                                                      const class GGS_uint constin_inTotalBankCount,
                                                      const class GGS_midrange_5F_symbolTable constin_inRoutineSymbolTable,
                                                      class GGS_string & io_ioListFileContents,
                                                      class GGS_uint & io_ioAddress,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum midrange_5F_instruction_5F_FD_5F_base_5F_code
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_ADDWF,
    enum_ANDWF,
    enum_COMF,
    enum_DECF,
    enum_DECFSZ,
    enum_INCF,
    enum_INCFSZ,
    enum_IORWF,
    enum_MOVF,
    enum_RLF,
    enum_RRF,
    enum_SUBWF,
    enum_SWAPF,
    enum_XORWF
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_ADDWF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_ANDWF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_COMF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_DECF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_DECFSZ (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_INCF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_INCFSZ (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_IORWF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_MOVF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_RLF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_RRF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_SUBWF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_SWAPF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code class_func_XORWF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isADDWF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isANDWF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isCOMF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isDECF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isDECFSZ (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isINCF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isINCFSZ (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isIORWF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMOVF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRLF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRRF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSUBWF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSWAPF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isXORWF (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code ;

//--------------------------------------------------------------------------------------------------
//   enum midrange_5F_F_5F_instruction_5F_base_5F_code
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_F_5F_instruction_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_CLRF,
    enum_MOVWF
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_F_5F_instruction_5F_base_5F_code extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code class_func_CLRF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code class_func_MOVWF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isCLRF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMOVWF (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code ;

//--------------------------------------------------------------------------------------------------
//   enum midrange_5F_bit_5F_oriented_5F_op
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_bit_5F_oriented_5F_op : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_bit_5F_oriented_5F_op (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_BCF,
    enum_BSF
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_bit_5F_oriented_5F_op extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_bit_5F_oriented_5F_op class_func_BCF (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_bit_5F_oriented_5F_op class_func_BSF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isBCF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBSF (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_bit_5F_oriented_5F_op ;

//--------------------------------------------------------------------------------------------------
//   enum midrange_5F_literal_5F_instruction_5F_opcode
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_literal_5F_instruction_5F_opcode : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_literal_5F_instruction_5F_opcode (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_ADDLW,
    enum_ANDLW,
    enum_IORLW,
    enum_MOVLW,
    enum_RETLW,
    enum_SUBLW,
    enum_XORLW
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_literal_5F_instruction_5F_opcode extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_literal_5F_instruction_5F_opcode class_func_ADDLW (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_literal_5F_instruction_5F_opcode class_func_ANDLW (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_literal_5F_instruction_5F_opcode class_func_IORLW (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_literal_5F_instruction_5F_opcode class_func_MOVLW (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_literal_5F_instruction_5F_opcode class_func_RETLW (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_literal_5F_instruction_5F_opcode class_func_SUBLW (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_literal_5F_instruction_5F_opcode class_func_XORLW (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_literal_5F_instruction_5F_opcode & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isADDLW (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isANDLW (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isIORLW (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMOVLW (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRETLW (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSUBLW (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isXORLW (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_literal_5F_instruction_5F_opcode ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_AbstractCaseItem reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_AbstractCaseItem : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_AbstractCaseItem (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_AbstractCaseItem (const class cPtr_pic_31__38_AbstractCaseItem * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_AbstractCaseItem init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_AbstractCaseItem extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_AbstractCaseItem & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18AbstractCaseItem class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_AbstractCaseItem : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_AbstractCaseItem_init (Compiler * inCompiler) ;


//--- Extension method analyzeCaseItem
  public: virtual void method_analyzeCaseItem (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_lstring arg_inConditionTrueLabel,
           const class GGS_string arg_inIndexForLabels,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_caseConstantMap & arg_ioCaseConstantMap,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_sint_36__34_ & arg_ioLastComparisonValue,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_pic_31__38_AbstractCaseItem (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_AbstractCaseItem_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_AbstractCaseItem_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_AbstractCaseItem_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_AbstractCaseItem_2E_weak (const class GGS_pic_31__38_AbstractCaseItem & inSource) ;

  public: GGS_pic_31__38_AbstractCaseItem_2E_weak & operator = (const class GGS_pic_31__38_AbstractCaseItem & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_AbstractCaseItem_2E_weak init_nil (void) {
    GGS_pic_31__38_AbstractCaseItem_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_AbstractCaseItem bang_pic_31__38_AbstractCaseItem_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_AbstractCaseItem unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_AbstractCaseItem_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_AbstractCaseItem_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_AbstractCaseItem_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_IntervalCaseItem reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_IntervalCaseItem : public GGS_pic_31__38_AbstractCaseItem {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_IntervalCaseItem (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_IntervalCaseItem (const class cPtr_pic_31__38_IntervalCaseItem * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mMinExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mMaxExpression (void) const ;

  public: class GGS_location readProperty_mCaseExpressionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_IntervalCaseItem init_21__21__21_ (const class GGS_immediatExpression & inOperand0,
                                                                   const class GGS_immediatExpression & inOperand1,
                                                                   const class GGS_location & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_IntervalCaseItem extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_IntervalCaseItem & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18IntervalCaseItem class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_IntervalCaseItem : public cPtr_pic_31__38_AbstractCaseItem {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_IntervalCaseItem_init_21__21__21_ (const class GGS_immediatExpression & inOperand0,
                                                             const class GGS_immediatExpression & inOperand1,
                                                             const class GGS_location & inOperand2,
                                                             Compiler * inCompiler) ;


//--- Extension method analyzeCaseItem
  public: virtual void method_analyzeCaseItem (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_lstring arg_inConditionTrueLabel,
           const class GGS_string arg_inIndexForLabels,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_caseConstantMap & arg_ioCaseConstantMap,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_sint_36__34_ & arg_ioLastComparisonValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mMinExpression ;
  public: GGS_immediatExpression mProperty_mMaxExpression ;
  public: GGS_location mProperty_mCaseExpressionLocation ;


//--- Default constructor
  public: cPtr_pic_31__38_IntervalCaseItem (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_IntervalCaseItem (const GGS_immediatExpression & in_mMinExpression,
                                            const GGS_immediatExpression & in_mMaxExpression,
                                            const GGS_location & in_mCaseExpressionLocation,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_IntervalCaseItem_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_IntervalCaseItem_2E_weak : public GGS_pic_31__38_AbstractCaseItem_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_IntervalCaseItem_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_IntervalCaseItem_2E_weak (const class GGS_pic_31__38_IntervalCaseItem & inSource) ;

  public: GGS_pic_31__38_IntervalCaseItem_2E_weak & operator = (const class GGS_pic_31__38_IntervalCaseItem & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_IntervalCaseItem_2E_weak init_nil (void) {
    GGS_pic_31__38_IntervalCaseItem_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_IntervalCaseItem bang_pic_31__38_IntervalCaseItem_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_IntervalCaseItem unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_IntervalCaseItem_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_IntervalCaseItem_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_IntervalCaseItem_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_CaseExpressionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38_CaseExpressionList final {
  public: DownEnumerator_pic_31__38_CaseExpressionList (const class GGS_pic_31__38_CaseExpressionList & inList) ;

  public: ~ DownEnumerator_pic_31__38_CaseExpressionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_pic_31__38_AbstractCaseItem current_mCaseItem (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_CaseExpressionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_CaseExpressionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_pic_31__38_CaseExpressionList (const DownEnumerator_pic_31__38_CaseExpressionList &) = delete ;
  private: DownEnumerator_pic_31__38_CaseExpressionList & operator = (const DownEnumerator_pic_31__38_CaseExpressionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38_CaseExpressionList final {
  public: UpEnumerator_pic_31__38_CaseExpressionList (const class GGS_pic_31__38_CaseExpressionList & inList)  ;

  public: ~ UpEnumerator_pic_31__38_CaseExpressionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_pic_31__38_AbstractCaseItem current_mCaseItem (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_CaseExpressionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_CaseExpressionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_pic_31__38_CaseExpressionList (const UpEnumerator_pic_31__38_CaseExpressionList &) = delete ;
  private: UpEnumerator_pic_31__38_CaseExpressionList & operator = (const UpEnumerator_pic_31__38_CaseExpressionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @pic18CaseExpressionList list
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_CaseExpressionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_pic_31__38_CaseExpressionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_pic_31__38_CaseExpressionList (void) ;

//--- Destructor
  public: virtual ~ GGS_pic_31__38_CaseExpressionList (void) = default ;

//--- Copy
  public: GGS_pic_31__38_CaseExpressionList (const GGS_pic_31__38_CaseExpressionList &) = default ;
  public: GGS_pic_31__38_CaseExpressionList & operator = (const GGS_pic_31__38_CaseExpressionList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_pic_31__38_CaseExpressionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_pic_31__38_CaseExpressionList subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_pic_31__38_CaseExpressionList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_pic_31__38_AbstractCaseItem & in_mCaseItem
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_CaseExpressionList init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_CaseExpressionList extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_CaseExpressionList class_func_listWithValue (const class GGS_pic_31__38_AbstractCaseItem & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_pic_31__38_CaseExpressionList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_pic_31__38_AbstractCaseItem & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_pic_31__38_CaseExpressionList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_pic_31__38_CaseExpressionList add_operation (const GGS_pic_31__38_CaseExpressionList & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_pic_31__38_AbstractCaseItem constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_pic_31__38_AbstractCaseItem constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_pic_31__38_AbstractCaseItem & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_pic_31__38_AbstractCaseItem & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_pic_31__38_AbstractCaseItem & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMCaseItemAtIndex (class GGS_pic_31__38_AbstractCaseItem constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_pic_31__38_AbstractCaseItem & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_pic_31__38_AbstractCaseItem & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_pic_31__38_AbstractCaseItem getter_mCaseItemAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_pic_31__38_CaseExpressionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_pic_31__38_CaseExpressionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_pic_31__38_CaseExpressionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38_CaseExpressionList ;
  friend class DownEnumerator_pic_31__38_CaseExpressionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_CaseExpressionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_CaseExpressionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_pic_31__38_AbstractCaseItem mProperty_mCaseItem ;
  public: inline GGS_pic_31__38_AbstractCaseItem readProperty_mCaseItem (void) const {
    return mProperty_mCaseItem ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_pic_31__38_CaseExpressionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMCaseItem (const GGS_pic_31__38_AbstractCaseItem & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCaseItem = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_pic_31__38_CaseExpressionList_2E_element (const GGS_pic_31__38_AbstractCaseItem & in_mCaseItem) ;

//--------------------------------- Copy constructor
  public: GGS_pic_31__38_CaseExpressionList_2E_element (const GGS_pic_31__38_CaseExpressionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_pic_31__38_CaseExpressionList_2E_element & operator = (const GGS_pic_31__38_CaseExpressionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_CaseExpressionList_2E_element init_21_ (const class GGS_pic_31__38_AbstractCaseItem & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_CaseExpressionList_2E_element extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_SwitchInstructionCaseList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38_SwitchInstructionCaseList final {
  public: DownEnumerator_pic_31__38_SwitchInstructionCaseList (const class GGS_pic_31__38_SwitchInstructionCaseList & inList) ;

  public: ~ DownEnumerator_pic_31__38_SwitchInstructionCaseList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_location current_mStartOfCase (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_CaseExpressionList current_mCaseExpressionList (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_SwitchInstructionCaseList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_SwitchInstructionCaseList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_pic_31__38_SwitchInstructionCaseList (const DownEnumerator_pic_31__38_SwitchInstructionCaseList &) = delete ;
  private: DownEnumerator_pic_31__38_SwitchInstructionCaseList & operator = (const DownEnumerator_pic_31__38_SwitchInstructionCaseList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38_SwitchInstructionCaseList final {
  public: UpEnumerator_pic_31__38_SwitchInstructionCaseList (const class GGS_pic_31__38_SwitchInstructionCaseList & inList)  ;

  public: ~ UpEnumerator_pic_31__38_SwitchInstructionCaseList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_location current_mStartOfCase (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_CaseExpressionList current_mCaseExpressionList (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_SwitchInstructionCaseList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_SwitchInstructionCaseList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_pic_31__38_SwitchInstructionCaseList (const UpEnumerator_pic_31__38_SwitchInstructionCaseList &) = delete ;
  private: UpEnumerator_pic_31__38_SwitchInstructionCaseList & operator = (const UpEnumerator_pic_31__38_SwitchInstructionCaseList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @pic18SwitchInstructionCaseList list
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_SwitchInstructionCaseList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_pic_31__38_SwitchInstructionCaseList_2E_element> mArray ;

//--- Default constructor
  public: GGS_pic_31__38_SwitchInstructionCaseList (void) ;

//--- Destructor
  public: virtual ~ GGS_pic_31__38_SwitchInstructionCaseList (void) = default ;

//--- Copy
  public: GGS_pic_31__38_SwitchInstructionCaseList (const GGS_pic_31__38_SwitchInstructionCaseList &) = default ;
  public: GGS_pic_31__38_SwitchInstructionCaseList & operator = (const GGS_pic_31__38_SwitchInstructionCaseList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_pic_31__38_SwitchInstructionCaseList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_pic_31__38_SwitchInstructionCaseList subList (const int32_t inStart,
                                                             const int32_t inLength,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_pic_31__38_SwitchInstructionCaseList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_location & in_mStartOfCase,
                                                 const class GGS_pic_31__38_CaseExpressionList & in_mCaseExpressionList,
                                                 const class GGS_pic_31__38_InstructionList & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_SwitchInstructionCaseList init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_SwitchInstructionCaseList extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_SwitchInstructionCaseList class_func_listWithValue (const class GGS_location & inOperand0,
                                                                                          const class GGS_pic_31__38_CaseExpressionList & inOperand1,
                                                                                          const class GGS_pic_31__38_InstructionList & inOperand2
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_pic_31__38_SwitchInstructionCaseList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_location & inOperand0,
                                   const class GGS_pic_31__38_CaseExpressionList & inOperand1,
                                   const class GGS_pic_31__38_InstructionList & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_pic_31__38_SwitchInstructionCaseList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_pic_31__38_SwitchInstructionCaseList add_operation (const GGS_pic_31__38_SwitchInstructionCaseList & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_location constinArgument0,
                              class GGS_pic_31__38_CaseExpressionList constinArgument1,
                              class GGS_pic_31__38_InstructionList constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_location constinArgument0,
                                     class GGS_pic_31__38_CaseExpressionList constinArgument1,
                                     class GGS_pic_31__38_InstructionList constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_location & outArgument0,
                                class GGS_pic_31__38_CaseExpressionList & outArgument1,
                                class GGS_pic_31__38_InstructionList & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_location & outArgument0,
                               class GGS_pic_31__38_CaseExpressionList & outArgument1,
                               class GGS_pic_31__38_InstructionList & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_location & outArgument0,
                                     class GGS_pic_31__38_CaseExpressionList & outArgument1,
                                     class GGS_pic_31__38_InstructionList & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMCaseExpressionListAtIndex (class GGS_pic_31__38_CaseExpressionList constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionListAtIndex (class GGS_pic_31__38_InstructionList constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMStartOfCaseAtIndex (class GGS_location constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_location & outArgument0,
                             class GGS_pic_31__38_CaseExpressionList & outArgument1,
                             class GGS_pic_31__38_InstructionList & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_location & outArgument0,
                            class GGS_pic_31__38_CaseExpressionList & outArgument1,
                            class GGS_pic_31__38_InstructionList & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_pic_31__38_CaseExpressionList getter_mCaseExpressionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_location getter_mStartOfCaseAtIndex (const class GGS_uint & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_pic_31__38_SwitchInstructionCaseList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_pic_31__38_SwitchInstructionCaseList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_pic_31__38_SwitchInstructionCaseList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38_SwitchInstructionCaseList ;
  friend class DownEnumerator_pic_31__38_SwitchInstructionCaseList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_InstructionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38_InstructionList final {
  public: DownEnumerator_pic_31__38_InstructionList (const class GGS_pic_31__38_InstructionList & inList) ;

  public: ~ DownEnumerator_pic_31__38_InstructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_pic_31__38_PiccoloInstruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_InstructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_InstructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_pic_31__38_InstructionList (const DownEnumerator_pic_31__38_InstructionList &) = delete ;
  private: DownEnumerator_pic_31__38_InstructionList & operator = (const DownEnumerator_pic_31__38_InstructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38_InstructionList final {
  public: UpEnumerator_pic_31__38_InstructionList (const class GGS_pic_31__38_InstructionList & inList)  ;

  public: ~ UpEnumerator_pic_31__38_InstructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_pic_31__38_PiccoloInstruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_InstructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_InstructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_pic_31__38_InstructionList (const UpEnumerator_pic_31__38_InstructionList &) = delete ;
  private: UpEnumerator_pic_31__38_InstructionList & operator = (const UpEnumerator_pic_31__38_InstructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @pic18InstructionList list
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_InstructionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_pic_31__38_InstructionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_pic_31__38_InstructionList (void) ;

//--- Destructor
  public: virtual ~ GGS_pic_31__38_InstructionList (void) = default ;

//--- Copy
  public: GGS_pic_31__38_InstructionList (const GGS_pic_31__38_InstructionList &) = default ;
  public: GGS_pic_31__38_InstructionList & operator = (const GGS_pic_31__38_InstructionList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_pic_31__38_InstructionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_pic_31__38_InstructionList subList (const int32_t inStart,
                                                   const int32_t inLength,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_pic_31__38_InstructionList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_pic_31__38_PiccoloInstruction & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_InstructionList init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_InstructionList extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_InstructionList class_func_listWithValue (const class GGS_pic_31__38_PiccoloInstruction & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_pic_31__38_InstructionList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_pic_31__38_PiccoloInstruction & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_pic_31__38_InstructionList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_pic_31__38_InstructionList add_operation (const GGS_pic_31__38_InstructionList & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_pic_31__38_PiccoloInstruction constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_pic_31__38_PiccoloInstruction constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_pic_31__38_PiccoloInstruction & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_pic_31__38_PiccoloInstruction & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_pic_31__38_PiccoloInstruction & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionAtIndex (class GGS_pic_31__38_PiccoloInstruction constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_pic_31__38_PiccoloInstruction & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_pic_31__38_PiccoloInstruction & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_pic_31__38_PiccoloInstruction getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_pic_31__38_InstructionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_pic_31__38_InstructionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_pic_31__38_InstructionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38_InstructionList ;
  friend class DownEnumerator_pic_31__38_InstructionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_InstructionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_SwitchInstructionCaseList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_SwitchInstructionCaseList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_mStartOfCase ;
  public: inline GGS_location readProperty_mStartOfCase (void) const {
    return mProperty_mStartOfCase ;
  }

  public: GGS_pic_31__38_CaseExpressionList mProperty_mCaseExpressionList ;
  public: inline GGS_pic_31__38_CaseExpressionList readProperty_mCaseExpressionList (void) const {
    return mProperty_mCaseExpressionList ;
  }

  public: GGS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: inline GGS_pic_31__38_InstructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_pic_31__38_SwitchInstructionCaseList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMStartOfCase (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStartOfCase = inValue ;
  }

  public: inline void setter_setMCaseExpressionList (const GGS_pic_31__38_CaseExpressionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCaseExpressionList = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_pic_31__38_InstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_pic_31__38_SwitchInstructionCaseList_2E_element (const GGS_location & in_mStartOfCase,
                                                               const GGS_pic_31__38_CaseExpressionList & in_mCaseExpressionList,
                                                               const GGS_pic_31__38_InstructionList & in_mInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_pic_31__38_SwitchInstructionCaseList_2E_element (const GGS_pic_31__38_SwitchInstructionCaseList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_pic_31__38_SwitchInstructionCaseList_2E_element & operator = (const GGS_pic_31__38_SwitchInstructionCaseList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_SwitchInstructionCaseList_2E_element init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_pic_31__38_CaseExpressionList & inOperand1,
                                                                                       const class GGS_pic_31__38_InstructionList & inOperand2,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_SwitchInstructionCaseList_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList_2E_element ;

